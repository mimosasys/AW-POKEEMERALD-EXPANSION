AW_EIGOGROTTO_MapScripts::
# 2 "data/maps/AW_EIGOGROTTO/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_EIGOGROTTO_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_EIGOGROTTO_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_EIGOGROTTO/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 2, EigoGrotto_Intro
	.2byte 0


EigoGrotto_Intro::
# 8 "data/maps/AW_EIGOGROTTO/scripts.pory"
	lockall
# 10 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp1
# 11 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, WalkUp1
# 12 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 14 "data/maps/AW_EIGOGROTTO/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WalkUp2
# 17 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, WalkDownSpot
# 18 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 19 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 20 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 21 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_0
# 24 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 25 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 27 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, WalkDownSpot
# 28 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 29 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 30 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 31 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_1
# 34 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 35 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 37 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 30
# 39 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, WalkDownSpot
# 40 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 41 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 42 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 43 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_2
# 46 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 47 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 49 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, WalkUp1
# 50 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 51 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_3
# 55 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 56 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 58 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, OracleDance1
# 59 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, OracleDance2
# 60 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, OracleDance3
# 61 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 62 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, FaceDown
# 63 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_4
# 66 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 67 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 69 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, OracleDance2
# 70 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, OracleDance3
# 71 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, OracleDance1
# 72 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 73 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, FaceDown
# 74 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_5
# 77 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 78 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 80 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, OracleDance3
# 81 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, OracleDance1
# 82 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, OracleDance2
# 83 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 84 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, FaceDown
# 85 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_6
# 88 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 89 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 91 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, WalkDown1
# 92 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, WalkDownSpot
# 93 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, WalkDownSpot
# 94 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 95 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_7
# 99 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 100 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 102 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, WalkDownSpot
# 103 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 104 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 105 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 106 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_8
# 109 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 110 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 112 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, WalkDownSpot
# 113 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 114 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 115 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 116 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_9
# 119 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 120 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 122 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 30
# 124 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, WalkDownSpot
# 125 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 126 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_BELLY_DRUM
# 127 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitse
# 128 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_10
# 133 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 134 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 136 "data/maps/AW_EIGOGROTTO/scripts.pory"
	playse SE_M_HEAL_BELL
# 138 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 60
# 140 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WalkDown2
# 141 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 143 "data/maps/AW_EIGOGROTTO/scripts.pory"
	special RemoveCameraObject
# 145 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 32
# 147 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, LookLeft
# 148 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 149 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 32
# 150 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, FaceRight
# 151 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 152 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 32
# 154 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_11
# 161 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 162 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 164 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, FaceRight
# 165 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookLeft
# 166 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 167 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 8
# 168 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, LookUp
# 169 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 170 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 171 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 16
# 173 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, WalkUp3
# 174 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp3
# 175 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, WalkUp2
# 176 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, WalkUp2
# 177 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, WalkUp2
# 178 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 180 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_12
# 186 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 187 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 189 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, FaceDown
# 190 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmovement 0
# 192 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_13
# 198 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 199 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 201 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_14
# 204 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 90
# 205 "data/maps/AW_EIGOGROTTO/scripts.pory"
	closemessage
# 207 "data/maps/AW_EIGOGROTTO/scripts.pory"
	special StopMapMusic
# 208 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8004, 2
# 209 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8005, 6
# 210 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8006, 6
# 211 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8007, 10
# 212 "data/maps/AW_EIGOGROTTO/scripts.pory"
	special ShakeCamera
# 213 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitstate
# 214 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 30
# 216 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShakeSurprise
# 217 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, ShakeSurprise
# 218 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, ShakeSurprise
# 219 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, ShakeSurprise
# 220 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, ShakeSurprise
# 222 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_15
# 225 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 227 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8004, 2
# 228 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8005, 6
# 229 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8006, 6
# 230 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_0x8007, 10
# 231 "data/maps/AW_EIGOGROTTO/scripts.pory"
	special ShakeCamera
# 232 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitstate
# 233 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 30
# 235 "data/maps/AW_EIGOGROTTO/scripts.pory"
	message EigoGrotto_Intro_Text_16
# 239 "data/maps/AW_EIGOGROTTO/scripts.pory"
	waitmessage
# 241 "data/maps/AW_EIGOGROTTO/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 1, EveryoneLeaveGrotto
# 244 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 2, EveryoneLeaveGrotto
# 245 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 3, EveryoneLeaveGrotto
# 246 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement 4, EveryoneLeaveGrotto
# 247 "data/maps/AW_EIGOGROTTO/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryoneLeaveGrotto
# 249 "data/maps/AW_EIGOGROTTO/scripts.pory"
	delay 60
# 250 "data/maps/AW_EIGOGROTTO/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 252 "data/maps/AW_EIGOGROTTO/scripts.pory"
	warpsilent MAP_AW_MT_EIGO_APPROACH, 0
# 254 "data/maps/AW_EIGOGROTTO/scripts.pory"
	releaseall
	return


# 257 "data/maps/AW_EIGOGROTTO/scripts.pory"
WalkUp2:
# 258 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_up
# 258 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_up
	step_end

# 261 "data/maps/AW_EIGOGROTTO/scripts.pory"
WalkUp3:
# 262 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_up
# 262 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_up
# 262 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_up
	step_end

