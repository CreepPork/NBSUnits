// Set our main stuff
class CfgPatches
{
  class NBS_Units_Config
  {
    units[] = {"B_NBS_LATPAT_Rifleman_F", "B_NBS_AirLATPAT_Rifleman_F", "B_NBS_SeaLATPAT_Rifleman_F", "B_NBS_WinterLATPAT_Rifleman_F", "B_NBS_TemperateLATPAT_Rifleman_F",
  "B_NBS_LATPAT_Autorifleman_F", "B_NBS_AirLATPAT_Autorifleman_F", "B_NBS_SeaLATPAT_Autorifleman_F", "B_NBS_WinterLATPAT_Autorifleman_F", "B_NBS_TemperateLATPAT_Autorifleman_F", "B_NBS_LATPAT_Officer_F"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Characters_F", "A3_Characters_F_Beta", "A3_Weapons_F"};
    author = "CreepPork_LV";
  };
};

// Factions
class cfgFactionClasses
{
  class NBS_Faction
  {
    displayName = "Latvian National Armed Forces";
    priority = 1;
    side = 1;
    icon = "";
  };
};

// Set subcatogories for the editor so they are not bunched up
class CfgEditorSubcategories
{
  class EdSubcat_Personnel_Camo_AirLATPAT
  {
    displayName = "Men (Air LATPAT)";
  };
  class EdSubcat_Personnel_Camo_SeaLATPAT
  {
    displayName = "Men (Sea LATPAT)";
  };
  class EdSubcat_Personnel_Camo_TemperateLATPAT
  {
    displayName = "Men (Temperate LATPAT)";
  };
  class EdSubcat_Personnel_Camo_WinterLATPAT
  {
    displayName = "Men (Winter LATPAT)";
  };
};

class UniformSlotInfo
{
  slotType = 0;
  linkProxy = "-";
};

// Units
class CfgVehicles
{
  class B_Soldier_F;

  class B_NBS_LATPAT_Rifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Rifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_LATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_latpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier1_LATPAT", "H_NBS_ModularHelmet_LATPAT","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier1_LATPAT", "H_NBS_ModularHelmet_LATPAT","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "";
  };

