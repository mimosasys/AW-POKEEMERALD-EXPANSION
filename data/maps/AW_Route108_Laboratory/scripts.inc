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
# 19 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 22 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 23 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 24 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 25 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 26 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 27 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 28 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 32 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 33 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 40
# 34 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 35 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 36 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 39 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 40 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 41 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 42 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 45 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 46 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 47 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 48 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 49 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 50 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 53 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 54 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 55 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 61 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 62 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 66 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 69 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 71 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 72 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 75 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 81 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 82 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 83 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 89 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 90 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 97 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 101 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 104 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 105 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 108 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 112 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 116 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 117 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 123 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 124 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 125 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 126 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 131 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 132 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 134 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 137 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 138 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 139 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 140 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


# 143 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 144 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 145 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 146 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_PickAlpacoil::
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 172 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 174 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 168 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 169 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 158 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 159 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 160 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 161 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 162 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 164 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 3
# 165 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 166 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 179 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 180 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 201 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 202 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 203 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 181 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 182 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 186 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 197 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 198 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 187 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 188 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 189 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 190 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 191 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 193 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 4
# 194 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 195 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 208 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 209 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 230 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 231 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 232 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 210 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 211 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 215 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 226 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 227 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 216 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 217 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 218 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 219 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 220 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 221 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 222 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 5
# 223 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 224 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 237 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 238 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 241 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 244 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 245 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 246 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 247 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 250 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 251 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 252 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 253 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 256 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 257 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 260 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 261 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 262 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 263 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 264 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 265 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 2
# 266 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 267 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
# 268 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 242 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 272 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 273 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 274 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 280 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 286 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 289 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 292 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 275 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 278 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 281 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 284 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


Route108_Laboratory_HealMachine::
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 299 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setrespawn HEAL_LOCATION_AW_ROUTE108
# 300 "data/maps/AW_Route108_Laboratory/scripts.pory"
	special HealPlayerParty
# 301 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_HEAL
# 302 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 304 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitstate
# 305 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


# 308 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 309 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 312 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 313 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 316 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 317 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 317 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 324 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 325 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 332 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 339 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 340 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 340 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 340 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 340 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 342 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 342 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 343 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 344 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 347 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 348 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 349 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 350 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 351 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 352 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 356 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 359 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 360 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 20 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 29 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 37 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 43 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 51 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 58 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 67 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 73 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 79 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 85 "data/maps/AW_Route108_Laboratory/scripts.pory"
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
# 93 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 98 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 109 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 121 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 135 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 154 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 172 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 183 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 212 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 239 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 248 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 254 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 258 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 276 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 282 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 287 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
