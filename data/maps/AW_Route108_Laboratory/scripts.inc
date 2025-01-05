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
	callnative ClearMugshot
# 51 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 52 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 54 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 55 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 59 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 60 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 62 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 67 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 68 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 69 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 72 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 73 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 75 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 79 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 83 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 85 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 86 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 87 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 89 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 90 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 94 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 98 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 99 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 100 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 101 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 105 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 109 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 110 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 112 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 115 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 116 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 117 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 124 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 125 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 126 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 127 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 128 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CARLA
# 131 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 132 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 135 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 136 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 137 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 139 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 140 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 141 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 145 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 146 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 147 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 148 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 149 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative DrawMugshot
# 154 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 158 "data/maps/AW_Route108_Laboratory/scripts.pory"
	callnative ClearMugshot
# 159 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 163 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 164 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 165 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 166 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 167 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 170 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 171 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 172 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 177 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 178 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 179 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 180 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 181 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 184 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 185 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 186 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 187 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


# 190 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 191 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 192 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 193 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_PickAlpacoil::
# 197 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 198 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 219 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 220 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 221 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 199 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 200 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 204 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 215 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 216 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 205 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 206 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 207 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 208 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 209 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 210 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 211 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 3
# 212 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 213 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 226 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 227 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 248 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 249 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 250 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 228 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 229 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 233 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 244 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 245 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 234 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 235 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 236 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 237 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 238 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 240 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 4
# 241 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 242 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 255 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 256 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 277 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 278 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 279 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 257 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 258 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 262 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 273 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 274 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 263 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 264 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 265 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 266 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 267 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 269 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 5
# 270 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 271 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 284 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 285 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 288 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 291 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 292 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 293 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 294 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 299 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 300 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 304 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 308 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 309 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 2
# 313 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 314 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
# 315 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 289 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 327 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 339 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 322 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 325 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 331 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


Route108_Laboratory_HealMachine::
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 345 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108
# 347 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special HealPlayerParty
# 348 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_HEAL
# 349 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 355 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 357 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 358 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 363 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 364 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 364 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 367 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 368 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 368 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 371 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 372 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 375 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 376 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 379 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 380 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 380 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 380 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 380 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 380 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 381 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 382 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 383 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 386 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 387 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 387 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 387 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 387 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 388 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 389 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 390 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 391 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 395 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 396 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 397 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 398 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 399 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 402 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 403 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 406 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 407 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 407 "data/maps/AW_Route108_Laboratory/scripts.pory"
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
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 80 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 113 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 121 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Ah, {PLAYER}. Well, you are\n"
	.string "something of an enigma, that's for sure.\l"
	.string "It's lovely to make your acquaintaince.\p"
	.string "I think you should stay here a while,\n"
	.string "just to make sure you recover properly.\p"
	.string "Vibrava caught you, but I can't say\n"
	.string "whether or not you were hurt on the way\l"
	.string "down.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_10:
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 142 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 155 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 168 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 182 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 201 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 219 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 230 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 259 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 286 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 295 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 301 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 323 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
