#ifndef RECEIVER_PIPE_HPP_INCLUDED
#define RECEIVER_PIPE_HPP_INCLUDED

#include "core/game_character.hpp"

class GameScene;

class ReceiverPipe : public GameCharacter {
    public:
        ReceiverPipe(salmon::ActorRef actor, GameScene* scene);
        virtual ReceiverPipe* create(salmon::ActorRef actor, GameScene* scene) const override {return new ReceiverPipe(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        
    private:
        static const bool good;
};


#endif // RECEIVER_PIPE_HPP_INCLUDED
