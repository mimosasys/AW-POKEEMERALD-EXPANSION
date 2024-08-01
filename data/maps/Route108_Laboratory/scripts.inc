Route108_Laboratory_MapScripts::
	.byte 0


Route108_Laboratory_OnWarp::
# 8 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 2
	goto_if_eq Route108_Laboratory_OnWarp_1
	return

Route108_Laboratory_OnWarp_1:
# 9 "data/maps/Route108_Laboratory/scripts.pory"
	special StopMapMusic
# 10 "data/maps/Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 11 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 16 "data/maps/Route108_Laboratory/scripts.pory"
	lockall
# 17 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 18 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 19 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 22 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 23 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 24 "data/maps/Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 25 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, Route108_ProfessorEnter
# 26 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 31 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 32 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, EmoteExclamation
# 33 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 36 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 37 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 38 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 42 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 43 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 44 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 45 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, LookDown
# 46 "data/maps/Route108_Laboratory/scripts.pory"
	delay 120
# 47 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 50 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 51 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 52 "data/maps/Route108_Laboratory/scripts.pory"
	delay 120
# 53 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 54 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 58 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 59 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 60 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, LookUp
# 61 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 63 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 66 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 67 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkRightSpot
# 68 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 72 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 73 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 74 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 75 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 78 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 79 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 80 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 81 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 85 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 86 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 87 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, LookLeft
# 88 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 92 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 93 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, FacePlayer
# 94 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 98 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 99 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorToPokeballs
# 100 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 101 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 102 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 106 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 107 "data/maps/Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 111 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 112 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 113 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 115 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 118 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 119 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 120 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 125 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 126 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, WalkLeftSpot
# 127 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 129 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveRight_Text_0
# 132 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 133 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 134 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_PickAlpacoil::
# 139 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 140 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 160 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 161 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 162 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 141 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 142 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 146 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 156 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 157 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 147 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 148 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 149 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 151 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 153 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 3
# 154 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 167 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 168 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 188 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 189 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 190 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 169 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 170 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 174 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 184 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 185 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 175 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 176 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 177 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 179 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 180 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 181 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 4
# 182 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 195 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 196 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 216 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 217 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 218 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 197 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 198 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 202 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 212 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 213 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 203 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 204 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 205 "data/maps/Route108_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 206 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 207 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 208 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 209 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 5
# 210 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 223 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 226 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 229 "data/maps/Route108_Laboratory/scripts.pory"
	closemessage
# 231 "data/maps/Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 232 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 235 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 236 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 237 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 240 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 241 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 244 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 245 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 2, ProfessorLeave
# 246 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 248 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 2
# 249 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 250 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_Yay_2:
# 227 "data/maps/Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 254 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 255 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, FacePlayer
# 256 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 262 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 268 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 271 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 274 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, FaceOriginalDirection
# 275 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 257 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 260 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 266 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


# 278 "data/maps/Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 279 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 280 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 280 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 280 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 280 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 280 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 281 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 282 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 282 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 282 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 282 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 283 "data/maps/Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 286 "data/maps/Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 287 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 287 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 290 "data/maps/Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 294 "data/maps/Route108_Laboratory/scripts.pory"
LookDown:
# 295 "data/maps/Route108_Laboratory/scripts.pory"
	face_down
	step_end

# 298 "data/maps/Route108_Laboratory/scripts.pory"
LookUp:
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 302 "data/maps/Route108_Laboratory/scripts.pory"
LookLeft:
# 303 "data/maps/Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 306 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 307 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 307 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 307 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 307 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 307 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 308 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 309 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 310 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 313 "data/maps/Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
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
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 316 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 319 "data/maps/Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 320 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 321 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 322 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 323 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 324 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 327 "data/maps/Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 328 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 331 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 332 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 332 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 20 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_1:
# 28 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_2:
# 34 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_3:
# 40 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor....\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_4:
# 48 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_5:
# 55 "data/maps/Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_6:
# 64 "data/maps/Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_7:
# 70 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Hi!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_8:
# 76 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_9:
# 82 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Ah, {PLAYER}. Well, you are\n"
	.string "something of an enigma, that's for sure.\l"
	.string "It's lovely to make your acquaintaince.\p"
	.string "I think you should stay here a while,\n"
	.string "just to make sure you recover properly.\l"
	.string "Vibrava caught you, but I can't say\l"
	.string "whether or not you were hurt on the way\l"
	.string "down.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_10:
# 90 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah! We can show {PLAYER}\n"
	.string "around the lab!\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_11:
# 95 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\p"
	.string "Here, come with me.\p"
	.string "$"

Route108_Laboratory_FirstTime_Text_12:
# 104 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\n"
	.string "Take your pick.\p"
	.string "$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 116 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, choose one!\p"
	.string "$"

Route108_Laboratory_DontLeaveRight_Text_0:
# 130 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one.\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 143 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?\p"
	.string "$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 160 "data/maps/Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.\p"
	.string "$"

Route108_Laboratory_PickSmackop_Text_0:
# 171 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?\p"
	.string "$"

Route108_Laboratory_PickPuppixy_Text_0:
# 199 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?\p"
	.string "$"

Route108_Laboratory_Yay_Text_0:
# 224 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?\p"
	.string "$"

Route108_Laboratory_Yay_Text_1:
# 233 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that.\p"
	.string "$"

Route108_Laboratory_Yay_Text_2:
# 238 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose.\p"
	.string "$"

Route108_Laboratory_Yay_Text_3:
# 242 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_0:
# 258 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_1:
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go.\p"
	.string "$"

Route108_Laboratory_TalkCarla_Text_2:
# 269 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.\p"
	.string "$"
