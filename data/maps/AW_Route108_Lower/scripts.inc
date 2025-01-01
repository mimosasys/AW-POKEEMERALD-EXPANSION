AW_Route108_Lower_MapScripts::
# 3 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, Route108_Lower_Transition
	.2byte 0


Route108_HideOrShowTruck::
# 10 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_HELP_GEAR, Route108_HideOrShowTruck_1
	return

Route108_HideOrShowTruck_1:
# 11 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 34, 0x1D8, TRUE
# 12 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 35, 0x1D8, TRUE
# 13 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 9, 34, 0x1D9, TRUE
# 14 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 34, 0x1D2, TRUE
# 15 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 35, 0x1E2, TRUE
# 16 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


Route108_Lower_Transition::
# 21 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 22 "data/maps/AW_Route108_Lower/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
# 23 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LeaveLab
# 24 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 25 "data/maps/AW_Route108_Lower/scripts.pory"
	showobjectat 3, MAP_AW_ROUTE108_LOWER
# 26 "data/maps/AW_Route108_Lower/scripts.pory"
	opendoor 8, 8
# 27 "data/maps/AW_Route108_Lower/scripts.pory"
	waitdooranim
# 28 "data/maps/AW_Route108_Lower/scripts.pory"
	setobjectxy 3, 8, 8
# 29 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_LeaveLab
# 30 "data/maps/AW_Route108_Lower/scripts.pory"
	closedoor 8, 8
# 31 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 32 "data/maps/AW_Route108_Lower/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_MoveDown1
# 34 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 35 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_0
# 38 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 39 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 40 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, FaceRight
# 41 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 42 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 43 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_1
# 46 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 47 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 48 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 49 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 50 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 51 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 52 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 53 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_2
# 56 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 57 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 58 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 59 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookUp3
# 60 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 61 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_3
# 66 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 67 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 68 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, WalkUpSpot
# 69 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 70 "data/maps/AW_Route108_Lower/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 71 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 72 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 73 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 74 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 75 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_4
# 79 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 80 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 81 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer
# 82 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 83 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_5
# 87 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 88 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 89 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_MoveToGrass
# 90 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_MoveToGrass
# 91 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 92 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass
# 93 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 94 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 95 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass2
# 96 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 97 "data/maps/AW_Route108_Lower/scripts.pory"
	setwildbattle SPECIES_DEWSEL, 3
# 98 "data/maps/AW_Route108_Lower/scripts.pory"
	dowildbattle
# 100 "data/maps/AW_Route108_Lower/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route108_Lower_Transition_2
# 110 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route108_Lower_Transition_3
# 119 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 120 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 121 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 122 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_8
# 125 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
Route108_Lower_Transition_1:
# 128 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 129 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 130 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_9
# 134 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 135 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_10
# 139 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 140 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_11
# 147 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 148 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpSpot
# 150 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 151 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 152 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 20
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 154 "data/maps/AW_Route108_Lower/scripts.pory"
	special RemoveCameraObject
# 155 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_12
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 166 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab
# 167 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab
# 168 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 169 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_13
# 172 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 173 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_14
# 176 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 177 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab2
# 178 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab2
# 179 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 2
# 180 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 3
# 181 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 2
# 182 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 3
# 183 "data/maps/AW_Route108_Lower/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 184 "data/maps/AW_Route108_Lower/scripts.pory"
	setflag FLAG_AW_HIDE_GEAR
# 185 "data/maps/AW_Route108_Lower/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 186 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
# 187 "data/maps/AW_Route108_Lower/scripts.pory"
	release
	return

Route108_Lower_Transition_2:
# 102 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 103 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 104 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 106 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_6
# 109 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1

Route108_Lower_Transition_3:
# 111 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 112 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 113 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_7
# 117 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1


YouCantParkThere::
# 191 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 192 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, YouCantParkThere_2
# 229 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 230 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_5
# 235 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 236 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
YouCantParkThere_1:
# 238 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

