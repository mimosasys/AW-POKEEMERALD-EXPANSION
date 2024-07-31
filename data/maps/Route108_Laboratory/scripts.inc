Route108_Laboratory_MapScripts::
# 2 "data/maps/Route108_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route108_Laboratory_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route108_Laboratory/scripts.pory"
	special StopMapMusic
# 5 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_FirstTime
	return


Route108_Laboratory_FirstTime::
# 11 "data/maps/Route108_Laboratory/scripts.pory"
	lockall
# 12 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, EmoteExclamation
# 13 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 14 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_0
# 17 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 18 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 19 "data/maps/Route108_Laboratory/scripts.pory"
	playbgm AW_MUS_LABORATORY, FALSE
# 20 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, Route108_ProfessorEnter
# 21 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 22 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_1
# 26 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 27 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, EmoteExclamation
# 28 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_2
# 31 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 32 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, WalkLeftSpot
# 33 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_3
# 37 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 38 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 39 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, LookDown
# 40 "data/maps/Route108_Laboratory/scripts.pory"
	delay 120
# 41 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_4
# 44 "data/maps/Route108_Laboratory/scripts.pory"
	delay 120
# 45 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, FacePlayer
# 46 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_5
# 50 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 51 "data/maps/Route108_Laboratory/scripts.pory"
	delay 30
# 52 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, LookUp
# 53 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 55 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_6
# 58 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 59 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, WalkRightSpot
# 60 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_7
# 64 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 66 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_8
# 69 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 71 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_9
# 75 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 76 "data/maps/Route108_Laboratory/scripts.pory"
	delay 10
# 77 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, LookLeft
# 78 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_10
# 82 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 83 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_11
# 87 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 88 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, ProfessorToPokeballs
# 89 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, CarlaToPokeballs
# 90 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToPokeballs
# 91 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_FirstTime_Text_12
# 95 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 96 "data/maps/Route108_Laboratory/scripts.pory"
	releaseall
	return


Route108_Laboratory_DontLeaveLeft::
# 100 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 101 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, WalkLeftSpot
# 102 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 104 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 107 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 108 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkLeft
# 109 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_DontLeaveRight::
# 113 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 114 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, WalkLeftSpot
# 115 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route108_Laboratory/scripts.pory"
	delay 20
# 117 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_DontLeaveLeft_Text_0
# 120 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 121 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 122 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return


Route108_Laboratory_PickAlpacoil::
# 126 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 127 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickAlpacoil_1
# 146 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 147 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 148 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_1:
# 128 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 129 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickAlpacoil_Text_0, MSGBOX_YESNO
# 133 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickAlpacoil_4
# 142 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 143 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickAlpacoil_4:
# 134 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 135 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_ALPACOIL, 5
# 136 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 137 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 138 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 139 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 3
# 140 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickSmackop::
# 153 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 154 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickSmackop_1
# 173 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 174 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 175 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_1:
# 155 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 156 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickSmackop_Text_0, MSGBOX_YESNO
# 160 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickSmackop_4
# 169 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 170 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickSmackop_4:
# 161 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 162 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_SMACKOP, 5
# 163 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 164 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 166 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 4
# 167 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_PickPuppixy::
# 180 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 181 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_PickPuppixy_1
# 200 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_PickAlpacoil_Text_1
# 201 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 202 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_1:
# 182 "data/maps/Route108_Laboratory/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 183 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_PickPuppixy_Text_0, MSGBOX_YESNO
# 187 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_PickPuppixy_4
# 196 "data/maps/Route108_Laboratory/scripts.pory"
	hidemonpic
# 197 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_PickPuppixy_4:
# 188 "data/maps/Route108_Laboratory/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 189 "data/maps/Route108_Laboratory/scripts.pory"
	givemon SPECIES_PUPPIXY, 5
# 190 "data/maps/Route108_Laboratory/scripts.pory"
	waitmoncry
# 191 "data/maps/Route108_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/Route108_Laboratory/scripts.pory"
	waitfanfare
# 193 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 5
# 194 "data/maps/Route108_Laboratory/scripts.pory"
	call Route108_Laboratory_Yay
	return


