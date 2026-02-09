AW_TopazLab_MapScripts::
# 2 "data/maps/AW_TopazLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_TopazLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_TopazLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_TopazLab/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, TopazLab_Transition
	.2byte 0


TopazLab_Transition::
# 10 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 12 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 13 "data/maps/AW_TopazLab/scripts.pory"
	hideobjectat 8, MAP_AW_TOPAZ_LAB
# 14 "data/maps/AW_TopazLab/scripts.pory"
	hideobjectat 9, MAP_AW_TOPAZ_LAB
# 15 "data/maps/AW_TopazLab/scripts.pory"
	hideobjectat 10, MAP_AW_TOPAZ_LAB
# 16 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 18 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 19 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 2, CarlaLeaveLab
# 20 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 22 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkRightSpot
# 23 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 25 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 26 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 27 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_Transition_Text_0
# 31 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 32 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 33 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 35 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, AveryGotoMons1
# 36 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 38 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 39 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 40 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_Transition_Text_1
# 44 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 45 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 46 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 48 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, AveryGotoMons2
# 49 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 50 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGotoMons
# 51 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 2, CarlaGotoMons
# 52 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 54 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 55 "data/maps/AW_TopazLab/scripts.pory"
	release
	return


TopazLab_LockedDoor::
# 59 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 60 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_LockedDoor_Text_0
# 64 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 65 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return


TopazLab_TalkAlpacoil::
# 69 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 70 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 71 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkAlpacoil_Text_0, MSGBOX_YESNO
# 75 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 76 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 78 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkAlpacoil_2
TopazLab_TalkAlpacoil_1:
# 90 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 92 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkAlpacoil_7
TopazLab_TalkAlpacoil_4:
# 96 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return

TopazLab_TalkAlpacoil_2:
# 79 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 80 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 81 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 5, EmoteHeart
# 82 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 84 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkAlpacoil_Text_1
# 85 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 86 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 88 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto TopazLab_TalkAlpacoil_1

TopazLab_TalkAlpacoil_5:
# 93 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkAlpacoil_4

TopazLab_TalkAlpacoil_6:
# 92 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkAlpacoil_5
	goto TopazLab_TalkAlpacoil_4

TopazLab_TalkAlpacoil_7:
# 92 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkAlpacoil_6
	goto TopazLab_TalkAlpacoil_4


TopazLab_TalkSmackop::
# 100 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 101 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 102 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkSmackop_Text_0, MSGBOX_YESNO
# 106 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 107 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 109 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkSmackop_2
TopazLab_TalkSmackop_1:
# 121 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 123 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkSmackop_7
TopazLab_TalkSmackop_4:
# 127 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_TalkSmackop_2:
# 110 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 111 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 112 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 4, EmoteHeart
# 113 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 115 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkSmackop_Text_1
# 116 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 117 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 119 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto TopazLab_TalkSmackop_1

TopazLab_TalkSmackop_5:
# 124 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkSmackop_4

TopazLab_TalkSmackop_6:
# 123 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkSmackop_5
	goto TopazLab_TalkSmackop_4

TopazLab_TalkSmackop_7:
# 123 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkSmackop_6
	goto TopazLab_TalkSmackop_4


TopazLab_TalkPuppixy::
# 131 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 132 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 133 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkPuppixy_Text_0, MSGBOX_YESNO
# 137 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 138 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 140 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkPuppixy_2
TopazLab_TalkPuppixy_1:
# 152 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 154 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkPuppixy_7
TopazLab_TalkPuppixy_4:
# 158 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_TalkPuppixy_2:
# 141 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 142 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 143 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 3, EmoteHeart
# 144 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 146 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkPuppixy_Text_1
# 147 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 148 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 150 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto TopazLab_TalkPuppixy_1

TopazLab_TalkPuppixy_5:
# 155 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkPuppixy_4

TopazLab_TalkPuppixy_6:
# 154 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkPuppixy_5
	goto TopazLab_TalkPuppixy_4

TopazLab_TalkPuppixy_7:
# 154 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkPuppixy_6
	goto TopazLab_TalkPuppixy_4


TopazLab_CheckAllStarters::
# 162 "data/maps/AW_TopazLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/AW_TopazLab/scripts.pory"
	delay 60
# 165 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 166 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 167 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 168 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_MID_TUT
# 170 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 6
# 172 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 16
# 174 "data/maps/AW_TopazLab/scripts.pory"
	special SpawnCameraObject
