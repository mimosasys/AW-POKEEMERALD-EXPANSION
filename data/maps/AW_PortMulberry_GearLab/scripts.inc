AW_PortMulberry_GearLab_MapScripts::
# 2 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GearLab_HideGearObject
	.byte 0


GearLab_HideGearObject::
# 9 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 2, MAP_AW_PORT_MULBERRY_GEAR_LAB
	return


GearLab_WalkIntoMachine::
# 13 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 14 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	goto_if_set FLAG_AW_HELP_GEAR, GearLab_WalkIntoMachine_2
# 20 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaRunUp2
# 21 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 22 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 23 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 24 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaRunDown2
# 25 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	compare VAR_AW_PROGRESS_1, 6
	goto_if_eq GearLab_WalkIntoMachine_5
# 31 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_2
GearLab_WalkIntoMachine_1:
# 36 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown1
# 37 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 38 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return

GearLab_WalkIntoMachine_2:
# 15 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_0
	goto GearLab_WalkIntoMachine_1

GearLab_WalkIntoMachine_5:
# 27 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_WalkIntoMachine_Text_1
	goto GearLab_WalkIntoMachine_1


GearLab_TalkToKirlia::
# 42 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 43 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 44 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, Rival_JumpInPlace
# 45 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 46 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_0
# 47 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 48 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 49 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_1
# 54 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 55 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 56 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_TELEPORT
# 57 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 58 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxy 1, 12, 5
# 59 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	showobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 60 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 61 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 62 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRightExclaimed
# 63 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 64 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaSpin
# 65 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 66 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaSpin
# 67 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 68 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, KirliaGoToMachine
# 69 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 70 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 71 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_CHARGE
# 72 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 73 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_TalkToKirlia_Text_2
# 74 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 75 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 6
# 76 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return


GearLab_UseMachine::
# 80 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 81 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	goto_if_set FLAG_AW_HELP_GEAR, GearLab_UseMachine_2
# 85 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_AW_HELP_GEAR
# 86 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	special StopMapMusic
# 87 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_CLICK
# 88 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 89 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 90 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmoncry
# 91 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_CHARGE
# 92 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 93 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_COSMIC_POWER
# 94 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 95 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_M_EXPLOSION
# 96 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 97 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_DING_DONG
# 98 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 99 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	clearflag FLAG_AW_HIDE_GEAR
# 100 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxy 2, 12, 1
# 101 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	showobjectat 2, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 102 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearLeaveMachine
# 103 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 104 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_1
# 113 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 114 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearCheckPhone
# 115 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 116 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_2
# 120 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 121 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerTalkUp
# 122 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 123 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_3
# 127 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 128 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_CALL
# 129 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 130 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_4
# 139 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 140 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 141 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitse
# 142 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_5
# 145 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 146 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearMeetPlayer
# 147 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 148 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_6
# 159 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 160 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 2, GearGoToDesk
# 161 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowGear
# 162 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_7
# 167 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 168 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 169 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 170 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_8
# 174 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitfanfare
# 175 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 176 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 177 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_9
# 188 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
# 189 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmovement 0
# 190 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	hideobjectat 1, MAP_AW_PORT_MULBERRY_GEAR_LAB
# 191 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setobjectxyperm 2, 3, 5
# 192 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 7
GearLab_UseMachine_1:
# 194 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return

GearLab_UseMachine_2:
# 82 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	msgbox GearLab_UseMachine_Text_0
# 83 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	waitmessage
	goto GearLab_UseMachine_1


GearLab_TalkToGear::
# 198 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	lockall
# 199 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	applymovement 1, FacePlayer
# 200 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	releaseall
	return


# 203 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaRunUp2:
# 204 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 204 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 205 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
# 205 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
# 205 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_left
	step_end

# 207 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaRunDown2:
# 208 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
	step_end

# 211 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
WalkDown1:
# 212 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
	step_end

# 215 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaSpin:
# 216 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_left
# 217 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_down
# 218 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 219 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_up
# 220 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_up
# 220 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	jump_in_place_up
	step_end

