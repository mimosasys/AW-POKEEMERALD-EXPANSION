AW_PuceLake_MapScripts::
	.byte 0


PuceLake_MeetAvery::
# 6 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 7 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_0
# 10 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 11 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 12 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaGotoPlayer
# 13 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryGotoPlayer
# 14 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 15 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_1
# 20 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 21 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkUpSpot
# 22 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 23 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_2
# 27 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 28 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkDownSpot
# 29 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 30 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_3
# 34 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 35 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 36 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, FaceRight
# 37 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_4
# 43 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 44 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 45 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 46 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_5
# 51 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 52 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 53 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 54 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_6
# 57 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 58 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 59 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 60 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 61 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, FaceRight
# 62 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 63 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_7
# 66 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 67 "data/maps/AW_PuceLake/scripts.pory"
	special Script_FadeOutMapMusic
# 68 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_8
# 72 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 73 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 74 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer2
# 75 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 76 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxy 4, 36, 23
# 77 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxy 5, 33, 23
# 79 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_1
# 81 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 82 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 83 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 84 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 85 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_9
# 88 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 89 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 90 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer
# 91 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 92 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PuceLake_MeetAvery_2
# 95 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer3
PuceLake_MeetAvery_1:
# 97 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 98 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 99 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 100 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_10
# 109 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 110 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, EmoteExclamationMark
# 111 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 112 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_11
# 116 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 117 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, LookDown
# 118 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 119 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_12
# 122 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 123 "data/maps/AW_PuceLake/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 124 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, FaceLeft
# 125 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 126 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_13
# 130 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 131 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 132 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeft1
# 133 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 134 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_14
# 138 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 139 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return

PuceLake_MeetAvery_2:
# 93 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, PuceLake_MikeGotoPlayer2
	goto PuceLake_MeetAvery_1


PuceLake_DontLeaveYet1::
# 143 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 144 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 6, WalkLeftSpot
# 145 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 146 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet1_Text_0
# 150 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 151 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 152 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 153 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_MikeTalk::
# 157 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 158 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 6, MAP_AW_PUCE_LAKE
# 159 "data/maps/AW_PuceLake/scripts.pory"
	clearflag FLAG_AW_HIDE_MIKE_2
# 160 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer4
# 161 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 162 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq PuceLake_MikeTalk_2
# 167 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer6
# 168 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 169 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
PuceLake_MikeTalk_1:
# 171 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MikeTalk_Text_0
# 187 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 188 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_MIKE_3
# 189 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 4, MAP_AW_PUCE_LAKE
# 190 "data/maps/AW_PuceLake/scripts.pory"
	showobjectat 5, MAP_AW_PUCE_LAKE
# 191 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return

PuceLake_MikeTalk_2:
# 163 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_MikeGotoPlayer5
# 164 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 165 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
	goto PuceLake_MikeTalk_1


PuceLake_DontLeaveYet2::
# 195 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 196 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, WalkLeftSpot
# 197 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 198 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DontLeaveYet2_Text_0
# 202 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 203 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft1
# 204 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 205 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 209 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 210 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceLake_Trigger1_Upper_1
# 214 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet1
	return

PuceLake_Trigger1_Upper_1:
# 211 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetAvery
# 212 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


PuceLake_Trigger1_Lower::
# 219 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 220 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceLake_Trigger1_Lower_1
# 224 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet1
	return

PuceLake_Trigger1_Lower_1:
# 221 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetAvery
# 222 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


PuceLake_Trigger2_Upper::
# 229 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 0
# 230 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PuceLake_Trigger2_Upper_1
# 234 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet2
	return

PuceLake_Trigger2_Upper_1:
# 231 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MikeTalk
# 232 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


PuceLake_Trigger2_Lower::
# 239 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_2, 1
# 240 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PuceLake_Trigger2_Lower_1
# 244 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_DontLeaveYet2
	return

