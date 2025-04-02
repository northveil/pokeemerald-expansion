Route218Gate_MapScripts::
	.byte 0

Route218Gate_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, Route218Gate_EventScript_FishingAdvice
	msgbox Route218Gate_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route218Gate_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, Route218Gate_EventScript_NotGettingItchToFish
	end

Route218Gate_EventScript_GiveOldRod::
	msgbox Route218Gate_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox Route218Gate_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

Route218Gate_EventScript_NotGettingItchToFish::
	msgbox Route218Gate_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

Route218Gate_EventScript_FishingAdvice::
	msgbox Route218Gate_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

Route218Gate_Text_GettingItchToFish::
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

Route218Gate_Text_GiveYouOneOfMyRods::
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing RODS.$"

Route218Gate_Text_ThrowInFishingAdvice::
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

Route218Gate_Text_ThatsTooBadThen::
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"



