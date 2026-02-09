AW_PuceCity_MapScripts::
	.byte 0


PuceCity_Artist::
# 6 "data/maps/AW_PuceCity/scripts.pory"
	lockall
# 7 "data/maps/AW_PuceCity/scripts.pory"
	applymovement 3, EmoteExclamation
# 8 "data/maps/AW_PuceCity/scripts.pory"
	waitmovement 0
# 9 "data/maps/AW_PuceCity/scripts.pory"
	msgbox PuceCity_Artist_Text_0
# 14 "data/maps/AW_PuceCity/scripts.pory"
	waitmessage
# 15 "data/maps/AW_PuceCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp1
# 16 "data/maps/AW_PuceCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/AW_PuceCity/scripts.pory"
	releaseall
	return


PuceCity_CantGetIntoGym::
# 21 "data/maps/AW_PuceCity/scripts.pory"
	lockall
# 22 "data/maps/AW_PuceCity/scripts.pory"
	applymovement 4, FacePlayer
# 23 "data/maps/AW_PuceCity/scripts.pory"
	compare VAR_AW_PROGRESS_2, 3
	goto_if_lt PuceCity_CantGetIntoGym_2
# 36 "data/maps/AW_PuceCity/scripts.pory"
	msgbox PuceCity_CantGetIntoGym_Text_1
# 43 "data/maps/AW_PuceCity/scripts.pory"
	waitmessage
# 44 "data/maps/AW_PuceCity/scripts.pory"
	warpdoor MAP_AW_PUCE_CITY_GYM, 0
PuceCity_CantGetIntoGym_1:
# 48 "data/maps/AW_PuceCity/scripts.pory"
	releaseall
	return

PuceCity_CantGetIntoGym_2:
# 24 "data/maps/AW_PuceCity/scripts.pory"
	msgbox PuceCity_CantGetIntoGym_Text_0
# 32 "data/maps/AW_PuceCity/scripts.pory"
	waitmessage
# 33 "data/maps/AW_PuceCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown1
# 34 "data/maps/AW_PuceCity/scripts.pory"
	waitmovement 0
	goto PuceCity_CantGetIntoGym_1


PuceCity_FinishGym::
	return


# 55 "data/maps/AW_PuceCity/scripts.pory"
WalkUp1:
# 56 "data/maps/AW_PuceCity/scripts.pory"
	walk_up
	step_end

PuceCity_Artist_Text_0:
# 10 "data/maps/AW_PuceCity/scripts.pory"
	.string "Ah! No, no, no!\p"
	.string "Please, don't go past! I am making a\n"
	.string "magnificent artwork!\p"
	.string "I need complete stillness... No\n"
	.string "passers-by! Back you go!$"

PuceCity_CantGetIntoGym_Text_0:
# 25 "data/maps/AW_PuceCity/scripts.pory"
	.string "Hey, kid! Wanting to challenge the gym?\p"
	.string "Oh, you aren't registered with the\n"
	.string "league...\p"
	.string "You're going to need to do that before\n"
	.string "you can challenge Brooke.\p"
	.string "Sorry, pal.\p"
	.string "Actually, Brooke's not even here right\n"
	.string "now.\p"
	.string "She's off at the lake. Maybe see if she\n"
	.string "can help you out?$"

PuceCity_CantGetIntoGym_Text_1:
# 37 "data/maps/AW_PuceCity/scripts.pory"
	.string "Hey, sorry, I can't let you in unless\n"
	.string "you're set up with the Pokémon league.\p"
	.string "Oh, Brooke said she'll sort it out?\p"
	.string "Great! She's just gotten back now!\p"
	.string "Head on in, and good luck with the gym!$"
