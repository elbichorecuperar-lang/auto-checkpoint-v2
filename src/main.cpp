#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void setupHashtag() {
        PlayLayer::setupHashtag();
        // Aquí irá la lógica de los checkpoints automáticos
    }
};
