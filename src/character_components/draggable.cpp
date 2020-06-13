#include "character_components/draggable.hpp"

#include "core/game_scene.hpp"
#include "collision_ref.hpp"
#include "input_cache_ref.hpp"

bool Draggable::mouse_lock = false;

void Draggable::update() {
    // Don't do anything if any
    if(m_is_dragged) {
        salmon::InputCacheRef input = m_scene->get_input_cache();
        salmon::MouseState mouse = input.get_mouse_state();
        if(mouse.left.down) {
            move_absolute(mouse.x_pos + m_drag_x_offset, mouse.y_pos + m_drag_y_offset, salmon::Collidees::tile_and_actor, {salmon::DEFAULT_HITBOX},{salmon::DEFAULT_HITBOX},false);
        }
        else {
            m_is_dragged = false;
            mouse_lock = false;
        }
        clear_collisions();
        return;
    }
    if(mouse_lock) {return;}

    for(salmon::CollisionRef& c : get_collisions()) {
        if(c.mouse() && c.my_hitbox() == "DRAG" ) {
            salmon::InputCacheRef input = m_scene->get_input_cache();
            salmon::MouseState mouse = input.get_mouse_state();
            if(mouse.left.pressed) {
                mouse_lock = true;
                m_is_dragged = true;
                m_drag_x_offset = get_x() - mouse.x_pos;
                m_drag_y_offset = get_y() - mouse.y_pos;
            }
        }
    }
    clear_collisions();
}
