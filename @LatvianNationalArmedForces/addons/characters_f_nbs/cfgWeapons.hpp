class cfgWeapons
{
    // Uniforms
    class Uniform_Base;
    class UniformItem;

    class U_B_CombatUniform_mcam;
    class U_NBS_CombatUniform_LATPAT : U_B_CombatUniform_mcam
    {
        author = AUTHOR;
        displayName = "Combat Fatigues (LATPAT)";
        picture = "\nbs\characters_f_nbs\Textures\Uniforms\UI\icon_u_b_combatuniform_mcam_ca.paa";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\clothing1_co.paa"};

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_NBS_LATPAT_Rifleman_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class U_I_OfficerUniform;
    class U_NBS_OfficerUniform_LATPAT : U_I_OfficerUniform
    {
        author = AUTHOR;
        displayName = "Officer Uniform (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\officer_spc_co.paa", "\nbs\characters_f_nbs\Textures\Uniforms\ia_soldier_01_clothing_co"};

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_NBS_LATPAT_Officer_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Vests
    class V_PlateCarrierIAGL_dgtl;
    class V_NBS_PlateCarrierIAGL_LATPAT: V_PlateCarrierIAGL_dgtl
    {
        author = AUTHOR;
        displayName = "GA Carrier GL Rig (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\equip_ia_vest01_co.paa","\nbs\characters_f_nbs\Textures\Uniforms\ga_carrier_gl_rig_co.paa"};
    };

    class V_TacVest_blk;
    class V_NBS_TacVest_LATPAT : V_TacVest_blk
    {
        author = AUTHOR;
        displayName = "Tactical Vest (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\tacticalvest_co.paa"};
    };

    class V_Press_F;
    class V_NBS_Press_LATPAT : V_Press_F
    {
        author = AUTHOR;
        displayName = "Vest (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\equip_press_vest_01_co.paa"};
    };

    class V_PlateCarrier1_blk;
    class V_NBS_PlateCarrier1_LATPAT : V_PlateCarrier1_blk
    {
        author = AUTHOR;
        displayName = "Carrier Lite (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\vests_co.paa"};
    };

    class V_PlateCarrier2_blk;
    class V_NBS_PlateCarrier2_LATPAT : V_PlateCarrier2_blk
    {
        author = AUTHOR;
        displayName = "Carrier Rig (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\vests_co.paa"};
    };

    /* TODO: Cannot set textures
    class V_PlateCarrierIA1_dgtl;
    class V_NBS_PlateCarrierIA1_LATPAT : V_PlateCarrierIA1_dgtl
    {
        author = AUTHOR;
        displayName = "GA Carrier Lite (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\vests_co.paa"};
    };

    class V_PlateCarrierIA2_dgtl;
    class V_NBS_PlateCarrierIA2_LATPAT : V_PlateCarrierIA2_dgtl
    {
        author = AUTHOR;
        displayName = "GA Carrier Rig (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\vests_co.paa", "\nbs\characters_f_nbs\Textures\Uniforms\ga_carrier_gl_rig_co.paa"};
    };*/

    // Helmets & Hats
    class H_HelmetIA;
    class H_NBS_HelmetIA_LATPAT : H_HelmetIA
    {
        author = AUTHOR;
        displayName = "Modular Helmet (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\headgear_helmet_canvas_co.paa"};
    };

    class H_MilCap_mcamo;
    class H_NBS_MilCap_LATPAT : H_MilCap_mcamo
    {
        author = AUTHOR;
        displayName = "Military Cap (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\cappatrol_co.paa"};
    };

    class H_Booniehat_dgtl;
    class H_NBS_Booniehat_LATPAT : H_Booniehat_dgtl
    {
        author = AUTHOR;
        displayName = "Booniehat (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\booniehat_co.paa"};
    };

    class H_HelmetB;
    class H_NBS_HelmetB_LATPAT : H_HelmetB
    {
        author = AUTHOR;
        displayName = "Combat Helmet (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\equip1_co.paa"};
    };

    class H_HelmetSpecB;
    class H_NBS_HelmetSpecB_LATPAT : H_HelmetSpecB
    {
        author = AUTHOR;
        displayName = "Enhanced Combat Helmet (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\equip1_co.paa"};
    };

    class H_HelmetB_light;
    class H_NBS_HelmetB_light_LATPAT : H_HelmetB_light
    {
        author = AUTHOR;
        displayName = "Light Combat Helmet (LATPAT)";
        picture = "";
        hiddenSelectionsTextures[] = {"\nbs\characters_f_nbs\Textures\Uniforms\equip1_co.paa"};
    };
};