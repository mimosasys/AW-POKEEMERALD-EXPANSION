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
# 15 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 16 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 17 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_0
# 20 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 21 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 22 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 24 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaGotoPlayer
# 25 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryGotoPlayer
# 26 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 5
# 28 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 29 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 30 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_1
# 37 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 38 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 39 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkUpSpot
# 42 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 44 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 45 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 46 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_2
# 50 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 51 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 52 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 54 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkDownSpot
# 55 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 57 "data/maps/AW_PuceLake/scripts.pory"
	delay 32
# 59 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, WalkRightSpot
# 60 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 62 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 63 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 64 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_3
# 71 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 72 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 73 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 75 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 76 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 77 "data/maps/AW_PuceLake/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_4
# 82 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 84 "data/maps/AW_PuceLake/scripts.pory"
	waitfanfare
# 85 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 86 "data/maps/AW_PuceLake/scripts.pory"
	special SetUnlockedPokedexFlags
# 87 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 88 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 89 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 90 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, WalkRightSpot
# 91 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 93 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 94 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 95 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_5
# 98 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 99 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 100 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 102 "data/maps/AW_PuceLake/scripts.pory"
	giveitem ITEM_POTION, 5
# 103 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 104 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 106 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 108 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_MeetAvery_Text_6
# 111 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 112 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 113 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 115 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 4, PuceLake_CarlaLeavePlayer1
# 116 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 5, PuceLake_AveryLeavePlayer
# 117 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 119 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE
# 121 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 1
# 122 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 4
# 123 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 5
# 124 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	end


PuceLake_TalkBrooke::
# 129 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 130 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 131 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkBrooke_Text_0
# 144 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 145 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_TalkCarla::
# 149 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 150 "data/maps/AW_PuceLake/scripts.pory"
	faceplayer
# 151 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 152 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 153 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_TalkCarla_Text_0
# 157 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 158 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 159 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger4_Left::
# 163 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 0
# 164 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_Trigger4_Right::
# 168 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_4, 1
# 169 "data/maps/AW_PuceLake/scripts.pory"
	goto PuceLake_GetToDigSite
	return


PuceLake_GetToDigSite::
# 173 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 174 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, FacePlayer
# 175 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 177 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 178 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 179 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_0
# 182 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 183 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 184 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 186 "data/maps/AW_PuceLake/scripts.pory"
	special SpawnCameraObject
# 187 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_LookDown3
# 188 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 190 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 191 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 192 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_1
# 200 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 201 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 202 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 204 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, LookDown
# 205 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 207 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 208 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 209 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_2
# 215 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 216 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 217 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 219 "data/maps/AW_PuceLake/scripts.pory"
	delay 15
# 221 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist1
# 222 "data/maps/AW_PuceLake/scripts.pory"
	fadeoutbgm 1
# 223 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 225 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_3
# 228 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 229 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 231 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, WalkDownSpot
# 232 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 234 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 235 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 236 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_4
# 239 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 240 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 241 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 243 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, PuceLake_Scientist2
# 244 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 15, PuceLake_AveryFollowScientist
# 245 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery1
# 246 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 247 "data/maps/AW_PuceLake/scripts.pory"
	special RemoveCameraObject
# 248 "data/maps/AW_PuceLake/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq PuceLake_GetToDigSite_2
# 252 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery3
PuceLake_GetToDigSite_1:
# 254 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 256 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 257 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 258 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_5
# 262 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 263 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 265 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, EmoteQuestion
# 266 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 267 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 268 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, EmoteExclamation
# 269 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 271 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 272 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 273 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_6
# 280 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 281 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 282 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 284 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 2, WalkRightSpot
# 285 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 287 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_7
# 290 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 291 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 293 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 9, PuceLake_AveryGotoPlayer2
# 294 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 295 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 296 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 298 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 299 "data/maps/AW_PuceLake/scripts.pory"
	callnative DrawMugshot
# 300 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_8
# 309 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 310 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 311 "data/maps/AW_PuceLake/scripts.pory"
	callnative ClearMugshot
# 313 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 314 "data/maps/AW_PuceLake/scripts.pory"
	delay 60
# 316 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerGotoLeave
# 320 "data/maps/AW_PuceLake/scripts.pory"
	setflag FLAG_AW_HIDE_PROFS_PUCE_LAKE2
