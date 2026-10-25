#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Minimal, low-risk foundation: adds a NEBULA popup to the existing
// More Games menu button. This does not implement gameplay cheats.
class $modify(NebulaMenuLayer, MenuLayer) {
    void onMoreGames(CCObject* sender) {
        if (!Mod::get()->getSettingValue<bool>("enabled")) {
            MenuLayer::onMoreGames(sender);
            return;
        }

        FLAlertLayer::create(
            "NEBULA",
            "NEBULA mod loaded.\\n\\n"
            "This is the starter build.\\n"
            "Gameplay features are not included yet.",
            "OK"
        )->show();
    }
};
