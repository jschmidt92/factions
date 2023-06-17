#include "script_component.hpp"

params ["_unit", "_loadout"];

switch (_loadout) do {
	case "rifleman": {};
	case "marksman": {
		_unit addPrimaryWeaponItem "CUP_optic_LeupoldMk4";
		_unit addPrimaryWeaponItem "CUP_10Rnd_127x99_M107";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		for "_i" from 1 to 6 do {_unit addItemToVest "CUP_10Rnd_127x99_M107";};
		for "_i" from 1 to 2 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
		for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
		for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
	};
	case "grenadier": {
		_unit addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855A1_PMAG";
		_unit addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToBackpack "SOG_Helmet_MICH2000_C_Camo02";
		for "_i" from 1 to 7 do {_unit addItemToVest "rhs_mag_30Rnd_556x45_M855A1_PMAG";};
		for "_i" from 1 to 2 do {_unit addItemToVest "CUP_1Rnd_HE_M203";};
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "specialist": {};
	case "teamleader": {};
	case "default": {};
};