# 175 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 11, 16
# 176 "data/maps/AW_TopazLab/scripts.pory"
	special RemoveCameraObject
# 178 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_WhoToChoose
	return


TopazLab_WhoToChoose::
# 182 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 184 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 1, 13, 15
# 185 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 2, 13, 16
# 187 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 3, 15, 4
# 188 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 4, 15, 4
# 189 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 5, 15, 4
# 191 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 8, 10, 15
# 192 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 9, 10, 16
# 193 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 10, 10, 17
# 195 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 1
# 196 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 2
# 198 "data/maps/AW_TopazLab/scripts.pory"
	showobjectat 8, MAP_AW_TOPAZ_LAB
# 199 "data/maps/AW_TopazLab/scripts.pory"
	showobjectat 9, MAP_AW_TOPAZ_LAB
# 200 "data/maps/AW_TopazLab/scripts.pory"
	showobjectat 10, MAP_AW_TOPAZ_LAB
# 202 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
# 204 "data/maps/AW_TopazLab/scripts.pory"
	delay 60
# 206 "data/maps/AW_TopazLab/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 208 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 11, WalkLeftSpot
# 209 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 211 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 212 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 213 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_WhoToChoose_Text_0
# 219 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 220 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 221 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 223 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 224 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 226 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 8, WalkRightSpot
# 227 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 228 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 230 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 9, WalkRightSpot
# 231 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 232 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 234 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 10, WalkRightSpot
# 235 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 236 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 238 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkLeftSpot
# 239 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 241 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 242 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 243 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_WhoToChoose_Text_1
# 246 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 247 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 248 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 251 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 7
# 253 "data/maps/AW_TopazLab/scripts.pory"
	release
	return


TopazLab_FernTalk::
# 257 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 258 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_AW_PROGRESS_1, 6
	goto_if_eq TopazLab_FernTalk_2
# 268 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_AW_PROGRESS_1, 9
	goto_if_eq TopazLab_FernTalk_3
# 280 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 281 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 282 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_FernTalk_Text_2
# 286 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 287 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 288 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
TopazLab_FernTalk_1:
# 290 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_FernTalk_2:
# 259 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 260 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 261 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_FernTalk_Text_0
# 264 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 265 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 266 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
	goto TopazLab_FernTalk_1

TopazLab_FernTalk_3:
# 269 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 270 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 271 "data/maps/AW_TopazLab/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 272 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_FernTalk_Text_1
# 275 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 276 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 277 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
	goto TopazLab_FernTalk_1


TopazLab_Chosen::
# 294 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 295 "data/maps/AW_TopazLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 296 "data/maps/AW_TopazLab/scripts.pory"
	delay 60
# 298 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 8
# 300 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 16
# 301 "data/maps/AW_TopazLab/scripts.pory"
	special SpawnCameraObject
# 302 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 11, 16
# 303 "data/maps/AW_TopazLab/scripts.pory"
	special RemoveCameraObject
# 305 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_AfterChosen
	return


TopazLab_AfterChosen::
# 309 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 311 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 312 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_TEMP_1
# 313 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 8
# 314 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 9
# 315 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 10
# 316 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 11
# 317 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 12
# 319 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 3, 7, 19
# 320 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 4, 5, 16
# 321 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxyperm 5, 8, 15
# 323 "data/maps/AW_TopazLab/scripts.pory"
	showobjectat 1, MAP_AW_TOPAZ_LAB
# 324 "data/maps/AW_TopazLab/scripts.pory"
	showobjectat 2, MAP_AW_TOPAZ_LAB
# 326 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
# 328 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy 1, 13, 15
# 329 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy 2, 13, 16
# 330 "data/maps/AW_TopazLab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 332 "data/maps/AW_TopazLab/scripts.pory"
	delay 60
# 334 "data/maps/AW_TopazLab/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 336 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 337 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 338 "data/maps/AW_TopazLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 339 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_AfterChosen_Text_0, MSGBOX_YESNO
# 343 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 344 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 345 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 347 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_AfterChosen_2
TopazLab_AfterChosen_1:
# 353 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 354 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 355 "data/maps/AW_TopazLab/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 356 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_AfterChosen_Text_1
# 362 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 363 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 364 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 366 "data/maps/AW_TopazLab/scripts.pory"
	delay 16
# 367 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkRightSpot
# 368 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement 0
# 369 "data/maps/AW_TopazLab/scripts.pory"
	delay 16
