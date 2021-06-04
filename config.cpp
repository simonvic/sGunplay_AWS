class CfgPatches {
	class sGunplay_AWS {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"AdvancedWeaponScopes"
		};
	};
};

class CfgMods {
	class sGunplay_AWS {
		dir = "MyMODS/sGunplay_AWS";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_AWS";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		
		dependencies[] = {};
	};
};

class cfgVehicles{
	
	class ItemOptics;
	
	class AD_ACOG_Base: ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.33, 0.001};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.0};
		};
	};
	
	class AD_SpecterDR_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.5, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};
	
	class AD_PVS4_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.05};
			PPLensProperties[] = {-0.5, 0.0, 0.0, 0.0};
		};
	};
	
	class AD_Pilad_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.01};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.2};
		};
	};
	
	class AD_NFATACR_1_8_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.01};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.2};
		};
	};
	
	class AD_NFATACR_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.01};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.2};
		};
	};
};
