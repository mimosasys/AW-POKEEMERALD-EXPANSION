AW_PuceCity_Gym_MapScripts::
# 2 "data/maps/AW_PuceCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_PuceCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_PuceCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_PuceCity_Gym/scripts.pory"
	map_script_2 VAR_AW_GYM_PROGRESS, 0, PuceCity_Gym_Welcome
	.2byte 0


PuceCity_Gym_Man::
	return


PuceCity_Gym_Welcome::
# 13 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lockall
# 14 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_AW_GYM_PROGRESS, 1
# 15 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceCity_Gym_PlayerEnter
# 16 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, WalkDownSpot
# 17 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 18 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_0
# 27 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_1, MSGBOX_YESNO
PuceCity_Gym_Welcome_2:
# 31 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceCity_Gym_Welcome_3
# 55 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_4
# 59 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 60 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 61 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 30
# 62 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_DING_DONG
# 63 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 64 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_5
# 68 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 69 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 70 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, WalkUpSpot
# 71 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 72 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_6
# 76 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 77 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 78 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, LookDown
# 79 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 80 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_7
# 87 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 88 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, PuceCity_Gym_WendyWalkAway
# 91 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 92 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setflag FLAG_AW_START_GYM
# 93 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_AW_PROGRESS_2, 3
# 94 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 0
# 95 "data/maps/AW_PuceCity_Gym/scripts.pory"
	removeobject 6
# 97 "data/maps/AW_PuceCity_Gym/scripts.pory"
	releaseall
	return

PuceCity_Gym_Welcome_3:
# 32 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceCity_Gym_Welcome_5
# 49 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_3, MSGBOX_YESNO
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_5:
# 34 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PuceCity_Gym_Welcome_8
# 37 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_2, MSGBOX_YESNO
# 43 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PuceCity_Gym_Welcome_11
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_8:
# 35 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_11:
# 45 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto PuceCity_Gym_Welcome_2


PuceCity_Gym_Door1Trigger1::
# 101 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 102 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq PuceCity_Gym_Door1Trigger1_2
# 114 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1 == 1, 0
	goto_if_ne PuceCity_Gym_Door1Trigger1_3
PuceCity_Gym_Door1Trigger1_1:
# 124 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door1Trigger1_2:
# 103 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 107 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 108 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door1Trigger1_6
	goto PuceCity_Gym_Door1Trigger1_1

PuceCity_Gym_Door1Trigger1_3:
# 115 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 119 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 120 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door1Trigger1_8
	goto PuceCity_Gym_Door1Trigger1_1

PuceCity_Gym_Door1Trigger1_6:
# 109 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 111 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 112 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto PuceCity_Gym_Door1Trigger1_1

PuceCity_Gym_Door1Trigger1_8:
# 121 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor1
	goto PuceCity_Gym_Door1Trigger1_1


PuceCity_Gym_Door1Trigger2::
# 128 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 129 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceCity_Gym_Door1Trigger2_2
# 141 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0 == 1, 0
	goto_if_ne PuceCity_Gym_Door1Trigger2_3
PuceCity_Gym_Door1Trigger2_1:
# 151 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door1Trigger2_2:
# 130 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 134 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 135 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door1Trigger2_6
	goto PuceCity_Gym_Door1Trigger2_1

PuceCity_Gym_Door1Trigger2_3:
# 142 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 146 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 147 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door1Trigger2_8
	goto PuceCity_Gym_Door1Trigger2_1

PuceCity_Gym_Door1Trigger2_6:
# 136 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 137 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 138 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 139 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PuceCity_Gym_Door1Trigger2_1

PuceCity_Gym_Door1Trigger2_8:
# 148 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor1
	goto PuceCity_Gym_Door1Trigger2_1


PuceCity_Gym_OpenDoor1::
# 155 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 156 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 157 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 158 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 159 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 160 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 161 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 16
# 162 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SLIDING_DOOR
# 163 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 164 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 7, 17, 0x0AF, FALSE
# 165 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 7, 18, 0x0AF, FALSE
# 166 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 8, 17, 0x0CF, FALSE
# 167 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 8, 18, 0x0CF, FALSE
# 168 "data/maps/AW_PuceCity_Gym/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_OpenDoor1_Text_0
# 172 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 173 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
	return


PuceCity_Gym_Door2Trigger1::
# 177 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 178 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq PuceCity_Gym_Door2Trigger1_2
# 190 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1 == 2, 0
	goto_if_ne PuceCity_Gym_Door2Trigger1_3
PuceCity_Gym_Door2Trigger1_1:
# 200 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door2Trigger1_2:
# 179 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 183 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 184 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door2Trigger1_6
	goto PuceCity_Gym_Door2Trigger1_1

