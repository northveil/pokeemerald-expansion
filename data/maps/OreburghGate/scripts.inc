.set LOCALID_HIKER, 3

OreburghGate_MapScripts::
	.byte 0

OreburghGate_1F_EventScript_Hiker::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, OreburghGate_1F_EventScript_Hiker_RockSmashGiven
	goto OreburghGate_1F_EventScript_Hiker_GiveRockSmash
	release
	end

OreburghGate_1F_EventScript_Hiker_GiveRockSmash::
	msgbox OreburghGate_1F_Text_GiveRockSmash, MSGBOX_DEFAULT
	giveitem ITEM_HM06
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	msgbox OreburghGate_1F_Text_RockSmashInfo, MSGBOX_DEFAULT
	release
	end

OreburghGate_1F_EventScript_Hiker_RockSmashGiven::
	msgbox OreburghGate_1F_Text_RockSmashInfo, MSGBOX_DEFAULT
	release
	end

OreburghGate_1F_EventScript_Hiker_MoveToPlayer0::
	applymovement LOCALID_HIKER, OreburghGate_1F_Movement_Hiker0
	waitmovement 0
	goto OreburghGate_1F_EventScript_Hiker


OreburghGate_1F_EventScript_Hiker_MoveToPlayer1::
	applymovement LOCALID_HIKER, OreburghGate_1F_Movement_Hiker1
	waitmovement 0
	goto OreburghGate_1F_EventScript_Hiker

OreburghGate_1F_Movement_Hiker0::
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_down
	step_end

OreburghGate_1F_Movement_Hiker1::
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	step_end

OreburghGate_1F_Text_GiveRockSmash:
	.string "Here's the HM for Rock Smash.$"
OreburghGate_1F_Text_RockSmashInfo:
	.string "Rock Smash is a move that breaks rocks.$"
