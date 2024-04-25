class CfgPatches
{
	class MassiveModSurvivorAdjustments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear"};
	};
};
class CfgVehicles
{
	class Clothing;
    class NBCHoodBase: Clothing
	{
		inventorySlot[]+= {"Hood"};
	};
};