AW_PuceLake_MapScripts::
# 2 "data/maps/AW_PuceLake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PuceLake_MeetAvery_OnTransition
	.byte 0


PuceLake_MeetAvery_OnTransition::
# 6 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 7 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 8 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_3
	end


PuceLake_MeetAvery::
# 13 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 14 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 15 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_0
# 18 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 19 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 20 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaGotoPlayer
# 21 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryGotoPlayer
# 22 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 24 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_1
# 29 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 30 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkUpSpot
# 31 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 32 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_2
# 36 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 37 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkDownSpot
# 38 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 39 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_3
# 43 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 44 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 45 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, FaceRight
# 46 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_4
# 52 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 53 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 54 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 55 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_5
# 62 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 63 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 64 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 65 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 66 "data/maps/AW_PuceLake/scripts.pory"
	giveitem ITEM_POTION, 5
# 67 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 68 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 69 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_6
# 72 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 73 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 74 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 75 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 76 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 77 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 78 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_7
# 81 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 82 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 83 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_8
# 87 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 88 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 89 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer2
# 90 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 92 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 93 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_1
# 94 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 95 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 96 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 97 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_9
# 100 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 101 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 102 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer
# 103 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 104 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PuceLake_MeetAvery_2
# 107 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer3
PuceLake_MeetAvery_1:
# 109 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 110 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 111 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 112 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_10
# 121 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 122 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 123 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, EmoteExclamation
# 124 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 125 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_11
# 129 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 130 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 131 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, LookDown
# 132 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 133 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_12
# 136 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 137 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 138 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 139 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 140 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 141 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_13
# 145 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 146 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 147 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 148 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeft1
# 149 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 150 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_14
# 154 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 156 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE
# 157 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 4
# 158 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 5
# 159 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetAvery_2:
# 105 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer2
	goto PuceLake_MeetAvery_1


PuceLake_MikeTalk::
# 164 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 165 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 166 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_2
# 167 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 2
# 169 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 6, MAP_AW_PUCE_LAKE
# 170 "data/maps/AW_PuceLake/scripts.pory"
	addobject 10
# 172 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer4
# 173 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 174 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq PuceLake_MikeTalk_2
# 179 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer6
# 180 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 181 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
PuceLake_MikeTalk_1:
# 183 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MikeTalk_Text_0
# 199 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 200 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MikeTalk_2:
# 175 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer5
# 176 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 177 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
	goto PuceLake_MikeTalk_1


PuceLake_MeetCarla::
# 205 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 10
# 206 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 207 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_3
# 208 "data/maps/AW_PuceLake/scripts.pory"
	addobject 11
# 209 "data/maps/AW_PuceLake/scripts.pory"
	addobject 12
# 210 "data/maps/AW_PuceLake/scripts.pory"
	addobject 13
# 212 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 213 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, WalkRightSpot
# 214 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 215 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_0
# 219 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 220 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 221 "data/maps/AW_PuceLake/scripts.pory"
	playfanfare SE_USE_ITEM
# 222 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 223 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeftSpot
# 225 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_1
# 230 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 231 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 233 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer7
# 234 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 235 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_2
# 239 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer9
# 240 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_1:
# 243 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_2
# 246 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 247 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 248 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkLeftSpot
# 249 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 251 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_3
# 258 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 259 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 260 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 261 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 262 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, LookUp
# 263 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 264 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 265 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_4
# 270 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 271 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 272 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 273 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1Enter
# 274 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2Enter
# 275 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 13
# 276 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_5
# 281 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 282 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkRightSpot
# 283 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkRightSpot
# 284 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 285 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_6
# 289 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 290 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 291 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, WalkRightSpot
# 292 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 293 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_7
# 297 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, WalkLeftSpot
# 298 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_8
# 306 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 307 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FacePlayer
# 308 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 309 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_6
# 313 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 314 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_5:
# 316 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_9
# 320 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 321 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 323 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_ALPACOIL, PuceLake_MeetCarla_10
# 325 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_SMACKOP, PuceLake_MeetCarla_11
# 328 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_PUPPIXY, PuceLake_MikeLose
PuceLake_MeetCarla_9:
# 331 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 332 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_16
# 336 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkDownSpot
# 337 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_15:
# 340 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 341 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_10
# 344 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 345 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 346 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, WalkLeftSpot
# 347 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 348 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_11
# 352 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 353 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 355 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1MakeWay
# 356 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2MakeWay
# 357 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 358 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGetOut
# 359 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 360 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1ComeBack
# 361 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2ComeBack
# 363 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_12
# 366 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 367 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 369 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_20
# 373 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, PuceLake_CarlaJoin2
# 374 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_19:
# 377 "data/maps/AW_PuceLake/scripts.pory"
	playfanfare SE_USE_ITEM
