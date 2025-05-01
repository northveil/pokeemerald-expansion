TwinleafTown_MapScripts::
	.byte 0

TwinleafTown_EventScript_Barry::

@@Thud,pause,eclamation+music,talk
TwinleafTown_EventScript_Girl::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Girl_NoMon
	release
	end

TwinleafTown_EventScript_Man::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwinleafTown_EventScript_Man_BarryLooking
	release 
	end

TwinleafTown_EventScript_Man_BarryLooking::
	msgbox TwinleafTown_Text_BarryWasLooking, MSGBOX_NPC
	release
	end

TwinleafTown_EventScript_FatMan::
	msgbox TwinleafTown_Text_TechnologyBlowsMeAway, MSGBOX_NPC
	release
	end

TwinleafTown_EventScript_Girl_NoMon::
	msgbox TwinleafTown_Text_WildPokemonAttack, MSGBOX_NPC
	release
	end

TwinleafTown_Text_Thud:
	.string "THUD!\p"
	.string "{RIVAL}: What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinleafTown_Text_OhJeez:
	.string "{RIVAL}: Oh jeez!\n"
	.string "I forgot something!$"

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

TwinleafTown_Text_LookingForBarry:
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for {RIVAL}?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

TwinleafTown_Text_TechnologyBlowsMeAway:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"