# 371 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 372 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 373 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_AfterChosen_Text_2
# 376 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 377 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 378 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, LookLeft
# 381 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement 0
# 383 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 384 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 385 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_AfterChosen_Text_3, MSGBOX_YESNO
# 391 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 392 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 393 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 395 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne TopazLab_AfterChosen_5
TopazLab_AfterChosen_4:
# 399 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 400 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 401 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_AfterChosen_Text_4
# 405 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 406 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 407 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 409 "data/maps/AW_TopazLab/scripts.pory"
	giveitem ITEM_POTION, 5
# 410 "data/maps/AW_TopazLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 412 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 414 "data/maps/AW_TopazLab/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 415 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 416 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 417 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_FernTalk_Text_1
# 420 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 421 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 422 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 424 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 426 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_AfterChosen_2:
# 348 "data/maps/AW_TopazLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 350 "data/maps/AW_TopazLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto TopazLab_AfterChosen_1

TopazLab_AfterChosen_5:
# 396 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_AskPortMulberry
	goto TopazLab_AfterChosen_4


TopazLab_AskPortMulberry::
# 430 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 431 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 432 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_AskPortMulberry_Text_0, MSGBOX_YESNO
# 435 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 436 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 437 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 439 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne TopazLab_AskPortMulberry_1
	return

TopazLab_AskPortMulberry_1:
# 440 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_AskPortMulberry
	return


TopazLab_TryLeaveTop::
# 445 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 447 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 448 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 449 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TryLeaveTop_Text_0
# 453 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 454 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 455 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 457 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveDown1
# 458 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement 0
# 460 "data/maps/AW_TopazLab/scripts.pory"
	release
	return


TopazLab_TryLeaveRight::
# 464 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 466 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 467 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 468 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TryLeaveTop_Text_0
# 472 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 473 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 474 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 476 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLeft1
# 477 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement 0
# 479 "data/maps/AW_TopazLab/scripts.pory"
	release
	return


TopazLab_ChooseAlpacoil::
# 483 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 484 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 485 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 486 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_ChooseAlpacoil_Text_0, MSGBOX_YESNO
# 489 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 490 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 491 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 493 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TopazLab_ChooseAlpacoil_2
TopazLab_ChooseAlpacoil_1:
# 513 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_ChooseAlpacoil_2:
# 494 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 8
# 495 "data/maps/AW_TopazLab/scripts.pory"
	givemon SPECIES_ALPACOIL, 5, ITEM_NONE, ITEM_CHERISH_BALL
# 496 "data/maps/AW_TopazLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 497 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_ChooseAlpacoil_Text_1
# 500 "data/maps/AW_TopazLab/scripts.pory"
	waitfanfare
# 501 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 502 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 503 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 504 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_2, 0
# 505 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_PUPPIXY
# 506 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_SMACKOP
# 507 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 508 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 8
# 510 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_Chosen
	goto TopazLab_ChooseAlpacoil_1


TopazLab_ChooseSmackop::
# 517 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 518 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 519 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 520 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_ChooseSmackop_Text_0, MSGBOX_YESNO
# 523 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 524 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 525 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 527 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TopazLab_ChooseSmackop_2
TopazLab_ChooseSmackop_1:
# 547 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_ChooseSmackop_2:
# 528 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 9
# 529 "data/maps/AW_TopazLab/scripts.pory"
	givemon SPECIES_SMACKOP, 5, ITEM_NONE, ITEM_CHERISH_BALL
# 530 "data/maps/AW_TopazLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 531 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_ChooseSmackop_Text_1
# 534 "data/maps/AW_TopazLab/scripts.pory"
	waitfanfare
# 535 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 536 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 537 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 538 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_2, 0
# 539 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_PUPPIXY
# 540 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_ALPACOIL
# 541 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_TEMP_1
# 542 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 8
# 544 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_Chosen
	goto TopazLab_ChooseSmackop_1


TopazLab_ChoosePuppixy::
# 551 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 552 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 553 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 554 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_ChoosePuppixy_Text_0, MSGBOX_YESNO
# 557 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 558 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 559 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 561 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TopazLab_ChoosePuppixy_2
TopazLab_ChoosePuppixy_1:
# 581 "data/maps/AW_TopazLab/scripts.pory"
	release
	return

TopazLab_ChoosePuppixy_2:
# 562 "data/maps/AW_TopazLab/scripts.pory"
	removeobject 10
# 563 "data/maps/AW_TopazLab/scripts.pory"
	givemon SPECIES_PUPPIXY, 5, ITEM_NONE, ITEM_CHERISH_BALL
