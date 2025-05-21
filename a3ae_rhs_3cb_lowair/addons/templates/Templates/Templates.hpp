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



    // Vanilla
    class Vanilla_Base;

    class Vanilla_CSAT_Arid : Vanilla_Base
    {
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "A3 CSAT Arid";
        file = "Vanilla_AI_CSAT_Arid";
        climate[] = {"arid", "arctic"};
        shortName = "CSAT";
        lore = $STR_A3A_templates_lore_CSAT;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };
    class Vanilla_CSAT_Temperate : Vanilla_CSAT_Arid
    {
        name = "A3 CSAT Temperate";
        file = "Vanilla_AI_CSAT_Enoch";
        climate[] = {"temperate","tropical"};
    };
    class Vanilla_CSAT_Apex : Vanilla_CSAT_Arid
    {
        name = "A3 CSAT Apex";
        file = "Vanilla_AI_CSAT_Apex";
        climate[] = {"tropical"};
        forceDLC[] = {"expansion"};
        lore = $STR_A3A_templates_lore_CSATApex;
    };
    class Vanilla_CSAT_Enoch : Vanilla_CSAT_Arid
    {
        name = "A3 CSAT Enoch";
        file = "Vanilla_AI_CSAT_Enoch";
        climate[] = {"temperate"};
        forceDLC[] = {"enoch"};
        lore = $STR_A3A_templates_lore_CSATEnoch;
    };

    class Vanilla_NATO_Arid : Vanilla_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "A3 NATO Arid";
        file = "Vanilla_AI_NATO_Arid";
        climate[] = {"arid"};
        shortName = "NATO";
        lore = $STR_A3A_templates_lore_NATO;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };
    class Vanilla_NATO_Tropical : Vanilla_NATO_Arid
    {
        name = "A3 NATO Tropical";
        file = "Vanilla_AI_NATO_Tropical";
        climate[] = {"tropical"};
    };
    class Vanilla_NATO_Temperate : Vanilla_NATO_Arid
    {
        name = "A3 NATO Temperate";
        file = "Vanilla_AI_NATO_Temperate";
        climate[] = {"temperate", "arctic"};
    };
    class Vanilla_NATO_Apex : Vanilla_NATO_Arid
    {
        name = "A3 NATO Apex";
        file = "Vanilla_AI_NATO_Apex";
        climate[] = {"tropical"};
        forceDLC[] = {"expansion"};
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };
    class Vanilla_NATO_UK_Tropical : Vanilla_NATO_Apex
    {
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "A3 NATO/UK Tropical";
        file = "Vanilla_AI_NATO_UK_Tropical";
        climate[] = {"tropical"};
        forceDLC[] = {"expansion"};
        priority = 5;
        lore = $STR_A3A_templates_lore_NATOUK;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };
    class Vanilla_NATO_UK_Temperate : Vanilla_NATO_UK_Tropical
    {
        name = "A3 NATO/UK Temperate";
        climate[] = {"temperate", "arctic"};
    };
    class Vanilla_NATO_UK_Arid : Vanilla_NATO_UK_Tropical
    {
        name = "A3 NATO/UK Arid";
        file = "Vanilla_AI_NATO_UK_Arid";
        climate[] = {"arid"};
        forceDLC[] = {"expansion"};
    };

    class Vanilla_LDF : Vanilla_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "A3 LDF";
        file = "Vanilla_AI_LDF";
        maps[] = {"enoch","vt7"};
        climate[] = {"temperate"};
        forceDLC[] = {"enoch"};
        shortName = "LDF";
        lore = $STR_A3A_templates_lore_LDF;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };

    class Vanilla_AAF : Vanilla_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "A3 AAF";
        file = "Vanilla_AI_AAF";
        maps[] = {"altis"};
        climate[] = {"arid"};
        shortName = "AAF";
        lore = $STR_A3A_templates_lore_AAF;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };
    class Vanilla_ION : Vanilla_Base
    {
        side = "Inv";
        flagTexture = "\A3\Data_F\Flags\flag_ion_CO.paa";
        name = "A3 ION";
        file = "Vanilla_AI_PMC";
        climate[] = {};
        forceDLC[] = {"enoch","expansion"};
        priority = 5;
        shortName = "ION";
        lore = $STR_A3A_templates_lore_ION;
        basepath = QPATHTOFOLDER(Templates\Vanilla);
    };

    // ***************************** Aegis *****************************
    class Aegis_Base;

    class Aegis_Iran : Aegis_Base
    {
        side = "Inv";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Iran_CO.paa";
        name = "Aegis Iran";
        file = "Aegis_AI_Iran";
        climate[] = {"arid", "arctic"};
        basepath = QPATHTOFOLDER(Templates\Aegis);
    };
    class Aegis_China : Aegis_Iran
    {
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_China_CO.paa";
        name = "Aegis China";
        file = "Aegis_AI_China";
        climate[] = {"tropical"};
        forceDLC[] = {"expansion"};
    };
    class Aegis_Russia : Aegis_Iran
    {
        flagTexture = "a3_aegis\data_f_aegis\flags\flag_rus_co.paa";
        name = "Aegis Russia";
        file = "Aegis_AI_Russia";
        climate[] = {"temperate"};
        forceDLC[] = {"enoch"};
    };
    class Aegis_US_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3_Aegis\data_f_aegis\Flags\flag_USA_51_CO.paa";
        name = "Aegis US Arid";
        file = "Aegis_AI_US_Arid";
        climate[] = {"arid"};
        basepath = QPATHTOFOLDER(Templates\Aegis);
    };
    class Aegis_US_Tropical : Aegis_US_Arid
    {
        name = "Aegis US Tropical";
        file = "Aegis_AI_US_Tropical";
        climate[] = {"tropical"};
    };
    class Aegis_US_Temperate : Aegis_US_Arid
    {
        name = "Aegis US Temperate";
        file = "Aegis_AI_US_Temperate";
        climate[] = {"temperate", "arctic"};
    };
    class Aegis_BAF_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_uk_CO.paa";
        name = "Aegis BAF Arid";
        file = "Aegis_AI_BAF_Arid";
        climate[] = {"arid"};
        forceDLC[] = {"enoch"};
        basepath = QPATHTOFOLDER(Templates\Aegis);
    };
    class Aegis_BAF_Tropical : Aegis_BAF_Arid
    {
        name = "Aegis BAF Tropical";
        file = "Aegis_AI_BAF_Tropical";
        climate[] = {"tropical"};
        forceDLC[] = {"enoch"};
    };
    class Aegis_BAF_Temperate : Aegis_BAF_Arid
    {
        name = "Aegis BAF Temperate";
        file = "Aegis_AI_BAF_Temperate";
        climate[] = {"temperate", "arctic"};
        forceDLC[] = {"enoch"};
    };
    class Aegis_LDF : Aegis_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "Aegis LDF";
        file = "Aegis_AI_LDF";
        maps[] = {"enoch","vt7"};
        climate[] = {"temperate"};
        forceDLC[] = {"enoch"};
        basepath = QPATHTOFOLDER(Templates\Aegis);
    };
    class Aegis_AAF : Aegis_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "Aegis AAF";
        file = "Aegis_AI_AAF";
        maps[] = {"altis"};
        climate[] = {"arid"};
        basepath = QPATHTOFOLDER(Templates\Aegis);
    };

    // ***************************** CUP *****************************

    class CUP_Base;

    class CUP_ACR_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cz_co.paa";
        name = "CUP ACR Arid";
        file = "CUP_AI_ACR_Arid";
        climate[] = {"arid"};
        shortName = "ACR";
        lore = $STR_A3A_templates_lore_ACR;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_ACR_Temperate : CUP_ACR_Arid
    {
        name = "CUP ACR Temperate";
        file = "CUP_AI_ACR_Temperate";
        climate[] = {"temperate","tropical","arctic"};
        basepath = QPATHTOFOLDER(Templates\CUP);
    };

    class CUP_AFRF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_rus_co.paa";
        name = "CUP AFRF Arid";
        file = "CUP_AI_AFRF_Arid";
        climate[] = {"arid"};
        shortName = "AFRF";
        lore = $STR_A3A_templates_lore_AFRF;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_AFRF_Temperate : CUP_AFRF_Arid
    {
        name = "CUP AFRF Temperate";
        file = "CUP_AI_AFRF_Temperate";
        climate[] = {"temperate","tropical"};
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_AFRF_Arctic : CUP_AFRF_Arid
    {
        name = "CUP AFRF Arctic";
        file = "CUP_AI_AFRF_Arctic";
        climate[] = {"arctic"};
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_AFRF_Desert : CUP_AFRF_Arid
    {
        name = "CUP AFRF Desert";
        file = "CUP_AI_AFRF_Desert";
        climate[] = {"arid"};
        basepath = QPATHTOFOLDER(Templates\CUP);
    };

    class CUP_BAF_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "CUP BAF Arid";
        file = "CUP_AI_BAF_Arid";
        climate[] = {"arid"};
        shortName = "BAF";
        lore = $STR_A3A_templates_lore_BAF;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_BAF_Temperate : CUP_BAF_Arid
    {
        name = "CUP BAF Temperate";
        file = "CUP_AI_BAF_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_CDF_Arctic : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cdf_co.paa";
        name = "CUP CDF Arctic";
        file = "CUP_AI_CDF_Arctic";
        climate[] = {"arctic"};
        maps[] = {"chernarus_winter"};
        shortName = "CDF";
        lore = $STR_A3A_templates_lore_CDF;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_CDF_Temperate : CUP_CDF_Arctic
    {
        name = "CUP CDF Temperate";
        file = "CUP_AI_CDF_Temperate";
        climate[] = {"temperate"};
        maps[] = {"chernarus_summer","chernarus"};
    };

    class CUP_RACS_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_racs_co.paa";
        name = "CUP RACS Arid";
        file = "CUP_AI_RACS_Arid";
        climate[] = {"arid"};
        maps[] = {"sara"};
        shortName = "RACS";
        lore = $STR_A3A_templates_lore_CUP_AI_RACS;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_RACS_Tropical : CUP_RACS_Arid
    {
        name = "CUP RACS Tropical";
        file = "CUP_AI_RACS_Tropical";
        climate[] = {"tropical"};
        maps[] = {"tanoa"};
    };

    class CUP_SLA : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_sla_co.paa";
        name = "CUP SLA";
        file = "CUP_AI_SLA_Temperate";          // Sahrani is a bit weird
        climate[] = {"arid","temperate"};
        maps[] = {"sara"};
        shortName = "SLA";
        lore = $STR_A3A_templates_lore_CUP_AI_SLA;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };

    class CUP_TKA : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKA";
        file = "CUP_AI_TKA_Arid";
        climate[] = {"arid"};
        maps[] = {"takistan","kunduz"};
        shortName = "TKA";
        lore = $STR_A3A_templates_lore_CUP_AI_TKA;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };

    class CUP_USAF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP US Army Arid";
        file = "CUP_AI_US_Army_Arid";
        climate[] = {"arid"};
        shortName = "US Army";
        lore = $STR_A3A_templates_lore_USAF;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_USAF_Temperate : CUP_USAF_Arid
    {
        name = "CUP US Army Temperate";
        file = "CUP_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_USMC_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP USMC Arid";
        file = "CUP_AI_US_Marine_Arid";
        climate[] = {"arid"};
        shortName = "US Marines";
        lore = $STR_A3A_templates_lore_USMC;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_USMC_Temperate : CUP_USMC_Arid
    {
        name = "CUP USMC Temperate";
        file = "CUP_AI_US_Marine_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_ION_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_ion_CO.paa";
        name = "CUP ION Arid";
        file = "CUP_AI_ION_Arid";
        climate[] = {"arid","temperate","tropical"};
        shortName = "ION";
        lore = $STR_A3A_templates_lore_ION;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
    class CUP_ION_Temperate : CUP_ION_Arid
    {
        name = "CUP ION Arctic";
        file = "CUP_AI_ION_Arctic";
        climate[] = {"arctic"};
    };

    class CUP_BW_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_ger_co.paa";
        name = "CUP BW Arid";
        file = "CUP_AI_BW_Arid";
        climate[] = {"arid"};
        shortName = "BW";
        lore = $STR_A3A_templates_lore_CUP_AI_BW;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
        class CUP_BW_Temperate : CUP_BW_Arid
    {
        name = "CUP BW Temperate";
        file = "CUP_AI_BW_Temperate";
        climate[] = {"arctic","temperate","tropical"};
    };
        class CUP_HIL : CUP_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "CUP HIL";
        file = "CUP_AI_HIL";
        climate[] = {"temperate","tropical"};
        shortName = "HIL";
        lore = $STR_A3A_templates_lore_CUP_AI_HIL;
        basepath = QPATHTOFOLDER(Templates\CUP);
    };
};
