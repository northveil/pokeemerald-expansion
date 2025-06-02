.set LOCALID_ASSISTANT, 5

Route202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_OnTransition
	.byte 0

Route202_OnTransition:
	call_if_lt VAR_SANDGEM_TOWN_STATE, 9, Route202_EventScript_LoadDawnLucas
	end

Route202_EventScript_LoadDawnLucas::
	end

Route202_EventScript_Assistant::
	call_if_unset FLAG_CATCHING_TUTORIAL, Route202_EventScript_CatchingTutorial
	end

Route202_EventScript_CatchingTutorial::
	msgbox Route202_Text_CatchingTutorial, MSGBOX_NPC
	setflag FLAG_CATCHING_TUTORIAL
	end

Route202_EventScript_Natalie::
	trainerbattle_single TRAINER_NATALIE, Route202_Text_NatalieIntro, Route202_Text_NatalieDefeated
	msgbox Route202_Text_NataliePostBattle, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Tristan::
	trainerbattle_single TRAINER_TRISTAN, Route202_Text_TristanIntro, Route202_Text_TristanDefeated
	msgbox Route202_Text_TristanPostBattle, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Logan::
	trainerbattle_single TRAINER_LOGAN, Route202_Text_LoganIntro, Route202_Text_LoganDefeated
	msgbox Route202_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end

Route202_Text_CatchingTutorial::
	.string "Catch$"