# 265 "data/maps/AW_EIGOGROTTO/scripts.pory"
OracleDance1:
# 266 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_right
# 266 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_right
# 267 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_down
# 267 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_down
# 268 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_down
# 269 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_left
# 270 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_up
# 271 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_right
	step_end

# 274 "data/maps/AW_EIGOGROTTO/scripts.pory"
OracleDance2:
# 275 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_left
# 275 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_left
# 275 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_left
# 275 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_left
# 276 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_up
# 277 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_right
# 278 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_down
# 279 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_left
	step_end

# 282 "data/maps/AW_EIGOGROTTO/scripts.pory"
OracleDance3:
# 283 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_up
# 283 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_up
# 284 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_right
# 284 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_slow_right
# 285 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_up
# 286 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_right
# 287 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_down
# 288 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_left
	step_end

# 291 "data/maps/AW_EIGOGROTTO/scripts.pory"
FaceDown:
# 292 "data/maps/AW_EIGOGROTTO/scripts.pory"
	face_down
	step_end

# 295 "data/maps/AW_EIGOGROTTO/scripts.pory"
EveryoneLeaveGrotto:
# 296 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_down
# 296 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_down
# 296 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_down
# 296 "data/maps/AW_EIGOGROTTO/scripts.pory"
	walk_down
	step_end

EigoGrotto_Intro_Text_0:
# 22 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "By the generosity of the owners of the\n"
	.string "land before us...\p"
	.string "$"

EigoGrotto_Intro_Text_1:
# 32 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "In the name of this wondrous mountain\n"
	.string "we call home...\p"
	.string "$"

EigoGrotto_Intro_Text_2:
# 44 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "It is once again time to share our\n"
	.string "history...!\p"
	.string "$"

EigoGrotto_Intro_Text_3:
# 52 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "You are not the first, and you shall not\n"
	.string "be the last!\p"
	.string "That is what it means to have tradition!\p"
	.string "$"

EigoGrotto_Intro_Text_4:
# 64 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "But, surely you must know...!\p"
	.string "$"

EigoGrotto_Intro_Text_5:
# 75 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "You must make your own ways in this\n"
	.string "world...!\p"
	.string "$"

EigoGrotto_Intro_Text_6:
# 86 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "You must learn from those before you...!\p"
	.string "$"

EigoGrotto_Intro_Text_7:
# 96 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Heed our words, yes! Yet, find your own\n"
	.string "voice!\p"
	.string "That is what it means to have spirit!$"

EigoGrotto_Intro_Text_8:
# 107 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Spirit - from one's awareness!\p"
	.string "$"

EigoGrotto_Intro_Text_9:
# 117 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Spirit - from one's memories!\p"
	.string "$"

EigoGrotto_Intro_Text_10:
# 129 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Spirit - from the depths of one's own\n"
	.string "mind!\p"
	.string "That is the esteemed wisdom of the\n"
	.string "elders before us, and those before\l"
	.string "them...\p"
	.string "Have spirit, young ones, for only then\n"
	.string "will you become the one you were meant\l"
	.string "to be!\p"
	.string "$"

EigoGrotto_Intro_Text_11:
# 155 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Welcome, children.\p"
	.string "That was an ancient performance,\n"
	.string "carried through our village for\l"
	.string "generations.\p"
	.string "It is tradition that once you come of\n"
	.string "age, this performance is shared with\l"
	.string "you.\p"
	.string "You may relax. It is tradition to do it...\n"
	.string "well, suddenly, you see.\p"
	.string "Come, there is much history to be\n"
	.string "shared, kept safe within these very\l"
	.string "walls.\p"
	.string "$"

EigoGrotto_Intro_Text_12:
# 181 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Many thousands of years ago, this land\n"
	.string "was barren, and untouched.\p"
	.string "Slowly, life from across the world\n"
	.string "gathered here, driven by the ocean\l"
	.string "currents and blown by the strong winds.\p"
	.string "Many, many miles did they travel, and\n"
	.string "their weary eyes were met with the\l"
	.string "coasts of the land we all call home.\p"
	.string "But bloom life did, and so sprung up\n"
	.string "culture, and community, and peoples.\p"
	.string "$"

EigoGrotto_Intro_Text_13:
# 193 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "And ours is a people that is tied to this\n"
	.string "very mountain. This very cave.\p"
	.string "For, there are always those who dwell\n"
	.string "too much on the past. On their regrets.\l"
	.string "On how things should have been.\p"
	.string "And some of those people try gather\n"
	.string "power to change that, guided solely by\l"
	.string "selfish reasoning.\p"
	.string "People such as those have awareness,\n"
	.string "yes, and memories, yes, but have not yet\l"
	.string "looked internally at themselves.\p"
	.string "$"

EigoGrotto_Intro_Text_14:
# 202 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "Many hundreds of years ago now, a\n"
	.string "tragedy struck-$"

EigoGrotto_Intro_Text_15:
# 223 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "A- an earthquake...?\p"
	.string "$"

EigoGrotto_Intro_Text_16:
# 236 "data/maps/AW_EIGOGROTTO/scripts.pory"
	.string "We mustn't stay here, children.\p"
	.string "Come, back to the village, quickly...!\p"
	.string "$"