Route108_Laboratory_Yay::
# 207 "data/maps/Route108_Laboratory/scripts.pory"
	msgbox Route108_Laboratory_Yay_Text_0, MSGBOX_YESNO
# 210 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Laboratory_Yay_2
Route108_Laboratory_Yay_1:
# 213 "data/maps/Route108_Laboratory/scripts.pory"
	waitstate
# 215 "data/maps/Route108_Laboratory/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 4
# 216 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_1
# 219 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 220 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_2
# 223 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 224 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_Yay_Text_3
# 227 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
# 228 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 1, ProfessorLeave
# 229 "data/maps/Route108_Laboratory/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route108_Laboratory/scripts.pory"
	playse SE_DOOR
# 231 "data/maps/Route108_Laboratory/scripts.pory"
	removeobject 2
# 232 "data/maps/Route108_Laboratory/scripts.pory"
	delay 60
# 233 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_Yay_2:
# 211 "data/maps/Route108_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route108_Laboratory_Yay_1


Route108_Laboratory_TalkCarla::
# 237 "data/maps/Route108_Laboratory/scripts.pory"
	lock
# 238 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, FacePlayer
# 239 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 3
	goto_if_eq Route108_Laboratory_TalkCarla_2
# 245 "data/maps/Route108_Laboratory/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Laboratory_TalkCarla_5
# 251 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_2
# 254 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
Route108_Laboratory_TalkCarla_1:
# 257 "data/maps/Route108_Laboratory/scripts.pory"
	applymovement 0, FaceOriginalDirection
# 258 "data/maps/Route108_Laboratory/scripts.pory"
	release
	return

Route108_Laboratory_TalkCarla_2:
# 240 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_0
# 243 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1

Route108_Laboratory_TalkCarla_5:
# 246 "data/maps/Route108_Laboratory/scripts.pory"
	message Route108_Laboratory_TalkCarla_Text_1
# 249 "data/maps/Route108_Laboratory/scripts.pory"
	waitmessage
	goto Route108_Laboratory_TalkCarla_1


# 261 "data/maps/Route108_Laboratory/scripts.pory"
Route108_ProfessorEnter:
# 262 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 263 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 264 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 265 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 265 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 265 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 265 "data/maps/Route108_Laboratory/scripts.pory"
	walk_right
# 266 "data/maps/Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 269 "data/maps/Route108_Laboratory/scripts.pory"
WalkLeftSpot:
# 270 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
# 270 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_left
	step_end

# 273 "data/maps/Route108_Laboratory/scripts.pory"
WalkRightSpot:
# 274 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
# 274 "data/maps/Route108_Laboratory/scripts.pory"
	walk_in_place_right
	step_end

# 277 "data/maps/Route108_Laboratory/scripts.pory"
LookDown:
# 278 "data/maps/Route108_Laboratory/scripts.pory"
	face_down
	step_end

# 281 "data/maps/Route108_Laboratory/scripts.pory"
LookUp:
# 282 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 285 "data/maps/Route108_Laboratory/scripts.pory"
LookLeft:
# 286 "data/maps/Route108_Laboratory/scripts.pory"
	face_left
	step_end

# 289 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorToPokeballs:
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 291 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 292 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 293 "data/maps/Route108_Laboratory/scripts.pory"
	face_up
	step_end

# 296 "data/maps/Route108_Laboratory/scripts.pory"
CarlaToPokeballs:
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 297 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 298 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 299 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 302 "data/maps/Route108_Laboratory/scripts.pory"
PlayerToPokeballs:
# 303 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 304 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 305 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
# 306 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 306 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
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
	step_end

# 310 "data/maps/Route108_Laboratory/scripts.pory"
Player_WalkLeft:
# 311 "data/maps/Route108_Laboratory/scripts.pory"
	walk_left
	step_end

# 314 "data/maps/Route108_Laboratory/scripts.pory"
ProfessorLeave:
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
# 315 "data/maps/Route108_Laboratory/scripts.pory"
	walk_down
	step_end

Route108_Laboratory_FirstTime_Text_0:
# 15 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor! Professor! They're\n"
	.string "awake!$"

