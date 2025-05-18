class Templates {
    //************* 3CB Factions ***************************************************

    class 3CBF_Base
    {
        requiredAddons[] = {"UK3CB_Factions_Vehicles_SUV"};
        basepath = QPATHTOFOLDER(Templates\Templates\3CB);
        logo = QPATHTOFOLDER(Templates\Templates\3CB\logo_small_3cb_ca.paa);            // unknown, may need rethink
        priority = 40;
    };
    
    class 3CBF_CSAT_Base : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\Templates\3CB\3CB_CSAT);
    };
    
    class 3CB_CSAT_BRU : 3CBF_CSAT_Base {
        side = "Inv";
        //Belarusian CSAT - proper camo for: temperate, arctic - suitable for: tropical and arid
        climate[] = {"temperate","tropical","arctic","arid"};
        maps[] = {"enoch","vt7"};
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_cst\flag\csat_w_regiment_flag_co.paa";
        name = "3CB CSAT BEAR";
        file = "3CB_AI_CSAT_Bru";
    };
    
    class 3CB_CSAT_CHI : 3CBF_CSAT_Base {
        side = "Inv";
        //Chinese CSAT - proper camo for: tropical - Suitable for: temperate
        climate[] = {"temperate","tropical"};
        maps[] = {"tanoa"};
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_cst\flag\csat_g_regiment_flag_co.paa";
        name = "3CB CSAT VIPER";
        file = "3CB_AI_CSAT_Chi";
    };
    
    class 3CB_CSAT_FRE : 3CBF_CSAT_Base {
        side = "Inv";
        //African CSAT - proper camo for: arid - ok for: temperate
        climate[] = {"arid"};
        maps[] = {"malden"};
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_cst\flag\csat_a_regiment_flag_co.paa";
        name = "3CB CSAT SCIMITAR";
        file = "3CB_AI_CSAT_Fre";
    };
    
    class 3CB_CSAT_PER : 3CBF_CSAT_Base {
        side = "Inv";
        //Iranian CSAT - proper camo for: arid, temperate - suitable for: arctic - ok for: tropical
        climate[] = {"temperate","tropical","arctic","arid"};
        maps[] = {"altis"};
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_cst\flag\csat_b_regiment_flag_co.paa";
        name = "3CB CSAT GRYPHON";
        file = "3CB_AI_CSAT_Per";
    };

    class 3CBF_ADA : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_adc\flag\adc_flag_co.paa";
        name = "3CB ADA";
        file = "3CB_AI_ADA";
        climate[] = {"arid"};
        shortName = "ADA";
        lore = $STR_A3A_templates_lore_3CB_AI_ADA;
    };

    class 3CBF_ANA : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_ana\flag\afg_13_flag_co.paa";
        name = "3CB ANA";
        file = "3CB_AI_ANA";
        climate[] = {"arid"};
        shortName = "ANA";
        lore = $STR_A3A_templates_lore_3CB_AI_ANA;
    };

    class 3CBF_CW_SOV : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_cw_sov\flag\cw_sov_army_flag_co.paa";
        name = "3CB Cold War USSR";
        file = "3CB_AI_CW_Sov";
        climate[] = {"temperate","tropical","arctic"};
        shortName = "CW SOV";
        lore = $STR_A3A_templates_lore_3CB_AI_CW_Sov;
    };

    class 3CBF_CW_US : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CB Cold War US";
        file = "3CB_AI_CW_US";
        climate[] = {"temperate","tropical","arctic"};
        shortName = "CW US";
        lore = $STR_A3A_templates_lore_3CB_AI_CW_US;
    };

    class 3CBF_HIDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "3CB HIDF";
        file = "3CB_AI_HIDF";
        maps[] = {"tanoa"};
        climate[] = {"temperate","tropical","arctic"};
        shortName = "HIDF";
        lore = $STR_A3A_templates_lore_3CB_AI_HIDF;
    };

    class 3CBF_MDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_mdf\flag\mal_flag_co.paa";
        name = "3CB MDF";
        file = "3CB_AI_MDF";
        maps[] = {"malden"};
        climate[] = {"arid"};
        shortName = "MDF";
        lore = $STR_A3A_templates_lore_3CB_AI_MDF;
    };

    class 3CBF_TKA_East : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
        name = "3CB TKA East";
        file = "3CB_AI_TKA_East";
        maps[] = {"takistan","tem_anizay","kunduz"};
        climate[] = {"arid"};
        shortName = "TKA East";
        lore = $STR_A3A_templates_lore_3CB_AI_TKA_East;
    };
    class 3CBF_TKA_West : 3CBF_TKA_East
    {
        side = "Occ";
        name = "3CB TKA West";
        file = "3CB_AI_TKA_West";
        shortName = "TKA West";
        lore = $STR_A3A_templates_lore_3CB_AI_TKA_West;
    };
    class 3CBF_TKA_Mix : 3CBF_TKA_East
    {
        side = "Occ";
        name = "3CB TKA Mix";
        file = "3CB_AI_TKA_Mix";
        priority = 39;               // not default anywhere
        shortName = "TKA Mix";
        lore = $STR_A3A_templates_lore_3CB_AI_TKA_Mix;
    };

    class 3CBF_AAF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "3CB AAF";
        file = "3CB_AI_AAF";
        maps[] = {"altis"};
        climate[] = {"arid"};
        shortName = "AAF";
        lore = $STR_A3A_templates_lore_3CB_AAF;
    };
    class 3CBF_AAF_arid : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "3CB AAF Brown";
        file = "3CB_AI_AAF_arid";
        maps[] = {"altis"};
        climate[] = {"arid"};
        shortName = "AAF";
        lore = $STR_A3A_templates_lore_3CB_AAF;
    };

    class 3CBF_LDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "3CB LDF";
        file = "3CB_AI_LDF";
        maps[] = {"enoch","vt7"};
        climate[] = {"temperate"};
        shortName = "LDF";
        lore = $STR_A3A_templates_lore_3CB_AI_LDF;
    };

    class 3CB_GAF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_GAF\Flag\GAF_flag_co.paa";
        name = "3CB GAF Temperate";
        file = "3CB_AI_GAF";
        climate[] = {"Temperate"};
    };

    class 3CBF_KRG : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_krg\flag\krg_flag_co.paa";
        name = "3CB KRG";
        file = "3CB_AI_KRG";
        climate[] = {"arid"};
        shortName = "KRG";
        lore = $STR_A3A_templates_lore_3CB_AI_KRG;
    };
    class 3CB_Marines_Temperate : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CB Marines Temperate";
        file = "3CB_AI_Marines_Temperate";
        climate[] = {"temperate"};
    };
    class 3CBF_ION_Arid : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_ion\flag\ion_flag_co.paa";
        name = "3CB ION Arid";
        file = "3CB_AI_ION_Arid";
        climate[] = {"arid"};
        shortName = "ION";
        lore = $STR_A3A_templates_lore_ION;
    };
        class 3CBF_ION_Temperate : 3CBF_ION_Arid
    {
        name = "3CB ION Temperate";
        file = "3CB_AI_ION_Temperate";
        climate[] = {"temperate","tropical"};
    };
        class 3CBF_ION_Arctic : 3CBF_ION_Arid
    {
        name = "3CB ION Arctic";
        file = "3CB_AI_ION_Arctic";
        climate[] = {"arctic"};
    };
    class 3CBF_CCM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CCM\Flag\ccm_i_flag_co.paa";
        name = "3CB CCM";
        file = "3CB_Reb_CNM";
        shortName = "CCM";
        lore = $STR_A3A_templates_lore_3CB_Reb_CCM;
    };
    class 3CB_Reb_ION : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_ion\flag\ion_flag_co.paa";
        name = "3CB ION";
        file = "3CB_Reb_ION";
        shortName = "ION";
        lore = $STR_A3A_templates_lore_3CB_Reb_ION;
    };
    class 3CBF_TKM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_tkm\flag\tkm_b_flag_co.paa";
        name = "3CB TKM";
        file = "3CB_Reb_TKM";
        maps[] = {"takistan","tem_anizay","kunduz"};
        shortName = "TKM";
        lore = $STR_A3A_templates_lore_TKM;
    };
    class 3CB_Reb_FIA : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "3CB FIA";
        file = "3CB_Reb_FIA";
        shortName = "FIA";
        lore = $STR_A3A_templates_lore_FIA;
    };
    class 3CB_Reb_LSM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_LSM\Flag\LSM_flag_co.paa";
        name = "3CB LSM";
        file = "3CB_Reb_LSM";
        maps[] = {"enoch"};
        shortName = "LSM";
        lore = $STR_A3A_templates_lore_3CB_Reb_LSM;
    };
    class 3CBF_CHC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_chc\flag\chc_flag_co.paa";
        name = "3CB Cherno";
        file = "3CB_Civ_CHC";
        shortName = "Civilian";
        lore = $STR_A3A_templates_lore_CHC;
    };

    class 3CBF_TKC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_tkc\flag\tkc_flag_co.paa";
        name = "3CB Takistan";
        file = "3CB_Civ_TKC";
        maps[] = {"takistan","tem_anizay","kunduz"};
        shortName = "Civilian";
        lore = $STR_A3A_templates_lore_TKC;
    };

        class 3CBF_MEC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_mec\flag\mec_flag_co.paa";
        name = "3CB Middle Eastern";
        file = "3CB_Civ_MEC";
        maps[] = {"takistan","tem_anizay","kunduz"};
        shortName = "Civilian";
        lore = $STR_A3A_templates_lore_MEC;
    };
        class 3CBF_ADC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_adc\flag\adc_flag_co.paa";
        name = "3CB African Desert";
        file = "3CB_Civ_ADC";
        maps[] = {"takistan","tem_anizay","kunduz"};
        shortName = "Civilian";
        lore = $STR_A3A_templates_lore_ADC;
    };
    // ***************************** 3CB BAF *****************************

    class 3CBBAF_Base
    {
        requiredAddons[] = {"UK3CB_BAF_Weapons","UK3CB_BAF_Vehicles","UK3CB_BAF_Units_Common","UK3CB_BAF_Equipment","rhsgref_main"};
        //requiredAddons[] = {"UK3CB_BAF_Units_Common"};              // has weapons/equipment/vehicles dependencies
        basepath = QPATHTOFOLDER(Templates\Templates\3CB);
        logo = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\data\ui\logo_small_3cb_ca.paa";
        priority = 50;
    };

    class 3CBBAF_Arid : 3CBBAF_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "3CB BAF Arid";
        file = "3CB_AI_BAF_Arid";
        climate[] = {"arid"};
        shortName = "BAF";
        lore = $STR_A3A_templates_lore_BAF;
    };
    class 3CBBAF_Arctic : 3CBBAF_Arid
    {
        name = "3CB BAF Arctic";
        file = "3CB_AI_BAF_Arctic";
        climate[] = {"arctic"};
    };
    class 3CBBAF_Temperate : 3CBBAF_Arid
    {
        name = "3CB BAF Temperate";
        file = "3CB_AI_BAF_Temperate";
        climate[] = {"temperate"};
    };
    class 3CBBAF_Tropical : 3CBBAF_Arid
    {
        name = "3CB BAF Tropical";
        file = "3CB_AI_BAF_Tropical";
        climate[] = {"tropical"};
    };
    
    // ***************************** RHS *****************************

    class RHS_Base
    {
        requiredAddons[] = {"rhsgref_main"};
        basepath = QPATHTOFOLDER(Templates\Templates\RHS);
        logo = "\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
        priority = 30;
    };

    class RHS_AFRF_Arid : RHS_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        logo = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        name = "RHS AFRF Arid";
        file = "RHS_AI_AFRF_Arid";
        climate[] = {"arid"};
        shortName = "AFRF";
        lore = $STR_A3A_templates_lore_AFRF;
    };
    class RHS_AFRF_Temperate : RHS_AFRF_Arid
    {
        name = "RHS AFRF Temperate";
        file = "RHS_AI_AFRF_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class RHS_VDV_Temperate : RHS_Base
    {
        side = "Inv"; 
        flagTexture = "rhsafrf\addons\rhs_main\data\Flag_vdv_CO.paa"; 
        name = "RHS VDV Temperate"; 
        file = "RHS_AI_VDV_Temperate"; 
        climate[] = {"temperate","tropical","arctic"};
        logo = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        shortName = "VDV";
        lore = $STR_A3A_templates_lore_VDV;
    };

    class RHS_VDV_Arid : RHS_VDV_Temperate
    {
        name = "RHS VDV Arid"; 
        file = "RHS_AI_VDV_Arid"; 
        climate[] = {"arid"};
    };

    class RHS_CHDKZ : RHS_Base
    {
        side = "Inv";
        flagTexture = "rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa";
        name = "RHS ChDKZ";
        file = "RHS_AI_ChDKZ";
        maps[] = {"chernarus_summer","chernarus_winter","chernarus"};
        logo = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        shortName = "ChDKZ";
        lore = $STR_A3A_templates_lore_RHS_AI_ChDKZ;
    };
    class RHS_HIDF : RHS_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_GEN_CO.paa";
        name = "RHS HIDF";
        file = "RHS_AI_HIDF";
        maps[] = {"Tanoa"};
        climate[] = {"tropical"};
        logo = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        shortName = "HIDF";
        lore = $STR_A3A_templates_lore_3CB_AI_HIDF;
    };
    
    class RHS_TLA : RHS_Base
    {
        side = "Inv";
        flagTexture = "\rhsafrf\addons\rhs_main\data\Flag_trn_CO.paa";
        name = "RHS TLA";
        file = "RHS_AI_TLA";
        maps[] = {"Tanoa"};
        climate[] = {"tropical"};
        logo = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        shortName = "TLA";
        lore = $STR_A3A_templates_lore_TLA;
    };
    
    class RHS_CDF : RHS_Base
    {
        side = "Occ";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        name = "RHS CDF";
        file = "RHS_AI_CDF";
        maps[] = {"chernarus_summer","chernarus_winter","chernarus"};
        shortName = "CDF";
        lore = $STR_A3A_templates_lore_CDF;
    };

    class RHS_USAF_Army_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "RHS US Army Arid";
        file = "RHS_AI_USAF_Army_Arid";
        climate[] = {"arid"};
        shortName = "US Army";
        lore = $STR_A3A_templates_lore_USAF;
    };
    class RHS_USAF_Army_Temperate : RHS_USAF_Army_Arid
    {
        name = "RHS US Army Temperate";
        file = "RHS_AI_USAF_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };
    class RHS_USAF_Marines_Arid : RHS_USAF_Army_Arid
    {
        name = "RHS USMC Arid";
        file = "RHS_AI_USAF_Marines_Arid";
        shortName = "US Marines";
        lore = $STR_A3A_templates_lore_USMC;
    };
    class RHS_USAF_Marines_Temperate : RHS_USAF_Army_Temperate
    {
        name = "RHS USMC Temperate";
        file = "RHS_AI_USAF_Marines_Temperate";
    };

    class RHS_NAPA : RHS_Base
    {
        side = "Reb";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
        name = "RHS NAPA";
        file = "RHS_Reb_NAPA";
        shortName = "NAPA";
        lore = $STR_A3A_templates_lore_NAPA;
    };

    class RHS_Civ : RHS_Base
    {
        side = "Civ";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "RHS";
        file = "RHS_Civ";
        shortName = "Civilian";
        lore = $STR_A3A_templates_lore_CIV;
    };

    class RHS_SAF_Base
    {
        requiredAddons[] = {"rhssaf_main"};
        basepath = QPATHTOFOLDER(Templates\Templates\RHS);
        logo = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        priority = 30;
    };
    class RHS_SAF : RHS_SAF_Base
    {
        side = "Inv";
        flagTexture = "rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        name = "RHS SAF";
        file = "RHS_AI_SAF";
        shortName = "SAF";
        lore = $STR_A3A_templates_lore_RHS_AI_SAF;
    };


};
