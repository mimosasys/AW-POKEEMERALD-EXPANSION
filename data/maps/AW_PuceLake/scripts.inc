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
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_6
# 70 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 71 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 72 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 73 "data/maps/AW_PuceLake/scripts.pory"
	special SetUnlockedPokedexFlags
# 74 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 75 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 76 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 77 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 78 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 79 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_7
# 82 "data/maps/AW_PuceLake/scripts.pory"
	giveitem ITEM_POTION, 5
# 83 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 84 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 85 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 86 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_8
# 89 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 90 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 91 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 92 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 93 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 94 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 95 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_9
# 98 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 99 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 100 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_10
# 104 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 105 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 106 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer2
# 107 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 109 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_1
# 111 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 112 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 113 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 114 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_11
# 117 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 118 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 119 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer
# 120 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 121 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PuceLake_MeetAvery_2
# 124 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer3
PuceLake_MeetAvery_1:
# 126 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 127 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 128 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 129 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_12
# 138 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 139 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 140 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, EmoteExclamation
# 141 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 142 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_13
# 146 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 147 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 148 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, LookDown
# 149 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 150 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_14
# 153 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 154 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 155 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 156 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 157 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 158 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_15
# 162 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 163 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 164 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 165 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeft1
# 166 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 167 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_16
# 171 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 173 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE
# 174 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 4
# 175 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 5
# 176 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetAvery_2:
# 122 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer2
	goto PuceLake_MeetAvery_1


PuceLake_MikeTalk::
# 181 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 182 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 183 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_2
# 184 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 2
# 186 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 6, MAP_AW_PUCE_LAKE
# 187 "data/maps/AW_PuceLake/scripts.pory"
	addobject 10
# 189 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer4
# 190 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 191 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq PuceLake_MikeTalk_2
# 196 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer6
# 197 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 198 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
PuceLake_MikeTalk_1:
# 200 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MikeTalk_Text_0
# 216 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 217 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MikeTalk_2:
# 192 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer5
# 193 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 194 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
	goto PuceLake_MikeTalk_1


PuceLake_MeetCarla::
# 222 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 10
# 223 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 224 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_3
# 225 "data/maps/AW_PuceLake/scripts.pory"
	addobject 11
# 226 "data/maps/AW_PuceLake/scripts.pory"
	addobject 12
# 227 "data/maps/AW_PuceLake/scripts.pory"
	addobject 13
# 229 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 230 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, WalkRightSpot
# 231 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 232 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_0
# 236 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 237 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 238 "data/maps/AW_PuceLake/scripts.pory"
	playfanfare SE_USE_ITEM
# 239 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 240 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 241 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeftSpot
# 242 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_1
# 247 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 248 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 250 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer7
# 251 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 252 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_2
# 256 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer9
# 257 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_1:
# 260 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_2
# 263 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 264 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 265 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkLeftSpot
# 266 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 268 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_3
# 275 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 276 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 277 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 278 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 279 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, LookUp
# 280 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 281 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 282 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_4
# 287 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 288 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 289 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 290 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1Enter
# 291 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2Enter
# 292 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 13
# 293 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_5
# 298 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 299 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkRightSpot
# 300 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkRightSpot
# 301 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 302 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_6
# 306 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 307 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 308 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, WalkRightSpot
# 309 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 310 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_7
# 314 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, WalkLeftSpot
# 315 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_8
# 323 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 324 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FacePlayer
# 325 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 326 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_6
# 330 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 331 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_5:
# 333 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_9
# 337 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 338 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 340 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_ALPACOIL, PuceLake_MeetCarla_10
# 342 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_SMACKOP, PuceLake_MeetCarla_11
# 345 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_PUPPIXY, PuceLake_MikeLose
PuceLake_MeetCarla_9:
# 348 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 349 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_16
# 353 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkDownSpot
# 354 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_15:
# 357 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 358 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_10
# 361 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 362 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 363 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, WalkLeftSpot
# 364 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 365 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_11
# 369 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 370 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 372 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1MakeWay
# 373 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2MakeWay
# 374 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 375 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGetOut
# 376 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 377 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1ComeBack
# 378 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt2ComeBack
# 380 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_12
# 383 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 384 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 386 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_20
# 390 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, PuceLake_CarlaJoin2
# 391 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_19:
# 394 "data/maps/AW_PuceLake/scripts.pory"
	playfanfare SE_USE_ITEM