# 564 "data/maps/AW_TopazLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 565 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_ChoosePuppixy_Text_1
# 568 "data/maps/AW_TopazLab/scripts.pory"
	waitfanfare
# 569 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 570 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 571 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 572 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_2, 0
# 573 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_ALPACOIL
# 574 "data/maps/AW_TopazLab/scripts.pory"
	clearflag FLAG_AW_PICK_SMACKOP
# 575 "data/maps/AW_TopazLab/scripts.pory"
	setflag FLAG_TEMP_1
# 576 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 8
# 578 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_Chosen
	goto TopazLab_ChoosePuppixy_1


# 584 "data/maps/AW_TopazLab/scripts.pory"
CarlaLeaveLab:
# 585 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 585 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 585 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 586 "data/maps/AW_TopazLab/scripts.pory"
	face_left
	step_end

# 589 "data/maps/AW_TopazLab/scripts.pory"
AveryGotoMons1:
# 590 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 591 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 591 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 592 "data/maps/AW_TopazLab/scripts.pory"
	face_player
	step_end

# 595 "data/maps/AW_TopazLab/scripts.pory"
AveryGotoMons2:
# 596 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 597 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 597 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 600 "data/maps/AW_TopazLab/scripts.pory"
PlayerGotoMons:
# 601 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 601 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 601 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 602 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 602 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 602 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 603 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 603 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 603 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 606 "data/maps/AW_TopazLab/scripts.pory"
CarlaGotoMons:
# 607 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 607 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 607 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 607 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 608 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 608 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 608 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 608 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 609 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 609 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 612 "data/maps/AW_TopazLab/scripts.pory"
EmoteHeart:
# 613 "data/maps/AW_TopazLab/scripts.pory"
	emote_heart
	step_end

# 616 "data/maps/AW_TopazLab/scripts.pory"
MoveLeft1:
# 617 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

TopazLab_Transition_Text_0:
# 28 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY}Well, this is the little plot of\n"
	.string "land where we've set up our lab.\p"
	.string "We do archaeology mostly, so we're not\n"
	.string "around here that much, but when we are,\l"
	.string "we take care of hurt or abandoned\l"
	.string "Pokémon.\p"
	.string "$"

TopazLab_Transition_Text_1:
# 41 "data/maps/AW_TopazLab/scripts.pory"
	.string "Speaking of, there's three down here I'd\n"
	.string "like you to get to know.\p"
	.string "They're just around here, come have a\n"
	.string "look!\p"
	.string "$"

TopazLab_LockedDoor_Text_0:
# 61 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR RED}TOPAZ LABORATORY STOREROOM\p"
	.string "The door is locked.\p"
	.string "$"

TopazLab_TalkAlpacoil_Text_0:
# 72 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Give Alpacoil a pat?\p"
	.string "$"

TopazLab_TalkAlpacoil_Text_1:
# 84 "data/maps/AW_TopazLab/scripts.pory"
	.string "Alpacoil rubbed its nose against your\n"
	.string "legs and sniffed your shoes.\p"
	.string "It likes you!\p"
	.string "$"

TopazLab_TalkSmackop_Text_0:
# 103 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Give Smackop a pat?\p"
	.string "$"

TopazLab_TalkSmackop_Text_1:
# 115 "data/maps/AW_TopazLab/scripts.pory"
	.string "Smackop delightfully pecked at your\n"
	.string "feet, and looked into your eyes\l"
	.string "playfully.\p"
	.string "It likes you!\p"
	.string "$"

TopazLab_TalkPuppixy_Text_0:
# 134 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Give Puppixy a pat?\p"
	.string "$"

TopazLab_TalkPuppixy_Text_1:
# 146 "data/maps/AW_TopazLab/scripts.pory"
	.string "Puppixy wagged its tail and scratched\n"
	.string "at the ground in front of you.\p"
	.string "It likes you!\p"
	.string "$"

TopazLab_WhoToChoose_Text_0:
# 214 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY}So, what do you think? Aren't they\n"
	.string "fantastic?\p"
	.string "You see, truth is, they're all rescues,\n"
	.string "too.\p"
	.string "Unfortunately, since they're a bit\n"
	.string "nervous around people, it's been pretty\l"
	.string "hard to take care of them all.\p"
	.string "So I was wondering, would you like to\n"
	.string "take care of one? It seems they've\l"
	.string "really taken a liking to you!\p"
	.string "$"

