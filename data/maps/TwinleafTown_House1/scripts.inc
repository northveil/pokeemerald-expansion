TwinleafTown_House1_MapScripts::
	.byte 0

TwinleafTown_House1_EventScript_Man::
	msgbox TwinleafTown_House1_Text_OfftoHang, MSGBOX_NPC
	release
	end

TwinleafTown_House1_Text_OfftoHang:
	.string "You're off to hang with {RIVAL}\n"
	.string "again, right? You two sure are tight!$"