# 395 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 396 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 398 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_13
# 402 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 403 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 405 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAMJADE_GRUNT_PUCELAKE, PuceLake_GruntLose
# 407 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 408 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 410 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, WalkLeftSpot
# 411 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 412 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_14
# 415 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 416 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 417 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, WalkLeftSpot
# 418 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 419 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_15
# 422 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 423 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 425 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 427 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, LookDown
# 428 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, LookUp
# 429 "data/maps/AW_PuceLake/scripts.pory"
	delay 40
# 430 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, LookLeft
# 431 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, LookLeft
# 432 "data/maps/AW_PuceLake/scripts.pory"
	delay 80
# 434 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_GruntsRun
# 435 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntsRun
# 436 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_16
# 439 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 13
# 440 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 441 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 443 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 444 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 445 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 446 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FaceLeft
# 447 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 448 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 449 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_17
# 452 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 453 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 455 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntGrabMike1
# 456 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 457 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_18
# 461 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 462 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_GruntGrabMike2
# 463 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_GruntGrabMike2
# 464 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_19
# 467 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 468 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookUp
# 469 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 470 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 471 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 473 "data/maps/AW_PuceLake/scripts.pory"
	playbgm AW_MUS_PUCE_LAKE, TRUE
# 475 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 477 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_20
# 481 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 483 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_24
# 487 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookDown
# 488 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_23:
# 491 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_21
# 496 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 498 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookLeft
# 499 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, LookLeft
# 500 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 502 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_22
# 506 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 509 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 3
# 510 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_3
# 511 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 512 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 513 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 11
# 514 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 12
# 515 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 13
# 517 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_28
# 520 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 14, 35, 22
PuceLake_MeetCarla_27:
# 522 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetCarla_2:
# 253 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer8
# 254 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_1

PuceLake_MeetCarla_6:
# 327 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 328 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_5

PuceLake_MeetCarla_10:
# 341 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_ALPACOIL, PuceLake_MikeLose
	goto PuceLake_MeetCarla_9

PuceLake_MeetCarla_11:
# 343 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_MIKE_PUCELAKE_SMACKOP, PuceLake_MikeLose
	goto PuceLake_MeetCarla_9

PuceLake_MeetCarla_16:
# 350 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkUpSpot
# 351 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_15

PuceLake_MeetCarla_20:
# 387 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, PuceLake_CarlaJoin1
# 388 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_19

PuceLake_MeetCarla_24:
# 484 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookDown
# 485 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_23

PuceLake_MeetCarla_28:
# 518 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 14, 35, 23
	goto PuceLake_MeetCarla_27


PuceLake_TalkWendy::
# 527 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 528 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 529 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkWendy_Text_0
# 541 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 542 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_TalkCarla::
# 546 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 547 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 548 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkCarla_Text_0
# 552 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 553 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger4_Left::
# 557 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 0
# 558 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_Trigger4_Right::
# 562 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 1
# 563 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_GetToDigSite::
# 567 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 568 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, FacePlayer
# 569 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 570 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_0
# 577 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 578 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 579 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 580 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 581 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_1
# 590 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 591 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, LookDown
# 592 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 593 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_2
# 599 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 600 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 602 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 604 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist1
# 605 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 606 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 607 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_3
# 610 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 611 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, WalkDownSpot
# 612 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 613 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_4
# 617 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 619 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist2
# 620 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, PuceLake_AveryFollowScientist
# 621 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery1
# 622 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 623 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 624 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq PuceLake_GetToDigSite_2
# 628 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery3
PuceLake_GetToDigSite_1:
# 630 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 632 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_5
# 637 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 639 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, EmoteQuestion
# 640 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 641 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 642 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, EmoteExclamation
# 643 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 645 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_6
# 652 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 654 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, WalkRightSpot
# 655 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 657 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_7
# 660 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 662 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, PuceLake_AveryGotoPlayer2
# 663 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 664 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 665 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 667 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_8
# 676 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 677 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 679 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 680 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 682 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerGotoLeave
# 686 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE2
# 687 "data/maps/AW_PuceLake/scripts.pory"
	setmetatile 21, 35, 0x071, FALSE
