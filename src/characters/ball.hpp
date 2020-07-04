#ifndef BALL_HPP_INCLUDED
#define BALL_HPP_INCLUDED

#include "core/game_character.hpp"

class GameScene;

class Ball : public GameCharacter {
    public:
        Ball(salmon::ActorRef actor, GameScene* scene);
        virtual Ball* create(salmon::ActorRef actor, GameScene* scene) const override {return new Ball(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;

        salmon::Direction m_move_dir = salmon::Direction::up;
    protected:
        // Add members here
        float m_speed = 50; // Pixel per second

    private:
        static const bool good;

        /// Converts a @c Direction to x and y factors
        std::vector<float> dir_to_mov(const salmon::Direction dir) {
            if(dir == salmon::Direction::up)    return std::vector<float>{0,-1};
            if(dir == salmon::Direction::right) return std::vector<float>{1,0};
            if(dir == salmon::Direction::down)  return std::vector<float>{0,1};
            if(dir == salmon::Direction::left)  return std::vector<float>{-1,0};
            else return std::vector<float>{0,0};
        }
};


#endif // BALL_HPP_INCLUDED
