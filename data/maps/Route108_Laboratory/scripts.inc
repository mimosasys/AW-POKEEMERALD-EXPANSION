Route108_Laboratory_MapScripts::
# 2 "data/maps/Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route108_Laboratory/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 2, Route108_Laboratory_OnWarp
	.2byte 0


Route108_Laboratory_OnWarp::
# 8 "data/maps/Route108_Laboratory/scripts.pory"
	special StopMapMusic
# 9 "data/maps/Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 10 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 14 "data/maps/Route108_Laboratory/scripts.pory"
	lockall
# 15 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 16 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 17 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 20 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 21 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 22 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 23 "data/maps/Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 24 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 25 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 30 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 31 "data/maps/Route108_Laboratory/scripts.pory"
	delay 40
# 32 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 33 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 34 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 37 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 38 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 39 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 43 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 44 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 45 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 46 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 47 "data/maps/Route108_Laboratory/scripts.pory"
	delay 80
# 48 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 51 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 52 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 53 "data/maps/Route108_Laboratory/scripts.pory"
	delay 80
# 54 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 55 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 59 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 60 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 61 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 62 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 64 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 67 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 68 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 69 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 73 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 74 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 75 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 76 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 79 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 80 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 81 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 82 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 86 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 87 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 88 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 89 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 93 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 94 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 95 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 99 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 100 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 101 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 102 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 103 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 104 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 105 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 109 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 110 "data/maps/Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 114 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 115 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 116 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 118 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 121 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 122 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 123 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 128 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 129 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 130 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 132 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 135 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 136 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 137 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_PickAlpacoil::
# 142 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 143 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 164 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 165 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 166 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 144 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 145 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 149 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 160 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 161 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 150 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 151 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 152 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 153 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 154 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 156 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 3
# 157 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 158 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 171 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 172 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 193 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 194 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 195 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 173 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 174 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 178 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 189 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 190 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 179 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 180 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 181 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 182 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 183 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 185 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 4
# 186 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 187 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 200 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 201 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 222 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 223 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 224 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 202 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 203 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 207 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 218 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 219 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 208 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 209 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 210 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 212 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 214 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 5
# 215 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 216 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 229 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 230 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 233 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 236 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 237 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 238 "data/maps/Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 239 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 242 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 243 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 244 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 248 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 249 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 252 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 253 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 254 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 255 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 257 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 2
# 258 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 259 "data/maps/Route108_Laboratory/scripts.pory"
	release
# 260 "data/maps/Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 234 "data/maps/Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 265 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 266 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 272 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 278 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 284 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 267 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 270 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 273 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 276 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


# 287 "data/maps/Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 288 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 289 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 289 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 289 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 289 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 289 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 295 "data/maps/Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 296 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 296 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 299 "data/maps/Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 300 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 300 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 303 "data/maps/Route108_Laboratory/scripts.pory"
LookUp:
# 304 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 307 "data/maps/Route108_Laboratory/scripts.pory"
LookLeft:
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 311 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 312 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 312 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 312 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 312 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 312 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 313 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 314 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 318 "data/maps/Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 319 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 320 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 321 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 326 "data/maps/Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 327 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 328 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 330 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 330 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 330 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 330 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 331 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 334 "data/maps/Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 335 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 338 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 339 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 339 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 18 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 27 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 35 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 41 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 49 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 56 "data/maps/Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 65 "data/maps/Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 71 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 77 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 83 "data/maps/Route108_Laboratory/scripts.pory"
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
# 91 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 96 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 107 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 119 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 133 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 146 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 164 "data/maps/Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 175 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 204 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 231 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 240 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 246 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 250 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 268 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 274 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 279 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
