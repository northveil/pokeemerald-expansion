.set LOCALID_CYNTHIA, 4
.set LOCALID_BARRY, 5

EternaCity_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EternaCity_EventScripts_OnLoad
	.byte 0

EternaCity_EventScripts_OnLoad:
	setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE 
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
	end

EternaCity_EventScript_BarryTrigger0:
EternaCity_EventScript_BarryTrigger1:
EternaCity_EventScript_BarryTrigger2:
EternaCity_EventScript_BarryTrigger3:

EternaCity_EventScript_Barry::
	@@Barry walks to the statue to meet cyrus
	setvar VAR_ETERNA_CITY_STATE, 1
	release
	end

EternaCity_EventScript_CynthiaTrigger0::
	setvar VAR_0x8008, 0
	addobject LOCALID_CYNTHIA
	setobjectxy LOCALID_CYNTHIA, 23, 12
	goto EternaCity_EventScripts_CynthiaCut
	end
EternaCity_EventScript_CynthiaTrigger1::
	setvar VAR_0x8008, 1
	addobject LOCALID_CYNTHIA
	setobjectxy LOCALID_CYNTHIA, 23, 13
	goto EternaCity_EventScripts_CynthiaCut
	end
EternaCity_EventScript_CynthiaTrigger2::
	setvar VAR_0x8008, 2
	addobject LOCALID_CYNTHIA
	setobjectxy LOCALID_CYNTHIA, 23, 14
	goto EternaCity_EventScripts_CynthiaCut
	end
EternaCity_EventScript_CynthiaTrigger3::
	setvar VAR_0x8008, 3
	addobject LOCALID_CYNTHIA
	setobjectxy LOCALID_CYNTHIA, 23, 15
	goto EternaCity_EventScripts_CynthiaCut
	end
EternaCity_EventScripts_CynthiaCut::
	@@Cynthia gives you CUT after you talk to barry
	applymovement LOCALID_CYNTHIA, EternaCity_Movement_CynthiaWalkToPlayer
	delay 60
	playse SE_PIN
	waitmovement LOCALID_CYNTHIA
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	msgbox EternaCity_Text_CynthiaThatDevice, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_CYNTHIA, EternaCity_Movement_CynthiaLookTowardStatue
	waitmovement 0
	msgbox EternaCity_Text_CynthiaHereInEterna, MSGBOX_DEFAULT
	waitmessage
	giveitem ITEM_HM01
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_HM_CUT
	msgbox EternaCity_Text_CynthiaRemember, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setvar VAR_ETERNA_CITY_STATE, 2
	goto_if_lt VAR_0x8008, 3, EternaCity_EventScripts_CynthiaWalkAway1
	goto EternaCity_EventScripts_CynthiaWalkAway2
	end

EternaCity_EventScripts_CynthiaWalkAway1::
	applymovement LOCALID_CYNTHIA, EternaCity_Movement_CynthiaWalkAwayFromPlayer1
	waitmovement 0
	removeobject LOCALID_CYNTHIA
	release
	end

EternaCity_EventScripts_CynthiaWalkAway2::
	applymovement LOCALID_CYNTHIA, EternaCity_Movement_CynthiaWalkAwayFromPlayer2
	waitmovement 0
	removeobject LOCALID_CYNTHIA
	release
	end

EternaCity_EventScripts_Cynthia2::
	@@Cynthia gives you togepi egg after you beat galactic and get the bike

EternaCity_Movement_CynthiaWalkToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
EternaCity_Movement_CynthiaLookTowardStatue:
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	step_end
EternaCity_Movement_CynthiaWalkAwayFromPlayer1:
	@@walk down and around player
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
EternaCity_Movement_CynthiaWalkAwayFromPlayer2:
	@@walk up and around player
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
EternaCity_Text_BarryThud:
	.string "THUD!!\p"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "You came to see the Pokémon statue,\n"
	.string "right? I'll take you there!$"

EternaCity_Text_BarryWhatThe:
	.string "{RIVAL}: What the...$"

EternaCity_Text_Cyrus:
	.string "Cyrus: ...So, this is Eterna's Pokémon\n"
	.string "statue\p"
	.string "Shaping our world are time and space\n"
	.string "in an intertwining sprial.\p"
	.string "Revered in Sinnoh are the Pokémon of\n"
	.string "time and space...\p"
	.string "Sinnoh's myth...\n"
	.string "Its truth needs investigation...$"

EternaCity_Text_PardonMe:
	.string "...Pardon me.\n"
	.string "Stand aside.$"

EternaCity_Text_BarryOhHey:
	.string "{RIVAL}: Oh, hey!\p"
	.string "When we smacked together, a brilliant\n"
	.string "flash of inspiration came to me!\p"
	.string "An easy way to become a great Trainer!\n"
	.string "Yeah, that!\p"
	.string "All right.\n"
	.string "Listen close...\p"
	.string "Make certain all your attacks hit!\n"
	.string "Avoid enemy attacks for sure!\p"
	.string "You do that, you'd never lose!\n"
	.string "You'd be the invincible Trainer!\p"
	.string "Anyway, go check out the Pokémon\n"
	.string "statue. See you around!$"

EternaCity_Text_CynthiaThatDevice:
	.string "Oh, that device you have...\p"
	.string "It is a Pokédex?\n"
	.string "Wow, it brings back some memories.\p"
	.string "Pardon me, but what's your name?\p"
	.string "...\p"
	.string "OK, hello, {PLAYER}.\n"
	.string "I'll be sure to remember that name!\p"
	.string "My name is Cynthia.\n"
	.string "I'm a Trainer just like you.\p"
	.string "I've been studying Pokémon mythology\n"
	.string "lately, just out of curiosity.$"

EternaCity_Text_CynthiaHereInEterna:
	.string "Here in Eterna City, there is a statue\n"
	.string "of an ancient Pokémon.\p"
	.string "Have you seen it already?\p"
	.string "According to myth, it was an extremely\n"
	.string "powerful Pokémon.\p"
	.string "Who knows? You may encounter something\n"
	.string "like it while you're traveling with your\l"
	.string "Pokédex.\p"
	.string "Oh, I know! Try using this.\n"
	.string "It should be helpful.$"

EternaCity_Text_CynthiaRemember:
	.string "Cynthia: Remember, the hidden move\n"
	.string "Cut can be used in the field.\p"
	.string "It will let you go places that were\n"
	.string "previously inaccessible to you.\p"
	.string "That's important for filling up your\n"
	.string "Pokédex, right?\p"
	.string "Then luck be with you, young Trainer!\p"
	.string "Oh, there's one last thing!\n"
	.string "Please give my regards to Prof. Rowan.$"
