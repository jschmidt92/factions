#include "script_component.hpp"

params ["_unit", "_loadout"];

switch (_loadout) do {
	case "rifleman": {};
	case "marksman": {
		_unit addPrimaryWeaponItem "CUP_optic_LeupoldMk4";
		_unit addPrimaryWeaponItem "CUP_10Rnd_127x99_M107";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToVest "SmokeShellGreen";
		for "_i" from 1 to 6 do {_unit addItemToVest "CUP_10Rnd_127x99_M107";};
		for "_i" from 1 to 2 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
		for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
		for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
	};
	case "grenadier": {
		_unit addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
		_unit addPrimaryWeaponItem "1Rnd_HE_Grenade_shell";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToVest "1Rnd_SmokeRed_Grenade_shell";
		_unit addItemToVest "SmokeShellGreen";
		for "_i" from 1 to 6 do {_unit addItemToVest "CUP_30Rnd_556x45_Stanag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
		for "_i" from 1 to 2 do {_unit addItemToVest "1Rnd_Smoke_Grenade_shell";};
		for "_i" from 1 to 2 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "specialist": {};
	case "teamleader": {};
	case "default": {};
};