# 688 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 689 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 690 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 691 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerLeave
# 692 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 693 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 16, PuceLake_WendyGotoPlayer
# 694 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 696 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_9
# 704 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 705 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 707 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 16, PuceLake_WendyLeave
# 709 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 4
# 710 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 9
# 711 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 712 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 16, 0, 0
# 713 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 16
# 715 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return

PuceLake_GetToDigSite_2:
# 625 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery2
	goto PuceLake_GetToDigSite_1


PuceLake_DigSiteSign::
# 719 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 720 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DigSiteSign_Text_0, MSGBOX_SIGN
# 723 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 724 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet1::
# 728 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 729 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FacePlayer
# 730 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 731 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet1_Text_0
# 735 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 736 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 737 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 738 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet2::
# 742 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 743 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, FacePlayer
# 744 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 745 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet2_Text_0
# 749 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 750 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 751 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 752 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 756 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 757 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
	end


PuceLake_Trigger1_Lower::
# 762 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 763 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
	end


PuceLake_Trigger2_Upper::
# 768 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 0
# 769 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
	end


PuceLake_Trigger2_Lower::
# 774 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 1
# 775 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
	end


PuceLake_Trigger3_Upper::
# 780 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 0
# 781 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trigger3_Lower::
# 785 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 1
# 786 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trainer_SchoolgirlJessy::
# 790 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_SCHOOLKIDF_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 795 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 800 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_LASS_ADELA, LassAdelaIntro, LassAdelaOutro
	end


# 852 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaGotoPlayer:
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 853 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 854 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 857 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer:
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 858 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 859 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 862 "data/maps/AW_PuceLake/scripts.pory"
WalkDownSpot:
# 863 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
# 863 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
	step_end

# 866 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryLeavePlayer:
# 867 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 868 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 871 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer1:
# 872 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 875 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer2:
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 876 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 879 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 880 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 880 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 881 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 881 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 884 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 885 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 886 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 886 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 886 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 889 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 890 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 890 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 891 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 891 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 891 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 894 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 895 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 896 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 896 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 897 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 898 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 899 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 902 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 903 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 904 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 907 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 908 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 911 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer7:
# 912 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 912 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 912 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 913 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 914 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 914 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 914 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 917 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer8:
# 918 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 919 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 919 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 922 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer9:
# 923 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 923 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 926 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1Enter:
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 927 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 928 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 931 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2Enter:
# 932 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 932 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 932 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 932 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 933 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 934 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 934 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 934 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 934 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 935 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 938 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1MakeWay:
# 939 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 942 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1ComeBack:
# 943 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 944 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 947 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2MakeWay:
# 948 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 951 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2ComeBack:
# 952 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 953 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 956 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGetOut:
# 957 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 957 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 958 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 961 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin1:
# 962 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 962 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 965 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin2:
# 966 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 967 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 967 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 970 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntsRun:
# 971 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 971 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 971 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 972 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 973 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 973 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 973 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 973 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 973 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 976 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike1:
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 977 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
	step_end

# 980 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike2:
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 981 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 984 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist1:
# 985 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
# 986 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 987 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 988 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 989 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 990 "data/maps/AW_PuceLake/scripts.pory"
	emote_exclamation_mark
# 991 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 992 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 993 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 994 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 995 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 995 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 995 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 996 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 997 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 998 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 998 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 999 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 999 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 999 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
	step_end

