AW_Route108_Laboratory_MapScripts::
# 2 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 3, Route108_Laboratory_OnWarp
	.2byte 0


Route108_Laboratory_OnWarp::
# 8 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special StopMapMusic
# 9 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108_LOWER
# 10 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 14 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 15 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GetUp
# 16 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 17 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 19 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 20 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 21 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 24 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 25 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 26 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 27 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 28 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 29 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 30 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 32 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 33 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 34 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 38 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 39 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 40 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 40
# 42 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 43 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 44 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 45 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 48 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 49 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 50 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 51 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 52 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 54 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 55 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 59 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 60 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 62 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 67 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 68 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 69 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 72 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 73 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 75 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 79 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 83 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 85 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 86 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 87 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 89 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 90 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 94 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 98 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 99 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 100 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 101 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 105 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 108 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 110 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 112 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 113 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 116 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 117 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 121 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 125 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 126 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 127 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 128 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 129 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 132 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 134 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 137 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 138 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 139 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 141 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 142 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 143 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 147 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 148 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 149 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 154 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 155 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 156 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 159 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 160 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 161 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 165 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 166 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 167 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 168 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 169 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 172 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 174 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 175 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 179 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 180 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 181 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 182 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 183 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 186 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 187 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 188 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 189 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


# 192 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 193 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 194 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 195 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_Yay::
# 286 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 287 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 290 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 293 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 294 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 295 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 299 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 300 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 301 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 302 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 309 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 313 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 314 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 2
# 315 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 316 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
# 317 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 291 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 322 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 323 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 324 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 327 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


Route108_Laboratory_HealMachine::
# 345 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 347 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 348 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108_LOWER
# 349 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special HealPlayerParty
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_HEAL
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 354 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 362 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 365 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 366 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 366 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 369 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 370 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 370 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 373 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 374 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 377 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 378 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 388 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 396 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 405 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 406 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 409 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 410 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 410 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 22 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 35 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 46 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 80 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 114 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 122 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Ah, {PLAYER}. Well, you are\n"
	.string "something of an enigma, that's for sure.\l"
	.string "It's lovely to make your acquaintaince.\p"
	.string "I think you should stay here a while,\n"
	.string "just to make sure you recover properly.\p"
	.string "Vibrava caught you, but I can't say\n"
	.string "whether or not you were hurt on the way\l"
	.string "down.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_10:
# 135 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 144 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 170 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 184 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 288 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 325 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 331 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
