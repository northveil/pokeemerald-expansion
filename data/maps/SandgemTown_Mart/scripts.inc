SandgemTown_Mart_MapScripts::
	.byte 0

SandgemTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SandgemTown_Mart_EventScript_Man::
	msgbox SandgemTown_Mart_Text_LoseHP, MSGBOX_NPC
	release
	end

SandgemTown_Mart_EventScript_Boy::
	msgbox SandgemTown_Mart_Text_TossAPokeball, MSGBOX_NPC
	release
	end

SandgemTown_Mart_Text_LoseHP:
	.string "If a Pokémon loses all its HP,\n"
	.string "it can't battle anymore.\p"
	.string "I'm buying lots of Potions to avoid\n"
	.string "having tbat happen!$"
SandgemTown_Mart_Text_TossAPokeball:
	.string "If you come across a Pokémon you've\n"
	.string "just gotta have, toss a Pokéball!\p"
	.string "Never leave home without one!$"
