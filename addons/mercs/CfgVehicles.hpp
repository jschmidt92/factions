class CfgVehicles {
    class I_Soldier_F;
    class CLASS(I_TeamLeader_F): I_Soldier_F {
        dlc = QUOTE(prefix);
        scope = 2;
        curatorScope = 2;
        side = 2;
        genericNames = "NATOMen";
        faction = QCLASS(I_Mercs);
        identityTypes[] = {"LanguageENGB_F", "Head_NATO", "CUP_G_ARMY"};
        weapons[] = {"CUP_arifle_G36C", "CUP_17Rnd_9x19_glock17", "Throw", "Put"};
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
    };
};