PuceLake_Trigger2_Lower_1:
# 241 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MikeTalk
# 242 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_1, 2
	return


PuceLake_Trainer_SchoolgirlJessy::
# 249 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 254 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 259 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_ADELA, LassAdelaIntro, LassAdelaOutro
	end


# 299 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaGotoPlayer:
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 300 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 301 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 304 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer:
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 305 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 306 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 309 "data/maps/AW_PuceLake/scripts.pory"
WalkDownSpot:
# 310 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
# 310 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_down
	step_end

# 313 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryLeavePlayer:
# 314 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 315 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 318 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer1:
# 319 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 322 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaLeavePlayer2:
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 323 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 326 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 327 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 327 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 328 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 328 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 331 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 332 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 333 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 333 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 333 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 336 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 337 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 337 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 338 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 338 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 338 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 341 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 342 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 342 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 342 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 343 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 343 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 344 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 345 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 346 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 349 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 350 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 351 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 354 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 355 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 358 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 359 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 362 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 363 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

PuceLake_MeetAvery_Text_0:
# 8 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 16 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 24 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 31 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: It's important research, Carla.\n"
	.string "And besides, I can't just leave the lab\l"
	.string "unattended.\p"
	.string "Not with Team Jade about. They'll try\n"
	.string "steal our research again.$"

PuceLake_MeetAvery_Text_4:
# 38 "data/maps/AW_PuceLake/scripts.pory"
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
# 47 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: ...You can tell he's really\n"
	.string "passionate about this, can't you?\p"
	.string "Um, we'll head on down to the lakeside.\n"
	.string "You'll see the dig site on the south\l"
	.string "side.\p"
	.string "I'll give you the tour once we're there!\n"
	.string "I hope you're excited to see it!$"

PuceLake_MeetAvery_Text_6:
# 55 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery: Er... yes. We'll get to it. See you\n"
	.string "in a bit, ok, {PLAYER}?$"

PuceLake_MeetAvery_Text_7:
# 64 "data/maps/AW_PuceLake/scripts.pory"
	.string "Carla: Uh, I don't mean to alarm you,\n"
	.string "but...$"

PuceLake_MeetAvery_Text_8:
# 69 "data/maps/AW_PuceLake/scripts.pory"
	.string "There's a boy behind you who's been\n"
	.string "staring at you this whole time.\p"
	.string "Do you know him?$"

PuceLake_MeetAvery_Text_9:
# 86 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: ...{PLAYER}?$"

PuceLake_MeetAvery_Text_10:
# 101 "data/maps/AW_PuceLake/scripts.pory"
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
# 120 "data/maps/AW_PuceLake/scripts.pory"
	.string "That must have been him, then...$"

PuceLake_MeetAvery_Text_13:
# 127 "data/maps/AW_PuceLake/scripts.pory"
	.string "U- uh... Anyway!\p"
	.string "Let's walk together, ok? Take in the\n"
	.string "lakeside air!$"

PuceLake_MeetAvery_Text_14:
# 135 "data/maps/AW_PuceLake/scripts.pory"
	.string "Ow, on second thoughts, you go on\n"
	.string "ahead. My legs are still hurting...\p"
	.string "I'll catch up, ok?$"

PuceLake_DontLeaveYet1_Text_0:
# 147 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: {PLAYER}? Come on, you go\n"
	.string "ahead.\p"
	.string "...My legs just hurt, that's all. I'll\n"
	.string "catch up.$"

PuceLake_MikeTalk_Text_0:
# 172 "data/maps/AW_PuceLake/scripts.pory"
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

PuceLake_DontLeaveYet2_Text_0:
# 199 "data/maps/AW_PuceLake/scripts.pory"
	.string "Mike: I'm alright, {PLAYER}, don't\n"
	.string "worry.\p"
	.string "I'll catch up!$"

SchoolgirlJessyIntro::
# 263 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 269 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 275 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 281 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 287 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 293 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"
