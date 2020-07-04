#include "characters/ball.hpp"

#include "core/game_scene.hpp"

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
    float x, y;
    std::vector<float> speed = dir_to_mov(m_move_dir);
    float delta = m_scene->get_delta_time();
    x = speed[0] * m_speed * delta;
    y = speed[1] * m_speed * delta;

    move_relative(x,y);
}
