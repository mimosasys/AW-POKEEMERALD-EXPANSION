AW_PuceCity_PokeCenter_MapScripts::
# 2 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PuceCity_PokeCenter_OnTransition
# 3 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PuceCity_PokeCenter_OnTransition::
# 7 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_AW_PUCE_CITY
	end


PuceCity_PokeCenter_NPC1::
# 12 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	lockall
# 13 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	faceplayer
# 14 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	msgbox PuceCity_PokeCenter_NPC1_Text_0
# 19 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	waitmessage
# 20 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	releaseall
	return


PuceCity_PokeCenter_NPC2::
# 24 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	lockall
# 25 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	faceplayer
# 26 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	msgbox PuceCity_PokeCenter_NPC2_Text_0
# 31 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	waitmessage
# 32 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	applymovement 3, LookUp
# 33 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	releaseall
	return


PuceCity_PokeCenter_NPC1_Text_0:
# 15 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	.string "The spirits seem at peace today.\p"
	.string "Maybe in your travels you'll go to the\n"
	.string "Spirit Valley.\p"
	.string "Tell those there I said hello.$"

PuceCity_PokeCenter_NPC2_Text_0:
# 27 "data/maps/AW_PuceCity_PokeCenter/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...This show sucks.$"
