.set LOCALID_RIVAL, 1

TwinleafTown_PlayerHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, TwinleafTown_PlayerHouse_2F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_PlayerHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_PlayerHouse_2F_OnFrame
	.byte 0

TwinleafTown_PlayerHouse_2F_OnLoad:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	end

TwinleafTown_PlayerHouse_2F_OnTransition:
	setflag FLAG_HIDE_RIVAL_PLAYER_ROOM
	end

TwinleafTown_PlayerHouse_2F_OnFrame:
	map_script_2 VAR_TEMP_0, 0, TwinleafTown_PlayerHouse_2F_EventScript_DisplayTVText
	.2byte 0

TwinleafTown_PlayerHouse_2F_EventScript_DisplayTVText::
	call_if_eq VAR_TWINLEAF_TOWN_STATE, 0, TwinleafTown_PlayerHouse_2F_EventScript_TVNewsRowan
	end

TwinleafTown_PlayerHouse_2F_EventScript_TVNewsRowan::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox TwinleafTown_PlayerHouse_2F_Text_TVProfRowan, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 1
	clearflag FLAG_CATCHING_TUTORIAL
	release 
	end

TwinleafTown_PlayerHouse_2F_EventScript_RivalEnterRoom::
	@@walk in-check position-exclamation-talk1-walk to player-talk2-walk to pc-talk3-walk back to player-talk4-run to stairs
	lockall
	setvar VAR_TWINLEAF_TOWN_STATE, 1
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalEnterRoom
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalThereYouAre, MSGBOX_DEFAULT
	return
	end

TwinleafTown_PlayerHouse_2F_EventScript_Rival1::
	call TwinleafTown_PlayerHouse_2F_EventScript_RivalEnterRoom
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer1
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalHeyPlayer, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC1
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalNewPC, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, Common_Movement_FaceRight
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalWhereWasI, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer1
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalOhRight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom1
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	delay 100
	waitmovement 0
	release
	end

TwinleafTown_PlayerHouse_2F_EventScript_Rival2::
	call TwinleafTown_PlayerHouse_2F_EventScript_RivalEnterRoom
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer2
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalHeyPlayer, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC2
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalNewPC, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, Common_Movement_FaceRight
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalWhereWasI, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer2
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalOhRight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom2
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	delay 100
	waitmovement 0
	release
	end

TwinleafTown_PlayerHouse_2F_EventScript_Rival3::
	call TwinleafTown_PlayerHouse_2F_EventScript_RivalEnterRoom
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer3
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalHeyPlayer, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC3
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalNewPC, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, Common_Movement_FaceRight
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalWhereWasI, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer3
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalOhRight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom3
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	delay 100
	waitmovement 0
	release
	end

TwinleafTown_PlayerHouse_2F_EventScript_Rival4::
	call TwinleafTown_PlayerHouse_2F_EventScript_RivalEnterRoom
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer4
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalHeyPlayer, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC4
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalNewPC, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, Common_Movement_FaceRight
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalWhereWasI, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer4
	waitmovement 0
	msgbox TwinleafTown_PlayerHouse_2F_Text_RivalOhRight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom4
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	delay 100
	waitmovement 0
	release
	end


TwinleafTown_PlayerHouse_2F_Movement_RivalEnterRoom:
	walk_faster_down
	emote_exclamation_mark
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer1:
	walk_faster_left
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer2:
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer3:
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPlayer4:
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC1:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC2:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_up
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC3:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	face_up
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalWalkToPC4:
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_up
	step_end
TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer1:
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer2:
	walk_right
	walk_down
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer3:
	walk_right
	walk_right
	walk_down
	walk_down
	face_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalBackToPlayer4:
	walk_right
	walk_down
	face_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom2:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Movement_RivalExitRoom4:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

TwinleafTown_PlayerHouse_2F_Text_TVProfRowan:
	.string "That concludes our special program,\n"
	.string "'Let's Ask Prof. Rowan'$"

TwinleafTown_PlayerHouse_2F_Text_RivalThereYouAre:
	.string "{RIVAL}: There you are!$"

TwinleafTown_PlayerHouse_2F_Text_RivalHeyPlayer:
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That must he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So, if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTown_PlayerHouse_2F_Text_RivalNewPC:
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTown_PlayerHouse_2F_Text_RivalWhereWasI:
	.string "{RIVAL}: Uh...\n"
	.string "Where was I?$"

TwinleafTown_PlayerHouse_2F_Text_RivalOhRight:
	.string "Oh, right, right! We were going to see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
