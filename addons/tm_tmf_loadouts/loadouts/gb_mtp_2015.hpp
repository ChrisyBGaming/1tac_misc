/* assignGear specific macros */
/* assignGear specific macros */
//Dependencies - ACE3, RHS USAF, CUP, 3CB Equipment

tooltip = "Author: Sam, Modified Deltas original CUP version";

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
	vest[] = {};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"CUP_FR_NeckScarf2","UK3CB_BAF_G_Tactical_Grey","UK3CB_BAF_G_Tactical_Orange","UK3CB_BAF_G_Tactical_Yellow","UK3CB_BAF_G_Tactical_Clear","UK3CB_BAF_G_Tactical_Black"};
	hmd[] = {/*UK3CB_BAF_HMNVS*/};
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
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ACE_Flashlight_MX991"
	};

	// These are put into the backpack
	backpackItems[] = {};

	// This is executed after unit init is complete. argument: _this = _unit.
	code = "";

	// These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
	radios[] = {};
};
class r : baseMan
{
	displayName = "Rifleman";
	headgear[] = {
		"UK3CB_BAF_H_Mk7_Camo_A",
		"UK3CB_BAF_H_Mk7_Camo_B",
		"UK3CB_BAF_H_Mk7_Camo_C",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"UK3CB_BAF_H_Mk7_Camo_E",
		"UK3CB_BAF_H_Mk7_Camo_F",
		"UK3CB_BAF_H_Mk7_Camo_ESS_A",
		"UK3CB_BAF_H_Mk7_Camo_ESS_B",
		"UK3CB_BAF_H_Mk7_Camo_ESS_C",
		"UK3CB_BAF_H_Mk7_Camo_ESS_D",
		"UK3CB_BAF_H_Mk7_Camo_CESS_A",
		"UK3CB_BAF_H_Mk7_Camo_CESS_B",
		"UK3CB_BAF_H_Mk7_Camo_CESS_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_D",
		"UK3CB_BAF_H_Mk7_Net_A",
		"UK3CB_BAF_H_Mk7_Net_B",
		"UK3CB_BAF_H_Mk7_Net_C",
		"UK3CB_BAF_H_Mk7_Net_D",
		"UK3CB_BAF_H_Mk7_Net_ESS_A",
		"UK3CB_BAF_H_Mk7_Net_ESS_B",
		"UK3CB_BAF_H_Mk7_Net_ESS_C",
		"UK3CB_BAF_H_Mk7_Net_ESS_D",
		"UK3CB_BAF_H_Mk7_Net_CESS_A",
		"UK3CB_BAF_H_Mk7_Net_CESS_B",
		"UK3CB_BAF_H_Mk7_Net_CESS_C",
		"UK3CB_BAF_H_Mk7_Net_CESS_D"
	};
	vest[] = {
		"UK3CB_BAF_V_Osprey_Rifleman_C",
		"UK3CB_BAF_V_Osprey_Rifleman_A",
		"UK3CB_BAF_V_Osprey_Rifleman_D",
		"UK3CB_BAF_V_Osprey_Rifleman_E",
		"UK3CB_BAF_V_Osprey_Rifleman_F"
	};
	backpack[] = {
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
	};
	primaryWeapon[] = {"CUP_arifle_L85A2_G"};
	scope[] = {"CUP_optic_Elcan_reflex"};
	attachment[] = {"CUP_acc_LLM"};
	magazines[] =
	{
		LIST_8("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
		LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
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
	vest[] = {"UK3CB_BAF_V_Osprey_Grenadier_B"};
	primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	scope[] = {"CUP_optic_Elcan_reflex"};
	attachment[] = {"CUP_acc_LLM"};
	magazines[] +=
	{
		LIST_4("rhs_mag_M441_HE"),
		LIST_4("rhs_mag_m714_White")
	};
};
class car : r
{
	displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_L85A2_G"};
};
class m : car
{
	displayName = "Medic";
	vest[] = {"UK3CB_BAF_V_Osprey_Medic_C"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class smg : r
{
	displayName = "Submachinegunner";
	primaryWeapon[] = {"CUP_arifle_L85A2_G"};
	magazines[] =
	{
		LIST_6("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
};
class ftl : g
{
	displayName = "Fireteam Leader";
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_A"};
	magazines[] +=
	{
		LIST_2("rhs_mag_m715_Green"),
		LIST_2("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green")
	};
	linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
	displayName = "Squad Leader";
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	vest[] = {"UK3CB_BAF_V_Osprey_SL_C"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_L_A"};
	magazines[] +=
	{
		LIST_3("rhsusf_mag_17Rnd_9x19_FMJ")
	};
	items[] += {"ACE_Maptools"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class co : sl
{
	displayName = "Platoon Leader";
	magazines[] = {
		LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("SmokeShellPurple"),
		LIST_3("rhs_mag_M441_HE"),
		LIST_2("rhs_mag_m714_White"),
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
		LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
	backpackItems[] = {};
};
class fac : co
{
	displayName = "Forward Air Controller";
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"};
	radios[] = {"ACRE_PRC117F"};
	magazines[] =
	{
		LIST_2("Laserbatteries"),
		LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("SmokeShellPurple"),
		LIST_2("rhs_mag_m714_White"),
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
		LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"UK3CB_BAF_Soflam_Laserdesignator"
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
	vest[] = {"UK3CB_BAF_V_Osprey_MG_B"};
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
	scope[] = {"CUP_optic_Elcan_reflex"};
	bipod[] = {};
	magazines[] =
	{
		LIST_2("rhs_200rnd_556x45_M_SAW"),
		LIST_3("rhs_200rnd_556x45_T_SAW"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
	displayName = "Assistant Automatic Rifleman";
	vest[] = {"UK3CB_BAF_V_Osprey_MG_A"};
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	backpackItems[] =
	{
		LIST_2("rhs_200rnd_556x45_M_SAW"),
		LIST_2("rhs_200rnd_556x45_T_SAW")
	};
	linkedItems[] += {"Binocular"};
};
class rat : car
{
	displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"launch_NLAW_F"};
	backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240G"};
	scope[] = {"rhsusf_acc_ELCAN"};
	vest[] = {"UK3CB_BAF_V_Osprey_MG_B"};
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class mmgac : r
{
	displayName = "MMG Ammo Carrier";
	vest[] = {"UK3CB_BAF_V_Osprey_MG_A"};
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51")
	};
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51")
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class hmgg : car
{
	displayName = "HMG Gunner";
	backpack[] = {"RHS_M2_Gun_Bag"};
};
class hmgac : r
{
	displayName = "HMG Ammo Carrier";
	backpack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader"};
	backpack[] = {"RHS_M2_MiniTripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class hatg : car
{
	displayName = "HAT Gunner";
	backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backPack[] = {"rhs_Tow_Gun_Bag"};
};	
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backPack[] = {"rhs_TOW_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class mtrg : car
{
	displayName = "Mortar Gunner";
	backpack[] = {"rhs_M252_Gun_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS"
	};
};
class mtrac : r
{
	displayName = "Mortar Ammo Carrier";
	backpack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
	displayName = "Mortar Assistant Gunner";
	backpack[] = {"rhs_M252_Bipod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class samg : car
{
	displayName = "AA Missile Specialist";
	backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
	secondaryWeapon[] = {"rhs_weap_fim92"};
	magazines[] +=
	{
		LIST_2("rhs_fim92_mag")
	};
};
class samag : car
{
	displayName = "AA Assistant Missile Specialist";
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_2("rhs_fim92_mag")
	};
};
class sn : r
{
	displayName = "Sniper";
	uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
	vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
	headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A"};
	primaryWeapon[] = {"CUP_srifle_AWM_wdl"};
	scope[] = {"optic_LRPS"};
	bipod[] = {"bipod_02_F_blk"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	magazines[] =
	{
		LIST_9("CUP_5Rnd_86x70_L115A1"),
		LIST_2("HandGrenade"),
		LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
	};
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
	displayName = "Spotter";
	primaryWeapon[] = {"CUP_arifle_L85A2_G"};
	scope[] = {"CUP_optic_Elcan_reflex"};
	magazines[] =
	{
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
		LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
		LIST_2("HandGrenade"),
		LIST_2("rhs_mag_an_m8hc"),
		LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
	};
	linkedItems[] += {"Rangefinder"};
};
class vc : smg
{
	displayName = "Vehicle Commander";
	vest[] = {"UK3CB_BAF_V_Osprey_Belt_A"};
	backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
	radios[] = {"ACRE_PRC117F"};
	headgear[] = {"UK3CB_BAF_H_Mk7_Camo_ESS_A"};
	linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
	};
};
class vd : smg
{
	displayName = "Vehicle Driver";
	vest[] = {"UK3CB_BAF_V_Osprey_Belt_A"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"};
	headgear[] = {"UK3CB_BAF_H_Mk7_Camo_CESS_A"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};
class vg : vd
{
	displayName = "Vehicle Gunner";
	backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
	backpackItems[] = {};
};
class pp : smg
{
	displayName = "Helicopter Pilot";
	uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
	vest[] = {"UK3CB_BAF_V_Pilot_A"};
	backpack[] = {};
	headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
	displayName = "Helicopter Crew Chief";
	uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
	vest[] = {"UK3CB_BAF_V_Pilot_A"};
	headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
	goggles[] = {"default"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
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
	uniform[] = {"U_I_pilotCoveralls"};
	headgear[] = {"RHS_jetpilot_usaf"};
	backpack[] = {"B_Parachute"};
	goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	magazines[] =
	{
		LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
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
	vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"};
	magazines[] +=
	{
		LIST_4("ClaymoreDirectionalMine_Remote_Mag")
	};
	backpackItems[] = {
		"MineDetector",
		"ToolKit",
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("SLAMDirectionalMine_Wire_Mag")
	};
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
	displayName = "Combat Engineer (AP Mines)";
	vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
	backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"};
	items[] +=
	{
		LIST_2("APERSBoundingMine_Range_Mag"),
		LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker",
		"ACE_DefusalKit"
	};
	backpackItems[] = {
		"MineDetector",
		"ToolKit",
		"ATMine_Range_Mag"
	};
};
class UAV : car
{
	displayName = "UAV Operator";
	backpack[] = {"B_rhsusf_B_BACKPACK"};
	vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
	linkedItems[] += {"B_UavTerminal"};
};
