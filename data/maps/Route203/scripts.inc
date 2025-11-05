.set LOCALID_RIVAL, 0

Route203_MapScripts::
	.byte 0

Route203_EventScripts_Rival::
	playbgm MUS_ENCOUNTER_INTENSE, TRUE
	msgbox Route203_Text_RivalBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route203_EventScripts_RivalBattleTurtwigChosen
	case 1, Route203_EventScripts_RivalBattlechimcharChosen
	case 2, Route203_EventScripts_RivalBattlePiplupChosen
	end

Route203_EventScripts_RivalBattleTurtwigChosen::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_TURTWIG, Route203_Text_RivalDefeat
	goto Route203_EventScripts_AfterRivalBattle
	end
Route203_EventScripts_RivalBattlechimcharChosen::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_CHIMCHAR, Route203_Text_RivalDefeat
	goto Route203_EventScripts_AfterRivalBattle
	end
Route203_EventScripts_RivalBattlePiplupChosen::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE_203_PIPLUP, Route203_Text_RivalDefeat
	goto Route203_EventScripts_AfterRivalBattle
	end

Route203_EventScripts_AfterRivalBattle::
	msgbox Route203_Text_RivalSeeYou, MSGBOX_DEFAULT 
	goto Route203_EventScript_RivalExit
	end

Route203_EventScript_RivalExit::
	closemessage
	fadedefaultbgm
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	releaseall
	end

Route203_EventScript_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route203_Text_SebastianIntro, Route203_Text_SebastianDefeated
	msgbox Route203_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE

Route203_EventScript_Michael::
	trainerbattle_single TRAINER_MICHAEL, Route203_Text_MichaelIntro, Route203_Text_MichaelDefeated
	msgbox Route203_Text_MichaelPostBattle, MSGBOX_AUTOCLOSE
	end
	end

Route203_EventScript_Kaitlin::
	trainerbattle_single TRAINER_KAITLIN, Route203_Text_KaitlinIntro, Route203_Text_KaitlinDefeated
	msgbox Route203_Text_KaitlinPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Dallas::
	trainerbattle_single TRAINER_DALLAS, Route203_Text_DallasIntro, Route203_Text_DallasDefeated
	msgbox Route203_Text_DallasPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Madeline::
	trainerbattle_single TRAINER_MADELINE, Route203_Text_MadelineIntro, Route203_Text_MadelineDefeated
	msgbox Route203_Text_MadelinePostBattle, MSGBOX_AUTOCLOSE
	end

Route203_Text_RivalBattle:
	.string "Let's Battle!$"
Route203_Text_RivalDefeat:
	.string "I lost!$"
Route203_Text_RivalSeeYou::
	.string "Bye, see you later!$"
	
Route203_Text_SebastianIntro:
	.string "Let's Battle!$"
Route203_Text_SebastianDefeated:
	.string "I lost!$"
Route203_Text_SebastianPostBattle::
	.string "Bye, see you later!$"
	
Route203_Text_MichaelIntro:
	.string "Let's Battle!$"
Route203_Text_MichaelDefeated:
	.string "I lost!$"
Route203_Text_MichaelPostBattle::
	.string "Bye, see you later!$"
	
Route203_Text_KaitlinIntro:
	.string "Let's Battle!$"
Route203_Text_KaitlinDefeated:
	.string "I lost!$"
Route203_Text_KaitlinPostBattle::
	.string "Bye, see you later!$"
	
Route203_Text_DallasIntro:
	.string "Let's Battle!$"
Route203_Text_DallasDefeated:
	.string "I lost!$"
Route203_Text_DallasPostBattle::
	.string "Bye, see you later!$"
	
Route203_Text_MadelineIntro:
	.string "Let's Battle!$"
Route203_Text_MadelineDefeated:
	.string "I lost!$"
Route203_Text_MadelinePostBattle::
	.string "Bye, see you later!$"