# 321 "data/maps/AW_PuceLake/scripts.pory"
	setmetatile 21, 35, 0x071, FALSE
# 322 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 323 "data/maps/AW_PuceLake/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 324 "data/maps/AW_PuceLake/scripts.pory"
	fadeinbgm 1
# 325 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerLeave
# 326 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 327 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 10, PuceLake_BrookeGotoPlayer
# 328 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 330 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_GetToDigSite_Text_9
# 338 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 339 "data/maps/AW_PuceLake/scripts.pory"
	closemessage
# 341 "data/maps/AW_PuceLake/scripts.pory"
	applymovement 16, PuceLake_BrookeLeave
# 343 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 2
# 344 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_GYM_PROGRESS, 1
# 345 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 13
# 346 "data/maps/AW_PuceLake/scripts.pory"
	waitmovement 0
# 347 "data/maps/AW_PuceLake/scripts.pory"
	setobjectxyperm 10, 0, 0
# 348 "data/maps/AW_PuceLake/scripts.pory"
	removeobject 10
# 350 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return

PuceLake_GetToDigSite_2:
# 249 "data/maps/AW_PuceLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceLake_PlayerFollowAvery2
	goto PuceLake_GetToDigSite_1


PuceLake_DigSiteSign::
# 354 "data/maps/AW_PuceLake/scripts.pory"
	lockall
# 355 "data/maps/AW_PuceLake/scripts.pory"
	msgbox PuceLake_DigSiteSign_Text_0, MSGBOX_SIGN
# 358 "data/maps/AW_PuceLake/scripts.pory"
	waitmessage
# 359 "data/maps/AW_PuceLake/scripts.pory"
	releaseall
	return


PuceLake_Trigger1_Upper::
# 363 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 0
# 364 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetAvery
	end


PuceLake_Trigger1_Lower::
# 369 "data/maps/AW_PuceLake/scripts.pory"
	setvar VAR_TEMP_0, 1
# 370 "data/maps/AW_PuceLake/scripts.pory"
	call PuceLake_MeetAvery
	end


PuceLake_Trainer_SchoolgirlJessy::
# 375 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_SCHOOLKIDF_JESSY, SchoolgirlJessyIntro, SchoolgirlJessyOutro
	end


PuceLake_Trainer_YoungsterTyler::
# 380 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, YoungsterTylerIntro, YoungsterTylerOutro
	end


PuceLake_Trainer_LassAdela::
# 385 "data/maps/AW_PuceLake/scripts.pory"
	trainerbattle_single TRAINER_LASS_ADELA, LassAdelaIntro, LassAdelaOutro
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
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 446 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 449 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer:
# 450 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 450 "data/maps/AW_PuceLake/scripts.pory"
	walk_slow_left
# 451 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 451 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 454 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer2:
# 455 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 456 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 456 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 456 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 459 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer3:
# 460 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 460 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 461 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 461 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 461 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 464 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer4:
# 465 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 465 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 465 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 466 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 466 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 467 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 468 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 469 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 472 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer5:
# 473 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 474 "data/maps/AW_PuceLake/scripts.pory"
	face_down
	step_end

# 477 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer6:
# 478 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 481 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer7:
# 482 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 482 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 482 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 483 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 484 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 487 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer8:
# 488 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 489 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 489 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 492 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGotoPlayer9:
# 493 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
# 493 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 496 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1Enter:
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 497 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 498 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
	step_end

# 501 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2Enter:
# 502 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 502 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 502 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 502 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 503 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
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
	step_end

# 508 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1MakeWay:
# 509 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 512 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt1ComeBack:
# 513 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 514 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 517 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2MakeWay:
# 518 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 521 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Grunt2ComeBack:
# 522 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 523 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 526 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_MikeGetOut:
# 527 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 527 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 528 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 531 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin1:
# 532 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 532 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 535 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_CarlaJoin2:
# 536 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 537 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 537 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 540 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntsRun:
# 541 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 541 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 541 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 542 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 543 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 543 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 543 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 543 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 543 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 546 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike1:
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 547 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
	step_end

# 550 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_GruntGrabMike2:
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 551 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
	step_end

