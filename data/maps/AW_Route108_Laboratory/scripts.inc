AW_Route108_Laboratory_MapScripts::
# 2 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_Route108_Laboratory/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 2, Route108_Laboratory_OnWarp
	.2byte 0


Route108_Laboratory_OnWarp::
# 8 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadeoutbgm 1
# 9 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 10 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108
# 11 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 15 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 16 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GetUp
# 17 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 18 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 20 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 21 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 25 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 26 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 27 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 28 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 29 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 30 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 31 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 33 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 34 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 35 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 39 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 40 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 41 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 42 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 40
# 43 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 44 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 45 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 46 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 49 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 50 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 51 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 52 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 53 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 55 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 60 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 61 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 66 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 68 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 69 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 73 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 74 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 79 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 80 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 85 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 86 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 87 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 89 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 90 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 97 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 99 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 100 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 101 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 108 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 109 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 112 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 113 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 114 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 117 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 121 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 122 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 126 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 127 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 128 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 129 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 131 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 134 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 135 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 138 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 139 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 140 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 142 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 143 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 144 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 148 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 149 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 154 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 155 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 156 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 160 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 161 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 162 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 166 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 167 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 168 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 169 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 170 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 174 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 175 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 176 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 180 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 181 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 182 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 183 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 184 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 187 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 188 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 189 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 190 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


# 193 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 194 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 195 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 196 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_PickAlpacoil::
# 200 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 201 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 222 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 223 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 224 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 202 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 203 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 207 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 218 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 219 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 208 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 209 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 210 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 212 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 214 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 3
# 215 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 216 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 229 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 230 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 251 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 252 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 253 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 231 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 232 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 236 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 247 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 248 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 237 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 238 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 239 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 240 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 241 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 242 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 243 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 4
# 244 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 245 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 258 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 259 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 280 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 281 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 282 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 260 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 261 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 265 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 276 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 277 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 266 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 267 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 268 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 269 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 270 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 271 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 272 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 5
# 273 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 274 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 287 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 288 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 291 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 294 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 295 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 300 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 301 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 302 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 313 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 314 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 315 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 2
# 316 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 317 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
# 318 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 292 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 322 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 323 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 324 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 339 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 342 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 325 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 331 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


Route108_Laboratory_HealMachine::
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 347 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 348 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 349 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special HealPlayerParty
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_HEAL
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 353 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 354 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 355 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 361 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 362 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 362 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 362 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 362 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 363 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 366 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 367 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 367 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 370 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 371 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 371 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 374 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 375 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 378 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 379 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 384 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 385 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 386 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 392 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 393 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 400 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 401 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 403 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 406 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 407 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 410 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 411 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 411 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 23 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 36 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 47 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 58 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 71 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 81 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 93 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 104 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 115 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 123 "data/maps/AW_Route108_Laboratory/scripts.pory"
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
# 136 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 145 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 158 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 171 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 185 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 204 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 222 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 233 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 262 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 289 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 304 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 308 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR GREEN}Fern:{COLOR DARK_GRAY} Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 326 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "{COLOR BLUE}Carla:{COLOR DARK_GRAY} What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