# 1002 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist2:
# 1003 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 1003 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 1004 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 1005 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 1006 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 1009 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryFollowScientist:
# 1010 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1010 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1010 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1011 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1012 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1013 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 1016 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery1:
# 1017 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1017 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1017 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1020 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery2:
# 1021 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1022 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1026 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery3:
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1027 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1031 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer2:
# 1032 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 1033 "data/maps/AW_PuceLake/scripts.pory"
	face_player
	step_end

# 1036 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerGotoLeave:
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1037 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1038 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1039 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 1040 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
	step_end

# 1043 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerLeave:
# 1044 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1044 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1044 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1044 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1045 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1046 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1046 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 1047 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 1050 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_WendyGotoPlayer:
# 1051 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1051 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 1054 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_WendyLeave:
# 1055 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1055 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1055 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1056 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1057 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1057 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1057 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1058 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 1059 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1059 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 1059 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 1062 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 1063 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 1066 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 1067 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 1070 "data/maps/AW_PuceLake/scripts.pory"
EmoteQuestion:
# 1071 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
	step_end

PuceLake_MeetAvery_Text_0:
# 16 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 25 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 33 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 40 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} It's important research, Carla.\n"
	.string "And besides, I can't just leave the lab\l"
	.string "unattended.\p"
	.string "Not with Team Jade about. They'll try\n"
	.string "steal our research again.$"

PuceLake_MeetAvery_Text_4:
# 47 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Haven't heard of them,\n"
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
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} ...You can tell he's really\n"
	.string "passionate about this, can't you?\p"
	.string "Um, we'll head on down to the lakeside.\n"
	.string "You'll see the dig site on the south\l"
	.string "side.\p"
	.string "I'll give you the tour once we're there!\n"
	.string "I hope you're excited to see it!\p"
	.string "Oh, and here's a little gift from Avery\n"
	.string "and I.\p"
	.string "I'm sure you'll find it useful. He helped\n"
	.string "make it himself, actually.$"

PuceLake_MeetAvery_Text_6:
# 68 "data/maps/AW_PuceLake/scripts.pory"
	.string "Recieved the {COLOR RED}Pokédex{COLOR DARK_GRAY} from Professor\n"
	.string "Avery!$"

PuceLake_MeetAvery_Text_7:
# 80 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} And here's a little something\n"
	.string "from me. It's nothing, really.$"

PuceLake_MeetAvery_Text_8:
# 87 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Er... yes. We'll get to it. See you in\n"
	.string "a bit, ok, {PLAYER}?$"

PuceLake_MeetAvery_Text_9:
# 96 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Uh, I don't mean to alarm you,\n"
	.string "but...$"

PuceLake_MeetAvery_Text_10:
# 101 "data/maps/AW_PuceLake/scripts.pory"
	.string "There's a boy behind you who's been\n"
	.string "staring at you this whole time.\p"
	.string "Do you know him?$"

PuceLake_MeetAvery_Text_11:
# 115 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: ...{PLAYER}?$"

PuceLake_MeetAvery_Text_12:
# 130 "data/maps/AW_PuceLake/scripts.pory"
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

PuceLake_MeetAvery_Text_13:
# 143 "data/maps/AW_PuceLake/scripts.pory"
	.string "N- no way! That's what happened to you,\n"
	.string "too?!\p"
	.string "...$"

PuceLake_MeetAvery_Text_14:
# 151 "data/maps/AW_PuceLake/scripts.pory"
	.string "That must have been him, then...$"

PuceLake_MeetAvery_Text_15:
# 159 "data/maps/AW_PuceLake/scripts.pory"
	.string "U- uh... Anyway!\p"
	.string "Let's walk together, ok? Take in the\n"
	.string "lakeside air!$"

PuceLake_MeetAvery_Text_16:
# 168 "data/maps/AW_PuceLake/scripts.pory"
	.string "Ow, on second thoughts, you go on\n"
	.string "ahead. My legs are still hurting...\p"
	.string "I'll catch up, ok?$"

