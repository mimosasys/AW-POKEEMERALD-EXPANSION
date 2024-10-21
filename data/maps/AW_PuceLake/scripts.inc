AW_PuceLake_MapScripts::
	.byte 0


PuceLake_MeetAvery::
# 6 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 7 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 8 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_0
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
# 17 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_1
# 22 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 23 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkUpSpot
# 24 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 25 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_2
# 29 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 30 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkDownSpot
# 31 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 32 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_3
# 36 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 37 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 38 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, FaceRight
# 39 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_4
# 45 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 46 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 47 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 48 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_5
# 53 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 54 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 55 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 56 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_6
# 59 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 60 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 61 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 62 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 63 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 64 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 65 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_7
# 68 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 69 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 70 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_8
# 74 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 75 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 76 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer2
# 77 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 79 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_1
# 81 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 82 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 83 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 84 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_9
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
	message PuceLake_MeetAvery_Text_10
# 108 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 109 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 110 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, EmoteExclamationMark
# 111 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 112 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_11
# 116 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 117 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 118 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, LookDown
# 119 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 120 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetAvery_Text_12
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
	message PuceLake_MeetAvery_Text_13
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
	message PuceLake_MeetAvery_Text_14
# 141 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 143 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE
# 144 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 4
# 145 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 5
# 146 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetAvery_2:
# 92 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer2
	goto PuceLake_MeetAvery_1


PuceLake_MikeTalk::
# 151 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 152 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_2
# 153 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 155 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 6, MAP_AW_PUCE_LAKE
# 156 "data/maps/AW_PuceLake/scripts.pory"
	addobject 10
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
	message PuceLake_MikeTalk_Text_0
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
	removeobject 10
# 193 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_3
# 194 "data/maps/AW_PuceLake/scripts.pory"
	addobject 11
# 195 "data/maps/AW_PuceLake/scripts.pory"
	addobject 12
# 196 "data/maps/AW_PuceLake/scripts.pory"
	addobject 13
# 198 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 199 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 14, WalkRightSpot
# 200 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 201 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetCarla_Text_0
# 205 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 206 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 207 "data/maps/AW_PuceLake/scripts.pory"
	special HealPlayerParty
# 208 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeftSpot
# 209 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetCarla_Text_1
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
	message PuceLake_MeetCarla_Text_2
# 230 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 231 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 232 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkLeftSpot
# 233 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 235 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetCarla_Text_3
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
	message PuceLake_MeetCarla_Text_4
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
	message PuceLake_MeetCarla_Text_5
# 263 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 264 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, WalkRightSpot
# 265 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 266 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetCarla_Text_6
# 278 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 279 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, FacePlayer
# 280 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 281 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_MeetCarla_Text_7
# 285 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 286 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 288 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_ALPACOIL, PuceLake_MeetCarla_6
# 290 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_set FLAG_AW_PICK_SMACKOP, PuceLake_MeetCarla_7
# 293 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_PUPPIXY, PuceLake_MikeLose
PuceLake_MeetCarla_5:
# 296 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 9
# 298 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end

PuceLake_MeetCarla_2:
# 220 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 11, PuceLake_MikeGotoPlayer8
# 221 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
	goto PuceLake_MeetCarla_1

PuceLake_MeetCarla_6:
# 289 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_ALPACOIL, PuceLake_MikeLose
	goto PuceLake_MeetCarla_5

PuceLake_MeetCarla_7:
# 291 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_PUCELAKE_SMACKOP, PuceLake_MikeLose
	goto PuceLake_MeetCarla_5


PuceLake_DontLeaveYet1::
# 303 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 304 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeftSpot
# 305 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 306 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_DontLeaveYet1_Text_0
# 310 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 311 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 312 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 313 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_DontLeaveYet2::
# 317 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 318 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, WalkLeftSpot
# 319 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 320 "data/maps/AW_PuceLake/scripts.pory"
	message PuceLake_DontLeaveYet2_Text_0
