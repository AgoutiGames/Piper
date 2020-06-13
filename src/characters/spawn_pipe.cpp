#include "characters/spawn_pipe.hpp"

const char* SpawnPipe::type = "SpawnPipe";
const bool SpawnPipe::good = GameCharacter::register_class<SpawnPipe>(SpawnPipe::type);

SpawnPipe::SpawnPipe(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void SpawnPipe::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");
    
    // Clear data accessed via put
    get_data().clear();
}

void SpawnPipe::update() {
    // Add character logic here
    
}
