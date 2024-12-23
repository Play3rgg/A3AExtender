class Templates {

    // **************** PRACS *****************

    class PRACS_RACS_Base
    {
        requiredAddons[] = {"PRACS_Core"}; 
        basepath = QPATHTOFOLDER(Templates\PRACS); 
        logo = "PRACS_Core\Logo\ProjectRACS_mod_ca.paa"; // to be done
        maps[] = {"sara"};
        priority = 80;
    };

    class RACS_Arid : PRACS_RACS_Base
    {
        side = "Occ";
        flagTexture = "\PRACS_Core\Flags\KingdomofSahrani_co.paa";
        name = "PRACS RACS Arid";
        file = "PRACS_AI_RACS_Arid";
        climate[] = {"Arid"};
        shortName = "RACS";
        lore = $STR_A3A_templates_lore_CUP_AI_RACS;
    };

    class RACS_Temperate : RACS_Arid
    {
        name = "PRACS RACS Temperate";
        file = "PRACS_AI_RACS_Temperate";
        climate[] = {"temperate"};
    };

    class PRACS_SLA_Base
    {
        requiredAddons[] = {"PRACS_SLA_Core"}; 
        basepath = QPATHTOFOLDER(Templates\PRACS); 
        logo = "PRACS_SLA_Core\Logo\pracs_sla_mod_ca.paa";
        maps[] = {"sara"};
        priority = 80;
    };

    class SLA_Arid : PRACS_SLA_Base
    {
        side = "Inv";
        flagTexture = "\PRACS_SLA_Core\Flags\flag_north_co.paa";
        name = "PRACS SLA Arid";
        climate[] = {"Arid"};
        file = "PRACS_AI_SLA_Arid";
        shortName = "SLA";
        lore = $STR_A3A_templates_lore_CUP_AI_SLA;
    };

    class SLA_Temperate : SLA_Arid
    {
        name = "PRACS SLA Temperate";
        file = "PRACS_AI_SLA_Temperate";
        climate[] = {"temperate"};
    };

    class SLA_Rev_Guards_Arid : PRACS_SLA_Base
    {
        side = "Inv";
        flagTexture = "\PRACS_SLA_Core\Flags\flag_north_co.paa";
        name = "PRACS SLA Guards Arid";
        climate[] = {"Arid"};
        file = "PRACS_AI_SLA_Rev_Guards_Arid";
        shortName = "SLA Guards";
        lore = $STR_A3A_templates_lore_CUP_AI_SLA;
    };

    class SLA_Rev_Guards_Temperate : SLA_Rev_Guards_Arid
    {
        name = "PRACS SLA Guards Temperate";
        file = "PRACS_AI_SLA_Rev_Guards_Temperate";
        climate[] = {"temperate"};
    };
};