# 554 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist1:
# 555 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
# 556 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 557 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 558 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 559 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 560 "data/maps/AW_PuceLake/scripts.pory"
	emote_exclamation_mark
# 561 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 562 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 563 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 564 "data/maps/AW_PuceLake/scripts.pory"
	delay_16
# 565 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 565 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 565 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_slow_right
# 566 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 567 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_right
# 568 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 568 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 569 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 569 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
# 569 "data/maps/AW_PuceLake/scripts.pory"
	walk_in_place_fast_up
	step_end

# 572 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_Scientist2:
# 573 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 573 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 574 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_left
# 575 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_down
# 576 "data/maps/AW_PuceLake/scripts.pory"
	face_right
	step_end

# 579 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryFollowScientist:
# 580 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 580 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 580 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 581 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 582 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 583 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 586 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery1:
# 587 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 587 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 587 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 590 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery2:
# 591 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 592 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 592 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 596 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerFollowAvery3:
# 597 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 597 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 601 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_AveryGotoPlayer2:
# 602 "data/maps/AW_PuceLake/scripts.pory"
	walk_fast_up
# 603 "data/maps/AW_PuceLake/scripts.pory"
	face_player
	step_end

# 606 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerGotoLeave:
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 607 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 608 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 609 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 609 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 609 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 609 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 609 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_up
# 610 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 610 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 610 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
# 610 "data/maps/AW_PuceLake/scripts.pory"
	walk_faster_right
	step_end

# 613 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_PlayerLeave:
# 614 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 614 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 614 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 614 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 615 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 616 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 616 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
# 617 "data/maps/AW_PuceLake/scripts.pory"
	walk_up
	step_end

# 620 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_BrookeGotoPlayer:
# 621 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 621 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
	step_end

# 624 "data/maps/AW_PuceLake/scripts.pory"
PuceLake_BrookeLeave:
# 625 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 625 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 625 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 626 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 627 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 627 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 627 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 628 "data/maps/AW_PuceLake/scripts.pory"
	walk_down
# 629 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 629 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
# 629 "data/maps/AW_PuceLake/scripts.pory"
	walk_right
	step_end

# 632 "data/maps/AW_PuceLake/scripts.pory"
FaceLeft:
# 633 "data/maps/AW_PuceLake/scripts.pory"
	face_left
	step_end

# 636 "data/maps/AW_PuceLake/scripts.pory"
WalkLeft1:
# 637 "data/maps/AW_PuceLake/scripts.pory"
	walk_left
	step_end

# 640 "data/maps/AW_PuceLake/scripts.pory"
EmoteQuestion:
# 641 "data/maps/AW_PuceLake/scripts.pory"
	emote_question_mark
	step_end

PuceLake_MeetAvery_Text_0:
# 18 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hey, {PLAYER}! I knew you'd\n"
	.string "show up!$"

PuceLake_MeetAvery_Text_1:
# 31 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Gear's quite a character, aren't\n"
	.string "they? I'm glad they're safe.\p"
	.string "Accidentally turning themselves into a\n"
	.string "Pokemon? Can't say I've heard that one\l"
	.string "before.\p"
	.string "But I also can't say that's out of\n"
	.string "character for them.\p"
	.string "Well, this is Puce Lake. The lake itself\n"
	.string "is just around this path here, it's not\l"
	.string "far.\p"
	.string "It's quite a lovely place, actually. I\n"
	.string "come here to wind down after a hard day\l"
	.string "working!$"

PuceLake_MeetAvery_Text_2:
# 47 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Avery, I haven't seen you leave\n"
	.string "the lab unless it's for an expedition.\p"
	.string "I wish you came here to wind down, you\n"
	.string "need it. You work yourself to the bone.$"

PuceLake_MeetAvery_Text_3:
# 65 "data/maps/AW_PuceLake/scripts.pory"
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

PuceLake_MeetAvery_Text_4:
# 80 "data/maps/AW_PuceLake/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY} from Professor\n"
	.string "Fern!$"

PuceLake_MeetAvery_Text_5:
# 96 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} And here's a little something\n"
	.string "from me. It's nothing, really.$"

PuceLake_MeetAvery_Text_6:
# 109 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Er... yes. We'll get to it. See you in\n"
	.string "a bit, ok, {PLAYER}?$"

