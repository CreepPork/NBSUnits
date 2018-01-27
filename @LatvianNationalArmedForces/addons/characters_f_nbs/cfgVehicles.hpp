class CfgVehicles
{
    class B_Soldier_F;

    class B_NBS_Man_F : B_soldier_F
    {
        author = AUTHOR;
        scope = 1;
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
        genericNames = "NATOMen";
        faction = "NBS_Faction";
        hiddenSelections[] = {"Camo", "Insignia"};
        respawnWeapons[] = {"Throw", "Put"};
        respawnMagazines[] = {""};
        respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_NBS_LATPAT_TeamLeader_F : B_NBS_Man_F
    {
        scope = 2;
        displayName = "Team Leader";
        uniformClass = "U_NBS_CombatUniform_LATPAT";
        uniform = "U_NBS_CombatUniform_LATPAT";
        backpack = "";
        weapons[] = {"Binocular","rhsusf_weap_glock17g4","hlc_rifle_G36VAG36","Throw","Put"};
        magazines[] = {"rhs_mag_m67","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_HE_Grenade_shell"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_NBS_PlateCarrierIAGL_LATPAT","H_NBS_HelmetSpecB_LATPAT","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR"};
        icon = "iconManLeader";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\clothing1_co.paa"};
    };
    
    class B_NBS_LATPAT_Autorifleman_F : B_NBS_Man_F
    {
        scope = 2;
        displayName = "Autorifleman";
        uniformClass = "U_NBS_CombatUniform_LATPAT";
        uniform = "U_NBS_CombatUniform_LATPAT";
        backpack = "";
        weapons[] = {"rhs_weap_m249_pip_S_para","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"SmokeShell","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67","Chemlight_blue","Chemlight_blue","rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_M_SAW","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_200rnd_556x45_M_SAW"};
        items[] = {"FirstAidKit"};
        linkedItems[] = {"V_NBS_PlateCarrier2_LATPAT","H_NBS_HelmetB_light_LATPAT","","ItemMap","ItemCompass","ItemWatch","ItemRadio", "NVGoggles_OPFOR"};
        icon = "iconManMG";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\clothing1_co.paa"};
    };

    class B_NBS_LATPAT_RiflemanAT_F : B_NBS_Man_F
    {
        scope = 2;
        displayName = "Rifleman (AT)";
        uniformClass = "U_NBS_CombatUniform_LATPAT";
        uniform = "U_NBS_CombatUniform_LATPAT";
        backpack = "";
        weapons[] = {"rhs_weap_M136_hedp","hlc_rifle_G36KV","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"rhs_m136_hedp_mag","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShellBlue"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_NBS_PlateCarrier1_LATPAT","H_NBS_HelmetB_LATPAT","","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        icon = "iconManAT";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\clothing1_co.paa"};
    };

    class B_NBS_LATPAT_Rifleman_F: B_NBS_Man_F
    {
        scope = 2;
        displayName = "Rifleman";
        uniformClass = "U_NBS_CombatUniform_LATPAT";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\clothing1_co.paa"};
        editorPreview = "";
        uniform = "U_NBS_CombatUniform_LATPAT";
        backpack = "";
        weapons[] = {"hlc_rifle_G36KV","rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShellBlue","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36"};
        items[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_NBS_PlateCarrier1_LATPAT","H_NBS_HelmetB_LATPAT","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR"};
    };

    class B_NBS_LATPAT_Officer_F : B_NBS_Man_F
    {
        scope = 2;
        displayName = "Officer";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        uniformClass = "U_NBS_OfficerUniform_LATPAT";
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia"};
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\officer_spc_co.paa", "\nbs\characters_f_nbs\Textures\Uniforms\ia_soldier_01_clothing_co"};
        editorPreview = "";
        icon = "iconManOfficer";
    };

    // Backpacks
    class B_AssaultPack_blk;
    class B_NBS_AssaultPack_LATPAT: B_AssaultPack_blk
    {
        author = AUTHOR;
        displayName = "Assault Pack (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[]={"\nbs\characters_f_nbs\Textures\Uniforms\backpack_compact_co.paa"};
    };

    class B_Carryall_khk;
    class B_NBS_Carryall_LATPAT : B_Carryall_khk
    {
        author = AUTHOR;
        displayName = "Carryall Backpack (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\backpack_tortila_co.paa"};
    };

    class B_FieldPack_blk;
    class B_NBS_FieldPack_LATPAT : B_FieldPack_blk
    {
        author = AUTHOR;
        displayName = "Field Pack (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\backpack_gorod_co.paa"};
    };

    class B_Kitbag_cbr;
    class B_NBS_Kitbag_LATPAT : B_Kitbag_cbr
    {
        author = AUTHOR;
        displayName = "Kitbag (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\backpack_fast_co.paa"};
    };
};
