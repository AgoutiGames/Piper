#include "characters/receiver_pipe.hpp"

const char* ReceiverPipe::type = "ReceiverPipe";
const bool ReceiverPipe::good = GameCharacter::register_class<ReceiverPipe>(ReceiverPipe::type);

ReceiverPipe::ReceiverPipe(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void ReceiverPipe::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");
    
    // Clear data accessed via put
    get_data().clear();
}

void ReceiverPipe::update() {
    // Add character logic here
    
}
