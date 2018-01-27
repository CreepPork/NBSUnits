#include "macros.hpp"

class CfgPatches
{
    class NBS_Units_Config
    {
        weapons[] = {};
        requiredVersion = 0.1;
        author = AUTHOR;
        authorUrl = "https://github.com/CreepPork/NBSUnits";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {1,0,0};

        requiredAddons[] =
        {
            "A3_Characters_F",
            "A3_Characters_F_Beta",
            "A3_Weapons_F",
            "hlcweapons_G36",
            "rhsusf_c_weapons"
        };

        units[] =
        {
            "B_NBS_LATPAT_Officer_F",
            "B_NBS_LATPAT_TeamLeader_F",
            "B_NBS_LATPAT_Autorifleman_F",
            "B_NBS_LATPAT_RiflemanAT_F",
            "B_NBS_LATPAT_Rifleman_F"
        };
    };
};

#include "cfgEditorSubcategories.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
#include "cfgGroups.hpp"