# 378 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 379 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 381 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_13
# 385 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 386 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 388 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAMJADE_GRUNT_PUCELAKE, PuceLake_GruntLose
# 390 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 391 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 393 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, WalkLeftSpot
# 394 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 395 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_14
# 398 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 399 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 400 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, WalkLeftSpot
# 401 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 402 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_15
# 405 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 406 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 408 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 410 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, LookDown
# 411 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, LookUp
# 412 "data/maps/AW_PuceLake/scripts.pory"
	delay 40
# 413 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, LookLeft
# 414 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, LookLeft
# 415 "data/maps/AW_PuceLake/scripts.pory"
	delay 80
# 417 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_GruntsRun
# 418 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntsRun
# 419 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_16
# 422 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 13
# 423 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 424 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 426 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 427 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 428 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 429 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FaceLeft
# 430 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 431 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 432 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_17
# 435 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 436 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 438 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntGrabMike1
# 439 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 440 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_18
# 444 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 445 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntGrabMike2
# 446 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_GruntGrabMike2
# 447 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_19
# 450 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 451 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookUp
# 452 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 453 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 454 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 456 "data/maps/AW_PuceLake/scripts.pory"
	playbgm AW_MUS_PUCE_LAKE, TRUE
# 458 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 460 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_20
# 464 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 466 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_24
# 470 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookDown
# 471 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_23:
# 474 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_21
# 479 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 481 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookLeft
# 482 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookLeft
# 483 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 485 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_22
# 489 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 492 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 3
# 493 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_3
# 494 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 495 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 496 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 11
# 497 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 12
# 498 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 13
# 500 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_28
# 503 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 14, 35, 22
PuceLake_MeetCarla_27:
# 505 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetCarla_2:
# 236 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer8
# 237 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_1

PuceLake_MeetCarla_6:
# 310 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 311 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_5

PuceLake_MeetCarla_10:
# 324 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_ALPACOIL, PuceLake_MikeLose
	goto PuceLake_MeetCarla_9

PuceLake_MeetCarla_11:
# 326 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_SMACKOP, PuceLake_MikeLose
	goto PuceLake_MeetCarla_9

PuceLake_MeetCarla_16:
# 333 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkUpSpot
# 334 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_15

PuceLake_MeetCarla_20:
# 370 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, PuceLake_CarlaJoin1
# 371 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_19

PuceLake_MeetCarla_24:
# 467 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 468 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_23

PuceLake_MeetCarla_28:
# 501 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 14, 35, 23
	goto PuceLake_MeetCarla_27


PuceLake_TalkWendy::
# 510 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 511 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 512 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkWendy_Text_0
# 524 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 525 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_TalkCarla::
# 529 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 530 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 531 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkCarla_Text_0
# 535 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 536 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger4_Left::
# 540 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 0
# 541 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_Trigger4_Right::
# 545 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 1
# 546 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_GetToDigSite::
# 550 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 551 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, FacePlayer
# 552 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 553 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_0
# 560 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 561 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 563 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 564 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_1
# 573 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 574 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, LookDown
# 575 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 576 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_2
# 582 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 583 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 585 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 587 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist1
# 588 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 589 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 590 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_3
# 593 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 594 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, WalkDownSpot
# 595 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 596 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_4
# 600 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 602 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist2
# 603 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, PuceLake_AveryFollowScientist
# 604 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery1
# 605 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 606 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 607 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq PuceLake_GetToDigSite_2
# 611 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery3
PuceLake_GetToDigSite_1:
# 613 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 615 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_5
# 620 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 622 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, EmoteQuestion
# 623 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 624 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 625 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, EmoteExclamation
# 626 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 628 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_6
# 635 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 637 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, WalkRightSpot
# 638 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 640 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_7
# 643 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 645 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, PuceLake_AveryGotoPlayer2
# 646 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 647 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 648 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 650 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_8
# 659 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 660 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 662 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 663 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 665 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerGotoLeave
# 669 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE2
# 670 "data/maps/AW_PuceLake/scripts.pory"
	setmetatile 21, 35, 0x071, FALSE
