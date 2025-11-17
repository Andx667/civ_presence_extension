#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = ADDON_NAME;
        author = ECSTRING(main,mod_author);
        authors[] = {"Andx [TTT]"};

        url = ECSTRING(main,mod_url);

        VERSION_CONFIG;

        // Addon Specific Information
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = 2.02;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "UK3CB_Factions_ADC_B",
            "UK3CB_Factions_ADC_C",
            "UK3CB_Factions_ADC_I",
            "UK3CB_Factions_ADC_O",
            "UK3CB_Factions_ADG_B",
            "UK3CB_Factions_ADG_I",
            "UK3CB_Factions_ADG_O",
            "UK3CB_Factions_MEC_B",
            "UK3CB_Factions_MEC_C",
            "UK3CB_Factions_MEC_I",
            "UK3CB_Factions_TKC_B",
            "UK3CB_Factions_TKC_C",
            "UK3CB_Factions_TKC_I",
            "UK3CB_Factions_TKC_O",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {};

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
