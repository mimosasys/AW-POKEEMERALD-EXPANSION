AW_PuceLake_MapScripts::
	.byte 0


PuceLake_MeetAvery::
# 6 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 7 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 8 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_0
# 11 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 12 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 13 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaGotoPlayer
# 14 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryGotoPlayer
# 15 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 16 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_1
# 21 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 22 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkUpSpot
# 23 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 24 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_2
# 28 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 29 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkDownSpot
# 30 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 31 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_3
# 35 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 36 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 37 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, FaceRight
# 38 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_4
# 44 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 45 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 46 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 47 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_5
# 52 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 53 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 54 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 55 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_6
# 58 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 59 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 60 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 61 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 62 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 63 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 64 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_7
# 67 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 68 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 69 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_8
# 73 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 74 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 75 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer2
# 76 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 78 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 79 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_1
# 80 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 81 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 82 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 83 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 84 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_9
# 87 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 88 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 89 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer
# 90 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 91 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PuceLake_MeetAvery_2
# 94 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer3
PuceLake_MeetAvery_1:
# 96 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 97 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 98 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_10
# 108 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 109 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 110 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, EmoteExclamationMark
# 111 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 112 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_11
# 116 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 117 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 118 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, LookDown
# 119 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 120 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_12
# 123 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 124 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 125 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 126 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 127 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 128 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_13
# 132 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 133 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 134 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 135 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeft1
# 136 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 137 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_14
# 141 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 143 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 4, 33, 23
# 144 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 5, 30, 23
# 145 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetAvery_2:
# 92 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer2
	goto PuceLake_MeetAvery_1


PuceLake_MikeTalk::
# 150 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 151 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 6, MAP_AW_PUCE_LAKE
# 152 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_1
# 153 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_2
# 154 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 10, 56, 24
# 155 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 10, MAP_AW_PUCE_LAKE
# 157 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 158 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer4
# 159 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 160 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq PuceLake_MikeTalk_2
# 165 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer6
# 166 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 167 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
PuceLake_MikeTalk_1:
# 169 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MikeTalk_Text_0
# 185 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 186 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MikeTalk_2:
# 161 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer5
# 162 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 163 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
	goto PuceLake_MikeTalk_1


PuceLake_MeetCarla::
# 191 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 2
# 192 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_2
# 193 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_3
# 194 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 11, MAP_AW_PUCE_LAKE
# 195 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 12, MAP_AW_PUCE_LAKE
# 196 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 13, MAP_AW_PUCE_LAKE
# 198 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 199 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 200 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 201 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_0
# 205 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 206 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 207 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 208 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeftSpot
# 209 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_1
# 214 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 215 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 217 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer7
# 218 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 219 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PuceLake_MeetCarla_2
# 223 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer9
# 224 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
PuceLake_MeetCarla_1:
# 227 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_2
# 230 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 231 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 232 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkLeftSpot
# 233 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 235 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_3
# 242 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 243 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 244 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 245 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 246 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, LookUp
# 247 "data/maps/AW_PuceLake/scripts.pory"
	delay 30
# 248 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_4
# 253 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 254 "data/maps/AW_PuceLake/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 255 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 12, PuceLake_Grunt1Enter
# 256 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 13, PuceLake_Grunt1Enter
# 257 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 13
# 258 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_5
# 263 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 264 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkRightSpot
# 265 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 266 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_6
# 278 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 279 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FacePlayer
# 280 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 281 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetCarla_Text_7
# 285 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 286 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 287 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_ALPACOIL, PuceLake_MeetCarla_6
# 289 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_SMACKOP, PuceLake_MeetCarla_7
# 292 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_PUPPIXY, PuceLake_MikeLose
PuceLake_MeetCarla_5:
# 295 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 9
# 297 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetCarla_2:
# 220 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer8
# 221 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_1

PuceLake_MeetCarla_6:
# 288 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_ALPACOIL, PuceLake_MikeLose
	goto PuceLake_MeetCarla_5

PuceLake_MeetCarla_7:
# 290 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_SMACKOP, PuceLake_MikeLose
	goto PuceLake_MeetCarla_5


PuceLake_DontLeaveYet1::
# 302 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 303 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeftSpot
# 304 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 305 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet1_Text_0
# 309 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 310 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 311 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 312 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet2::
# 316 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 317 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, WalkLeftSpot
# 318 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 319 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet2_Text_0
# 323 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 324 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 325 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 326 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 330 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 331 "data/maps/AW_PuceLake/scripts.pory"
	call_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
# 332 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet1
	end


PuceLake_Trigger1_Lower::
# 337 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 338 "data/maps/AW_PuceLake/scripts.pory"
	call_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
# 339 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet1
	end


PuceLake_Trigger2_Upper::
# 344 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 0
# 345 "data/maps/AW_PuceLake/scripts.pory"
	call_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
# 346 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet2
	end


PuceLake_Trigger2_Lower::
# 351 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 1
# 352 "data/maps/AW_PuceLake/scripts.pory"
	call_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
# 353 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet2
	end


PuceLake_Trigger3_Upper::
# 358 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 0
# 359 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetCarla
	return


PuceLake_Trigger3_Lower::
# 363 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 1
# 364 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetCarla
	return


PuceLake_Trainer_SchoolgirlJessy::
# 368 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 373 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 378 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_ADELA, LassAdelaIntro, LassAdelaOutro
	end


# 424 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaGotoPlayer:
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 425 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 429 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer:
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 430 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 434 "data/maps/AW_PuceLake/scripts.pory"
WalkDownSpot:
# 435 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
# 435 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
	step_end