# 671 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 672 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 673 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 674 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerLeave
# 675 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 676 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 16, PuceLake_WendyGotoPlayer
# 677 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 679 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_9
# 687 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 688 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 690 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 16, PuceLake_WendyLeave
# 692 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 4
# 693 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 9
# 694 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 695 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 16, 0, 0
# 696 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 16
# 698 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return

PuceLake_GetToDigSite_2:
# 608 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery2
	goto PuceLake_GetToDigSite_1


PuceLake_DigSiteSign::
# 702 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 703 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DigSiteSign_Text_0, MSGBOX_SIGN
# 706 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 707 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet1::
# 711 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 712 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FacePlayer
# 713 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 714 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet1_Text_0
# 718 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 719 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 720 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 721 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet2::
# 725 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 726 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, FacePlayer
# 727 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 728 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet2_Text_0
# 732 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 733 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 734 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 735 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 739 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 740 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
	end


PuceLake_Trigger1_Lower::
# 745 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 746 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
	end


PuceLake_Trigger2_Upper::
# 751 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 0
# 752 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
	end


PuceLake_Trigger2_Lower::
# 757 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 1
# 758 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
	end


PuceLake_Trigger3_Upper::
# 763 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 0
# 764 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trigger3_Lower::
# 768 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 1
# 769 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trainer_SchoolgirlJessy::
# 773 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_SCHOOLKIDF_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 778 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 783 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_LASS_ADELA, LassAdelaIntro, LassAdelaOutro
	end


# 835 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaGotoPlayer:
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 836 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 837 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 840 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer:
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 841 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 842 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 845 "data/maps/AW_PuceLake/scripts.pory"
WalkDownSpot:
# 846 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
# 846 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
	step_end

# 849 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryLeavePlayer:
# 850 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 851 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 854 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer1:
# 855 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 858 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer2:
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 862 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 863 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 863 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 864 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 864 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 867 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 869 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 869 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 869 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 872 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 873 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 873 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 874 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 874 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 874 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 877 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 878 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 878 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 878 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 879 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 879 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 880 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 881 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 882 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 885 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 886 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 887 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 890 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 891 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 894 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer7:
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 896 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 897 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 897 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 897 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 900 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer8:
# 901 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 902 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 902 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 905 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer9:
# 906 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 906 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 909 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1Enter:
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 910 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 911 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 914 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2Enter:
# 915 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 915 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 915 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 915 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 916 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 917 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 917 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 917 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 917 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 918 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 921 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1MakeWay:
# 922 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 925 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1ComeBack:
# 926 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 930 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2MakeWay:
# 931 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 934 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2ComeBack:
# 935 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 936 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 939 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGetOut:
# 940 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 940 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 941 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 944 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin1:
# 945 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 945 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 948 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin2:
# 949 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 950 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 950 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 953 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntsRun:
# 954 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 954 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 954 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 955 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 956 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 956 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 956 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 956 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 956 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 959 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike1:
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 960 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
	step_end

# 963 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike2:
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 964 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 967 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist1:
# 968 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
# 969 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 970 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 971 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 972 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 973 "data/maps/AW_PuceLake/scripts.pory"
	emote_exclamation_mark
# 974 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 975 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 976 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 977 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 978 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 978 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 978 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 979 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 980 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 982 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 982 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 982 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
	step_end

# 985 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist2:
# 986 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 986 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 987 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 988 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 989 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 992 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryFollowScientist:
# 993 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 993 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 993 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 994 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 995 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 996 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 999 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery1:
# 1000 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1000 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1000 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1003 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery2:
# 1004 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1005 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1005 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1009 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery3:
# 1010 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1010 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1014 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer2:
# 1015 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 1016 "data/maps/AW_PuceLake/scripts.pory"
	face_player
	step_end

