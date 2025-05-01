TwinleafTown_House2_MapScripts::
	.byte 0

TwinleafTown_House2_EventScript_OldWoman::
	msgbox TwinleafTown_House2_Text_DidYouHear, MSGBOX_NPC
	release
	end

TwinleafTown_House2_EventScript_Girl::
	msgbox TwinleafTown_House2_Text_ListenListen, MSGBOX_NPC
	release
	end

TwinleafTown_House2_Text_DidYouHear:
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years.\p"
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

TwinleafTown_House2_Text_ListenListen:
	.string "Listen, listen, {PLAYER}.\n"
	.string "I want a cute Pokémon!$"