PuceLake_MikeTalk_Text_0:
# 201 "data/maps/AW_PuceLake/scripts.pory"
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
# 233 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Ah, there you are, {PLAYER}!\n"
	.string "How was the walk?\p"
	.string "Let me heal up that team of yours!$"

PuceLake_MeetCarla_Text_1:
# 243 "data/maps/AW_PuceLake/scripts.pory"
	.string "Who was that guy, by the way?\p"
	.string "Oh, a friend of yours? Neat!\p"
	.string "Looks like he's caught up with you. I'll\n"
	.string "say hi!$"

PuceLake_MeetCarla_Text_2:
# 261 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hi! You must be {PLAYER}'s\n"
	.string "friend, right?$"

PuceLake_MeetCarla_Text_3:
# 269 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: H-hi ma'am... Y-yes, that's right.\p"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Oh, don't be so formal, it's\n"
	.string "alright! I'm the assistant to Professor\l"
	.string "Avery Fern. He's an archaeologist from\l"
	.string "around here.\p"
	.string "Mike: Y-you're -\p"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} And {PLAYER} here is helping\n"
	.string "out too! Avery asked her to help out\l"
	.string "with this dig site! Ain't that exciting?$"

PuceLake_MeetCarla_Text_4:
# 283 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}...? Y-you're helping\n"
	.string "him?\p"
	.string "He's shady! No good! That's what\n"
	.string "Conifer told me!\p"
	.string "I... What do I do?!$"

PuceLake_MeetCarla_Text_5:
# 294 "data/maps/AW_PuceLake/scripts.pory"
	.string "Jade Grunt 1: Ha-HA! Knew we'd find you\n"
	.string "lot here.\p"
	.string "Finding another important site, taking\n"
	.string "the contents for yourself...\p"
	.string "Jade Grunt 2: We simply won't let you!\n"
	.string "This site belongs to Team Jade!$"

PuceLake_MeetCarla_Text_6:
# 303 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: You guys..! You came!\p"
	.string "Grunt 1: Yes, yes, we heard, Mikey.$"

PuceLake_MeetCarla_Text_7:
# 311 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Team Jade! How did I know you\n"
	.string "guys would show up?\p"
	.string "{PLAYER}, it seems your friend here is\n"
	.string "with those Jade guys. That's not good\l"
	.string "for us.$"

PuceLake_MeetCarla_Text_8:
# 316 "data/maps/AW_PuceLake/scripts.pory"
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
# 334 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}, I...\p"
	.string "I challenge you to a battle!$"

PuceLake_MeetCarla_Text_10:
# 359 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I... I couldn't do it...$"

PuceLake_MeetCarla_Text_11:
# 366 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Well, kid, you did your best.\n"
	.string "That's important.\p"
	.string "It's alright, we'll handle this. Stand\n"
	.string "back.$"

PuceLake_MeetCarla_Text_12:
# 381 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 1: Alrighty then. Prepare to feel\n"
	.string "the power of Team Jade!$"

PuceLake_MeetCarla_Text_13:
# 399 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} I got your back, {PLAYER}.\p"
	.string "Fine, you menaces! We'll take you on!$"

PuceLake_MeetCarla_Text_14:
# 413 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 1: Aw jeez...$"

PuceLake_MeetCarla_Text_15:
# 420 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: You lost too...?$"

PuceLake_MeetCarla_Text_16:
# 437 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Gotta go!$"

PuceLake_MeetCarla_Text_17:
# 450 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}... I...$"

PuceLake_MeetCarla_Text_18:
# 458 "data/maps/AW_PuceLake/scripts.pory"
	.string "Grunt 2: Hey, we have to report what\n"
	.string "happened to the prof!\p"
	.string "You're not gonna skimp duties, are ya?$"

PuceLake_MeetCarla_Text_19:
# 465 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}!...$"

PuceLake_MeetCarla_Text_20:
# 478 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Phew, at least that's taken care\n"
	.string "of.\p"
	.string "You're pretty good with your Pokémon,\n"
	.string "{PLAYER}. It'll be good to have you\l"
	.string "around.$"