YouCantParkThere_2:
# 193 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, WalkLeftSpot
# 194 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 195 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_0
# 198 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 199 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 200 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 201 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 202 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_1
# 205 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 206 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 207 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 208 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 209 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_2
# 212 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 213 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 214 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 215 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 216 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_3
# 219 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkLeftSpot
# 220 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 221 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_4
# 224 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 225 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, FaceOriginalDirection
# 226 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
# 227 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
	goto YouCantParkThere_1


DidYouKnow::
# 242 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 243 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 5, FacePlayer
# 244 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 245 "data/maps/AW_Route108_Lower/scripts.pory"
	message DidYouKnow_Text_0
# 250 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 251 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


YoullMeetTrainers::
# 255 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 256 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 4, FacePlayer
# 257 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 258 "data/maps/AW_Route108_Lower/scripts.pory"
	message YoullMeetTrainers_Text_0
# 262 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 263 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


# 266 "data/maps/AW_Route108_Lower/scripts.pory"
WalkUpSpot:
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
	step_end

# 270 "data/maps/AW_Route108_Lower/scripts.pory"
FaceRight:
# 271 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 274 "data/maps/AW_Route108_Lower/scripts.pory"
LookDown:
# 275 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 278 "data/maps/AW_Route108_Lower/scripts.pory"
Player_LeaveLab:
# 279 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_LeaveLab:
# 283 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 284 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 285 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 286 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 289 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GiveBalls:
# 290 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 293 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer:
# 294 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 297 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_MoveToGrass:
# 298 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 298 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 299 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 300 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 303 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_MoveToGrass:
# 304 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 304 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 304 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 305 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 306 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 306 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 307 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 308 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 311 "data/maps/AW_Route108_Lower/scripts.pory"
Player_GoToGrass:
# 312 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 312 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 312 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 312 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 315 "data/maps/AW_Route108_Lower/scripts.pory"
Player_GoToGrass2:
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 319 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GoToPlayer:
# 320 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer2:
# 324 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_right
# 325 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_down
	step_end

# 328 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab:
# 329 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 329 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 329 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 330 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 333 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab:
# 334 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 334 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 338 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab2:
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 340 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 343 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab2:
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 344 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 347 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookLeft3:
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 348 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
	step_end

# 351 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookRight3:
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 352 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
	step_end

# 355 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_MoveDown1:
# 356 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 359 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookDown3:
# 360 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 363 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookUp3:
# 364 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 364 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 364 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_Lower_Transition_Text_0:
# 36 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, {PLAYER}, this is Route\n"
	.string "108.\p"
	.string "$"

Route108_Lower_Transition_Text_1:
# 44 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "To the east is Port Mulberry. It's the\n"
	.string "closest town to the lab.\p"
	.string "$"

Route108_Lower_Transition_Text_2:
# 54 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And south of us is Puce City, and the\n"
	.string "nearby Puce Lake. It's an important dig\l"
	.string "site for us.\p"
	.string "$"

Route108_Lower_Transition_Text_3:
# 62 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And, well, we're smack-bang in the\n"
	.string "middle! Hah!\p"
	.string "Say, have you caught a Pokémon before?\n"
	.string "This is as good a spot as any.\p"
	.string "Here, take these. I've got plenty spare.\p"
	.string "$"

Route108_Lower_Transition_Text_4:
# 76 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Now, all you have to do is take a\n"
	.string "step into that tall grass!\p"
	.string "It's best to lower the other Pokémon's\n"
	.string "health a fair bit before throwing a ball,\l"
	.string "but who knows, you might get lucky!\p"
	.string "$"

Route108_Lower_Transition_Text_5:
# 84 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: You've got this! Go give it a\n"
	.string "shot! Catching Pokémon lets you make\l"
	.string "more friends!\p"
	.string "With the Pokémon, of course.\p"
	.string "$"

Route108_Lower_Transition_Text_6:
# 107 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Hey! Nice job, good catch!\p"
	.string "If you like, bring them on your travels\n"
	.string "with you, or you can put them in the PC\l"
	.string "for storage.\p"
	.string "$"

