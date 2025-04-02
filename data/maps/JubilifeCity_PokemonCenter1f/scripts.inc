.set LOCALID_NURSE, 1

JubilifeCity_PokemonCenter1f_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_PokemonCenter_1f_OnTransition
	.byte 0

JubilifeCity_PokemonCenter_1f_OnTransition::
	setrespawn HEAL_LOCATION_JUBILIFE_CITY,
	end

JubilifeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
