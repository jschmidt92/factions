class CfgVehicles {
    class I_Soldier_F;
    class CLASS(I_TeamLeader_01_F): I_Soldier_F {
        dlc = QUOTE(prefix);
        scope = 2;
        curatorScope = 2;
        side = 2;
        genericNames = "NATOMen";
        faction = QCLASS(I_Mercs);
        displayName = "Team Leader";
        identityTypes[] = {"LanguageENGB_F", "Head_NATO", "CUP_G_ARMY"};
        weapons[] = {"CUP_arifle_G36C", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36C", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_30Rnd_556x45_G36"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_30Rnd_556x45_G36"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_PMC_EP_Headset", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_PMC_EP_Headset", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};
        // vehicleClass = "";
        // model = "";
        uniformClass = "eou_gorka_3";
        // hiddenSelectionsTextures[] = {"", "", "", "", QPATHTOEF(main,data\mercs_arm_ca.paa)};
        // hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Flag", "insignia"};
        icon = "iconMan";
        editorSubcategory = "EdSubcat_Personnel";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };
    };
    class CLASS(I_Rifleman_01_F): CLASS(I_TeamLeader_01_F) {
        displayName = "Rifleman";
        weapons[] = {"CUP_arifle_L85A2_NG", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_NG", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag_Mk16_black"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag_Mk16_black"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_OpsCore_Black", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_OpsCore_Black", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        uniformClass = "eou_gorka_5";
        icon = "iconMan";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };
    };
    class CLASS(I_Rifleman_02_F): CLASS(I_TeamLeader_01_F) {
        displayName = "Rifleman";
        weapons[] = {"CUP_arifle_G3A3_ris_vfg", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G3A3_ris_vfg", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_20Rnd_762x51_G3"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_20Rnd_762x51_G3"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_PMC_EP_Headset", "G_Balaclava_blk_lxWS", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_PMC_EP_Headset", "G_Balaclava_blk_lxWS", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        uniformClass = "eou_gorka_6";
        icon = "iconMan";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };        
    };
    class CLASS(I_Grenadier_01_F): CLASS(I_TeamLeader_01_F) {
        displayName = "Grenadier";
        weapons[] = {"CUP_arifle_M4A1_BUIS_GL", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), MAG_5("1Rnd_HE_Grenade_shell"), MAG_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), MAG_5("1Rnd_HE_Grenade_shell"), MAG_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_OpsCore_Black", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_OpsCore_Black", "CUP_RUS_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        uniformClass = "eou_gorka_3";
        icon = "iconManGrenadier";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };
    };
    class CLASS(I_Combat_Life_Saver_01_F): CLASS(I_TeamLeader_01_F) {
        displayName = "Combat Life Saver";
        weapons[] = {"CUP_arifle_L85A2_G", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_G", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag_L85"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_30Rnd_556x45_Stanag_L85"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_PMC_EP_Headset", "G_Balaclava_blk_lxWS", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_PMC_EP_Headset", "G_Balaclava_blk_lxWS", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        uniformClass = "eou_gorka_27";
        role = "CombatLifeSaver";
        attendant = 1;
        icon = "iconManMedic";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };
    };
    class CLASS(I_Marksman_01_F): CLASS(I_TeamLeader_01_F) {
        displayName = "Marksman";
        weapons[] = {"CUP_srifle_M107_Base", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_M107_Base", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
        magazines[] = {MAG_6("CUP_10Rnd_127x99_M107"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        respawnMagazines[] = {MAG_6("CUP_10Rnd_127x99_M107"), MAG_2("CUP_17Rnd_9x19_glock17"), MAG_2("HandGrenade"), MAG_2("SmokeShell"), "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_PMC_Cap_EP_Grey", "G_Bandanna_blk", "V_SmershVest_01_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        respawnLinkedItems[] = {"CUP_H_PMC_Cap_EP_Grey", "G_Bandanna_blk", "V_SmershVest_01_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7_Hide"};
        uniformClass = "eou_gorka_1";
        icon = "iconMan";
        // editorPreview = "";

        class Eventhandlers: Eventhandlers {
            init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
        };
    };
};