Route108_Lower_Transition_Text_7:
# 115 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oop, seems you were a bit\n"
	.string "enthusiastic.\p"
	.string "Nevermind, you'll have plenty of other\n"
	.string "chances!\p"
	.string "$"

Route108_Lower_Transition_Text_8:
# 123 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Aww, dang! That's too bad. It's\n"
	.string "ok, we'll heal your Pokémon right up!\p"
	.string "$"

Route108_Lower_Transition_Text_9:
# 131 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, you get the picture.\p"
	.string "Actually, I have something to ask of\n"
	.string "you. I hope it's not too much all at\l"
	.string "once.\p"
	.string "$"

Route108_Lower_Transition_Text_10:
# 136 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oh, you mean...!\p"
	.string "That's a great idea!\p"
	.string "$"

Route108_Lower_Transition_Text_11:
# 141 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: You see, {PLAYER}, our research\n"
	.string "team is a bit...\p"
	.string "How do I put this...\p"
	.string "Short of staff at the moment. Really,\n"
	.string "it's just Carla, me, and a few other\l"
	.string "hands.\p"
	.string "So... I was thinking that while you're\n"
	.string "here recovering, you could help us out!\p"
	.string "...You will help us, right?\p"
	.string "$"

Route108_Lower_Transition_Text_12:
# 156 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: ...! Oh! Well, thanks, {PLAYER}!\n"
	.string "It really will be such a big help for us!\p"
	.string "Actually, there's something that would\n"
	.string "be a big help already.\p"
	.string "A friend of mine, an inventor called\n"
	.string "Gear lives in Port Mulberry, and they've\l"
	.string "been fixing up a communication device\l"
	.string "for me.\p"
	.string "And, well, they're not picking up their\n"
	.string "phone. I hope nothing's happened to\l"
	.string "them.\p"
	.string "They live in a big building up on the\n"
	.string "rocks. You can't miss it.\p"
	.string "I'd go and get the device myself, but\n"
	.string "we're already in a rush to get ready for\l"
	.string "our next expedition to Puce Lake.\p"
	.string "Could you go get that for us? I'll work\n"
	.string "out some sort of reward, don't worry.\p"
	.string "Port Mulberry is just to the east of\n"
	.string "here, if you recall. Come back to the lab\l"
	.string "when you get the device!\p"
	.string "$"

Route108_Lower_Transition_Text_13:
# 170 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: See you round, {PLAYER}!\p"
	.string "$"

Route108_Lower_Transition_Text_14:
# 174 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Catch lots of Pokémon! And be\n"
	.string "nice to yours, ok?\p"
	.string "$"

YouCantParkThere_Text_0:
# 196 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Hey! You can't just park your truck\n"
	.string "there!\p"
	.string "$"

YouCantParkThere_Text_1:
# 203 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Uh, yes I can. It's my truck.\p"
	.string "$"

YouCantParkThere_Text_2:
# 210 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "But people can't get past! Like this\n"
	.string "kid, for example.\p"
	.string "$"

YouCantParkThere_Text_3:
# 217 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, it sucks to be them.\p"
	.string "$"

YouCantParkThere_Text_4:
# 222 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "...How did you even get it there?\p"
	.string "$"

YouCantParkThere_Text_5:
# 231 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, lucky for you, there's nothing in\n"
	.string "the way, finally.\p"
	.string "What a doofus, parking your truck in\n"
	.string "the way like that.\p"
	.string "How'd he even get it here?$"

DidYouKnow_Text_0:
# 246 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Did you know? Route 108 continues up\n"
	.string "here!\p"
	.string "Well, I say that, but you can't exactly\n"
	.string "get over this ledge to see it.\p"
	.string "Route 109 is up there somewhere too,\n"
	.string "but I've never been.\p"
	.string "$"

YoullMeetTrainers_Text_0:
# 259 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "If you go on a journey with your\n"
	.string "Pokémon, you'll see plenty of trainers\l"
	.string "around the place wanting to battle!\p"
	.string "Huh? Me? I'm just out for a walk.\p"
	.string "$"
