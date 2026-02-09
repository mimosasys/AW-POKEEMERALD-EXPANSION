AW_PortMulberry_GearLab_MapScripts::
# 2 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GearLab_HideGearObject
	.byte 0


GearLab_HideGearObject::
# 9 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, GearLab_HideGearObject_1
	return

GearLab_HideGearObject_1:
# 10 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxy 2, 0, 0
# 11 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 2, MAP_AW_PORT_MULBERRY_GEAR_LAB
	return


GearLab_WalkIntoMachine::
# 16 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 17 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	goto_if_set FLAG_AW_HELP_GEAR, GearLab_WalkIntoMachine_2
# 27 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaRunUp2
# 28 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 29 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 30 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 31 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaRunDown2
# 32 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 33 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	compare VAR_AW_PROGRESS_1, 9
	goto_if_eq GearLab_WalkIntoMachine_5
# 38 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_2
GearLab_WalkIntoMachine_1:
# 43 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown1
# 44 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 45 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return

GearLab_WalkIntoMachine_2:
# 18 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_GEAR
# 19 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative DrawMugshot
# 20 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_0
# 24 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 25 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative ClearMugshot
	goto GearLab_WalkIntoMachine_1

GearLab_WalkIntoMachine_5:
# 34 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_1
	goto GearLab_WalkIntoMachine_1


GearLab_TalkToKirlia::
# 49 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 50 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 51 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, Rival_JumpInPlace
# 52 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 53 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_0
# 54 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 55 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 56 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 57 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_1
# 62 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 63 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaSpin
# 64 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 65 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 66 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_TELEPORT
# 67 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 68 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxy 1, 12, 5
# 69 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	showobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 70 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 71 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 72 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRightExclaimed
# 73 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 74 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaSpin
# 75 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 76 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaSpin
# 77 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 78 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaGoToMachine
# 79 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 80 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 81 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_CHARGE
# 82 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 83 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_2
# 84 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 85 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 10
# 86 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return


GearLab_UseMachine::
# 90 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 91 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	goto_if_set FLAG_AW_HELP_GEAR, GearLab_UseMachine_2
# 95 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_AW_HELP_GEAR
# 96 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	special StopMapMusic
# 97 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_CLICK
# 98 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 99 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 100 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 101 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_CHARGE
# 102 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 103 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_COSMIC_POWER
# 104 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 105 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_EXPLOSION
# 106 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 107 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_DING_DONG
# 108 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 109 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxy 2, 12, 1
# 110 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	showobjectat 2, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 111 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearLeaveMachine
# 112 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 113 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_WALL_HIT
# 114 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 115 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_1
# 124 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 125 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 126 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_ON
# 127 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 128 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearCheckPhone
# 129 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 130 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_2
# 134 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 135 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 136 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_CALL
# 137 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 138 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	delay 60
# 139 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_ON
# 140 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 141 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_3
# 150 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 151 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 152 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 153 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 154 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 155 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_4
# 158 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 159 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 160 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GearLab_UseMachine_6
# 163 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearMeetPlayer
GearLab_UseMachine_5:
# 165 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 166 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_GEAR
# 167 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative DrawMugshot
# 168 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_5
# 179 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 180 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 181 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative ClearMugshot
# 183 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 184 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GearLab_UseMachine_10
# 188 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearGoToDesk
# 189 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowGear
GearLab_UseMachine_9:
# 191 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 193 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_GEAR
# 194 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative DrawMugshot
# 195 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_6
# 199 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 200 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 201 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative ClearMugshot
# 203 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 204 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 205 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_7
# 209 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitfanfare
# 210 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 211 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 212 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 214 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_GEAR
# 215 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative DrawMugshot
# 216 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_8
# 228 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 229 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	closemessage
# 230 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	callnative ClearMugshot
# 232 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 233 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 234 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxyperm 2, 3, 5
# 235 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 11
GearLab_UseMachine_1:
# 237 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return

GearLab_UseMachine_2:
# 92 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_0
# 93 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
	goto GearLab_UseMachine_1

GearLab_UseMachine_6:
# 161 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearMeetPlayer2
	goto GearLab_UseMachine_5

GearLab_UseMachine_10:
# 185 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearGoToDesk2
# 186 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowGear2
	goto GearLab_UseMachine_9


GearLab_TalkToGear::
# 241 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 242 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, FacePlayer
# 243 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return


# 246 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaRunUp2:
# 247 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 247 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 248 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
# 248 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
# 248 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
	step_end

# 250 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaRunDown2:
# 251 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 251 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
	step_end

# 254 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
WalkDown1:
# 255 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
	step_end

# 258 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
WalkDown2:
# 259 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 259 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
	step_end

# 262 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaSpin:
# 263 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_down
# 265 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 266 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_up
# 267 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_up
# 267 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_up
	step_end

# 270 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaGoToMachine:
# 271 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_right
# 272 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 272 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 273 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_left
# 274 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 274 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
	step_end

