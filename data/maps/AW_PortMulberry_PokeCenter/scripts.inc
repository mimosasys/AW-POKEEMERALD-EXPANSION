AW_PortMulberry_PokeCenter_MapScripts::
# 2 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortMulberry_PokeCenter_OnTransition
# 3 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PortMulberry_PokeCenter_OnTransition::
# 7 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_AW_PORT_MULBERRY
	end


PortMulberry_PokeCenter_NPC1::
# 12 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	lockall
# 13 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	faceplayer
# 14 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox PortMulberry_PokeCenter_NPC1_Text_0
# 20 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmessage
# 21 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	releaseall
	return


PortMulberry_PokeCenter_NPC2::
# 25 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	lockall
# 26 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	faceplayer
# 27 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox PortMulberry_PokeCenter_NPC2_Text_0
# 34 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmessage
# 35 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	applymovement 3, LookUp
# 36 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	releaseall
	return


AW_CommonPokeCenter::
# 40 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	lockall
# 41 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	hidefollower
# 42 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox AW_CommonPokeCenter_Text_0, MSGBOX_YESNO
# 46 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmessage
# 47 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AW_CommonPokeCenter_2
AW_CommonPokeCenter_1:
# 65 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox AW_CommonPokeCenter_Text_3
# 68 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmessage
# 69 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 70 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmovement 0
# 71 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	releaseall
	return

AW_CommonPokeCenter_2:
# 48 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox AW_CommonPokeCenter_Text_1
# 51 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	delay 30
# 52 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	applymovement 1, WalkLeftSpot
# 53 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmovement 0
# 54 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 55 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	special HealPlayerParty
# 56 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	closemessage
# 57 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 58 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 59 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	applymovement 1, WalkDownSpot
# 60 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	msgbox AW_CommonPokeCenter_Text_2
# 63 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	waitmessage
	goto AW_CommonPokeCenter_1


PortMulberry_PokeCenter_NPC1_Text_0:
# 15 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "Ah! A young trainer!\p"
	.string "'ow lovely to see! It iz wonderful...\p"
	.string "I am Martine, a travelling chef from\n"
	.string "Kalos.\p"
	.string "A long way to travel, non?$"

PortMulberry_PokeCenter_NPC2_Text_0:
# 28 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "Woah! I didn't hear you coming, I was so\n"
	.string "engrossed in this book!\p"
	.string "What book is it?\p"
	.string "'{COLOR BLUE}House {COLOR DARK_GRAY}of Leavanny'.\p"
	.string "Ugh, it makes my head spin...\p"
	.string "But I can't stop reading!$"

AW_CommonPokeCenter_Text_0:
# 43 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "Hi, welcome to the Pokémon Center!\p"
	.string "Would you like us to heal your Pokémon?$"

AW_CommonPokeCenter_Text_1:
# 49 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "Sure, let me just take those from you...$"

AW_CommonPokeCenter_Text_2:
# 61 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "There we are, all happy and healthy!$"

AW_CommonPokeCenter_Text_3:
# 66 "data/maps/AW_PortMulberry_PokeCenter/scripts.pory"
	.string "We hope to see you again!$"
