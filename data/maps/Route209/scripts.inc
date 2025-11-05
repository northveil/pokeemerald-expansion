Route209_MapScripts::
	.byte 0

Route209_EventScript_GoodRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route209_EventScript_ReceivedGoodRod
	msgbox Route209_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route209_EventScript_ReceiveGoodRod
	goto_if_eq VAR_RESULT, NO, Route209_EventScript_DeclineGoodRod
	end

Route209_EventScript_ReceiveGoodRod::
	msgbox Route209_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox Route209_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	release
	end

Route209_EventScript_DeclineGoodRod::
	msgbox Route209_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

Route209_EventScript_ReceivedGoodRod::
	msgbox Route209_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

	
Route209_Text_YouAgreeGoodRodIsGood:
	.string "Hmm!\n"
	.string "A GOOD ROD is really good!\p"
	.string "Wouldn't you agree?$"

Route209_Text_IdenticalMindsTakeThis:
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this GOOD ROD!$"

Route209_Text_TryYourLuckFishing:
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route209_Text_DontYouLikeToFish:
	.string "Don't you like to fish?$"

Route209_Text_TryCatchingMonWithGoodRod:
	.string "Try catching all sorts of POKéMON\n"
	.string "with your GOOD ROD.$"