# 223 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
KirliaGoToMachine:
# 224 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_right
# 225 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 225 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 226 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_left
# 227 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
# 227 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_up
	step_end

# 230 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerFaceRightExclaimed:
# 231 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 232 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 235 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearLeaveMachine:
# 236 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_faster_down
# 236 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_faster_down
	step_end

# 239 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearCheckPhone:
# 240 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_right
# 241 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 241 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 241 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
# 241 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_right
	step_end

# 244 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerTalkUp:
# 245 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
# 245 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
# 245 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_in_place_up
	step_end

# 248 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearMeetPlayer:
# 249 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_right
# 250 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 250 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_fast_down
# 251 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_player
	step_end

# 254 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
GearGoToDesk:
# 255 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 255 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 256 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 257 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 257 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
# 258 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	face_left
	step_end

# 261 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
PlayerFollowGear:
# 262 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_right
# 263 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 263 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_down
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 264 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_left
# 265 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	walk_up
	step_end

GearLab_WalkIntoMachine_Text_0:
# 16 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Gear: H-hey! I wouldn't go in there, if I\n"
	.string "were you!\p"
	.string "Y'know, u-unless you really wanna...$"

GearLab_WalkIntoMachine_Text_1:
# 28 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It seems that's not what Kirlia wants\n"
	.string "you to do...$"

GearLab_WalkIntoMachine_Text_2:
# 32 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "That Kirlia seems to want your\n"
	.string "attention...$"

GearLab_TalkToKirlia_Text_0:
# 46 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It seems this Kirlia is trying to tell\n"
	.string "you something...?$"

GearLab_TalkToKirlia_Text_1:
# 50 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Kirlia: ...\p"
	.string "...\p"
	.string "...!$"

GearLab_TalkToKirlia_Text_2:
# 73 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "Could it have to do with that machine?$"

GearLab_UseMachine_Text_0:
# 82 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "A screen lit up saying 'Please do not\n"
	.string "push this button again.'$"

GearLab_UseMachine_Text_1:
# 105 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Ugh... What... was I doing?\p"
	.string "...\p"
	.string "...\p"
	.string "...Uh, you didn't see any of that, did\n"
	.string "you?\p"
	.string "...\p"
	.string "Ah- I- I mean, that was, uh...\p"
	.string "It... it worked?$"

GearLab_UseMachine_Text_2:
# 117 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Oh, crud, 14 missed messages from\n"
	.string "Avery.\p"
	.string "I hope he didn't want that communicator\n"
	.string "quickly...$"

GearLab_UseMachine_Text_3:
# 124 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: H-He did?! And you're his new\n"
	.string "apprentice?!\p"
	.string "Ohhh... Ohh, I am sooo done for... I'm\n"
	.string "sooo late...$"

GearLab_UseMachine_Text_4:
# 131 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: AVERY! I- uh- mishaps at the lab-\n"
	.string "I'm so sorry-\p"
	.string "...\p"
	.string "...\p"
	.string "...Oh. Oh, well... that's alright then...\p"
	.string "Uh-huh...\p"
	.string "Mm-hmm...\p"
	.string "Phew, that's a relief...!$"

GearLab_UseMachine_Text_5:
# 143 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "???: Sooo... uhhh...$"

GearLab_UseMachine_Text_6:
# 149 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "I'm Gear...! Nice to m-meet you?\p"
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

GearLab_UseMachine_Text_7:
# 164 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "It's uh... It's just here...\p"
	.string "Avery said you could have this one. It's\n"
	.string "just the spare I've been working on.$"

GearLab_UseMachine_Text_8:
# 172 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
	.string "{PLAYER} received the PokéNav!$"

GearLab_UseMachine_Text_9:
# 178 "data/maps/AW_PortMulberry_GearLab/scripts.pory"
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
	.string "Catch you later... or maybe not... if you\n"
	.string "feel like it...\p"
	.string "I'm always gonna be right here... I-in my\n"
	.string "lab... where I like it.$"
