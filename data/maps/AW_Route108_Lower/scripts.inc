AW_Route108_Lower_MapScripts::
# 3 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, Route108_Lower_Transition
	.2byte 0


Route108_HideOrShowTruck::
# 9 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, Route108_HideOrShowTruck_1
	return

Route108_HideOrShowTruck_1:
# 10 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 34, 0x1D8, TRUE
# 11 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 35, 0x1D8, TRUE
# 12 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 9, 34, 0x1D9, TRUE
# 13 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 34, 0x1D2, TRUE
# 14 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 35, 0x1E2, TRUE
	return


Route108_Lower_Transition::
# 19 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 20 "data/maps/AW_Route108_Lower/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
# 21 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LeaveLab
# 22 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 23 "data/maps/AW_Route108_Lower/scripts.pory"
	showobjectat 3, MAP_AW_ROUTE108_LOWER
# 24 "data/maps/AW_Route108_Lower/scripts.pory"
	opendoor 8, 8
# 25 "data/maps/AW_Route108_Lower/scripts.pory"
	waitdooranim
# 26 "data/maps/AW_Route108_Lower/scripts.pory"
	setobjectxy 3, 8, 8
# 27 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_LeaveLab
# 28 "data/maps/AW_Route108_Lower/scripts.pory"
	closedoor 8, 8
# 29 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 30 "data/maps/AW_Route108_Lower/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_MoveDown1
# 32 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 33 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_0
# 36 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 37 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookRight
# 38 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookRight3
# 39 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 40 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_1
# 43 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 44 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 45 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookLeft3
# 46 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 47 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 48 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 49 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_2
# 52 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 53 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 54 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookUp3
# 55 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 56 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_3
# 61 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 62 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, WalkUpSpot
# 63 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 64 "data/maps/AW_Route108_Lower/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 65 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 66 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 67 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 68 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 69 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_4
# 73 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 74 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer
# 75 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 76 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_5
# 80 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 81 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 82 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_MoveToGrass
# 83 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_MoveToGrass
# 84 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 85 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass
# 86 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 87 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 88 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass2
# 89 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 90 "data/maps/AW_Route108_Lower/scripts.pory"
	setwildbattle SPECIES_DEWSEL, 3
# 91 "data/maps/AW_Route108_Lower/scripts.pory"
	dowildbattle
# 93 "data/maps/AW_Route108_Lower/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route108_Lower_Transition_2
# 102 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route108_Lower_Transition_3
# 111 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 112 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 113 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_8
# 117 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
Route108_Lower_Transition_1:
# 120 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 121 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 122 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_9
# 126 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 127 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_10
# 131 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 132 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_11
# 139 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 140 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 141 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpSpot
# 142 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 143 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 144 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 20
# 145 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 146 "data/maps/AW_Route108_Lower/scripts.pory"
	special RemoveCameraObject
# 147 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_12
# 156 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 157 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab
# 158 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab
# 159 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_13
# 162 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_14
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 166 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab2
# 167 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab2
# 168 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 169 "data/maps/AW_Route108_Lower/scripts.pory"
	hideobjectat 2, MAP_AW_ROUTE108_LOWER
# 170 "data/maps/AW_Route108_Lower/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
# 171 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 2
# 172 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 3
# 173 "data/maps/AW_Route108_Lower/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 174 "data/maps/AW_Route108_Lower/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 175 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

Route108_Lower_Transition_2:
# 95 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 96 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 97 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 98 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_6
# 101 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1

Route108_Lower_Transition_3:
# 103 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer2
# 104 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_GoToPlayer
# 105 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 106 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_7
# 109 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1


YouCantParkThere::
# 179 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 180 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, YouCantParkThere_2
# 217 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 218 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_5
# 222 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 223 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
YouCantParkThere_1:
# 225 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

YouCantParkThere_2:
# 181 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, WalkLeftSpot
# 182 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 183 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_0
# 186 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 187 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 188 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 189 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 190 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_1
# 193 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 194 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 195 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 196 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 197 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_2
# 200 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 201 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 202 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 203 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 204 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_3
# 207 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkLeftSpot
# 208 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 209 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_4
# 212 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 213 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, FaceOriginalDirection
# 214 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
# 215 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
	goto YouCantParkThere_1


DidYouKnow::
# 229 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 230 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 5, FacePlayer
# 231 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 232 "data/maps/AW_Route108_Lower/scripts.pory"
	message DidYouKnow_Text_0
# 237 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 238 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


YoullMeetTrainers::
# 242 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 243 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 4, FacePlayer
# 244 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 245 "data/maps/AW_Route108_Lower/scripts.pory"
	message YoullMeetTrainers_Text_0
# 249 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 250 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


# 253 "data/maps/AW_Route108_Lower/scripts.pory"
WalkUpSpot:
# 254 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
# 254 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
	step_end

# 257 "data/maps/AW_Route108_Lower/scripts.pory"
LookRight:
# 258 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 261 "data/maps/AW_Route108_Lower/scripts.pory"
LookDown:
# 262 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 265 "data/maps/AW_Route108_Lower/scripts.pory"
Player_LeaveLab:
# 266 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 269 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_LeaveLab:
# 270 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 271 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 272 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 276 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GiveBalls:
# 277 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 277 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 280 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer:
# 281 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 284 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_MoveToGrass:
# 285 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 285 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 286 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 287 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 290 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_MoveToGrass:
# 291 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 291 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 292 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 293 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 293 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 293 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 294 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 295 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 298 "data/maps/AW_Route108_Lower/scripts.pory"
Player_GoToGrass:
# 299 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 299 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 299 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 299 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 302 "data/maps/AW_Route108_Lower/scripts.pory"
Player_GoToGrass2:
# 303 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 303 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 303 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GoToPlayer:
# 307 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 307 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 310 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer2:
# 311 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_right
# 312 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_down
	step_end

