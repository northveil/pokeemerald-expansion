Route202_MapScripts::
	.byte 0

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
