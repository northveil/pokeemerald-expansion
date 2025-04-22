Route201_MapScripts::
	.byte 0

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

Route201_Text_PokemonLurkInTallGrass::
	.string "Wild Pokémon lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So if you're wanting to battle wild\n"
	.string "Pokémon, just walk in tall grass.$"

Route201_Text_IfYourMonsHPisLow::
	.string "If your Pokémon's health--that's its\n"
	.string "HP--is getting low, you should go\p"
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
