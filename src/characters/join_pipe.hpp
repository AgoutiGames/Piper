#ifndef JOIN_PIPE_HPP_INCLUDED
#define JOIN_PIPE_HPP_INCLUDED

#include "core/game_character.hpp"

class GameScene;

class JoinPipe : public GameCharacter {
    public:
        JoinPipe(salmon::ActorRef actor, GameScene* scene);
        virtual JoinPipe* create(salmon::ActorRef actor, GameScene* scene) const override {return new JoinPipe(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        
    private:
        static const bool good;
};


#endif // JOIN_PIPE_HPP_INCLUDED
