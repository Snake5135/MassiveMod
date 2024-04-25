class CfgPatches
{
	class MassiveModZombies
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Zombies","DZ_Characters_Backpacks","Mass_Textures"};
	};
};//meow
class CfgMods
{
	class MassiveModZombiesscripts
	{
		dir="MassiveMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MassiveMod";
		credits="";
		author="Niphoria/Mass/Lad";
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
class cfgVehicles
	//MountainBagCollection
{
	class MountainBag_Red;
	class MountainBag_Blue;
	class MountainBag_Orange;
	class MountainBag_Green;
	class MountainBag_Red_ZMB: MountainBag_Red
	{
		scope=2;
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\mountain.rvmat"};
		itemsCargoSize[]={0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}}};
				};
			};
		};
	};
	class MountainBag_Blue_ZMB: MountainBag_Blue
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}}};
				};
			};
		};
	};
	class MountainBag_Orange_ZMB: MountainBag_Orange
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}}};
				};
			};
		};
	};
	class MountainBag_Green_ZMB: MountainBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat","MassiveMod\ZombieStuff\Data\mountain.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\mountain.rvmat"}}};
				};
			};
		};
	};
	//TaloonBagCollection
	class TaloonBag_Red;
	class TaloonBag_Blue;
	class TaloonBag_Orange;
	class TaloonBag_Green;
	class TaloonBag_Red_ZMB: TaloonBag_Red
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}}};
				};
			};
		};
	};
	class TaloonBag_Blue_ZMB: TaloonBag_Blue
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}}};
				};
			};
		};
	};
	class TaloonBag_Orange_ZMB: TaloonBag_Orange
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}}};
				};
			};
		};
	};
	class TaloonBag_Green_ZMB: TaloonBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat","MassiveMod\ZombieStuff\Data\taloon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\taloon.rvmat"}}};
				};
			};
		};
	};
	//DryBagCollection
	class DryBag_Red;
	class DryBag_Blue;
	class DryBag_Orange;
	class DryBag_Green;
	class DryBag_Black;
	class DryBag_Yellow;
	class DryBag_Red_ZMB: DryBag_Red
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Blue_ZMB: DryBag_Blue
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Orange_ZMB: DryBag_Orange
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Green_ZMB: DryBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Black_ZMB: DryBag_Black
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Yellow_ZMB: DryBag_Yellow
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat","MassiveMod\ZombieStuff\Data\drybag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\drybag.rvmat"}}};
				};
			};
		};
	};
	//HuntingBagCollection
	class HuntingBag;
	class HuntingBag_ZMB: HuntingBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\hunting.rvmat","MassiveMod\ZombieStuff\Data\hunting.rvmat","MassiveMod\ZombieStuff\Data\hunting.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\hunting.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\hunting.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\hunting.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\hunting.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\hunting.rvmat"}}};
				};
			};
		};
	};
	//ChildBagCollection
	class ChildBag_Red;
	class ChildBag_Blue;
	class ChildBag_Green;
	class ChildBag_Red_ZMB: ChildBag_Red
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}}};
				};
			};
		};
	};
	class ChildBag_Blue_ZMB: ChildBag_Blue
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}}};
				};
			};
		};
	};
	class ChildBag_Green_ZMB: ChildBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat","MassiveMod\ZombieStuff\Data\childs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\childs.rvmat"}}};
				};
			};
		};
	};
	//SmershBagCollection
	class SmershBag;
	class SmershBag_ZMB: SmershBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\smersh.rvmat","MassiveMod\ZombieStuff\Data\smersh.rvmat"}}};
				};
			};
		};
	};
	//AssaultBagCollection
	class AssaultBag_Ttsko;
	class AssaultBag_Black;
	class AssaultBag_Green;
	class AssaultBag_Ttsko_ZMB: AssaultBag_Ttsko
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}}};
				};
			};
		};
	};
	class AssaultBag_Black_ZMB: AssaultBag_Black
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}}};
				};
			};
		};
	};
	class AssaultBag_Green_ZMB: AssaultBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat","MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\boulder_m53.rvmat"}}};
				};
			};
		};
	};
	//CoyoteBagCollection
	class CoyoteBag_Brown;
	class CoyoteBag_Green;
	class CoyoteBag_Brown_ZMB: CoyoteBag_Brown
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat","MassiveMod\ZombieStuff\Data\coyotesbp.rvmat","MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}}};
				};
			};
		};
	};
	class CoyoteBag_Green_ZMB: CoyoteBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat","MassiveMod\ZombieStuff\Data\coyotesbp.rvmat","MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\coyotesbp.rvmat"}}};
				};
			};
		};
	};
	//AliceBagCollection
	class AliceBag_Black;
	class AliceBag_Green;
	class AliceBag_Camo;
	class AliceBag_Black_ZMB: AliceBag_Black
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}}};
				};
			};
		};
	};
	class AliceBag_Green_ZMB: AliceBag_Green
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}}};
				};
			};
		};
	};
	class AliceBag_Camo_ZMB: AliceBag_Camo
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat","MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\alice_backpack.rvmat"}}};
				};
			};
		};
	};
	//TortillaBagCollection
	class TortillaBag;
	class TortillaBag_ZMB: TortillaBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\tortila.rvmat","MassiveMod\ZombieStuff\Data\tortila.rvmat","MassiveMod\ZombieStuff\Data\tortila.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\tortila.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\tortila.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\tortila.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\tortila.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\tortila.rvmat"}}};
				};
			};
		};
	};
	//ImprovisedBagCollection
	class ImprovisedBag;
	class FurImprovisedBag;
	class ImprovisedBag_ZMB: ImprovisedBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat","MassiveMod\ZombieStuff\Data\bp_improvised.rvmat","MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}}};
				};
			};
		};
	};
	class FurImprovisedBag_ZMB: FurImprovisedBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat","MassiveMod\ZombieStuff\Data\bp_improvised.rvmat","MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\bp_improvised.rvmat"}}};
				};
			};
		};
	};
	//CourierBagCollection
	class CourierBag;
	class FurCourierBag;
	class CourierBag_ZMB: CourierBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat","MassiveMod\ZombieStuff\Data\impcourierbag.rvmat","MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}}};
				};
			};
		};
	};
	class FurCourierBag_ZMB: FurCourierBag
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat","MassiveMod\ZombieStuff\Data\impcourierbag.rvmat","MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\impcourierbag.rvmat"}}};
				};
			};
		};
	};
	//LeatherSacksCollection
	class LeatherSack_Natural;
	class LeatherSack_Black;
	class LeatherSack_Beige;
	class LeatherSack_Brown;
	class LeatherSack_Natural_ZMB: LeatherSack_Natural
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.7,{}},{0.5,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.3,{}},{0.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}}};
				};
			};
		};
	};
	class LeatherSack_Black_ZMB: LeatherSack_Black
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.7,{}},{0.5,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.3,{}},{0.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}}};
				};
			};
		};
	};
	class LeatherSack_Beige_ZMB: LeatherSack_Beige
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.7,{}},{0.5,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.3,{}},{0.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}}};
				};
			};
		};
	};
	class LeatherSack_Brown_ZMB: LeatherSack_Brown
	{
		scope=2;
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]={"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.7,{}},{0.5,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}},{0.3,{}},{0.0,{"MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat","MassiveMod\ZombieStuff\Data\bag_leathersack_beige.rvmat"}}};
				};
			};
		};
	};
	class MassSurvivorBag;
	class MassSurvivorBag_Black;
	class MassSurvivorBag_Green;
	class MassSurvivorBag_Tan;
	class MassSurvivorBag_Winter;
	class MassSurvivorBag_ZMB: MassSurvivorBag
    {
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]=
        {
            "MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}}};
				};
			};
		};
	};
    class MassSurvivorBag_Black_ZMB: MassSurvivorBag_Black
    {
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]=
        {
            "MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}}};
				};
			};
		};
	};
    class MassSurvivorBag_Tan_ZMB: MassSurvivorBag_Tan
    {
		itemsCargoSize[]={0,0};
		hiddenSelectionsMaterials[]=
        {
            "MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat","MassiveMod\ZombieStuff\Data\Aliceish.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.7,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.5,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.3,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}},{0.0,{"MassiveMod\ZombieStuff\Data\Aliceish.rvmat"}}};
				};
			};
		};
	};
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	class ZombieBase: DayZInfected
	{
		class Cargo
		{
			itemsCargoSize[]={3,4};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		attachments[]=
		{
			"Melee",
			"Vest",
			"Back",
			"Headgear",
			"Mask",
			"Eyewear"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 15;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
							class Shock
							{
								damage = 1.5;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,0.5};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 25;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 25;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 5;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 5;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class ZombieMaleBase;
	class ZmbM_SoldierNormal_Base: ZombieMaleBase
	{
		class Cargo
		{
			itemsCargoSize[]={3,4};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		attachments[]=
		{
			"Melee",
			"Vest",
			"Back",
			"Headgear",
			"Mask",
			"Eyewear"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 50;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1.5;
							};
							class Shock
							{
								damage = 1.5;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head","Neck"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
					inventorySlotsCoefs[] = {1.0,1.0,0.5};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 33;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 33;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 10;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 10;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
	};
	class ZmbM_usSoldier_normal_Woodland;
	class ZmbF_SurvivorNormal_Base;
	class ZmbM_HikerSkinny_Base;
	class MassiveMod_ZmbM_usSoldier_normal_Woodland: ZmbM_usSoldier_normal_Woodland
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\characters\zombies\data\usSoldier_normal_m_MarpatWoodland_CO.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class MassiveMod_ZmbM_GhostRiderMil: ZmbM_usSoldier_normal_Woodland
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\characters\zombies\data\usSoldier_normal_m_MarpatWoodland_CO.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class MassiveMod_ZmbF_GhostRider_Blue: ZmbF_SurvivorNormal_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\characters\zombies\data\survivor_normal_f_blue_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class MassiveMod_ZmbM_HikerGhostRider_Green: ZmbM_HikerSkinny_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\characters\zombies\data\hiker_skinny_m_green_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};