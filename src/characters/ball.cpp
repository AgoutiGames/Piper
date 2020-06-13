#include "characters/ball.hpp"

const char* Ball::type = "Ball";
const bool Ball::good = GameCharacter::register_class<Ball>(Ball::type);

Ball::Ball(salmon::ActorRef actor, GameScene* scene) : GameCharacter(actor, scene) {}

void Ball::init() {
    // Setup member vars here | example: put(m_speed, "m_speed");
    
    // Clear data accessed via put
    get_data().clear();
}

void Ball::update() {
    // Add character logic here
    
}
