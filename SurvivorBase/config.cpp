class CfgPatches
{
	class MassiveModSurvivorAdjustments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Characters","MassiveMod_Slots"};
	};
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		//attachments[]+= {"Hood"};
		//class InventoryEquipment
		//{
		//	playerSlots[]+= {"Slot_Hood"};
		//};
		class DamageSystem
		{
			class DamageZones
			{
				class LeftArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0.1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.33;
							};
						};
					};
					componentNames[] = {"dmgZone_leftArm"};
					inventorySlotsCoefs[] = {1.0};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0.1;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.33;
							};
						};
					};
					componentNames[] = {"dmgZone_rightArm"};
					inventorySlotsCoefs[] = {1.0};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 125;
						transferToGlobalCoef = 0.12;
					};
					class Blood
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 0;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.2;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0.33;
							};
						};
					};
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_leftLeg"};
					inventorySlots[] = {"Legs"};
				};
				class RightLeg: LeftLeg
				{
					componentNames[] = {"dmgZone_rightLeg"};
					inventorySlots[] = {"Legs"};
				};
			};
		};
	};
    class SurvivorMale_Base: SurvivorBase
	{
		//model = "MassiveMod\SurvivorBase\BodyProxies.p3d";
	};
	class SurvivorFemale_Base: SurvivorBase
	{
		//model = "MassiveMod\SurvivorBase\BodyProxies.p3d";
	};
};
//class CfgNonAIVehicles
//{
//    class ProxyAttachment;
//	class ProxyNBCHood_DZ: ProxyAttachment
//	{
//		model = "MassiveMod\SurvivorBase\Proxies\NBCHood_DZ.p3d";
//		inventorySlot="Hood";
//		simulation = "ProxyInventory";
//	};
//};