# 324 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 325 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 326 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 327 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 331 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 332 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
# 333 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_DontLeaveYet1
	end


PuceLake_Trigger1_Lower::
# 338 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 339 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 0, PuceLake_MeetAvery
# 340 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_DontLeaveYet1
	end


PuceLake_Trigger2_Upper::
# 345 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 0
# 346 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
# 347 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 2, PuceLake_DontLeaveYet2
	end


PuceLake_Trigger2_Lower::
# 352 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 1
# 353 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 1, PuceLake_MikeTalk
# 354 "data/maps/AW_PuceLake/scripts.pory"
	goto_if_eq VAR_AW_PROGRESS_2, 2, PuceLake_DontLeaveYet2
	end


PuceLake_Trigger3_Upper::
# 359 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 0
# 360 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trigger3_Lower::
# 364 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_3, 1
# 365 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_MeetCarla
	return


PuceLake_Trainer_SchoolgirlJessy::
# 369 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 374 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 379 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_ADELA, LassAdelaIntro, LassAdelaOutro
	end


# 425 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaGotoPlayer:
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 426 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 427 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 430 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer:
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 431 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 432 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 435 "data/maps/AW_PuceLake/scripts.pory"
WalkDownSpot:
# 436 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
# 436 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
	step_end

# 439 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryLeavePlayer:
# 440 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 441 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 444 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer1:
# 445 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 448 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer2:
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 449 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 452 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 453 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 453 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 454 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 454 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 457 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 458 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 459 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 459 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 459 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 462 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 463 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 463 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 464 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 464 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 464 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 467 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 469 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 469 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 470 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 471 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 472 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 476 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 477 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 480 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 481 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer7:
# 485 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 485 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 485 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 486 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 487 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 487 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 487 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 490 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer8:
# 491 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 492 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 492 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 495 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer9:
# 496 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 496 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 499 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1Enter:
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 500 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 501 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 504 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2Enter:
# 505 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 505 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 505 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 505 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 506 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 507 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 507 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 507 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 507 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 508 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 511 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 512 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 515 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 516 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

PuceLake_MeetAvery_Text_0:
# 9 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 18 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 26 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 33 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: It's important research, Carla.\n"
	.string "And besides, I can't just leave the lab\l"
	.string "unattended.\p"
	.string "Not with Team Jade about. They'll try\n"
	.string "steal our research again.$"

PuceLake_MeetAvery_Text_4:
# 40 "data/maps/AW_PuceLake/scripts.pory"
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
# 49 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: ...You can tell he's really\n"
	.string "passionate about this, can't you?\p"
	.string "Um, we'll head on down to the lakeside.\n"
	.string "You'll see the dig site on the south\l"
	.string "side.\p"
	.string "I'll give you the tour once we're there!\n"
	.string "I hope you're excited to see it!$"

PuceLake_MeetAvery_Text_6:
# 57 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Er... yes. We'll get to it. See you\n"
	.string "in a bit, ok, {PLAYER}?$"

PuceLake_MeetAvery_Text_7:
# 66 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Uh, I don't mean to alarm you,\n"
	.string "but...$"

PuceLake_MeetAvery_Text_8:
# 71 "data/maps/AW_PuceLake/scripts.pory"
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
# 307 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}? Come on, you go\n"
	.string "ahead.\p"
	.string "...My legs just hurt, that's all. I'll\n"
	.string "catch up.$"

PuceLake_DontLeaveYet2_Text_0:
# 321 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I'm alright, {PLAYER}, don't\n"
	.string "worry.\p"
	.string "I'll catch up!$"

SchoolgirlJessyIntro::
# 383 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 389 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 395 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 401 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 407 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 413 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"

PuceLake_MikeLose::
# 419 "data/maps/AW_PuceLake/scripts.pory"
	.string "{PLAYER}...!$"
