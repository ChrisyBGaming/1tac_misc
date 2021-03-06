tooltip = "Author: Bear\n\nSomething something East European Insurgents with AK-74s. Contemporary.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {
		"bear_uniform_gorka_r_les",
		"bear_uniform_gorka_r_les",
		"bear_uniform_gorka_r_les",
		"bear_uniform_gorka_r_les",
		"bear_uniform_gorka_r_berezka",
		"bear_uniform_gorka_r_berezka",
		"rhs_uniform_gorka_r_y",
		"rhs_uniform_gorka_r_y",
		"rhs_uniform_flora_patchless",
		"rhsgref_uniform_vsr",
		"rhsgref_uniform_vsr",
		"rhsgref_uniform_specter",
		"rhsgref_uniform_specter",
		"rhsgref_uniform_specter",
		"rhsgref_uniform_specter",
		"rhsgref_uniform_specter"
	};
   	vest[] = {};
   	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"rhs_sidor",
		"B_TacticalPack_mcamo",
		"B_TacticalPack_oli"
	};
   	headgear[] = {};
   	goggles[] = {};
   	hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] =
	{
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "_this call tac1_tm_tmf_loadouts_fnc_gogglesIfNoHeadgear;";
	gogglesIfNoHeadgear[] = {
		"rhs_balaclava",
		"bear_balaclava1_black",
		"rhs_balaclava1_olive",
		"G_Bandanna_blk",
		"G_Bandanna_oli",
		"rhs_googles_black",
		"rhs_googles_yellow",
		"rhs_scarf",
		"G_Aviator"
	};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
		"rhs_6b27m_green",
		"rhs_6b27m_green_bala",
		"rhs_6b27m_digi_ess",
		"rhs_6b27m_digi_ess_bala",
		"rhs_6b27m_digi",
		"rhs_6b26_green",
		"rhs_6b26_bala_green",
		"rhs_6b26_ess_bala_green",
		"rhs_6b26",
		"rhs_6b26_bala",
		"rhs_6b26_ess_bala",
		"rhs_6b7_1m",
		"rhs_6b7_1m_bala2_flora",
		"rhs_altyn_novisor_ess",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"rhsgref_bcap_specter",
		"H_Bandanna_sand",
		"H_Bandanna_sgg",
		"H_Bandanna_gry",
		"H_Bandanna_camo",
		"H_Bandanna_camo",
		"rhs_beanie_green",
		"rhs_beanie",
		"bear_beanie_blue",
		"rhs_Booniehat_digi",
		"rhs_Booniehat_ocp",
		"H_Cap_blk",
		"CUP_H_PMC_Cap_Grey",
		"rhs_fieldcap_vsr",
		"rhs_fieldcap_vsr",
		"H_MilCap_mcamo",
		"rhs_ssh68",
		"rhs_ssh68",
		"bear_ssh68_spots",
		"bear_ssh68_spots",
		"bear_ssh68_c_flora",
		"rhs_tsh4",
		"CUP_H_C_Ushanka_03",
		"CUP_H_ChDKZ_Beanie",
		"CUP_H_PMC_Cap_Back_Tan",
		"H_Cap_red",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		""
	};
	vest[] = {
		"rhs_6sh92",
		"rhs_6sh92_vog",
		"bear_6sh92_od",
		"bear_6sh92_od_vog",
		"rhs_6sh92_digi",
		"rhs_6sh92_digi_vog",
		"bear_6sh92_khaki",
		"bear_6sh92_khaki_vog",
		"rhs_6sh92_vsr",
		"rhs_6sh92_vsr_vog",
		"rhs_vydra_3m",
		"rhs_vydra_3m"
	};
    primaryWeapon[] =
	{
		"rhs_weap_ak74",
		"rhs_weap_ak74m_fullplum",
		"rhs_weap_ak74_3", // green
		"rhs_weap_aks74n"
	};
	scope[] = {};
    silencer[] = {"rhs_acc_dtk1983"};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_545x39_7N6_AK"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = 
	{
		"rhs_weap_ak74n_gp25",
		"bear_weap_ak74m_orange_mag_gp25",
		"rhs_weap_ak74m_fullplum_gp25",
		"rhs_weap_aks74n_gp25"
	};
    magazines[] +=
    {
        LIST_4("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74", "rhs_weap_aks74n"};
	magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N6_AK"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class m : car 
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
	silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N6_AK"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_Red"),
		LIST_2("rhs_mag_nspd")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] +=
    {
        "rhs_mag_9x18_12_57N181S"
    };
	items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
	code = "";
	goggles[] = {"G_Aviator"};
	headgear[] = {};
	vest[] = {"rhs_6b5_officer_ttsko","rhs_6b5_officer_vsr"};
	
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		"rhs_mag_9x18_12_57N181S",
		LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_Red"),
		LIST_2("rhs_mag_nspd"),
		LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
		LIST_6("rhs_30Rnd_545x39_7N6_AK")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"Binocular"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_rifle_rpk74n"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_7("rhs_45Rnd_545X39_7N6_AK"),
		"rhs_mag_f1",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_5("rhs_45Rnd_545X39_7N6_AK")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
	primaryWeapon[] =
	{
		"rhs_weap_ak74m_fullplum",
		"rhs_weap_ak74_3", // green
		"bear_weap_ak74m_orange_mag", 
		"rhs_weap_aks74n"
	};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_svdp"};
	silencer[] = {};
	scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
	magazines[] =
	{
		LIST_12("rhs_10Rnd_762x54mmR_7N1"),
		"rhs_mag_f1",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	sidearmWeapon[] = {};
	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"bear_carryall_dpm",
		"B_Carryall_khk"
	};
	scope[] = {};
	magazines[] =
	{
		LIST_5("rhs_100Rnd_762x54mmR"),
		"rhs_mag_f1",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"bear_carryall_dpm",
		"B_Carryall_khk"
	};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"bear_carryall_dpm",
		"B_Carryall_khk"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_NSV_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_NSV_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_NSV_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		"rhs_rpg7_PG7VR_mag",
		LIST_2("rhs_rpg7_PG7VL_mag")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
	backpackItems[] =
	{
		LIST_3("rhs_rpg7_PG7V_mag"),
		"rhs_rpg7_TBG7V_mag"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		"rhs_rpg7_PG7VL_mag",
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"RHS_Metis_Tripod_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"RHS_Metis_Gun_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	secondaryWeapon[] = {};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"bear_carryall_dpm",
		"B_Carryall_khk"
	};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {
		"bear_rd54_vsr",
		"CUP_B_CivPack_WDL",
		"bear_carryall_dpm",
		"B_Carryall_khk"
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhs_beanie","rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_13("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_f1",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
	backpack[] = {};
	linkedItems[] += {"rhs_pdu4"};
};
class sp : sn
{
    displayName = "Spotter";
	silencer[] = {"rhs_acc_dtk1983"};
    sidearmWeapon[] = {};
	primaryWeapon[] = 
	{
		"rhs_weap_ak74"
	};
    magazines[] =
    {
		LIST_7("rhs_30Rnd_545x39_7N6_AK"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
	linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"bear_carryall_dpm","B_Carryall_khk"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"bear_carryall_dpm","B_Carryall_khk"};
    items[] +=
    {
		"ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    linkedItems[] += {"O_UavTerminal"};
};
