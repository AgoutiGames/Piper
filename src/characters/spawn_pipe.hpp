#ifndef SPAWN_PIPE_HPP_INCLUDED
#define SPAWN_PIPE_HPP_INCLUDED

#include "core/game_character.hpp"

class GameScene;

class SpawnPipe : public GameCharacter {
    public:
        SpawnPipe(salmon::ActorRef actor, GameScene* scene);
        virtual SpawnPipe* create(salmon::ActorRef actor, GameScene* scene) const override {return new SpawnPipe(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        
    private:
        static const bool good;
};


#endif // SPAWN_PIPE_HPP_INCLUDED