PuceCity_Gym_Door2Trigger1_3:
# 191 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 195 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 196 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door2Trigger1_8
	goto PuceCity_Gym_Door2Trigger1_1

PuceCity_Gym_Door2Trigger1_6:
# 185 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 186 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 187 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 188 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto PuceCity_Gym_Door2Trigger1_1

PuceCity_Gym_Door2Trigger1_8:
# 197 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor2
	goto PuceCity_Gym_Door2Trigger1_1


PuceCity_Gym_Door2Trigger2::
# 204 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 205 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PuceCity_Gym_Door2Trigger2_2
# 217 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0 == 2, 0
	goto_if_ne PuceCity_Gym_Door2Trigger2_3
PuceCity_Gym_Door2Trigger2_1:
# 227 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door2Trigger2_2:
# 206 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 210 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 211 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door2Trigger2_6
	goto PuceCity_Gym_Door2Trigger2_1

PuceCity_Gym_Door2Trigger2_3:
# 218 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 222 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 223 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door2Trigger2_8
	goto PuceCity_Gym_Door2Trigger2_1

PuceCity_Gym_Door2Trigger2_6:
# 212 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 213 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 214 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 215 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto PuceCity_Gym_Door2Trigger2_1

PuceCity_Gym_Door2Trigger2_8:
# 224 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor2
	goto PuceCity_Gym_Door2Trigger2_1


PuceCity_Gym_OpenDoor2::
# 231 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 232 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 233 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 234 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 235 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 236 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 237 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 16
# 238 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SLIDING_DOOR
# 239 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 240 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 12, 13, 0x0AF, FALSE
# 241 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 12, 14, 0x0AF, FALSE
# 242 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 13, 13, 0x0CF, FALSE
# 243 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 13, 14, 0x0CF, FALSE
# 244 "data/maps/AW_PuceCity_Gym/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_OpenDoor1_Text_0
# 248 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 249 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
	return


PuceCity_Gym_Door3Trigger1::
# 253 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 254 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq PuceCity_Gym_Door3Trigger1_2
# 266 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1 == 3, 0
	goto_if_ne PuceCity_Gym_Door3Trigger1_3
PuceCity_Gym_Door3Trigger1_1:
# 276 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door3Trigger1_2:
# 255 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 259 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 260 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door3Trigger1_6
	goto PuceCity_Gym_Door3Trigger1_1

PuceCity_Gym_Door3Trigger1_3:
# 267 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 271 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 272 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door3Trigger1_8
	goto PuceCity_Gym_Door3Trigger1_1

PuceCity_Gym_Door3Trigger1_6:
# 261 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 262 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 263 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 264 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto PuceCity_Gym_Door3Trigger1_1

PuceCity_Gym_Door3Trigger1_8:
# 273 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor3
	goto PuceCity_Gym_Door3Trigger1_1


PuceCity_Gym_Door3Trigger2::
# 280 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 281 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PuceCity_Gym_Door3Trigger2_2
# 293 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0 == 3, 0
	goto_if_ne PuceCity_Gym_Door3Trigger2_3
PuceCity_Gym_Door3Trigger2_1:
# 303 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door3Trigger2_2:
# 282 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 286 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 287 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door3Trigger2_6
	goto PuceCity_Gym_Door3Trigger2_1

PuceCity_Gym_Door3Trigger2_3:
# 294 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 298 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 299 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door3Trigger2_8
	goto PuceCity_Gym_Door3Trigger2_1

PuceCity_Gym_Door3Trigger2_6:
# 288 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 289 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 290 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 291 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto PuceCity_Gym_Door3Trigger2_1

PuceCity_Gym_Door3Trigger2_8:
# 300 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor3
	goto PuceCity_Gym_Door3Trigger2_1


PuceCity_Gym_OpenDoor3::
# 307 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 308 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 309 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 310 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 311 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 312 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 313 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 16
# 314 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SLIDING_DOOR
# 315 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 316 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 16, 7, 0x0AF, FALSE
# 317 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 16, 8, 0x0AF, FALSE
# 318 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 17, 7, 0x0CF, FALSE
# 319 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 17, 8, 0x0CF, FALSE
# 320 "data/maps/AW_PuceCity_Gym/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_OpenDoor1_Text_0
# 324 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 325 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
	return


PuceCity_Gym_Door4Trigger1::
# 329 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 330 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq PuceCity_Gym_Door4Trigger1_2
# 342 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1 == 4, 0
	goto_if_ne PuceCity_Gym_Door4Trigger1_3