# 277 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerFaceRightExclaimed:
# 278 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 279 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 282 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearLeaveMachine:
# 283 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_faster_down
# 283 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_faster_down
	step_end

# 286 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearCheckPhone:
# 287 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 288 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 288 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 288 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 288 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
	step_end

# 291 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerTalkUp:
# 292 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
# 292 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
# 292 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
	step_end

# 295 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearMeetPlayer:
# 296 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_right
# 297 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 297 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 298 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_player
	step_end

# 301 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearMeetPlayer2:
# 302 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_right
# 303 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 303 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 304 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_left
# 305 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_player
	step_end

# 308 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearGoToDesk:
# 309 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 309 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 310 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 311 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 311 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 312 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_left
	step_end

# 315 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearGoToDesk2:
# 316 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 316 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 317 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 318 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 318 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 319 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_left
	step_end

# 322 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerFollowGear:
# 323 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_right
# 324 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 324 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 325 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 326 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
	step_end

# 329 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerFollowGear2:
# 330 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	delay_16
# 331 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	delay_16
# 332 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 333 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 334 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 334 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 335 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 336 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
	step_end

GearLab_WalkIntoMachine_Text_0:
# 21 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Gear: H-hey! I wouldn't go in there, if I\n"
	.string "were you!\p"
	.string "Y'know, u-unless you really wanna...$"

GearLab_WalkIntoMachine_Text_1:
# 35 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It seems that's not what Kirlia wants\n"
	.string "you to do...$"

GearLab_WalkIntoMachine_Text_2:
# 39 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "That Kirlia seems to want your\n"
	.string "attention...$"

GearLab_TalkToKirlia_Text_0:
# 53 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It seems this Kirlia is trying to tell\n"
	.string "you something...?$"

GearLab_TalkToKirlia_Text_1:
# 58 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Kirlia: ...\p"
	.string "...\p"
	.string "...!$"

GearLab_TalkToKirlia_Text_2:
# 83 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Could it have to do with that machine?$"

GearLab_UseMachine_Text_0:
# 92 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "A screen lit up saying 'Please do not\n"
	.string "push this button again.'$"

GearLab_UseMachine_Text_1:
# 116 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Ugh... What... was I doing?\p"
	.string "...\p"
	.string "...\p"
	.string "...Uh, you didn't see any of that, did\n"
	.string "you?\p"
	.string "...\p"
	.string "Ah- I- I mean, that was, uh...\p"
	.string "It... it worked?$"

GearLab_UseMachine_Text_2:
# 131 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Oh, crud, 14 missed messages from\n"
	.string "Avery.\p"
	.string "I hope he didn't want that communicator\n"
	.string "quickly...$"

GearLab_UseMachine_Text_3:
# 142 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: AVERY! I- uh- mishaps at the lab-\n"
	.string "I'm so sorry-\p"
	.string "...\p"
	.string "...\p"
	.string "...Oh. Oh, well... that's alright then...\p"
	.string "Uh-huh...\p"
	.string "Mm-hmm...\p"
	.string "Phew, that's a relief...!$"

GearLab_UseMachine_Text_4:
# 156 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Sooo... uhhh...$"

GearLab_UseMachine_Text_5:
# 169 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "{COLOR LIGHT_BLUE}Gear: {COLOR DARK_GRAY}I'm Gear...! Nice to m-meet you?\p"
	.string "S-so sorry about that... mess-up...\p"
	.string "I got my machine working... but uh...\p"
	.string "I couldn't exactly... uh...\p"
	.string "...reach the switch to set it back... so\n"
	.string "um... yeah...\p"
	.string "...\p"
	.string "H-hey, uh, Avery said you could have\n"
	.string "this communicator thingo.\p"
	.string "It's just over here... i-if you want it, I\n"
	.string "guess...\p"
	.string "N-no pressure...$"

GearLab_UseMachine_Text_6:
# 196 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It's uh... It's just here...\p"
	.string "Avery said you could have this one. It's\n"
	.string "just the spare I've been working on.$"

GearLab_UseMachine_Text_7:
# 207 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "{COLOR RED}{PLAYER} received the PokéNav!$"

GearLab_UseMachine_Text_8:
# 217 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "You can check a map of the region with\n"
	.string "it. And make and receive calls.\p"
	.string "It's kinda archaic by today's\n"
	.string "standards, but that's why I'm working\l"
	.string "on it.\p"
	.string "I work on software engineering and\n"
	.string "Pokémon genetics and communications\l"
	.string "and- and lots of other things I like a\l"
	.string "lot and I think it's all really important\l"
	.string "and ...\p"
	.string "S-sorry... I rambled again...\p"
	.string "Just um... Show Avery the PokéNav, ok?\p"
	.string "He said he's expecting you back at the\n"
	.string "lab.\p"
	.string "Catch you later... or maybe not... if you\n"
	.string "feel like it...\p"
	.string "I'm always gonna be right here... I-in my\n"
	.string "lab... where I like it.$"