TopazLab_WhoToChoose_Text_1:
# 244 "data/maps/AW_TopazLab/scripts.pory"
	.string "Go on, which one calls to you the most?\p"
	.string "$"

TopazLab_FernTalk_Text_0:
# 262 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY}Go on, take your pick!\p"
	.string "$"

TopazLab_FernTalk_Text_1:
# 273 "data/maps/AW_TopazLab/scripts.pory"
	.string "Well, I won't keep you! Go on and get out\n"
	.string "there!\p"
	.string "You and {STR_VAR_1}'s first\n"
	.string "adventure awaits!\p"
	.string "$"

TopazLab_FernTalk_Text_2:
# 283 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY}Go on, introduce yourself to\n"
	.string "them!\p"
	.string "Aren't they all gorgeous?\p"
	.string "$"

TopazLab_AfterChosen_Text_0:
# 340 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY} A great choice! I'm sure you and\n"
	.string "{STR_VAR_1} will get along just\l"
	.string "great!\p"
	.string "Ah, but would you perhaps want to give\n"
	.string "{STR_VAR_1} a nickname?$"

TopazLab_AfterChosen_Text_1:
# 357 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR GREEN}Fern: {COLOR DARK_GRAY}Well, {PLAYER}, why don't you\n"
	.string "and {STR_VAR_1} get to know each\l"
	.string "other a little?\p"
	.string "If you go out the front door of the lab,\n"
	.string "you'll reach Route 108.\p"
	.string "And if you head east from there, you'll\n"
	.string "arrive at the town of Port Mulberry.\p"
	.string "It's a quaint little place, and a good\n"
	.string "friend of mine lives there.\p"
	.string "$"

TopazLab_AfterChosen_Text_2:
# 374 "data/maps/AW_TopazLab/scripts.pory"
	.string "Actually, now that I think about it, I\n"
	.string "haven't heard from them in quite some\l"
	.string "time...\p"
	.string "$"

TopazLab_AfterChosen_Text_3:
# 386 "data/maps/AW_TopazLab/scripts.pory"
	.string "{PLAYER}, could you do me a favour\n"
	.string "and go check on them?\p"
	.string "Their name is Gear, and they live in a\n"
	.string "little laboratory of their own, all the\l"
	.string "way on the eastern side of\n"
	.string "Port Mulberry.\p"
	.string "I'm sure you and {STR_VAR_1} will\n"
	.string "have a great time exploring the\l"
	.string "surrounding area.\p"
	.string "C'mon, what do you say?$"

TopazLab_AfterChosen_Text_4:
# 402 "data/maps/AW_TopazLab/scripts.pory"
	.string "Great! Well, here's some things to get\n"
	.string "you going.\p"
	.string "You'll likely encounter some wild\n"
	.string "Pokémon out there, so you'll need\l"
	.string "these!\p"
	.string "$"

TopazLab_AskPortMulberry_Text_0:
# 433 "data/maps/AW_TopazLab/scripts.pory"
	.string "Please? I don't know if they're alright\n"
	.string "or not.\p"
	.string "And we're just on the verge of a big\n"
	.string "discovery here!\p"
	.string "Won't you go in my stead?\p"
	.string "$"

TopazLab_TryLeaveTop_Text_0:
# 450 "data/maps/AW_TopazLab/scripts.pory"
	.string "Hey! {PLAYER}! Don't leave yet!\p"
	.string "Don't you want to meet these Pokémon?\p"
	.string "$"

TopazLab_ChooseAlpacoil_Text_0:
# 487 "data/maps/AW_TopazLab/scripts.pory"
	.string "You want to go with Alpacoil?\p"
	.string "$"

TopazLab_ChooseAlpacoil_Text_1:
# 498 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR RED}Alpacoil joined your party!\p"
	.string "$"

TopazLab_ChooseSmackop_Text_0:
# 521 "data/maps/AW_TopazLab/scripts.pory"
	.string "You want to go with Smackop?\p"
	.string "$"

TopazLab_ChooseSmackop_Text_1:
# 532 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR RED}Smackop joined your party!\p"
	.string "$"

TopazLab_ChoosePuppixy_Text_0:
# 555 "data/maps/AW_TopazLab/scripts.pory"
	.string "You want to go with Puppixy?\p"
	.string "$"

TopazLab_ChoosePuppixy_Text_1:
# 566 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR RED}Puppixy joined your party!\p"
	.string "$"
