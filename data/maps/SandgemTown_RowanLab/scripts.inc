.set LOCALID_ROWAN, 1
.set LOCALID_ASSISTANT, 2

SandgemTown_RowanLab_MapScripts::
	.byte 0

SandgemTown_RowanLab_EventScript_Rowan::
	call_if_unset FLAG_SYS_POKEDEX_GET, SandgemTown_RowanLab_EventScript_RowanGivePokedex
	end

SandgemTown_RowanLab_EventScript_RowanGivePokedex::
	setflag FLAG_SYS_POKEDEX_GET
	end

SandgemTown_RowanLab_EventScript_RowanCheckPokedex::
@i think gen 4 does this idk 
	end


