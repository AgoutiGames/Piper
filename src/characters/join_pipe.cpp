#include "characters/join_pipe.hpp"

const char* JoinPipe::type = "JoinPipe";
const bool JoinPipe::good = GameCharacter::register_class<JoinPipe>(JoinPipe::type);

JoinPipe::JoinPipe(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void JoinPipe::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");
    
    // Clear data accessed via put
    get_data().clear();
}

void JoinPipe::update() {
    // Add character logic here
    
}