# 1019 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerGotoLeave:
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1020 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1023 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1023 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1023 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1023 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
	step_end

# 1026 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerLeave:
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1028 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1029 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1029 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1030 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 1033 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_WendyGotoPlayer:
# 1034 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1034 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1037 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_WendyLeave:
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1041 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1042 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1042 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1042 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 1045 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 1046 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 1049 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 1050 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 1053 "data/maps/AW_PuceLake/scripts.pory"
EmoteQuestion:
# 1054 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
	step_end

PuceLake_MeetAvery_Text_0:
# 16 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 25 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 33 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 40 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: It's important research, Carla.\n"
	.string "And besides, I can't just leave the lab\l"
	.string "unattended.\p"
	.string "Not with Team Jade about. They'll try\n"
	.string "steal our research again.$"

PuceLake_MeetAvery_Text_4:
# 47 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: Haven't heard of them,\n"
	.string "{PLAYER}? They're a fellow\l"
	.string "archaeology group that, instead of\l"
	.string "doing their own research, seem intent\l"
	.string "on stealing mine.\p"
	.string "They've been around for a few years,\n"
	.string "and they've had a few successes, too.\p"
	.string "It's really set us back a lot. That's\n"
	.string "part of the reason we're so\l"
	.string "short-staffed. So many of them have\l"
	.string "just... given up, really.\p"
	.string "But I'm not giving up. I don't care if we\n"
	.string "have funding or not. I'm going to\l"
	.string "uncover the history of this region.$"

PuceLake_MeetAvery_Text_5:
# 56 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: ...You can tell he's really\n"
	.string "passionate about this, can't you?\p"
	.string "Um, we'll head on down to the lakeside.\n"
	.string "You'll see the dig site on the south\l"
	.string "side.\p"
	.string "I'll give you the tour once we're there!\n"
	.string "I hope you're excited to see it!\p"
	.string "Oh, and here's a little gift from Avery\n"
	.string "and I.\p"
	.string "Consider it thanks for joining the team.\n"
	.string "I know it's not much, but...$"

PuceLake_MeetAvery_Text_6:
# 70 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: Er... yes. We'll get to it. See you in\n"
	.string "a bit, ok, {PLAYER}?$"

PuceLake_MeetAvery_Text_7:
# 79 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Uh, I don't mean to alarm you,\n"
	.string "but...$"

PuceLake_MeetAvery_Text_8:
# 84 "data/maps/AW_PuceLake/scripts.pory"
	.string "There's a boy behind you who's been\n"
	.string "staring at you this whole time.\p"
	.string "Do you know him?$"

PuceLake_MeetAvery_Text_9:
# 98 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: ...{PLAYER}?$"

PuceLake_MeetAvery_Text_10:
# 113 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}! O-oh my goodness! I-\n"
	.string "I thought- I thought you'd...\p"
	.string "I- I'm so glad you're alright!\p"
	.string "I thought I was going to die... and then\n"
	.string "this Pokémon swooped out of nowhere\l"
	.string "and saved me!\p"
	.string "When I woke up, I was in some\n"
	.string "laboratory, and this guy -\p"
	.string "Professor Conifer, that's his name -\p"
	.string "He made sure I was ok...\p"
	.string "I- I mean, I'm still a bit bruised, but...$"

PuceLake_MeetAvery_Text_11:
# 126 "data/maps/AW_PuceLake/scripts.pory"
	.string "N- no way! That's what happened to you,\n"
	.string "too?!\p"
	.string "...$"

PuceLake_MeetAvery_Text_12:
# 134 "data/maps/AW_PuceLake/scripts.pory"
	.string "That must have been him, then...$"

PuceLake_MeetAvery_Text_13:
# 142 "data/maps/AW_PuceLake/scripts.pory"
	.string "U- uh... Anyway!\p"
	.string "Let's walk together, ok? Take in the\n"
	.string "lakeside air!$"

PuceLake_MeetAvery_Text_14:
# 151 "data/maps/AW_PuceLake/scripts.pory"
	.string "Ow, on second thoughts, you go on\n"
	.string "ahead. My legs are still hurting...\p"
	.string "I'll catch up, ok?$"

