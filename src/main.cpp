#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    // Esta función se ejecuta cuando inicias un nivel
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) {
            return false;
        }
        
        // Mensaje de prueba para saber que el mod está activo en el juego
        Notification::create("Auto Checkpoint activado!", NotificationIcon::Success)->show();
        
        return true;
    }
};
