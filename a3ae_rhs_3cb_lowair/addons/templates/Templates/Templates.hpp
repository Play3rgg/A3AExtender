class Templates {
    //************* 3CB Factions ***************************************************

    class 3CBF_Base;
    
    class 3CBF_CSAT_Base : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB\3CB_CSAT);
    };
    
    class 3CB_CSAT_BRU : 3CBF_CSAT_Base {
        basepath = QPATHTOFOLDER(Templates\3CB\3CB_CSAT);
        file = "3CB_AI_CSAT_Bru";
    };
    
    class 3CB_CSAT_CHI : 3CBF_CSAT_Base {
        basepath = QPATHTOFOLDER(Templates\3CB\3CB_CSAT);
        file = "3CB_AI_CSAT_Chi";
    };
    
    class 3CB_CSAT_FRE : 3CBF_CSAT_Base {
        basepath = QPATHTOFOLDER(Templates\3CB\3CB_CSAT);
        file = "3CB_AI_CSAT_Fre";
    };
    
    class 3CB_CSAT_PER : 3CBF_CSAT_Base {
        basepath = QPATHTOFOLDER(Templates\3CB\3CB_CSAT);
        file = "3CB_AI_CSAT_Per";
    };

    class 3CBF_ADA : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);        
        file = "3CB_AI_ADA";
    };

    class 3CBF_ANA : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_ANA";
    };

    class 3CBF_CW_SOV : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_CW_Sov";
    };

    class 3CBF_CW_US : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_CW_US";
    };

    class 3CBF_HIDF : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_HIDF";
    };

    class 3CBF_MDF : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_MDF";
    };

    class 3CBF_TKA_East : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_TKA_East";
    };
    class 3CBF_TKA_West : 3CBF_TKA_East
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_TKA_West";
    };
    class 3CBF_TKA_Mix : 3CBF_TKA_East
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_TKA_Mix";
    };

    class 3CBF_AAF : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_AAF";
    };
    class 3CBF_AAF_arid : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_AAF_arid";
    };

    class 3CBF_LDF : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_LDF";
    };

    class 3CB_GAF : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_GAF\Flag\GAF_flag_co.paa";
        name = "3CB GAF Temperate";
        file = "3CB_AI_GAF";
        climate[] = {"temperate"};
    };

    class 3CBF_KRG : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        file = "3CB_AI_KRG";
    };
    class 3CB_Marines_Temperate : 3CBF_Base
    {
        basepath = QPATHTOFOLDER(Templates\3CB);
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CB Marines Temperate";
        file = "3CB_AI_Marines_Temperate";
        climate[] = {"temperate"};
    };
    class 3CBF_ION_Arid : 3CBF_Base
    {
        file = "3CB_AI_ION_Arid";
        basepath = QPATHTOFOLDER(Templates\3CB);
    };
        class 3CBF_ION_Temperate : 3CBF_ION_Arid
    {
        name = "3CB ION Temperate";
        file = "3CB_AI_ION_Temperate";
        climate[] = {"temperate","tropical"};
        basepath = QPATHTOFOLDER(Templates\3CB);
    };
        class 3CBF_ION_Arctic : 3CBF_ION_Arid
    {
        name = "3CB ION Arctic";
        file = "3CB_AI_ION_Arctic";
        climate[] = {"arctic"};
        basepath = QPATHTOFOLDER(Templates\3CB);
    };

    // ***************************** 3CB BAF *****************************

    class 3CBBAF_Base;
    
    class 3CBBAF_Arid : 3CBBAF_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "3CB BAF Arid";
        file = "3CB_AI_BAF_Arid";
        climate[] = {"arid"};
        shortName = "BAF";
        lore = $STR_A3A_templates_lore_BAF;
        basepath = QPATHTOFOLDER(Templates\3CB);
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

    class RHS_Base;

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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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
        basepath = QPATHTOFOLDER(Templates\RHS);
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

    
    class RHS_SAF_Base;
   
    class RHS_SAF : RHS_SAF_Base
    {
        side = "Inv";
        flagTexture = "rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        name = "RHS SAF";
        file = "RHS_AI_SAF";
        shortName = "SAF";
        lore = $STR_A3A_templates_lore_RHS_AI_SAF;
        basepath = QPATHTOFOLDER(Templates\RHS);
    };


};