PuceLake_MikeTalk_Text_0:
# 184 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: Phew! Made it!\p"
	.string "Gah... now my legs hurt again... I'm gonna\n"
	.string "rest for a bit...\p"
	.string "Wanna talk?\p"
	.string "I uh... When I got saved by that\n"
	.string "professor, he told me some things.\p"
	.string "He said that there's this other\n"
	.string "professor named Fern, and they're\l"
	.string "enemies.\p"
	.string "That's... that's the professor that\n"
	.string "saved you, isn't it?\p"
	.string "Just um... be careful around him, ok?\p"
	.string "Milo - that's Professor Conifer -\n"
	.string "doesn't trust him, and he told me not to\l"
	.string "either.\p"
	.string "He sounds pretty shady... he said they\n"
	.string "used to be close, but...\p"
	.string "They haven't talked in years, and now\n"
	.string "they're enemies.\p"
	.string "I wonder what happened between them?\p"
	.string "...\p"
	.string "You keep going ahead, ok?\p"
	.string "My legs still need a bit more time, hah...$"

PuceLake_MeetCarla_Text_0:
# 216 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Ah, there you are, {PLAYER}!\n"
	.string "How was the walk?\p"
	.string "Let me heal up that team of yours!$"

PuceLake_MeetCarla_Text_1:
# 226 "data/maps/AW_PuceLake/scripts.pory"
	.string "Who was that guy, by the way?\p"
	.string "Oh, a friend of yours? Neat!\p"
	.string "Looks like he's caught up with you. I'll\n"
	.string "say hi!$"

PuceLake_MeetCarla_Text_2:
# 244 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hi! You must be {PLAYER}'s\n"
	.string "friend, right?$"

PuceLake_MeetCarla_Text_3:
# 252 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: H-hi ma'am... Y-yes, that's right.\p"
	.string "Carla: Oh, don't be so formal, it's\n"
	.string "alright! I'm the assistant to Professor\l"
	.string "Avery Fern. He's an archaeologist from\l"
	.string "around here.\p"
	.string "Mike: Y-you're -\p"
	.string "Carla: And {PLAYER} here is helping\n"
	.string "out too! Avery asked her to help out\l"
	.string "with this dig site! Ain't that exciting?$"

PuceLake_MeetCarla_Text_4:
# 266 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}...? Y-you're helping\n"
	.string "him?\p"
	.string "He's shady! No good! That's what\n"
	.string "Conifer told me!\p"
	.string "I... What do I do?!$"

PuceLake_MeetCarla_Text_5:
# 277 "data/maps/AW_PuceLake/scripts.pory"
	.string "Jade Grunt 1: Ha-HA! Knew we'd find you\n"
	.string "lot here.\p"
	.string "Finding another important site, taking\n"
	.string "the contents for yourself...\p"
	.string "Jade Grunt 2: We simply won't let you!\n"
	.string "This site belongs to Team Jade!$"

PuceLake_MeetCarla_Text_6:
# 286 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: You guys..! You came!\p"
	.string "Grunt 1: Yes, yes, we heard, Mikey.$"

PuceLake_MeetCarla_Text_7:
# 294 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Team Jade! How did I know you\n"
	.string "guys would show up?\p"
	.string "{PLAYER}, it seems your friend here is\n"
	.string "with those Jade guys. That's not good\l"
	.string "for us.$"

PuceLake_MeetCarla_Text_8:
# 299 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 1: Listen here - what do you do\n"
	.string "with people standing in your way?\p"
	.string "Mike: ...?\p"
	.string "Grunt 2: You challenge them to a\n"
	.string "battle! The prof did give you a Pokémon,\l"
	.string "right?\p"
	.string "Mike: Y-yeah!\p"
	.string "Grunt 1: We'll deal with the assistant,\n"
	.string "you deal with the kid. Got it?\p"
	.string "Mike: I... ok..!$"

PuceLake_MeetCarla_Text_9:
# 317 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}, I...\p"
	.string "I challenge you to a battle!$"

PuceLake_MeetCarla_Text_10:
# 342 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I... I couldn't do it...$"

