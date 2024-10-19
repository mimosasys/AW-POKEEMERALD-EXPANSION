AW_PuceCity_MapScripts::
	.byte 0


PuceCity_Artist::
# 6 "data/maps/AW_PuceCity/scripts.pory"
	lockall
# 7 "data/maps/AW_PuceCity/scripts.pory"
	applymovement 3, EmoteExclamationMark
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


# 20 "data/maps/AW_PuceCity/scripts.pory"
EmoteExclamationMark:
# 21 "data/maps/AW_PuceCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/AW_PuceCity/scripts.pory"
WalkUp1:
# 25 "data/maps/AW_PuceCity/scripts.pory"
	walk_up
	step_end

PuceCity_Artist_Text_0:
# 10 "data/maps/AW_PuceCity/scripts.pory"
	.string "Ah! No, no, no!\p"
	.string "Please, don't go past! I am making a\n"
	.string "magnificent artwork!\p"
	.string "I need complete stillness... No\n"
	.string "passers-by! Back you go!$"
