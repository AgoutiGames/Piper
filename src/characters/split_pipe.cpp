#include "characters/split_pipe.hpp"

const char* SplitPipe::type = "SplitPipe";
const bool SplitPipe::good = GameCharacter::register_class<SplitPipe>(SplitPipe::type);

SplitPipe::SplitPipe(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void SplitPipe::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");
    
    // Clear data accessed via put
    get_data().clear();
}

void SplitPipe::update() {
    // Add character logic here
    
}
