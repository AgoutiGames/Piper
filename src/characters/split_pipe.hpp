#ifndef SPLIT_PIPE_HPP_INCLUDED
#define SPLIT_PIPE_HPP_INCLUDED

#include "core/game_character.hpp"

class GameScene;

class SplitPipe : public GameCharacter {
    public:
        SplitPipe(salmon::ActorRef actor, GameScene* scene);
        virtual SplitPipe* create(salmon::ActorRef actor, GameScene* scene) const override {return new SplitPipe(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        
    private:
        static const bool good;
};


#endif // SPLIT_PIPE_HPP_INCLUDED
