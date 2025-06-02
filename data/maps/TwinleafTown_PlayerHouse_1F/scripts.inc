.set LOCALID_MOM, 1

TwinleafTown_PlayerHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_PlayerHouse_1F_OnFrame
	.byte 0

TwinleafTown_PlayerHouse_1F_OnFrame:
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 1, TwinleafTown_PlayerHouse_1F_EventScript_MomNewGame
	.2byte 0

@she will have different dialogues based on in game time
TwinleafTown_PlayerHouse_1F_EventScript_Mom::
	call_if_eq VAR_TWINLEAF_TOWN_STATE, 1, TwinleafTown_PlayerHouse_1F_EventScript_MomNewGame
	call_if_eq VAR_TWINLEAF_TOWN_STATE, 2, TwinleafTown_PlayerHouse_1F_EventScript_RivalImpatient
	call_if_eq VAR_TWINLEAF_TOWN_STATE, 3, TwinleafTown_PlayerHouse_1F_EventScript_MomTakeCare
	call_if_eq VAR_TWINLEAF_TOWN_STATE, 4, TwinleafTown_PlayerHouse_1F_EventScript_MomTakeCare
	call_if_unset FLAG_TEMP_1, TwinleafTown_PlayerHouse_1F_EventScript_Heal
	msgbox TwinleafTown_PlayerHouse_1F_Text_Talk1, MSGBOX_NPC
	release
	end

TwinleafTown_PlayerHouse_1F_EventScript_MomNewGame::
	@@exclamation-walk to player-talk1-walk back to tv
	lockall
	applymovement LOCALID_MOM, TwinleafTown_PlayerHouse_1F_Movement_MomWalkToPlayer
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_1F_Text_MomBarryLeft, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOM, TwinleafTown_PlayerHouse_1F_Movement_MomWalkBack
	waitmovement 0
	setvar VAR_TWINLEAF_TOWN_STATE, 2
	release 
	end

TwinleafTown_PlayerHouse_1F_EventScript_LeaveHouse::
	applymovement LOCALID_MOM, Common_Movement_FaceDown
	waitmovement 0
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox TwinleafTown_PlayerHouse_1F_Text_MomOhYes, MSGBOX_DEFAULT
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setvar VAR_TWINLEAF_TOWN_STATE, 3
	release
	end

TwinleafTown_PlayerHouse_1F_EventScript_MomTakeCare::
	msgbox TwinleafTown_PlayerHouse_1F_Text_MomByeBye, MSGBOX_NPC
	release 
	end


TwinleafTown_PlayerHouse_1F_EventScript_RivalImpatient::
	msgbox TwinleafTown_PlayerHouse_1F_Text_MomBarryImpatient, MSGBOX_NPC
	release 
	end

TwinleafTown_PlayerHouse_1F_EventScript_Heal::
	msgbox TwinleafTown_PlayerHouse_1F_Text_HealGeneric, MSGBOX_NPC
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	setflag FLAG_TEMP_1
	end

TwinleafTown_PlayerHouse_1F_Movement_MomWalkToPlayer:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

TwinleafTown_PlayerHouse_1F_Movement_MomWalkBack:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	face_up
	step_end

TwinleafTown_PlayerHouse_1F_Text_MomBarryLeft:
	.string "Mom:{PLAYER}!\p"
	.string "{RIVAL} already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTown_PlayerHouse_1F_Text_MomBarryImpatient:
	.string "Mom: You know how impatient {RIVAL}\n"
	.string "is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayerHouse_1F_Text_MomOhYes:
	.string "Mom: Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't, so...\p"
	.string "Well, take care, sweetie!\p"
	.string "Don't forget your new shoes!$"

TwinleafTown_PlayerHouse_1F_Text_MomByeBye:
	.string "Mom: Bye-bye, {PLAYER}!\n"
	.string "You take care now!$"

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
