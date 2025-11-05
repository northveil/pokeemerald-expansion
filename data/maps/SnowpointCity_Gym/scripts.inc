SnowpointCity_Gym_MapScripts::
	.byte 0

SnowpointCity_Gym_EventScript_Candice::
	trainerbattle_single TRAINER_CANDICE, SnowpointCity_Gym_Text_CandiceIntro, SnowpointCity_Gym_Text_CandiceDefeat, SnowpointCity_Gym_EventScript_CandiceDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, SnowpointCity_Gym_EventScript_GiveAvalanche
	msgbox SnowpointCity_Gym_Text_CandicePostBattle, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_CandiceDefeated::
	message SnowpointCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SnowpointCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto SnowpointCity_Gym_EventScript_GiveAvalanche
	end

SnowpointCity_Gym_EventScript_GiveAvalanche::
	giveitem ITEM_TM_AVALANCHE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_CALM_MIND
	msgbox SnowpointCity_Gym_Text_ExplainAvalanche, MSGBOX_DEFAULT
	release
	end


SnowpointCity_Gym_Text_CandiceIntro:
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
	.string "POKéMON GYM LEADER.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

SnowpointCity_Gym_Text_CandiceDefeat:
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The POKéMON LEAGUE's rules state\n"
	.string "that TRAINERS are to be given this\l"
	.string "if they defeat a GYM LEADER.\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE STONE BADGE.$"

SnowpointCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} received the STONE BADGE\n"
	.string "from ROXANNE.$"

SnowpointCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "The STONE BADGE heightens the ATTACK\n"
	.string "power of your POKéMON.\p"
	.string "It also enables them to use the HM move\n"
	.string "CUT outside of battle.\p"
	.string "Please take this with you, too.$"

SnowpointCity_Gym_Text_ExplainAvalanche:
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"

SnowpointCity_Gym_Text_CandicePostBattle:
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
