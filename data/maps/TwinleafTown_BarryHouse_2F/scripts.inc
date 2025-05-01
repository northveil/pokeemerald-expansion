TwinleafTown_BarryHouse_2F_MapScripts::
	.byte 0

TwinleafTown_BarryHouse_2F_EventScript_Barry::
	msgbox TwinleafTown_BarryHouse_2F_Text_IdBetterTake, MSGBOX_NPC
	msgbox TwinleafTown_BarryHouse_2F_Text_OhHey, MSGBOX_NPC
	release
	end

TwinleafTown_BarryHouse_2F_Text_IdBetterTake:
	.string "{RIVAL}: ...I'd better take\n"
	.string "my Bag and Journal, too...$"

TwinleafTown_BarryHouse_2F_Text_OhHey:
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late!$"
