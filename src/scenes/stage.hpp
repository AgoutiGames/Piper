#ifndef STAGE_HPP_INCLUDED
#define STAGE_HPP_INCLUDED

#include "core/game_scene.hpp"

class SceneManager;

class Stage : public GameScene {
    public:
        Stage(salmon::MapRef map, SceneManager* scene_manager);
        Stage* create(salmon::MapRef map, SceneManager* scene_manager) const override {return new Stage(map,scene_manager);}

        void init() override;
        void update() override;
        std::string get_type() const override {return type;}

        static const char* type;
    protected:
        // Add members here
        
    private:
        static const bool good;
};

#endif // STAGE_HPP_INCLUDED