Route108_Laboratory_FirstTime_Text_1:
# 23 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Oh, I'm so glad you're alright.\p"
	.string "You fell from up on Mt. Eigo. How'd you\n"
	.string "even get up there, anyway?$"

Route108_Laboratory_FirstTime_Text_2:
# 29 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Y- you say you live up there?! That\n"
	.string "can't be right! Nobody lives up there!$"

Route108_Laboratory_FirstTime_Text_3:
# 35 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Professor...?$"

Route108_Laboratory_FirstTime_Text_4:
# 42 "data/maps/Route108_Laboratory/scripts.pory"
	.string "???: Hmm... Well, I've been wrong\n"
	.string "before...$"

Route108_Laboratory_FirstTime_Text_5:
# 47 "data/maps/Route108_Laboratory/scripts.pory"
	.string "A- anyway..! I suppose I should\n"
	.string "introduce myself.\p"
	.string "My name is Avery Fern. I'm a professor\n"
	.string "of archaeology, and this is my lab.$"

Route108_Laboratory_FirstTime_Text_6:
# 56 "data/maps/Route108_Laboratory/scripts.pory"
	.string "And this is my assistant, Carla.$"

Route108_Laboratory_FirstTime_Text_7:
# 62 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Hi.$"

Route108_Laboratory_FirstTime_Text_8:
# 67 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: And you are?$"

Route108_Laboratory_FirstTime_Text_9:
# 72 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Ah, {PLAYER}. Well, you are something\n"
	.string "of an enigma, that's for sure. It's\l"
	.string "lovely to make your acquaintaince.\p"
	.string "I think you should stay here a while,\n"
	.string "just to make sure you recover properly.\l"
	.string "Vibrava caught you, but I can't say\l"
	.string "whether or not you were hurt on the way\l"
	.string "down.$"

Route108_Laboratory_FirstTime_Text_10:
# 80 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Yeah! We can show {PLAYER}\n"
	.string "around the lab.$"

Route108_Laboratory_FirstTime_Text_11:
# 84 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: You don't have a Pokémon, do you?\n"
	.string "We should probably do something about\l"
	.string "that.\n"
	.string "Here, come with me.$"

Route108_Laboratory_FirstTime_Text_12:
# 93 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Sorry, it's a bit of a mess. Here\n"
	.string "they are!\n"
	.string "Take your pick.$"

Route108_Laboratory_DontLeaveLeft_Text_0:
# 105 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Choose one!$"

Route108_Laboratory_PickAlpacoil_Text_0:
# 130 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Would you like to take Alpacoil?$"

Route108_Laboratory_PickAlpacoil_Text_1:
# 146 "data/maps/Route108_Laboratory/scripts.pory"
	.string "It's one of the Professor's Pokémon.$"

Route108_Laboratory_PickSmackop_Text_0:
# 157 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Would you like to take Smackop?$"

Route108_Laboratory_PickPuppixy_Text_0:
# 184 "data/maps/Route108_Laboratory/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Would you like to take Puppixy?$"

Route108_Laboratory_Yay_Text_0:
# 208 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Would you like to give your Pokémon a\n"
	.string "nickname?$"

Route108_Laboratory_Yay_Text_1:
# 217 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Well, that's that!$"

Route108_Laboratory_Yay_Text_2:
# 221 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: And what a cute Pokémon you\n"
	.string "chose!$"

Route108_Laboratory_Yay_Text_3:
# 225 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Fern: Ok, now! Follow me outside, I'll\n"
	.string "show you around the place.$"

Route108_Laboratory_TalkCarla_Text_0:
# 241 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on! Make a choice! They're all\n"
	.string "wonderful creatures.$"

Route108_Laboratory_TalkCarla_Text_1:
# 247 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: Go on, Professor Fern is waiting\n"
	.string "for you! Let's go!$"

Route108_Laboratory_TalkCarla_Text_2:
# 252 "data/maps/Route108_Laboratory/scripts.pory"
	.string "Carla: What's up, {PLAYER}? I'm just\n"
	.string "doing my research, as usual.$"
