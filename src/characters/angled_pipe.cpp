#include "characters/angled_pipe.hpp"

const char* AngledPipe::type = "AngledPipe";
const bool AngledPipe::good = GameCharacter::register_class<AngledPipe>(AngledPipe::type);

AngledPipe::AngledPipe(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void AngledPipe::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");

    // Clear data accessed via put
    get_data().clear();
}

void AngledPipe::update() {
    // Add character logic here
    Draggable::update();
}
