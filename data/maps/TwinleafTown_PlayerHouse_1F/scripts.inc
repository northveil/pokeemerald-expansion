TwinleafTown_PlayerHouse_1F_MapScripts::
	.byte 0

@she will have different dialogues based on in game time
TwinleafTown_PlayerHouse_1F_EventScript_Mom::
	goto_if_unset FLAG_TEMP_1, TwinleafTown_PlayerHouse_1F_EventScript_Heal
	msgbox TwinleafTown_PlayerHouse_1F_Text_Talk1, MSGBOX_NPC
	release
	end

TwinleafTown_PlayerHouse_1F_EventScript_Heal::
	msgbox TwinleafTown_PlayerHouse_1F_Text_HealGeneric, MSGBOX_NPC
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	setflag FLAG_TEMP_1
	end

@if you talk to her again after having healed already
TwinleafTown_PlayerHouse_1F_Text_HealGeneric:
	.string "Mom: Let's get you and your\n"
	.string "Pokémon back to top shape.$"
TwinleafTown_PlayerHouse_1F_Text_HealMorning:
	.string "Mom: Good morning {PLAYER},"
	.string "Take some breakfast before you\l"
	.string "go.$"
TwinleafTown_PlayerHouse_1F_Text_HealDay::
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"
@TwinleafTown_PlayerHouse_1F_Text_HealEvening::
TwinleafTown_PlayerHouse_1F_Text_HealNight:
	.string "Mom: Welcome home, {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\p"
	.string "I just made dinner.\n"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayerHouse_1F_Text_Talk1:
	.string "Mom: {PLAYER}.\p"
	.string "Seeing you reminds me so much of your\n"
	.string "father.\p"
	.string "You two are so alike!$"

TwinleafTown_PlayerHouse_1F_Text_Talk2:
	.string "Mom: {PLAYER}!\p"
	.string "You and your Pokémon are looking good!\n"
	.string "Nothing can stop you now!$"

TwinleafTown_PlayerHouse_1F_Text_Talk3:
	.string "Mom: While you're gone, I go and\n"
	.string "visit {RIVAL}'s mom.\p"
	.string "We talk about this and that.\p"
	.string "Well, actually, all we do is talk about\n"
	.string "you two.$"

TwinleafTown_PlayerHouse_1F_Text_Talk4:
	.string "Mom: {PLAYER}.\p"
	.string "Listen, always treat your Pokémon\n"
	.string "with kindness.\p"
	.string "Your Pokémon work hard, not for\n"
	.string "themselves, but for you!$"

