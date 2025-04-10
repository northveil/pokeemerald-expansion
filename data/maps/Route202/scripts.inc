Route202_MapScripts::
	.byte 0

Route202_EventScript_Natalie::
	trainerbattle_single TRAINER_NATALIE, Route202_Text_NatalieIntro, Route202_Text_NatalieDefeated
	msgbox Route202_Text_NataliePostBattle, MSGBOX_AUTOCLOSE
	end

