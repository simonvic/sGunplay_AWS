class CfgPatches {
	class sGunplay_AWS {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"AD_ACOG",
			"AD_B13Mount",
			"AD_DHF5",
			"AD_LeupoldMk4",
			"AD_NFATACR",
			"AD_NFATACR_1_8",
			"AD_Pilad",
			"AD_PVS4",
			"AD_RMR",
			"AD_SpecterDR",
			"AD_XPS34"
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

	// AD_ACOG /////////////////////////////////////////////////////////

	class AD_ACOG_Base: ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.33, 0.001};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};

	class AD_ACOG_RMR_Base: ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.33, 0.001};
			PPLensProperties[] = {0.5, 0.0, 0.0, 0.2};
		};
	};


	// AD_DHF5 /////////////////////////////////////////////////////////
	class AD_DHF5_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.7, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_LeupoldMk4 /////////////////////////////////////////////////////////
	class AD_LeupoldMk4_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.7, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_NFATACR /////////////////////////////////////////////////////////
	class AD_NFATACR_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.7, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_B13Mount /////////////////////////////////////////////////////////
	class AD_NFATACR_B13_RMR : AD_NFATACR_Base {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.7, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_NFATACR_1_8 /////////////////////////////////////////////////////////
	class AD_NFATACR_1_8_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_Pilad /////////////////////////////////////////////////////////
	class AD_Pilad_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.7, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_PVS4 /////////////////////////////////////////////////////////
	class AD_PVS4_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 2.0, 0.001};
			PPLensProperties[] = {-0.5, 0.0, 0.0, 0.0};
		};
	};


	// AD_SpecterDR /////////////////////////////////////////////////////////
	class AD_SpecterDR_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.0, 0.5, 0.0075};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};


	// AD_XPS34 /////////////////////////////////////////////////////////
	class AD_XPS34_HSS_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.02, 0.5, 0.0075};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};

	class AD_G33_Base : ItemOptics {
		class OpticsInfo {
			PPMaskProperties[] = {0.0, 0.015, 0.4, 0.001};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};
};
