#ifndef DRAGGABLE_HPP_INCLUDED
#define DRAGGABLE_HPP_INCLUDED

#include "core/game_character.hpp"

class Draggable : public virtual GameCharacter {
    public:

    protected:
        void update();

        // Functions and members aren't protected to game characters
        // who also inherit from this component!
        static bool mouse_lock;

        bool m_is_dragged = false;

        int m_drag_x_offset;
        int m_drag_y_offset;

    private:

};


#endif // DRAGGABLE_HPP_INCLUDED
