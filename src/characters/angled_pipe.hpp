#ifndef ANGLED_PIPE_HPP_INCLUDED
#define ANGLED_PIPE_HPP_INCLUDED

#include "core/game_character.hpp"
#include "character_components/draggable.hpp"

class GameScene;

class AngledPipe : public Draggable {
    public:
        AngledPipe(salmon::ActorRef actor, GameScene* scene);
        virtual AngledPipe* create(salmon::ActorRef actor, GameScene* scene) const override {return new AngledPipe(actor,scene);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        /*
         0 = down_right
         1 = down_left
         2 = up_right
         3 = up_left
        */
        int dir;

    private:
        static const bool good;
};


#endif // ANGLED_PIPE_HPP_INCLUDED
