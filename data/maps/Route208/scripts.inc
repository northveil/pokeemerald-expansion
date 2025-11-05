Route208_MapScripts::
	.byte 0


Route203_EventScript_Robert::
	trainerbattle_single TRAINER_ROBERT, Route203_Text_RobertIntro, Route203_Text_RobertDefeated
	msgbox Route203_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Alexander::
	trainerbattle_single TRAINER_ALEXANDER, Route203_Text_AlexanderIntro, Route203_Text_AlexanderDefeated
	msgbox Route203_Text_AlexanderPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Jonathan::
	trainerbattle_single TRAINER_JONATHAN, Route203_Text_JonathanIntro, Route203_Text_JonathanDefeated
	msgbox Route203_Text_JonathanPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE, Route203_Text_KyleIntro, Route203_Text_KyleDefeated
	msgbox Route203_Text_KylePostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Cody::
	trainerbattle_single TRAINER_CODY, Route203_Text_CodyIntro, Route203_Text_CodyDefeated
	msgbox Route203_Text_CodyPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, Route203_Text_HannahIntro, Route203_Text_HannahDefeated
	msgbox Route203_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, Route203_Text_WilliamIntro, Route203_Text_WilliamDefeated
	msgbox Route203_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

Route203_Text_RobertIntro:
	.string "Let's Battle!$"
Route203_Text_RobertDefeated:
	.string "I lost!$"
Route203_Text_RobertPostBattle::
	.string "Bye, see you later!$"

Route203_Text_AlexanderIntro:
	.string "Let's Battle!$"
Route203_Text_AlexanderDefeated:
	.string "I lost!$"
Route203_Text_AlexanderPostBattle::
	.string "Bye, see you later!$"

Route203_Text_JonathanIntro:
	.string "Let's Battle!$"
Route203_Text_JonathanDefeated:
	.string "I lost!$"
Route203_Text_JonathanPostBattle::
	.string "Bye, see you later!$"

Route203_Text_KyleIntro:
	.string "Let's Battle!$"
Route203_Text_KyleDefeated:
	.string "I lost!$"
Route203_Text_KylePostBattle::
	.string "Bye, see you later!$"

Route203_Text_CodyIntro:
	.string "Let's Battle!$"
Route203_Text_CodyDefeated:
	.string "I lost!$"
Route203_Text_CodyPostBattle::
	.string "Bye, see you later!$"

Route203_Text_HannahIntro:
	.string "Let's Battle!$"
Route203_Text_HannahDefeated:
	.string "I lost!$"
Route203_Text_HannahPostBattle::
	.string "Bye, see you later!$"

Route203_Text_WilliamIntro:
	.string "Let's Battle!$"
Route203_Text_WilliamDefeated:
	.string "I lost!$"
Route203_Text_WilliamPostBattle::
	.string "Bye, see you later!$"
