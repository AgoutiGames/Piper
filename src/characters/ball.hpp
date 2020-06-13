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
    protected:
        // Add members here
        
    private:
        static const bool good;
};


#endif // BALL_HPP_INCLUDED
