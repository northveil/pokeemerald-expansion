Route205_MapScripts::
	.byte 0

Route205_EventScript_Daniel::
	trainerbattle_single TRAINER_DANIEL, Route205_Text_DanielIntro, Route205_Text_DanielDefeated
	msgbox Route205_Text_DanielPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Elizabeth::
	trainerbattle_single TRAINER_ELIZABETH, Route205_Text_ElizabethIntro, Route205_Text_ElizabethDefeated
	msgbox Route205_Text_ElizabethPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Jacob::
	trainerbattle_single TRAINER_JACOB, Route205_Text_JacobIntro, Route205_Text_JacobDefeated
	msgbox Route205_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Siena::
	trainerbattle_single TRAINER_SIENA, Route205_Text_SienaIntro, Route205_Text_SienaDefeated
	msgbox Route205_Text_SienaPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, Route205_Text_NicholasIntro, Route205_Text_NicholasDefeated
	msgbox Route205_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Kelsey::
	trainerbattle_single TRAINER_KELSEY, Route205_Text_KelseyIntro, Route205_Text_KelseyDefeated
	msgbox Route205_Text_KelseyPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Karina::
	trainerbattle_single TRAINER_KARINA, Route205_Text_KarinaIntro, Route205_Text_KarinaDefeated
	msgbox Route205_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route205_EventScript_Zackary::
	trainerbattle_single TRAINER_ZACKARY, Route205_Text_ZackaryIntro, Route205_Text_ZackaryDefeated
	msgbox Route205_Text_ZackaryPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Text_DanielIntro:
	.string "Let's Battle!$"
Route205_Text_DanielDefeated:
	.string "I lost!$"
Route205_Text_DanielPostBattle::
	.string "Bye, see you later!$"

Route205_Text_ElizabethIntro:
	.string "Let's Battle!$"
Route205_Text_ElizabethDefeated:
	.string "I lost!$"
Route205_Text_ElizabethPostBattle::
	.string "Bye, see you later!$"

Route205_Text_JacobIntro:
	.string "Let's Battle!$"
Route205_Text_JacobDefeated:
	.string "I lost!$"
Route205_Text_JacobPostBattle::
	.string "Bye, see you later!$"

Route205_Text_SienaIntro:
	.string "Let's Battle!$"
Route205_Text_SienaDefeated:
	.string "I lost!$"
Route205_Text_SienaPostBattle::
	.string "Bye, see you later!$"

Route205_Text_NicholasIntro:
	.string "Let's Battle!$"
Route205_Text_NicholasDefeated:
	.string "I lost!$"
Route205_Text_NicholasPostBattle::
	.string "Bye, see you later!$"

Route205_Text_KelseyIntro:
	.string "Let's Battle!$"
Route205_Text_KelseyDefeated:
	.string "I lost!$"
Route205_Text_KelseyPostBattle::
	.string "Bye, see you later!$"

Route205_Text_KarinaIntro:
	.string "Let's Battle!$"
Route205_Text_KarinaDefeated:
	.string "I lost!$"
Route205_Text_KarinaPostBattle::
	.string "Bye, see you later!$"

Route205_Text_ZackaryIntro:
	.string "Let's Battle!$"
Route205_Text_ZackaryDefeated:
	.string "I lost!$"
Route205_Text_ZackaryPostBattle::
	.string "Bye, see you later!$"