PuceLake_MeetCarla_Text_21:
# 492 "data/maps/AW_PuceLake/scripts.pory"
	.string "Your friend seems like a nice guy,\n"
	.string "really.\p"
	.string "It's a shame he's caught up with those\n"
	.string "no-goods. I'm sure you'll see him again,\l"
	.string "don't worry.\p"
	.string "Now, finally - the dig site!$"

PuceLake_MeetCarla_Text_22:
# 503 "data/maps/AW_PuceLake/scripts.pory"
	.string "It's just over there. Avery should be\n"
	.string "sorting things out.\p"
	.string "Head over when you're ready, I\n"
	.string "understand if you might need a bit of a\l"
	.string "rest after all that!$"

PuceLake_TalkWendy_Text_0:
# 530 "data/maps/AW_PuceLake/scripts.pory"
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
# 549 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery's just across there, at the dig\n"
	.string "site.\p"
	.string "Head over when you're ready!$"

PuceLake_GetToDigSite_Text_0:
# 571 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Sounds like there was a commotion\n"
	.string "up there!\p"
	.string "You alright, {PLAYER}?\p"
	.string "I'll bet it was Team Jade, wasn't it?\p"
	.string "Looks like you and Carla managed to\n"
	.string "fend them off, though.\p"
	.string "Great job, really. They're real menaces,\n"
	.string "I'll say.$"

PuceLake_GetToDigSite_Text_1:
# 582 "data/maps/AW_PuceLake/scripts.pory"
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
# 594 "data/maps/AW_PuceLake/scripts.pory"
	.string "I hate to say it, but our current dig\n"
	.string "team is a bit of a rag-tag group.\p"
	.string "We had to bring everyone together\n"
	.string "rather quickly.\p"
	.string "If I'm honest, this is the first dig\n"
	.string "we've had that I'm truly excited about.\p"
	.string "I've just got no idea what we'll find.$"

PuceLake_GetToDigSite_Text_3:
# 608 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: P-Professor...! I- I think\n"
	.string "I've found something of importance!$"

PuceLake_GetToDigSite_Text_4:
# 614 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} What is it?\p"
	.string "Scientist: O-over here...!$"

PuceLake_GetToDigSite_Text_5:
# 633 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: ...Do you see it?\p"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} See what?\p"
	.string "Scientist: The... the carving...!$"

PuceLake_GetToDigSite_Text_6:
# 646 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} ...Oh my goodness.\p"
	.string "It... it's some sort of language. It has\n"
	.string "to be.\p"
	.string "The stone is... it's painted...!\p"
	.string "Terry, this is a major discovery!\p"
	.string "We have to get to work bringing this\n"
	.string "back to the lab!$"

PuceLake_GetToDigSite_Text_7:
# 658 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: Y-yes! Of course!$"

PuceLake_GetToDigSite_Text_8:
# 668 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} {PLAYER}, sorry, this is a bit\n"
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
# 697 "data/maps/AW_PuceLake/scripts.pory"
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
# 721 "data/maps/AW_PuceLake/scripts.pory"
	.string "- TEAM TOPAZ DIG SITE -\n"
	.string "Authorized Persons Only\p"
	.string "$"

PuceLake_DontLeaveYet1_Text_0:
# 732 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}? Come on, you go\n"
	.string "ahead.\p"
	.string "...My legs just hurt, that's all. I'll\n"
	.string "catch up.$"

PuceLake_DontLeaveYet2_Text_0:
# 746 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I'm alright, {PLAYER}, don't\n"
	.string "worry.\p"
	.string "I'll catch up!$"

SchoolgirlJessyIntro::
# 804 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 810 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 816 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 822 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 828 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 834 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"

PuceLake_MikeLose::
# 840 "data/maps/AW_PuceLake/scripts.pory"
	.string "{PLAYER}...!$"

PuceLake_GruntLose::
# 846 "data/maps/AW_PuceLake/scripts.pory"
	.string "Wah! No wonder the newbie lost!$"
