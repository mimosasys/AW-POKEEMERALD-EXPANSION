AW_PortMulberry_MapScripts::
	.byte 0


PortMulberry_LeaveLab::
# 6 "data/maps/AW_PortMulberry/scripts.pory"
	lockall
# 7 "data/maps/AW_PortMulberry/scripts.pory"
	pokenavcall PortMulberry_LeaveLab_Text_0
# 15 "data/maps/AW_PortMulberry/scripts.pory"
	waitmessage
# 16 "data/maps/AW_PortMulberry/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 12
# 17 "data/maps/AW_PortMulberry/scripts.pory"
	setflag FLAG_AW_VISIT_MULBERRY
# 18 "data/maps/AW_PortMulberry/scripts.pory"
	setflag FLAG_AW_HIDE_CARLA_AVERY
# 19 "data/maps/AW_PortMulberry/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 20 "data/maps/AW_PortMulberry/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 21 "data/maps/AW_PortMulberry/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_3
# 22 "data/maps/AW_PortMulberry/scripts.pory"
	releaseall
	return


PortMulberry_LeaveLab_Text_0:
# 8 "data/maps/AW_PortMulberry/scripts.pory"
	.string "Avery: {PLAYER}! That you? Looks like\n"
	.string "you got the PokéNav, then.\p"
	.string "Good job!\p"
	.string "You met Gear, then? They've been a\n"
	.string "good friend of mine for years.\p"
	.string "Their knowledge in Pokémon DNA is\n"
	.string "unmatched. Though they do tend to\l"
	.string "be a bit... anxious?\p"
	.string "Anyway, Carla and I are heading off\n"
	.string "to Puce Lake, just south of here.\p"
	.string "There's already a few people there,\n"
	.string "and apparently we're onto something\l"
	.string "big.\p"
	.string "Feel free to look around the place\n"
	.string "before coming around.\p"
	.string "I'll show you the ropes when\n"
	.string "you get here, so to speak.\p"
	.string "Okay, {PLAYER}, see you soon!$"