  class B_NBS_LATPAT_Autorifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Autorifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_LATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_latpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier2_LATPAT", "H_NBS_ModularHelmet_LATPAT","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier2_LATPAT", "H_NBS_ModularHelmet_LATPAT","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "";
  };

  class B_NBS_LATPAT_Officer_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Officer";
    identityTypes[] = {"LanguageGRE_F", "Head_Greek", 0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
    uniformClass = "U_NBS_OfficerUniform_LATPAT";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\officer_spc_co.paa", "NBS_Units\Data\officer_spc_pants_co.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "";
    icon = "iconManOfficer";
  };

  class B_NBS_AirLATPAT_Rifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Rifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_AirLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_airlatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier1_AirLATPAT","H_NBS_ModularHelmet_AirLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier1_AirLATPAT", "H_NBS_ModularHelmet_AirLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_AirLATPAT";
    editorPreview = "";
  };

  class B_NBS_AirLATPAT_Autorifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Autorifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_AirLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_airlatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier2_AirLATPAT", "H_NBS_ModularHelmet_AirLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier2_AirLATPAT", "H_NBS_ModularHelmet_AirLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_AirLATPAT";
    editorPreview = "";
  };

  class B_NBS_SeaLATPAT_Rifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Rifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_SeaLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_sealatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier1_SeaLATPAT", "H_NBS_ModularHelmet_SeaLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier1_SeaLATPAT", "H_NBS_ModularHelmet_SeaLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_SeaLATPAT";
    editorPreview = "";
  };

  class B_NBS_SeaLATPAT_Autorifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Autorifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_SeaLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_sealatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier2_SeaLATPAT", "H_NBS_ModularHelmet_SeaLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier2_SeaLATPAT", "H_NBS_ModularHelmet_SeaLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_SeaLATPAT";
    editorPreview = "";
  };

  class B_NBS_TemperateLATPAT_Rifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Rifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_TemperateLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_temperatelatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier1_TemperateLATPAT", "H_NBS_ModularHelmet_TemperateLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier1_TemperateLATPAT", "H_NBS_ModularHelmet_TemperateLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_TemperateLATPAT";
    editorPreview = "";
  };

  class B_NBS_TemperateLATPAT_Autorifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Autorifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_TemperateLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_temperatelatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier2_TemperateLATPAT", "H_NBS_ModularHelmet_TemperateLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier2_TemperateLATPAT", "H_NBS_ModularHelmet_TemperateLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_TemperateLATPAT";
    editorPreview = "";
  };

  class B_NBS_WinterLATPAT_Rifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Rifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_WinterLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_winterlatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier1_WinterLATPAT", "H_NBS_ModularHelmet_WinterLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier1_WinterLATPAT", "H_NBS_ModularHelmet_WinterLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_WinterLATPAT";
    editorPreview = "";
  };
  class B_NBS_WinterLATPAT_Autorifleman_F: B_soldier_F
  {
    author = "CreepPork_LV";
    _generalMacro = "B_soldier_F";
    scope = 2;
    displayName = "Autorifleman";
    identityTypes[] = {"LanguageGRE_F","Head_Greek",0};
    genericNames = "NATOMen";
    faction = "NBS_Faction";
    model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
    uniformClass = "U_NBS_CombatUniform_WinterLATPAT";
    hiddenSelections[] = {"Camo", "Insignia"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\combat_fatigues_winterlatpat.paa"};
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    respawnMagazines[] = {"HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
    linkedItems[] = {"V_NBS_PlateCarrier2_WinterLATPAT", "H_NBS_ModularHelmet_WinterLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"V_NBS_PlateCarrier2_WinterLATPAT", "H_NBS_ModularHelmet_WinterLATPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorSubcategory = "EdSubcat_Personnel_Camo_WinterLATPAT";
    editorPreview = "";
  };
};

// Uniforms
class cfgWeapons
{
  // Uniforms

  // Vests

  // Helmets
  /*extern*/ class H_Booniehat_khk;
  /*extern*/ class H_MilCap_ocamo;

  // Backpacks
  /*extern*/ class B_AssaultPack_Base;
  /*extern*/ class B_Carryall_Base;

  class ItemCore;
  class UniformItem;
  class InventoryItem_Base_F;
  class VestItem;
  class HeadgearItem;
  class Uniform_Base: ItemCore
    {
    class ItemInfo;
    };
  class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };

  class U_NBS_OfficerUniform_LATPAT: Uniform_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Officer Fatigues (LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_LATPAT_Officer_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class U_NBS_CombatUniform_LATPAT: Uniform_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Combat Fatigues (LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_LATPAT_Rifleman_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class U_NBS_CombatUniform_AirLATPAT: Uniform_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Combat Fatigues (Air LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_AirLATPAT_Rifleman_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class U_NBS_CombatUniform_SeaLATPAT: Uniform_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Combat Fatigues (Sea LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_SeaLATPAT_Rifleman_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class U_NBS_CombatUniform_TemperateLATPAT: Uniform_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Combat Fatigues (Temperate LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_TemperateLATPAT_Rifleman_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class U_NBS_CombatUniform_WinterLATPAT: Uniform_Base
  {
    uniformModel = "-";
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Combat Fatigues (Winter LATPAT)";
    picture = "";

    class ItemInfo: UniformItem
    {
      uniformModel = "-";
      uniformClass = "B_NBS_WinterLATPAT_Rifleman_F";
      containerClass = "Supply40";
      mass = 40;
    };
  };

  class V_NBS_PressVest_LATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Vest (LATPAT)";
    picture = "";
    model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\equip_press_vest_01_co.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
      containerClass = "Supply40";
      mass = 40;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 12;
					PassThrough = 0.400000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 12;
					PassThrough = 0.400000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.400000;
				};

        class Pelvis
        {
          hitpointName = "HitPelvis";
          armor = 12;
          passThrough = 0.400000;
        };

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.400000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier1_LATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Lite (LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_latpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
      containerClass = "Supply140";
      mass = 80;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier1_AirLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Lite (Air LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_airlatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
      containerClass = "Supply140";
      mass = 80;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier1_SeaLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Lite (Sea LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_sealatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
      containerClass = "Supply140";
      mass = 80;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier1_TemperateLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Lite (Temperate LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_temperatelatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
      containerClass = "Supply140";
      mass = 80;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier1_WinterLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Lite (Winter LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_winterlatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
      containerClass = "Supply140";
      mass = 80;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier2_LATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Rig (LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_latpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
      containerClass = "Supply140";
      mass = 100;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier2_AirLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Rig (Air LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_airlatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
      containerClass = "Supply140";
      mass = 100;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier2_SeaLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Rig (Sea LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_sealatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
      containerClass = "Supply140";
      mass = 100;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier2_TemperateLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Rig (Temperate LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_temperatelatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
      containerClass = "Supply140";
      mass = 100;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
    };
  };

  class V_NBS_PlateCarrier2_WinterLATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
    scope = 2;
    displayName = "Carrier Rig (Winter LATPAT)";
    picture = "";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
    hiddenSelectionsTextures[] = {"NBS_Units\Data\armor01_winterlatpat.paa"};
    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
      containerClass = "Supply140";
      mass = 100;
      class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
    };
  };

  class V_NBS_TacVest_LATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
		_generalMacro = "V_NBS_TacVest_LATPAT";
		scope = 2;
		displayName = "Tactical Vest (LATPAT)";
		picture = "";
		model = "A3\Characters_F\Common\equip_tacticalvest.p3d";
		hiddenSelectionsTextures[] = {"NBS_Units\Data\tacticalvest_latpat_co.paa"};

		class ItemInfo: ItemInfo
    {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			mass = 40;

			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.500000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.500000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.500000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.500000;
				};
			};
		};
  };

  class V_NBS_TacVest_MP_LATPAT: Vest_Camo_Base
  {
    author = "CreepPork_LV";
		_generalMacro = "V_NBS_TacVest_MP_LATPAT";
		scope = 2;
		displayName = "Tactical Vest (MP - LATPAT)";
		picture = "";
		model = "A3\Characters_F\Common\equip_tacticalvest.p3d";
		hiddenSelectionsTextures[] = {"NBS_Units\Data\tacticalvest_latpat_mp_co.paa"};

		class ItemInfo: ItemInfo
    {
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			mass = 40;

			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.500000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.500000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.500000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.500000;
				};
			};
		};
  };

  class H_NBS_ModularHelmet_LATPAT: ItemCore
  {
    author = "CreepPork_LV";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Modular Helmet (LATPAT)";
    picture = "";
    model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\headgear_helmet_canvas_latpat_co.paa"};
    class ItemInfo: HeadgearItem
    {
      mass = 30;
      uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
      hiddenSelections[] = {"Camo"};

      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
        };
      };
    };
  };

  class H_NBS_ModularHelmet_AirLATPAT: ItemCore
  {
    author = "CreepPork_LV";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Modular Helmet (Air LATPAT)";
    picture = "";
    model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\headgear_helmet_canvas_airlatpat_co.paa"};
    class ItemInfo: HeadgearItem
    {
      mass = 30;
      uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
      hiddenSelections[] = {"Camo"};

      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
        };
      };
    };
  };

  class H_NBS_ModularHelmet_SeaLATPAT: ItemCore
  {
    author = "CreepPork_LV";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Modular Helmet (Sea LATPAT)";
    picture = "";
    model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\headgear_helmet_canvas_sealatpat_co.paa"};
    class ItemInfo: HeadgearItem
    {
      mass = 30;
      uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
      hiddenSelections[] = {"Camo"};

      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
        };
      };
    };
  };

  class H_NBS_ModularHelmet_TemperateLATPAT: ItemCore
  {
    author = "CreepPork_LV";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Modular Helmet (Temperate LATPAT)";
    picture = "";
    model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\headgear_helmet_canvas_temperatelatpat_co.paa"};
    class ItemInfo: HeadgearItem
    {
      mass = 30;
      uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
      hiddenSelections[] = {"Camo"};

      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
        };
      };
    };
  };

  class H_NBS_ModularHelmet_WinterLATPAT: ItemCore
  {
    author = "CreepPork_LV";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Modular Helmet (Winter LATPAT)";
    picture = "";
    model = "\A3\Characters_F_Beta\indep\headgear_helmet_canvas.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"NBS_Units\Data\headgear_helmet_canvas_winterlatpat_co.paa"};
    class ItemInfo: HeadgearItem
    {
      mass = 30;
      uniformModel = "\A3\characters_f_beta\indep\headgear_helmet_canvas.p3d";
      hiddenSelections[] = {"Camo"};

      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
        };
      };
    };
  };

  class H_NBS_Booniehat_LATPAT: H_Booniehat_khk
  {
    author = "CreepPork_LV";
		_generalMacro = "H_NBS_Booniehat_LATPAT";
		displayName = "Booniehat (LATPAT)";
		picture = "";
		hiddenSelectionsTextures = {"NBS_Units\Data\booniehat_co.paa"};
  };

  class H_NBS_MilCap_LATPAT: H_MilCap_ocamo
  {
    author = "CreepPork_LV";
		_generalMacro = "H_NBS_MilCap_LATPAT";
		displayName = "Military Cap (LATPAT)";
		picture = "";
		hiddenSelectionsTextures = {"NBS_Units\Data\cappatrol_co.paa"};
  };

  class B_NBS_AssaultPack_LATPAT: B_AssaultPack_Base
  {
    author = "CreepPork_LV";
    _generalMacro = "B_NBS_AssaultPack_LATPAT";
    scope = 2;
    picture = "";
    displayName = "Assault Pack (LATPAT)";
    hiddenSelectionsTextures = {"NBS_Units\Data\backpack_compact_co.paa"};
  };

  class B_NBS_Carryall_LATPAT: B_Carryall_Base
  {
    author = "CreepPork_LV";
		_generalMacro = "B_NBS_Carryall_LATPAT";
		scope = 2;
		displayName = "Carryall Backpack (LATPAT)";
		picture = "";
		hiddenSelectionsTextures = {"NBS_Units\Data\backpack_tortila_co.paa"};
  };
};
