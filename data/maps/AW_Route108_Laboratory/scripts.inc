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
	special StopMapMusic
# 9 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 10 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 14 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lockall
# 15 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GetUp
# 16 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 17 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 18 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 21 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 22 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 23 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 24 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 25 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 26 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 27 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 31 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 32 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 40
# 33 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 34 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 35 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 38 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 39 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 40 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 41 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 44 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 45 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 46 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 47 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 48 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 49 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 52 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 53 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 54 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 80
# 55 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 56 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 60 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 61 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 62 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 63 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 64 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 65 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 68 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 69 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 70 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 71 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 74 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 75 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 76 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 77 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 80 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 81 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 82 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 83 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 87 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 88 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 10
# 89 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, LookLeft
# 90 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 91 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 94 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 95 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 96 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 100 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 101 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 102 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 103 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 104 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 30
# 105 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 106 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 107 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 110 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 111 "data/maps/AW_Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 115 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 116 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 117 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 118 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 119 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 122 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 123 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 124 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 125 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 129 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 130 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 131 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 132 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 20
# 133 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 136 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 137 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 138 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 139 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return


# 142 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_GetUp:
# 143 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_up
# 144 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_slow_down
# 145 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

Route108_Laboratory_PickAlpacoil::
# 149 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 150 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 171 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 172 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 173 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 151 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 152 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 156 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 167 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 168 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 157 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 158 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 159 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 160 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 161 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 163 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 3
# 164 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_ALPACOIL
# 165 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 178 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 179 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 200 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 201 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 202 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 180 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 181 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 185 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 196 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 197 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 186 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 187 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 188 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 189 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 190 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 192 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 4
# 193 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_SMACKOP
# 194 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 207 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 208 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 229 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 230 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 231 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 209 "data/maps/AW_Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 210 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 214 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 225 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 226 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 215 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 216 "data/maps/AW_Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 217 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 218 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmoncry
# 219 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 220 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitfanfare
# 221 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 5
# 222 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_PICK_PUPPIXY
# 223 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 236 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setflag FLAG_AW_MID_TUT
# 237 "data/maps/AW_Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 240 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 243 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 244 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hidemonpic
# 245 "data/maps/AW_Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 246 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 249 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 250 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, WalkUpSpot
# 251 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 252 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 255 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 256 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 259 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
# 260 "data/maps/AW_Route108_Laboratory/scripts.pory"
	closemessage
# 261 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 262 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmovement 0
# 263 "data/maps/AW_Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 264 "data/maps/AW_Route108_Laboratory/scripts.pory"
	removeobject 2
# 265 "data/maps/AW_Route108_Laboratory/scripts.pory"
	delay 60
# 266 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
# 267 "data/maps/AW_Route108_Laboratory/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
	return

Route108_Laboratory_Yay_2:
# 241 "data/maps/AW_Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 271 "data/maps/AW_Route108_Laboratory/scripts.pory"
	lock
# 272 "data/maps/AW_Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 273 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 279 "data/maps/AW_Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 285 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 288 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 291 "data/maps/AW_Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 274 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 277 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 280 "data/maps/AW_Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 283 "data/maps/AW_Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


# 294 "data/maps/AW_Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 295 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 296 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 297 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 298 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_right
# 299 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_right
	step_end

# 302 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 303 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 306 "data/maps/AW_Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 307 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 310 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookUp:
# 311 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 314 "data/maps/AW_Route108_Laboratory/scripts.pory"
LookLeft:
# 315 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 318 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 319 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 320 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/AW_Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 325 "data/maps/AW_Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 326 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 326 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 326 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 326 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 327 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 328 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 329 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 330 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 333 "data/maps/AW_Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 334 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 335 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 336 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 337 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
# 338 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 341 "data/maps/AW_Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 342 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 345 "data/maps/AW_Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
# 346 "data/maps/AW_Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 19 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 28 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 36 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 42 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 50 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 57 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 66 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 72 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 78 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 84 "data/maps/AW_Route108_Laboratory/scripts.pory"
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
# 92 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah. Hey, we should show\n"
	.string "{PLAYER} around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 97 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 108 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\p"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 120 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 134 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one!\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 153 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 171 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 182 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 211 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 238 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 247 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 253 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose!\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 257 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 275 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 281 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 286 "data/maps/AW_Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
