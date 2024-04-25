class CfgPatches
{
	class MassiveMod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};//meow
class CfgMods
{
	class MassiveMod
	{
		dir="MassiveMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MassiveMod";
		credits="";
		author="Niphoria/Mass";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
	};
};
class cfgWeapons
{
	class RifleCore;
    class Rifle_Base: RifleCore
	{
		inventorySlot[] -= {"Melee"};
	};
};