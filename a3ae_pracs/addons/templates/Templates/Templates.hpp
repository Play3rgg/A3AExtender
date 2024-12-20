class Templates {

    class RACS_Arid
    {
        requiredAddons[] = {"rhsgref_main"}; // to be done
        logo = "a3\ui_f\data\logos\arma3_white_ca.paa"; // to be done
        basepath = QPATHTOFOLDER(Templates\PRACS); 
        priority = 80;
        side = "Occ"; // RACS occ, SLA inv
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; // to be added
        name = "RACS Arid"; //the name shown in the selector
        file = "RACS_AI_RACS_Arid"; //the template file name
        maps[] = {"sara"}; 
        climate[] = {"arid"}; 
        // shortName = "CSAT"; // to be done
        // lore = $STR_A3A_templates_lore_CSAT; // to be done
    };

    class RACS_Temperate : RACS_Arid
    {
        name = "RACS Temperate";
        file = "RACS_AI_RACS_Temperate";
        climate[] = {"temperate"};
    };

    class SLA_Arid : RACS_Arid
    {
        side = "Inv";
        name = "SLA Arid";
        file = "RACS_AI_SLA_Arid";
    };

    class SLA_Temperate : SLA_Arid
    {
        name = "SLA Temperate";
        file = "RACS_AI_SLA_Temperate";
        climate[] = {"temperate"};
    };

    class SLA_Rev_Guards_Temperate : SLA_Arid
    {
        name = "SLA Revolutionary Guards";
        file = "RACS_AI_SLA_Rev_Guards_Temperate";
        climate[] = {"temperate"};
    };

    class SLA_Rev_Guards_Arid : SLA_Rev_Guards_Temperate
    {
        name = "SLA Revolutionary Guards";
        file = "RACS_AI_SLA_Rev_Guards_Temperate";
        climate[] = {"arid"};
    };
};