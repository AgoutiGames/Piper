#include "scenes/stage.hpp"

#include "core/scene_manager.hpp"

const char* Stage::type = "Stage";
const bool Stage::good = GameScene::register_class<Stage>(Stage::type);

Stage::Stage(salmon::MapRef map, SceneManager* scene_manager) :
    GameScene(map,scene_manager) {}

void Stage::init() {
    m_scene_manager->set_game_resolution(320,320);
    m_scene_manager->set_fullscreen(false);
    m_scene_manager->set_window_size(640,640);

    // Initializes all characters in scene
    GameScene::init();
    // Setup member vars here | example: put(m_speed, "m_speed");

    // Clear data accessed via put
    get_data().clear();
}

void Stage::update() {
    // Add scene logic here

    // Calls update on all characters in scene
    GameScene::update();
}
