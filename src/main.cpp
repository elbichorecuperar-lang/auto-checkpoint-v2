include <Geode/Geode.hpp>

using namespace geode::prelude;

$modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        log::info("Auto Checkpoint cargado correctamente!");
        return true;
    }
};
