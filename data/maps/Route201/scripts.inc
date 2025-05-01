Route201_MapScripts::
	.byte 0

Route201_EventScript_Barry1::
	msgbox Route201_Text_DontGoInTallGrass, MSGBOX_NPC
	release
	end

Route201_EventScript_Boy1::
	msgbox Route201_Text_PokemonLurkInTallGrass, MSGBOX_NPC
	release
	end

Route201_EventScript_Boy2::
	msgbox Route201_Text_LedgesAreOneWay, MSGBOX_NPC
	release
	end

Route201_EventScript_Girl::
	msgbox Route201_Text_IfYourMonsHPisLow, MSGBOX_NPC
	release
	end

Route201_EventScript_MartEmployee::
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, Route201_EventScript_GivePotion
	msgbox Route201_Text_YouCanFindPokemarts, MSGBOX_NPC
	release
	end

Route201_EventScript_GivePotion::
	msgbox Route201_Text_IWorkAtAPokeMart, MSGBOX_NPC
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, Route201_EventScript_BagIsFull
	setflag FLAG_RECEIVED_POTION_OLDALE
	release
	end

Route201_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Route201_Text_TooSlow:
	.string "Too slow!\p"
	.string "{RIVAL}: All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_Text_DontGoInTallGrass:
	.string "{RIVAL}:...\n"
	.string "...\p"
	.string "What?\n"
	.string "Don't go in the tall grass, right?\l"
	.string "No worries! No problem!\p"
	.string "It doesn't matter that we don't have any Pokémon.\p"
	.string "Trust me on this one.\n"
	.string "I've got an idea!\p"
	.string "Now listen. You know how wild Pokémon\n"
	.string "jump out when you go into tall grass?\p"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "Okay, stick with me!\p"
	.string "Okay, here goes!\p"
	.string "On your marks...$"

Route201_Text_HoldIt:
	.string "HOLD IT!$"

Route201_Text_YouTwoDontHave:
	.string "Professor: You two don't seem to have\n"
	.string "any Pokémon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!\p"
	.string "{RIVAL}:...\n"
	.string "...\p"
	.string "Professor:...\n"
	.string "...\l"
	.string "...$"

Route201_Text_HeyPlayer:
	.string "{RIVAL}: Hey, {PLAYER}.\n"
	.string "This old guy...\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here...?$"

Route201_Text_TheyTriedToGo:
	.string "Professor:...\n"
	.string "...\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted Pokémon...\p"
	.string "Hmm..\n"
	.string "What to do...?\p"
	.string "Their world would surely change if\n"
	.string "they were to meet Pokémon...\p"
	.string "Is it right for me to put them on that\n"
	.string "path...?\p"
	.string "...\n"
	.string "...$"

Route201_Text_YouTrulyLovePokemon:
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_Text_LovePokemon:
	.string "{RIVAL}:Me too!\n"
	.string "I love Pokémon, too!"
	.string "Professor: I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_Text_YouCanAskAHundred:
	.string "{RIVAL}: What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times,\n"
	.string "we love Pokémon!$"

Route201_Text_RightPlayer:
	.string "Right, {PLAYER}?$"

Route201_Text_ACoupleOfKids:
	.string "Professor: A couple of kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with Pokémon.$"

Route201_Text_BarryUhh:
	.string "{RIVAL}: ...Uh...\n"
	.string "Well, I, uhh...\p"
	.string "...\n"
	.string "...\p"
	.string "Well, then forget about me, but give\n"
	.string "a Pokémon to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...\p"
	.string "Professor:!\p"
	.string "How big of you...\p"
	.string "Very well, then!\n"
	.string "I will entrust you two with Pokémon!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourselves again.\n"
	.string "Now, then...\p"
	.string "Hm?\n"
	.string "Now, where...?$"

Route201_Text_DawnIntro:
	.string "Dawn: Rowan!\p"
	.string "You left your briefcase at the lake!\p"
	
Route201_Text_ThatJokesGettingOld:
	.string "{RIVAL}: ...\n"
	.string "That joke's getting old!$"

Route201_Text_DontLovePokemon:
	.string "{RIVAL}: Whoa, hold up!\n"
	.string "You're not making any sense here!\p"

Route201_Text_ErHem:
	.string "Professor: Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_Text_PokemonLurkInTallGrass::
	.string "Wild Pokémon lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So if you're wanting to battle wild\n"
	.string "Pokémon, just walk in tall grass.$"

Route201_Text_IfYourMonsHPisLow::
	.string "If your Pokémon's health--that's its\n"
	.string "HP--is getting low, you should go\l"
	.string "to a Pokémon Center!$"

Route201_Text_LedgesAreOneWay::
	.string "That ledge is one way. Jump down\n"
	.string "for a shortcut to Twinleaf Town!$"

Route201_Text_IWorkAtAPokeMart::
	.string "Hi!\n"
	.string "I work at a Pokémart.\p"
	.string "Did you know that a Pokémon's health\n"
	.string "is measured by Hit Points (HP)?\p"
	.string "If a Pokémon runs out of HP, it\n"
	.string "faints and can't battle anymore.\p"
	.string "if a Pokémon's HP gets low, you\n"
	.string "should restore it with a Potion.\p"
	.string "Here, let me give you a Potion as\n"
	.string "free sample. First one's free!\p"
	.string "It will automatically go in the\n"
	.string "Medicine Pocket of your Bag.$"

Route201_Text_YouCanFindPokemarts::
	.string "You can find Pokémarts in cities\n"
	.string "and most major towns.$"