# 438 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryLeavePlayer:
# 439 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer1:
# 444 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 447 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer2:
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 448 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 451 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 452 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 452 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 453 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 453 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 456 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 457 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 458 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 458 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 458 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 461 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 462 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 462 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 463 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 463 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 463 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 466 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 467 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 467 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 467 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 469 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 470 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 471 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 474 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 475 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 476 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 479 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 480 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 483 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer7:
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 485 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 486 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 486 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 486 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 489 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer8:
# 490 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 491 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 491 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 494 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer9:
# 495 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 495 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 498 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1Enter:
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 499 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 503 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2Enter:
# 504 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 504 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 504 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 504 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 505 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 506 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 506 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 506 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 506 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 507 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 510 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 511 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 514 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 515 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

PuceLake_MeetAvery_Text_0:
# 9 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 17 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 25 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 32 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: It's important research, Carla.\n"
	.string "And besides, I can't just leave the lab\l"
	.string "unattended.\p"
	.string "Not with Team Jade about. They'll try\n"
	.string "steal our research again.$"

PuceLake_MeetAvery_Text_4:
# 39 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Haven't heard of them,\n"
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
# 48 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: ...You can tell he's really\n"
	.string "passionate about this, can't you?\p"
	.string "Um, we'll head on down to the lakeside.\n"
	.string "You'll see the dig site on the south\l"
	.string "side.\p"
	.string "I'll give you the tour once we're there!\n"
	.string "I hope you're excited to see it!$"

PuceLake_MeetAvery_Text_6:
# 56 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Er... yes. We'll get to it. See you\n"
	.string "in a bit, ok, {PLAYER}?$"

PuceLake_MeetAvery_Text_7:
# 65 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Uh, I don't mean to alarm you,\n"
	.string "but...$"

PuceLake_MeetAvery_Text_8:
# 70 "data/maps/AW_PuceLake/scripts.pory"
	.string "There's a boy behind you who's been\n"
	.string "staring at you this whole time.\p"
	.string "Do you know him?$"

PuceLake_MeetAvery_Text_9:
# 85 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: ...{PLAYER}?$"

PuceLake_MeetAvery_Text_10:
# 100 "data/maps/AW_PuceLake/scripts.pory"
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
# 113 "data/maps/AW_PuceLake/scripts.pory"
	.string "N- no way! That's what happened to you,\n"
	.string "too?!\p"
	.string "...$"

PuceLake_MeetAvery_Text_12:
# 121 "data/maps/AW_PuceLake/scripts.pory"
	.string "That must have been him, then...$"

PuceLake_MeetAvery_Text_13:
# 129 "data/maps/AW_PuceLake/scripts.pory"
	.string "U- uh... Anyway!\p"
	.string "Let's walk together, ok? Take in the\n"
	.string "lakeside air!$"

PuceLake_MeetAvery_Text_14:
# 138 "data/maps/AW_PuceLake/scripts.pory"
	.string "Ow, on second thoughts, you go on\n"
	.string "ahead. My legs are still hurting...\p"
	.string "I'll catch up, ok?$"

PuceLake_MikeTalk_Text_0:
# 170 "data/maps/AW_PuceLake/scripts.pory"
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
# 202 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Ah, there you are, {PLAYER}!\n"
	.string "How was the walk?\p"
	.string "Let me heal up that team of yours!$"

PuceLake_MeetCarla_Text_1:
# 210 "data/maps/AW_PuceLake/scripts.pory"
	.string "Who was that guy, by the way?\p"
	.string "Oh, a friend of yours? Neat!\p"
	.string "Looks like he's caught up with you. I'll\n"
	.string "say hi!$"

PuceLake_MeetCarla_Text_2:
# 228 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hi! You must be {PLAYER}'s\n"
	.string "friend, right?$"

PuceLake_MeetCarla_Text_3:
# 236 "data/maps/AW_PuceLake/scripts.pory"
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
# 249 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}...? Y-you're helping\n"
	.string "him?\p"
	.string "He's shady! No good! That's what\n"
	.string "Conifer told me!\p"
	.string "I... What do I do?!$"

PuceLake_MeetCarla_Text_5:
# 259 "data/maps/AW_PuceLake/scripts.pory"
	.string "Jade Grunt 1: Ha-HA! Knew we'd find you\n"
	.string "lot here.\p"
	.string "Finding another important site, taking\n"
	.string "the contents for yourself...\p"
	.string "Jade Grunt 2: We simply won't let you!\n"
	.string "This site belongs to Team Jade!$"

PuceLake_MeetCarla_Text_6:
# 267 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: You guys..! You came!\p"
	.string "Grunt 1: Yes, yes, we heard, Mikey.\p"
	.string "Carla: Team Jade! How did I know you\n"
	.string "guys would show up?\p"
	.string "{PLAYER}, it seems your friend here is\n"
	.string "with those Jade guys. That's not good\l"
	.string "for us.\p"
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

PuceLake_MeetCarla_Text_7:
# 282 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}, I...\p"
	.string "I challenge you to a battle!$"

PuceLake_DontLeaveYet1_Text_0:
# 306 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}? Come on, you go\n"
	.string "ahead.\p"
	.string "...My legs just hurt, that's all. I'll\n"
	.string "catch up.$"

PuceLake_DontLeaveYet2_Text_0:
# 320 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I'm alright, {PLAYER}, don't\n"
	.string "worry.\p"
	.string "I'll catch up!$"

SchoolgirlJessyIntro::
# 382 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 388 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 394 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 400 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 406 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 412 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"

PuceLake_MikeLose::
# 418 "data/maps/AW_PuceLake/scripts.pory"
	.string "{PLAYER}...!$"