PuceCity_Gym_Door4Trigger1_1:
# 352 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door4Trigger1_2:
# 331 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 335 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 336 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door4Trigger1_6
	goto PuceCity_Gym_Door4Trigger1_1

PuceCity_Gym_Door4Trigger1_3:
# 343 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 347 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 348 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door4Trigger1_8
	goto PuceCity_Gym_Door4Trigger1_1

PuceCity_Gym_Door4Trigger1_6:
# 337 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 338 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 339 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 340 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_0, 4
	goto PuceCity_Gym_Door4Trigger1_1

PuceCity_Gym_Door4Trigger1_8:
# 349 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor4
	goto PuceCity_Gym_Door4Trigger1_1


PuceCity_Gym_Door4Trigger2::
# 356 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lock
# 357 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PuceCity_Gym_Door4Trigger2_2
# 369 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_0 == 4, 0
	goto_if_ne PuceCity_Gym_Door4Trigger2_3
PuceCity_Gym_Door4Trigger2_1:
# 379 "data/maps/AW_PuceCity_Gym/scripts.pory"
	release
	return

PuceCity_Gym_Door4Trigger2_2:
# 358 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 362 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 363 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door4Trigger2_6
	goto PuceCity_Gym_Door4Trigger2_1

PuceCity_Gym_Door4Trigger2_3:
# 370 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Door1Trigger1_Text_0, MSGBOX_YESNO
# 374 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 375 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PuceCity_Gym_Door4Trigger2_8
	goto PuceCity_Gym_Door4Trigger2_1

PuceCity_Gym_Door4Trigger2_6:
# 364 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 365 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SWITCH
# 366 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 367 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto PuceCity_Gym_Door4Trigger2_1

PuceCity_Gym_Door4Trigger2_8:
# 376 "data/maps/AW_PuceCity_Gym/scripts.pory"
	call PuceCity_Gym_OpenDoor4
	goto PuceCity_Gym_Door4Trigger2_1


PuceCity_Gym_OpenDoor4::
# 383 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 384 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 385 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 386 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 387 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_M_WATERFALL
# 388 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 389 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 16
# 390 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_SLIDING_DOOR
# 391 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 392 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 5, 7, 0x0AF, FALSE
# 393 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 5, 8, 0x0AF, FALSE
# 394 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 6, 7, 0x0CF, FALSE
# 395 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 6, 8, 0x0CF, FALSE
# 396 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 7, 7, 0x0CF, FALSE
# 397 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setmetatile 7, 8, 0x0CF, FALSE
# 398 "data/maps/AW_PuceCity_Gym/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_OpenDoor1_Text_0
# 402 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 403 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
	return


PuceCity_Gym_Trainer1::
# 407 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_TALIA, LassTaliaIntro, LassTaliaOutro
	end


PuceCity_Gym_Trainer2::
# 412 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SCHOOL_KID_CORAL, SchoolKidCoralIntro, SchoolKidCoralOutro
	end


PuceCity_Gym_Trainer3::
# 417 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_MARINO, SailorMarinoIntro, SailorMarinoOutro
	end


PuceCity_Gym_Brooke::
# 422 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lockall
# 423 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Brooke_Text_0
# 429 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 430 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 431 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_GYMLEADER_BROOKE, LeaderBrookeOutro
# 432 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Brooke_Text_1
# 438 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 439 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 440 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 441 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Brooke_Text_2
# 444 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 445 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitfanfare
# 446 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 447 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 448 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Brooke_Text_3
# 456 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 457 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 458 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 14
# 459 "data/maps/AW_PuceCity_Gym/scripts.pory"
	releaseall
	return


# 507 "data/maps/AW_PuceCity_Gym/scripts.pory"
PuceCity_Gym_PlayerEnter:
# 508 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 509 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 510 "data/maps/AW_PuceCity_Gym/scripts.pory"
	face_up
	step_end

# 513 "data/maps/AW_PuceCity_Gym/scripts.pory"
PuceCity_Gym_WendyWalkAway:
# 514 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 514 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 515 "data/maps/AW_PuceCity_Gym/scripts.pory"
	jump_in_place_up
# 515 "data/maps/AW_PuceCity_Gym/scripts.pory"
	jump_in_place_up
# 516 "data/maps/AW_PuceCity_Gym/scripts.pory"
	jump_2_up
	step_end

