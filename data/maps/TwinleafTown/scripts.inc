TwinleafTown_MapScripts::
	.byte 0

TwinleafTown_EventScript_Girl::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Girl_NoMon
	release
	end

TwinleafTown_EventScript_Man::

TwinleafTown_EventScript_FatMan::

TwinleafTown_EventScript_Girl_NoMon::
	msgbox TwinleafTown_Text_WildPokemonAttack, MSGBOX_NPC
	return

TwinleafTown_Text_WildPokemonAttack:
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_Text_BarryWasLooking:
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
