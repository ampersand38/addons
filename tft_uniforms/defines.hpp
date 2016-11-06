#define QUOTE(STR) #STR
#define MERGE(VAR1,VAR2) VAR1##VAR2

#define UNIT(PATTERN) \
    class PATTERN##_Soldier : B_Soldier_base_F { \
        _generalMacro = "B_Soldier_base_F"; \
        scope = 1; \
        nakedUniform = "U_BasicBody"; \
        uniformClass = QUOTE(MERGE(PATTERN,_Uniform)); \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\uniform.paa)}; \
        linkedItems[] = {QUOTE(MERGE(PATTERN,_Helmet)), QUOTE(MERGE(PATTERN,_Vest)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {QUOTE(MERGE(PATTERN,_Helmet)), QUOTE(MERGE(PATTERN,_Vest)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    }; \
    class PATTERN##_Soldier_RS : B_Soldier_base_F { \
        _generalMacro = "B_Soldier_base_F"; \
        scope = 1; \
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d"; \
        nakedUniform = "U_BasicBody"; \
        uniformClass = QUOTE(MERGE(PATTERN,_Uniform)); \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\uniform.paa)}; \
        linkedItems[] = {QUOTE(MERGE(PATTERN,_Helmet)), QUOTE(MERGE(PATTERN,_Vest)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {QUOTE(MERGE(PATTERN,_Helmet)), QUOTE(MERGE(PATTERN,_Vest)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    };

#define UNIFORM(PATTERN) \
    class PATTERN##_Uniform : U_B_CombatUniform_mcam { \
        scope = 2; \
        displayName = QUOTE(PATTERN Uniform); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\uniform.paa); \
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; \
        class ItemInfo : UniformItem { \
            uniformModel = "-"; \
            uniformClass = QUOTE(MERGE(PATTERN,_Soldier)); \
            containerClass = "Supply80"; \
            mass = 70; \
        }; \
    }; \
    class PATTERN##_Uniform_RS : U_B_CombatUniform_mcam_vest { \
        scope = 2; \
        displayName = QUOTE(PATTERN Uniform (RS)); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\uniformRS.paa); \
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; \
        class ItemInfo : UniformItem { \
            uniformModel = "-"; \
            uniformClass = QUOTE(MERGE(PATTERN,_Soldier_RS)); \
            containerClass = "Supply80"; \
            mass = 70; \
        }; \
    };

#define VEST(PATTERN) \
    class PATTERN##_Vest : V_PlateCarrier1_rgr { \
        scope = 2; \
        displayName = QUOTE(PATTERN Carrier Rig); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\vest.paa); \
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02"; \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\vest.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; \
            containerClass = "Supply120"; \
            mass = 60; \
            hiddenSelections[] = {"Camo", "insignia"}; \
        }; \
    }; \
    class PATTERN##_Vest_H : V_PlateCarrierGL_rgr { \
        scope = 2; \
        displayName = QUOTE(PATTERN Carrier Rig (Heavy)); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\vestH.paa); \
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01"; \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\vest.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01"; \
            containerClass = "Supply140"; \
            mass = 100; \
            hiddenSelections[] = {"Camo", "insignia"}; \
        }; \
    };

#define HELMET(PATTERN) \
    class PATTERN##_Helmet : H_HelmetSpecB { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN Enhanced Combat Helmet); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\helmet.paa); \
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\helmet.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class PATTERN##_MICH : H_HelmetIA { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN MICH); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\MICH.paa); \
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\MICH.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class PATTERN##_Patrol : H_MilCap_ocamo { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN Patrol Cap); \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\patrol.paa); \
        Model = "\A3\Characters_F\Common\cappatrol.p3d"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\patrol.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\Common\cappatrol.p3d"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class PATTERN##_Boonie : H_Booniehat_khk { \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\boonie.paa); \
        displayName = QUOTE(PATTERN Boonie Hat); \
        author = "TFT8"; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\boonie.paa)}; \
    };

#define PROTEC(PATTERN) \
    class PATTERN##_Protec : H_HelmetB { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN ProTec); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\Misc\Protec\UI\PATTERN.paa); \
        model = "\tft_uniforms\Misc\Protec\ProtecHelmet"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(MERGE(tft_uniforms\Misc\Protec\protec_,PATTERN.paa))}; \
        class ItemInfo : ItemInfo { \
            uniformmodel = "\tft_uniforms\Misc\Protec\ProtecHelmet"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    };

#define BACKPACK(PATTERN) \
    class PATTERN##_Assault: B_AssaultPack_blk { \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\assault.paa); \
        displayName = QUOTE(PATTERN Assault Pack); \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\assault.paa)}; \
    }; \
    class PATTERN##_Kitbag: B_Kitbag_cbr { \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\kitbag.paa); \
        displayName = QUOTE(PATTERN Kitbag); \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\kitbag.paa)}; \
    };