PuceLake_TalkBrooke_Text_0:
# 132 "data/maps/AW_PuceLake/scripts.pory"
	.string "Ain't the lake just so peaceful?\p"
	.string "Hm? Hey, you're a young trainer!\p"
	.string "The name's Brooke, 'n I'm the gym leader\n"
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
	.string "If ya wanna get registered, head on\n"
	.string "over to the gym when I'm back.\p"
	.string "I'm just, uh, on my lunch break.\p"
	.string "Guess I'll see ya 'round?$"

PuceLake_TalkCarla_Text_0:
# 154 "data/maps/AW_PuceLake/scripts.pory"
	.string "Avery's just across there, at the dig\n"
	.string "site.\p"
	.string "Head over when you're ready!$"

PuceLake_GetToDigSite_Text_0:
# 180 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Well, here we are. This is our dig\n"
	.string "site.$"

PuceLake_GetToDigSite_Text_1:
# 193 "data/maps/AW_PuceLake/scripts.pory"
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
# 210 "data/maps/AW_PuceLake/scripts.pory"
	.string "I hate to say it, but our current dig\n"
	.string "team is a bit of a rag-tag group.\p"
	.string "We had to bring everyone together\n"
	.string "rather quickly.\p"
	.string "If I'm honest, this is the first dig\n"
	.string "we've had that I'm truly excited about.\p"
	.string "I've just got no idea what we'll find.$"

PuceLake_GetToDigSite_Text_3:
# 226 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: P-Professor...! I- I think\n"
	.string "I've found something of importance!$"

PuceLake_GetToDigSite_Text_4:
# 237 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} What is it?$"

PuceLake_GetToDigSite_Text_5:
# 259 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: ...Do you see it?\p"
	.string "The... the carving...!$"

PuceLake_GetToDigSite_Text_6:
# 274 "data/maps/AW_PuceLake/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} ...Oh my goodness.\p"
	.string "It... it's some sort of language. It has\n"
	.string "to be.\p"
	.string "The stone is... it's painted...!\p"
	.string "Terry, this is a major discovery!\p"
	.string "We have to get to work bringing this\n"
	.string "back to the lab!$"

PuceLake_GetToDigSite_Text_7:
# 288 "data/maps/AW_PuceLake/scripts.pory"
	.string "Scientist: Y-yes! Of course!$"

PuceLake_GetToDigSite_Text_8:
# 301 "data/maps/AW_PuceLake/scripts.pory"
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
# 331 "data/maps/AW_PuceLake/scripts.pory"
	.string "Brooke: Hey! I, uh...\p"
	.string "I saw you battling those trainers back\n"
	.string "there.\p"
	.string "You've got some guts, you know?\p"
	.string "If you want another challenge, head on\n"
	.string "over to my gym.\p"
	.string "I'll get you set up with the league\n"
	.string "registry and everything!\p"
	.string "Looks like my lunch break is over, so\n"
	.string "hopefully I'll see you there!$"

PuceLake_DigSiteSign_Text_0:
# 356 "data/maps/AW_PuceLake/scripts.pory"
	.string "- TEAM TOPAZ DIG SITE -\n"
	.string "Authorized Persons Only\p"
	.string "$"

SchoolgirlJessyIntro::
# 389 "data/maps/AW_PuceLake/scripts.pory"
	.string "Um... hi! It's my first battle, so go easy\n"
	.string "on me!$"

SchoolgirlJessyOutro::
# 395 "data/maps/AW_PuceLake/scripts.pory"
	.string "That was your first battle, too? So\n"
	.string "cool!$"

YoungsterTylerIntro::
# 401 "data/maps/AW_PuceLake/scripts.pory"
	.string "Hey! You got Pokémon? Let's battle! I'll\n"
	.string "win!$"

YoungsterTylerOutro::
# 407 "data/maps/AW_PuceLake/scripts.pory"
	.string "Aw, you're good...$"

LassAdelaIntro::
# 413 "data/maps/AW_PuceLake/scripts.pory"
	.string "The lakeside is so calming... Gah! A\n"
	.string "trainer!$"

LassAdelaOutro::
# 419 "data/maps/AW_PuceLake/scripts.pory"
	.string "Sigh, back to enjoying the view...$"
