class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class NBS_Faction
		{
			name = "Latvian National Armed Forces";
			class Infantry
			{
				name = "Infantry";
				class NBS_InfTeam
				{
					name = "Fire Team";
					faction = "NBS_Faction";
					side = 1;
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_NBS_LATPAT_TeamLeader_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_NBS_LATPAT_Autorifleman_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_NBS_LATPAT_RiflemanAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
                    class Unit3
					{
						side = 1;
						vehicle = "B_NBS_LATPAT_Rifleman_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};