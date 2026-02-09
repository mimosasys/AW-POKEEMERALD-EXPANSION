AW_Route108_Laboratory_MapScripts::
# 2 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route108_Laboratory_FinishTut
# 3 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 3, Route108_Laboratory_OnWarp
	.2byte 0


Route108_Laboratory_FinishTut::
# 9 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 9
	goto_if_ge Route108_Laboratory_FinishTut_1
	return

Route108_Laboratory_FinishTut_1:
# 10 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
	return


Route108_Laboratory_OnWarp::
# 15 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special StopMapMusic
# 16 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_TOPAZ_LAB
# 17 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 21 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 22 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GetUp
# 23 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 24 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 26 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 27 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8001, 2
# 28 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 29 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 32 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 33 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 34 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 35 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 36 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 37 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 38 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 40 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 41 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 42 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 46 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 47 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 48 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 49 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 40
# 50 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 51 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 52 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 53 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 58 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 59 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 60 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 62 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 67 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 68 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 71 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 72 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 73 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 75 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 80 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 81 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 83 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 85 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 86 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 87 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 93 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 94 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 97 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 98 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 99 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 104 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 108 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 109 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 110 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 113 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 114 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 115 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 116 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 121 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 124 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 125 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 126 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 127 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 128 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 129 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 134 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 135 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 136 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 137 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 138 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 140 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 141 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 142 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 145 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 146 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 147 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 149 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 155 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 156 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 159 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 160 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 161 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 162 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 2
# 163 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 2, MAP_AW_ROUTE108_LABORATORY
# 164 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 1
# 165 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 1, MAP_AW_ROUTE108_LABORATORY
# 166 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 167 "data/maps/AW_Route108_Laboratory/scripts.pory"
	warp MAP_AW_TOPAZ_LAB, 1
# 169 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 170 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 174 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 175 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 176 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_TalkCarla::
# 267 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 268 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 269 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 275 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 281 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 284 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 287 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 270 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 273 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 276 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 279 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


Route108_Laboratory_HealMachine::
# 291 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 292 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 293 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 294 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_TOPAZ_LAB
# 295 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special HealPlayerParty
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_HEAL
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 299 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 300 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 304 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 308 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 315 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 316 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 316 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 323 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 324 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 327 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookRight:
# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 331 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
	step_end

# 340 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 342 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 345 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 345 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
	step_end

# 349 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 354 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 355 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 355 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_up
	step_end

# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 363 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 364 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 364 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 30 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 43 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 54 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 100 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 122 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Ah, {PLAYER}. Well, you are something\n"
	.string "of an enigma, that's for sure. It's\l"
	.string "lovely to make your acquaintaince.\p"
	.string "I think you should stay here a while,\n"
	.string "just to make sure you recover properly.\p"
	.string "Vibrava caught you, but I can't say\n"
	.string "whether or not you were hurt on the way\l"
	.string "down.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_10:
# 143 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Great idea, Carla. Here,\n"
	.string "{PLAYER}, follow me.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 271 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 277 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 282 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