PuceLake_MeetCarla_Text_11:
# 349 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Well, kid, you did your best.\n"
	.string "That's important.\p"
	.string "It's alright, we'll handle this. Stand\n"
	.string "back.$"

PuceLake_MeetCarla_Text_12:
# 364 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 1: Alrighty then. Prepare to feel\n"
	.string "the power of Team Jade!$"

PuceLake_MeetCarla_Text_13:
# 382 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: I got your back, {PLAYER}.\p"
	.string "Fine, you menaces! We'll take you on!$"

PuceLake_MeetCarla_Text_14:
# 396 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 1: Aw jeez...$"

PuceLake_MeetCarla_Text_15:
# 403 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: You lost too...?$"

PuceLake_MeetCarla_Text_16:
# 420 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Gotta go!$"

PuceLake_MeetCarla_Text_17:
# 433 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}... I...$"

PuceLake_MeetCarla_Text_18:
# 441 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Hey, we have to report what\n"
	.string "happened to the prof!\p"
	.string "You're not gonna skimp duties, are ya?$"

PuceLake_MeetCarla_Text_19:
# 448 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}!...$"

PuceLake_MeetCarla_Text_20:
# 461 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Phew, at least that's taken care\n"
	.string "of.\p"
	.string "You're pretty good with your Pokémon,\n"
	.string "{PLAYER}. It'll be good to have you\l"
	.string "around.$"

PuceLake_MeetCarla_Text_21:
# 475 "data/maps/AW_PuceLake/scripts.pory"
	.string "Your friend seems like a nice guy,\n"
	.string "really.\p"
	.string "It's a shame he's caught up with those\n"
	.string "no-goods. I'm sure you'll see him again,\l"
	.string "don't worry.\p"
	.string "Now, finally - the dig site!$"

PuceLake_MeetCarla_Text_22:
# 486 "data/maps/AW_PuceLake/scripts.pory"
	.string "It's just over there. Avery should be\n"
	.string "sorting things out.\p"
	.string "Head over when you're ready, I\n"
	.string "understand if you might need a bit of a\l"
	.string "rest after all that!$"

PuceLake_TalkWendy_Text_0:
# 513 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hm? Hey, you're a young trainer!\p"
	.string "The name's Wendy, 'n I'm the gym leader\n"
	.string "of Puce City.\p"
	.string "You wanna challenge the gym, hey?\p"
	.string "'nfortunately, I can't just let anyone\n"
	.string "fight me out of the blue like this.\p"
	.string "You've gotta be registered with the\n"
	.string "league first, ya see.\p"
	.string "And, well, I'm sorta new to this whole\n"
	.string "gym leader thing.\p"
	.string "Look, it's tempting to just get straight\n"
	.string "into it, I admit, but there's all sorts of\l"
	.string "regulations and things I gotta follow.\p"
	.string "If ya wanna get registered, fly on over\n"
	.string "to the gym when I'm back.\p"
	.string "I'm just, uh, on my lunch break.\p"
	.string "Guess I'll see ya 'round?$"

PuceLake_TalkCarla_Text_0:
# 532 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery's just across there, at the dig\n"
	.string "site.\p"
	.string "Head over when you're ready!$"

PuceLake_GetToDigSite_Text_0:
# 554 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: Sounds like there was a commotion\n"
	.string "up there!\p"
	.string "You alright, {PLAYER}?\p"
	.string "I'll bet it was Team Jade, wasn't it?\p"
	.string "Looks like you and Carla managed to\n"
	.string "fend them off, though.\p"
	.string "Great job, really. They're real menaces,\n"
	.string "I'll say.$"

PuceLake_GetToDigSite_Text_1:
# 565 "data/maps/AW_PuceLake/scripts.pory"
	.string "Well, here we are. This is our dig site.\p"
	.string "We've managed to mark out the region of\n"
	.string "interest. Now we're into the important\l"
	.string "task of actually seeing what we've\l"
	.string "struck.\p"
	.string "You see, a kid from Puce City found a\n"
	.string "strange artefact on this very beach,\l"
	.string "and since we were close-by, he came to\l"
	.string "us.\p"
	.string "And, well, I was stunned. It looked\n"
	.string "hand-carved, but...\p"
	.string "As I'm sure you're aware, humans have\n"
	.string "only been in the --- Region for a few\l"
	.string "hundred years, because of how remote it\l"
	.string "is.\p"
	.string "So finding something as intricately\n"
	.string "designed as that? Dating back to as old\l"
	.string "as it was?\p"
	.string "Things like this are exactly why I came\n"
	.string "to --- in the first place, five years\l"
	.string "ago.$"

