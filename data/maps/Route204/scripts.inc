Route204_MapScripts::
	.byte 0

Route204_EventScript_Sarah::
	trainerbattle_single TRAINER_SARAH, Route203_Text_SarahIntro, Route203_Text_SarahDefeated
	msgbox Route203_Text_SarahPostBattle, MSGBOX_AUTOCLOSE

Route204_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, Route203_Text_SamanthaIntro, Route203_Text_SamanthaDefeated
	msgbox Route203_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE

Route204_EventScript_Tyler::
	trainerbattle_single TRAINER_TYLER, Route203_Text_TylerIntro, Route203_Text_TylerDefeated
	msgbox Route203_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	
Route203_Text_SarahIntro:
	.string "Let's Battle!$"
Route203_Text_SarahDefeated:
	.string "I lost!$"
Route203_Text_SarahPostBattle::
	.string "Bye, see you later!$"
		
Route203_Text_SamanthaIntro:
	.string "Let's Battle!$"
Route203_Text_SamanthaDefeated:
	.string "I lost!$"
Route203_Text_SamanthaPostBattle::
	.string "Bye, see you later!$"
		
Route203_Text_TylerIntro:
	.string "Let's Battle!$"
Route203_Text_TylerDefeated:
	.string "I lost!$"
Route203_Text_TylerPostBattle::
	.string "Bye, see you later!$"