# 315 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab:
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 316 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_slow_up
# 317 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 320 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab:
# 321 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 321 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 322 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 325 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab2:
# 326 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 327 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 330 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab2:
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 331 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 334 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookLeft3:
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
	step_end

# 338 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookRight3:
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 339 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_MoveDown1:
# 343 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 346 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookDown3:
# 347 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 347 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 347 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookUp3:
# 351 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 351 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 351 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_Lower_Transition_Text_0:
# 34 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, {PLAYER}, this is Route\n"
	.string "108.\p"
	.string "$"

Route108_Lower_Transition_Text_1:
# 41 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "To the east is Port Mulberry. It's the\n"
	.string "closest town to the lab.\p"
	.string "$"

Route108_Lower_Transition_Text_2:
# 50 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And south of us is Puce City, and the\n"
	.string "nearby Puce Lake. It's an important dig\l"
	.string "site for us.\p"
	.string "$"

Route108_Lower_Transition_Text_3:
# 57 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And, well, we're smack-bang in the\n"
	.string "middle! Hah!\p"
	.string "Say, have you caught a Pokémon before?\n"
	.string "This is as good a spot as any.\p"
	.string "Here, take these. I've got plenty spare.\p"
	.string "$"

Route108_Lower_Transition_Text_4:
# 70 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Now, all you have to do is take a\n"
	.string "step into that tall grass!\p"
	.string "It's best to lower the other Pokémon's\n"
	.string "health a fair bit before throwing a ball,\l"
	.string "but who knows, you might get lucky!\p"
	.string "$"

Route108_Lower_Transition_Text_5:
# 77 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: You've got this! Go give it a\n"
	.string "shot! Catching Pokémon lets you make\l"
	.string "more friends!\p"
	.string "With the Pokémon, of course.\p"
	.string "$"

Route108_Lower_Transition_Text_6:
# 99 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Hey! Nice job, good catch!\p"
	.string "$"

Route108_Lower_Transition_Text_7:
# 107 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oop, seems you were a bit\n"
	.string "enthusiastic.\p"
	.string "Nevermind, you'll have plenty of other\n"
	.string "chances!\p"
	.string "$"

Route108_Lower_Transition_Text_8:
# 115 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Aww, dang! That's too bad. It's\n"
	.string "ok, we'll heal your Pokémon right up!\p"
	.string "$"

Route108_Lower_Transition_Text_9:
# 123 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, you get the picture.\p"
	.string "Actually, I have something to ask of\n"
	.string "you. I hope it's not too much all at\l"
	.string "once.\p"
	.string "$"

Route108_Lower_Transition_Text_10:
# 128 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oh, you mean...!\p"
	.string "That's a great idea!\p"
	.string "$"

Route108_Lower_Transition_Text_11:
# 133 "data/maps/AW_Route108_Lower/scripts.pory"
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
# 148 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: ...! Oh! Well, thanks, {PLAYER}!\n"
	.string "It really will be such a big help for us!\p"
	.string "Actually, there's something that would\n"
	.string "be a big help already.\p"
	.string "A friend of mine, an inventor called\n"
	.string "Gear lives in Port Mulberry, and he's\l"
	.string "been fixing up a communication device\l"
	.string "for me.\p"
	.string "They live in a big building up on the\n"
	.string "rocks. You can't miss it.\p"
	.string "I'd go and get it myself, but we're\n"
	.string "already in a big rush to get ready for\l"
	.string "our next dig site at Puce Lake.\p"
	.string "Could you go get that for us? It would\n"
	.string "be such a big help. I'll work out some\l"
	.string "sort of reward, don't worry.\p"
	.string "Port Mulberry is just to the east of\n"
	.string "here, if you recall. Come back to the lab\l"
	.string "when you get the device!\p"
	.string "$"

Route108_Lower_Transition_Text_13:
# 160 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: See you round, {PLAYER}!\p"
	.string "$"

Route108_Lower_Transition_Text_14:
# 163 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Catch lots of Pokémon! And be\n"
	.string "nice to yours, ok?\p"
	.string "$"

YouCantParkThere_Text_0:
# 184 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Hey! You can't just park your truck\n"
	.string "there!\p"
	.string "$"

YouCantParkThere_Text_1:
# 191 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Uh, yes I can. It's my truck.\p"
	.string "$"

YouCantParkThere_Text_2:
# 198 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "But people can't get past! Like this\n"
	.string "kid, for example.\p"
	.string "$"

YouCantParkThere_Text_3:
# 205 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, it sucks to be them.\p"
	.string "$"

YouCantParkThere_Text_4:
# 210 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "...How did you even get it there?\p"
	.string "$"

YouCantParkThere_Text_5:
# 219 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, lucky for you, that guy moved his\n"
	.string "truck, finally.\p"
	.string "What a doofus.\p"
	.string "$"

DidYouKnow_Text_0:
# 233 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Did you know? Route 108 continues up\n"
	.string "here!\p"
	.string "Well, I say that, but you can't exactly\n"
	.string "get over this ledge to see it.\p"
	.string "Route 109 is up there somewhere too,\n"
	.string "but I've never been.\p"
	.string "$"

YoullMeetTrainers_Text_0:
# 246 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "If you go on a journey with your\n"
	.string "Pokémon, you'll see plenty of trainers\l"
	.string "around the place wanting to battle!\p"
	.string "Huh? Me? I'm just out for a walk.\p"
	.string "$"
