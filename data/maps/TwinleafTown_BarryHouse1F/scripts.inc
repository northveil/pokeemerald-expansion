TwinleafTown_BarryHouse1F_MapScripts::
	.byte 0

TwinleafTown_BarryHouse1F_EventScript_BarryMom::
	msgbox TwinleafTown_BarryHouse1F_Text_OhHi, MSGBOX_NPC
	release
	end

TwinleafTown_BarryHouse1F_Text_OhHi:
	.string "{RIVAL}'s mom: Oh hi,\n"
	.string "{PLAYER}.\p"
	.string "Are you looking for {RIVAL}?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_BarryHouse1F_Text_ThatKid:
	.string "{RIVAL}'s mom: That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on \n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