PuceCity_Gym_Welcome_Text_0:
# 19 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Wendy: Ah! Great, you came!\p"
	.string "I'll introduce myself again. Th' name's\n"
	.string "Wendy, and I'm the gym leader.\p"
	.string "Since you've never done one before, I'll\n"
	.string "give you the rundown.\p"
	.string "Across the --- region, there are 8 gyms.\p"
	.string "'f you defeat all of 'em, you get to\n"
	.string "fight these super-strong trainers\l"
	.string "called the 'Elite Four'.\p"
	.string "Then you face the Champion, the\n"
	.string "strongest trainer in the region!\p"
	.string "That's if you want to take the league\n"
	.string "challenge, of course.$"

PuceCity_Gym_Welcome_Text_1:
# 29 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "So, whaddaya say? You want to give it a\n"
	.string "shot?$"

PuceCity_Gym_Welcome_Text_2:
# 38 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Aw, come on, I think you've really got\n"
	.string "some skills in battling.\p"
	.string "I saw how you handled those guys back\n"
	.string "at the lake.\p"
	.string "And you clearly love being with your\n"
	.string "Pokémon. It'll be a good chance for all\l"
	.string "of you to strengthen your bonds.\p"
	.string "So, whaddaya say? You want to give it a\n"
	.string "shot?$"

PuceCity_Gym_Welcome_Text_3:
# 50 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Aw, come on, please?$"

PuceCity_Gym_Welcome_Text_4:
# 56 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Excellent! Consider this your formal\n"
	.string "introduction to the Pokémon league!\p"
	.string "Let me just make sure the registry goes\n"
	.string "through...$"

PuceCity_Gym_Welcome_Text_5:
# 65 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Fantastic! You're all registered!\p"
	.string "Now all you need to do is tackle the gym\n"
	.string "itself!\p"
	.string "$"

PuceCity_Gym_Welcome_Text_6:
# 73 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "What's with those little gems next to\n"
	.string "the waterfalls, I wonder?\p"
	.string "That's for me to know, and you to find\n"
	.string "out!$"

PuceCity_Gym_Welcome_Text_7:
# 81 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Climb past them all, and you get to face\n"
	.string "me in battle, too.\p"
	.string "And if you win, I give you a badge as\n"
	.string "proof of your victory.\p"
	.string "Sound good?\p"
	.string "Great! Then I'll get to my place!\p"
	.string "Good luck, {PLAYER}! I'll see you at\n"
	.string "the other end, yeah?$"

PuceCity_Gym_Door1Trigger1_Text_0:
# 104 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "It's a switch!\p"
	.string "Push it?$"

PuceCity_Gym_OpenDoor1_Text_0:
# 170 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "The waterfall opened! There's a\n"
	.string "stairway!\p"
	.string "$"

PuceCity_Gym_Brooke_Text_0:
# 424 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Brooke: {PLAYER}! Nice job!\p"
	.string "Now there's just one thing left to do in\n"
	.string "the gym!\p"
	.string "I gotta say, you're gonna be the first\n"
	.string "gym challenger I've had.\p"
	.string "You ready? Gimme a good battle,\n"
	.string "won't'cha?$"

PuceCity_Gym_Brooke_Text_1:
# 433 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Well, I can't say I'm all that surprised!\p"
	.string "That was some battle, alright,\n"
	.string "{PLAYER}. You sure have some skills!\p"
	.string "'n those Pokémon of yours are just\n"
	.string "amazing, too!\p"
	.string "Before I get started rambling, here's\n"
	.string "your badge! You've earned it!$"

PuceCity_Gym_Brooke_Text_2:
# 442 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Obtained the Current Badge from Wendy!$"

PuceCity_Gym_Brooke_Text_3:
# 449 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Nice! Keep that close, hey?\p"
	.string "Well, you've got a whole journey ahead\n"
	.string "of ya, and a whole region to explore!\p"
	.string "I did something like that when I was\n"
	.string "still studying, and now I'm a gym leader.\p"
	.string "Who knows where your journey will take\n"
	.string "you, eh?\p"
	.string "Just make sure to enjoy yourself,\n"
	.string "{PLAYER}. That's what's important.\p"
	.string "I'll see you around, ok? And thanks for\n"
	.string "the great battle!$"

SchoolKidCoralIntro::
# 462 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Hey! Welcome to the gym!\p"
	.string "Prepare to lose!$"

SchoolKidCoralOutro::
# 469 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "I wasn't expecting that!$"

LassTaliaIntro::
# 475 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Think you've got the switches figured\n"
	.string "out?\p"
	.string "Then, what does this one control?$"

LassTaliaOutro::
# 482 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Blast! Got splashed!$"

SailorMarinoIntro::
# 488 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Not much longer now! Brooke's just over\n"
	.string "there!\p"
	.string "But it's not over yet!$"

SailorMarinoOutro::
# 495 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Woah!$"

LeaderBrookeOutro::
# 501 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "I... I've sunk!$"
