Route204_North_MapScripts::
	.byte 0

Route204_North_EventScript_Brandon::
	trainerbattle_single TRAINER_BRANDON1, Route203_Text_BrandonIntro, Route203_Text_BrandonDefeated
	msgbox Route203_Text_BrandonPostBattle, MSGBOX_AUTOCLOSE
	end

Route204_North_EventScript_Taylor::
	trainerbattle_single TRAINER_TAYLOR, Route203_Text_TaylorIntro, Route203_Text_TaylorDefeated
	msgbox Route203_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end

Route204_North_EventScript_Liv::
	trainerbattle_double TRAINER_LIV_AND_LIZ, Route203_Text_LivIntro, Route203_Text_LivDefeated, Route203_Text_LivNotEnoughPokemon
	msgbox Route203_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route204_North_EventScript_Liz::
	trainerbattle_double TRAINER_LIV_AND_LIZ, Route203_Text_LizIntro, Route203_Text_LizDefeated, Route203_Text_LizNotEnoughPokemon
	msgbox Route203_Text_LizPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_Text_BrandonIntro:
	.string "Let's Battle!$"
Route203_Text_BrandonDefeated:
	.string "I lost!$"
Route203_Text_BrandonPostBattle::
	.string "Bye, see you later!$"

Route203_Text_TaylorIntro:
	.string "Let's Battle!$"
Route203_Text_TaylorDefeated:
	.string "I lost!$"
Route203_Text_TaylorPostBattle::
	.string "Bye, see you later!$"

Route203_Text_LivIntro:
	.string "Let's Battle!$"
Route203_Text_LivDefeated:
	.string "I lost!$"
Route203_Text_LivPostBattle::
	.string "Bye, see you later!$"
Route203_Text_LivNotEnoughPokemon::
	.string "You need at least two Pokémon to battle us!$"

Route203_Text_LizIntro:
	.string "Let's Battle!$"
Route203_Text_LizDefeated:
	.string "I lost!$"
Route203_Text_LizPostBattle::
	.string "Bye, see you later!$"
Route203_Text_LizNotEnoughPokemon::
	.string "You need at least two Pokémon to battle us!$"