PuceLake_GetToDigSite_Text_2:
# 577 "data/maps/AW_PuceLake/scripts.pory"
	.string "I hate to say it, but our current dig\n"
	.string "team is a bit of a rag-tag group.\p"
	.string "We had to bring everyone together\n"
	.string "rather quickly.\p"
	.string "If I'm honest, this is the first dig\n"
	.string "we've had that I'm truly excited about.\p"
	.string "I've just got no idea what we'll find.$"

PuceLake_GetToDigSite_Text_3:
# 591 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: P-Professor...! I- I think\n"
	.string "I've found something of importance!$"

PuceLake_GetToDigSite_Text_4:
# 597 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: What is it?\p"
	.string "Scientist: O-over here...!$"

PuceLake_GetToDigSite_Text_5:
# 616 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: ...Do you see it?\p"
	.string "Fern: See what?\p"
	.string "Scientist: The... the carving...!$"

PuceLake_GetToDigSite_Text_6:
# 629 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: ...Oh my goodness.\p"
	.string "It... it's some sort of language. It has\n"
	.string "to be.\p"
	.string "The stone is... it's painted...!\p"
	.string "Terry, this is a major discovery!\p"
	.string "We have to get to work bringing this\n"
	.string "back to the lab!$"

PuceLake_GetToDigSite_Text_7:
# 641 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: Y-yes! Of course!$"

PuceLake_GetToDigSite_Text_8:
# 651 "data/maps/AW_PuceLake/scripts.pory"
	.string "Fern: {PLAYER}, sorry, this is a bit\n"
	.string "bigger than I was expecting.\p"
	.string "I was going to get you to help out with\n"
	.string "tagging things, just to start you off...\p"
	.string "But this has gotten way out of hand. I'm\n"
	.string "gonna have to ask you to let the\l"
	.string "professionals handle this one.\p"
	.string "A bit of a let down, I know, but just\n"
	.string "think!\p"
	.string "What have we just discovered? What\n"
	.string "secrets will we unearth?\p"
	.string "I'll uh... I'll call you when this is all\n"
	.string "sorted out.\p"
	.string "For now, just relax. We'll take care of\n"
	.string "this.$"

PuceLake_GetToDigSite_Text_9:
# 680 "data/maps/AW_PuceLake/scripts.pory"
	.string "Wendy: Hey! I, uh...\p"
	.string "I saw you take out those other trainers\n"
	.string "back there.\p"
	.string "You've got some guts, you know?\p"
	.string "If you want another challenge, head on\n"
	.string "over to my gym.\p"
	.string "I'll get you set up with the league\n"
	.string "registry and everything!\p"
	.string "Looks like my lunch break is over, so\n"
	.string "hopefully I'll see you there!$"

PuceLake_DigSiteSign_Text_0:
# 704 "data/maps/AW_PuceLake/scripts.pory"
	.string "- TEAM TOPAZ DIG SITE -\n"
	.string "Authorized Persons Only\p"
	.string "$"

PuceLake_DontLeaveYet1_Text_0:
# 715 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}? Come on, you go\n"
	.string "ahead.\p"
	.string "...My legs just hurt, that's all. I'll\n"
	.string "catch up.$"

PuceLake_DontLeaveYet2_Text_0:
# 729 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I'm alright, {PLAYER}, don't\n"
	.string "worry.\p"
	.string "I'll catch up!$"

SchoolgirlJessyIntro::
# 787 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 793 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 799 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 805 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 811 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 817 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"

PuceLake_MikeLose::
# 823 "data/maps/AW_PuceLake/scripts.pory"
	.string "{PLAYER}...!$"

PuceLake_GruntLose::
# 829 "data/maps/AW_PuceLake/scripts.pory"
	.string "Wah! No wonder the newbie lost!$"
