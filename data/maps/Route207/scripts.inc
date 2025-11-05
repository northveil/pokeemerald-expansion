.set LOCALID_ASSISTANT, 1

Route207_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route207_OnTransition
	.byte 0


Route207_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_HIDE_ROUTE_110_RIVAL
	end

Route207_EventScript_Assistant::
	addobject LOCALID_ASSISTANT
	applymovement LOCALID_ASSISTANT, Route207_Movement_AssistantWalkToPlayer
	waitmovement 0
	end

Route207_Movement_AssistantWalkToPlayer::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route207_EventScript_Anthony::
	trainerbattle_single TRAINER_ANTHONY, Route207_Text_AnthonyIntro, Route207_Text_AnthonyDefeated
	msgbox Route207_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Lauren::
	trainerbattle_single TRAINER_LAUREN, Route207_Text_LaurenIntro, Route207_Text_LaurenDefeated
	msgbox Route207_Text_LaurenPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Austin::
	trainerbattle_single TRAINER_AUSTIN, Route207_Text_AustinIntro, Route207_Text_AustinDefeated
	msgbox Route207_Text_AustinPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Justin::
	trainerbattle_single TRAINER_JUSTIN, Route207_Text_JustinIntro, Route207_Text_JustinDefeated
	msgbox Route207_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Kevin::
	trainerbattle_single TRAINER_KEVIN, Route207_Text_KevinIntro, Route207_Text_KevinDefeated
	msgbox Route207_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Helen::
	trainerbattle_single TRAINER_HELEN, Route207_Text_HelenIntro, Route207_Text_HelenDefeated
	msgbox Route207_Text_HelenPostBattle, MSGBOX_AUTOCLOSE
	end

Route207_Text_AnthonyIntro:
	.string "Let's Battle!$"
Route207_Text_AnthonyDefeated:
	.string "I lost!$"
Route207_Text_AnthonyPostBattle::
	.string "Bye, see you later!$"

Route207_Text_LaurenIntro:
	.string "Let's Battle!$"
Route207_Text_LaurenDefeated:
	.string "I lost!$"
Route207_Text_LaurenPostBattle::
	.string "Bye, see you later!$"

Route207_Text_AustinIntro:
	.string "Let's Battle!$"
Route207_Text_AustinDefeated:
	.string "I lost!$"
Route207_Text_AustinPostBattle::
	.string "Bye, see you later!$"

Route207_Text_JustinIntro:
	.string "Let's Battle!$"
Route207_Text_JustinDefeated:
	.string "I lost!$"
Route207_Text_JustinPostBattle::
	.string "Bye, see you later!$"

Route207_Text_KevinIntro:
	.string "Let's Battle!$"
Route207_Text_KevinDefeated:
	.string "I lost!$"
Route207_Text_KevinPostBattle::
	.string "Bye, see you later!$"

Route207_Text_HelenIntro:
	.string "Let's Battle!$"
Route207_Text_HelenDefeated:
	.string "I lost!$"
Route207_Text_HelenPostBattle::
	.string "Bye, see you later!$"
