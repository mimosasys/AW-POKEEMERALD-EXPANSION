ErinVillage_MapScripts::
	.byte 0


ErinVillage_InteractFarmer::
# 6 "data/maps/ErinVillage/scripts.pory"
	lock
# 7 "data/maps/ErinVillage/scripts.pory"
	applymovement 1, FacePlayer
# 8 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_InteractFarmer_Text_0
# 12 "data/maps/ErinVillage/scripts.pory"
	waitmessage
# 13 "data/maps/ErinVillage/scripts.pory"
	applymovement 1, FaceOriginalDirection
# 14 "data/maps/ErinVillage/scripts.pory"
	release
	return


# 17 "data/maps/ErinVillage/scripts.pory"
FacePlayer:
# 18 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 21 "data/maps/ErinVillage/scripts.pory"
FaceOriginalDirection:
# 22 "data/maps/ErinVillage/scripts.pory"
	face_original_direction
	step_end

ErinVillage_TryLeaveVillage::
# 26 "data/maps/ErinVillage/scripts.pory"
	lock
# 27 "data/maps/ErinVillage/scripts.pory"
	applymovement 2, EmoteExclamation
# 28 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 29 "data/maps/ErinVillage/scripts.pory"
	applymovement 2, FacePlayer
# 30 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 31 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_TryLeaveVillage_Text_0
# 35 "data/maps/ErinVillage/scripts.pory"
	waitmessage
# 36 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 37 "data/maps/ErinVillage/scripts.pory"
	applymovement 2, FaceOriginalDirection
# 38 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 39 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 40 "data/maps/ErinVillage/scripts.pory"
	release
	return


# 43 "data/maps/ErinVillage/scripts.pory"
EmoteExclamation:
# 44 "data/maps/ErinVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/ErinVillage/scripts.pory"
Player_WalkUp:
# 48 "data/maps/ErinVillage/scripts.pory"
	walk_up
	step_end

ErinVillage_FindRival_Left::
# 52 "data/maps/ErinVillage/scripts.pory"
	lock
# 53 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 54 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 55 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Left
# 56 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 57 "data/maps/ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 58 "data/maps/ErinVillage/scripts.pory"
	release
	return


ErinVillage_FindRival_Centre::
# 62 "data/maps/ErinVillage/scripts.pory"
	lock
# 63 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 64 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 65 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Centre
# 66 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 67 "data/maps/ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 68 "data/maps/ErinVillage/scripts.pory"
	release
	return


ErinVillage_FindRival_Right::
# 72 "data/maps/ErinVillage/scripts.pory"
	lock
# 73 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 74 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 75 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Right
# 76 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 77 "data/maps/ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 78 "data/maps/ErinVillage/scripts.pory"
	release
	return


# 81 "data/maps/ErinVillage/scripts.pory"
Rival_JumpInPlace:
# 82 "data/maps/ErinVillage/scripts.pory"
	jump_in_place_down
# 82 "data/maps/ErinVillage/scripts.pory"
	jump_in_place_down
	step_end

ErinVillage_OnBridge::
# 86 "data/maps/ErinVillage/scripts.pory"
	lockall
# 87 "data/maps/ErinVillage/scripts.pory"
	call ErinVillage_RivalOnBridge
# 88 "data/maps/ErinVillage/scripts.pory"
	releaseall
	return


ErinVillage_TalkToRival::
# 92 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_0, MSGBOX_YESNO
# 95 "data/maps/ErinVillage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ErinVillage_TalkToRival_2
# 99 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_2
# 100 "data/maps/ErinVillage/scripts.pory"
	waitmessage
ErinVillage_TalkToRival_1:
# 102 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_TalkToRival_Text_3
# 108 "data/maps/ErinVillage/scripts.pory"
	waitmessage
# 109 "data/maps/ErinVillage/scripts.pory"
	applymovement 3, RivalExit
# 110 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 111 "data/maps/ErinVillage/scripts.pory"
	removeobject 3
# 112 "data/maps/ErinVillage/scripts.pory"
	setflag FLAG_AW_START_TUT
# 113 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 2
	return

ErinVillage_TalkToRival_2:
# 96 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_1
# 97 "data/maps/ErinVillage/scripts.pory"
	waitmessage
	goto ErinVillage_TalkToRival_1


ErinVillage_RivalOnBridge::
# 117 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_0
# 120 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 121 "data/maps/ErinVillage/scripts.pory"
	special StopMapMusic
# 122 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8004, 2
# 123 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8005, 6
# 124 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8006, 6
# 125 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8007, 10
# 126 "data/maps/ErinVillage/scripts.pory"
	special ShakeCamera
# 127 "data/maps/ErinVillage/scripts.pory"
	waitstate
# 128 "data/maps/ErinVillage/scripts.pory"
	delay 30
# 129 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShakeSurprise
# 130 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, ShakeSurprise
# 131 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_1
# 135 "data/maps/ErinVillage/scripts.pory"
	waitmessage
# 136 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 137 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, Rival_WalkBridge
# 138 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkBridge
# 139 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 140 "data/maps/ErinVillage/scripts.pory"
	delay 30
# 141 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_2
# 144 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 145 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8004, 2
# 146 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8005, 6
# 147 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8006, 6
# 148 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8007, 10
# 149 "data/maps/ErinVillage/scripts.pory"
	special ShakeCamera
# 150 "data/maps/ErinVillage/scripts.pory"
	delay 40
# 151 "data/maps/ErinVillage/scripts.pory"
	playse SE_M_WING_ATTACK
# 152 "data/maps/ErinVillage/scripts.pory"
	playse SE_M_RAZOR_WIND
# 153 "data/maps/ErinVillage/scripts.pory"
	special SpawnCameraObject
# 154 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, Rival_FallOffBridge
# 155 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_FallOffBridge
# 156 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_3
# 157 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 158 "data/maps/ErinVillage/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/ErinVillage/scripts.pory"
	waitstate
# 160 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_4
# 161 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 162 "data/maps/ErinVillage/scripts.pory"
	waitmoncry
# 163 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 164 "data/maps/ErinVillage/scripts.pory"
	waitmoncry
# 165 "data/maps/ErinVillage/scripts.pory"
	delay 20
# 166 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_FAINT
# 167 "data/maps/ErinVillage/scripts.pory"
	delay 20
# 168 "data/maps/ErinVillage/scripts.pory"
	playse SE_M_FLY
# 169 "data/maps/ErinVillage/scripts.pory"
	waitse
# 170 "data/maps/ErinVillage/scripts.pory"
	removeobject 4
# 171 "data/maps/ErinVillage/scripts.pory"
	delay 120
# 172 "data/maps/ErinVillage/scripts.pory"
	special RemoveCameraObject
# 173 "data/maps/ErinVillage/scripts.pory"
	warpwhitefade MAP_ROUTE108_LABORATORY, 26, 11
# 174 "data/maps/ErinVillage/scripts.pory"
	delay 120
	return


# 178 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Left:
# 179 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 179 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 179 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 180 "data/maps/ErinVillage/scripts.pory"
	walk_fast_left
# 181 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 184 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Centre:
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 186 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 189 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Right:
# 190 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 190 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 190 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_right
# 192 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 195 "data/maps/ErinVillage/scripts.pory"
RivalExit:
# 196 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 196 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 196 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 196 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 196 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
	step_end

# 199 "data/maps/ErinVillage/scripts.pory"
ShakeSurprise:
# 200 "data/maps/ErinVillage/scripts.pory"
	face_up
# 201 "data/maps/ErinVillage/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 204 "data/maps/ErinVillage/scripts.pory"
Rival_WalkBridge:
# 205 "data/maps/ErinVillage/scripts.pory"
	walk_slow_up
	step_end

# 208 "data/maps/ErinVillage/scripts.pory"
Player_WalkBridge:
# 209 "data/maps/ErinVillage/scripts.pory"
	walk_up
# 209 "data/maps/ErinVillage/scripts.pory"
	walk_up
# 209 "data/maps/ErinVillage/scripts.pory"
	walk_up
	step_end

# 212 "data/maps/ErinVillage/scripts.pory"
Rival_FallOffBridge:
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 213 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
	step_end

# 216 "data/maps/ErinVillage/scripts.pory"
Player_FallOffBridge:
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 217 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
	step_end

ErinVillage_InteractFarmer_Text_0:
# 9 "data/maps/ErinVillage/scripts.pory"
	.string "Oh, me? I'm making sure these crops\n"
	.string "grow.\p"
	.string "It's not exactly often that someone\n"
	.string "leaves the village to get produce, so\l"
	.string "it's a very important job.\p"
	.string "$"

ErinVillage_TryLeaveVillage_Text_0:
# 32 "data/maps/ErinVillage/scripts.pory"
	.string "Now, now, {PLAYER}, I think I saw\n"
	.string "{RIVAL} waiting for you at the other\l"
	.string "end of town.\p"
	.string "He seemed very excited, you'd better\n"
	.string "hurry!\p"
	.string "$"

ErinVillage_TalkToRival_Text_0:
# 93 "data/maps/ErinVillage/scripts.pory"
	.string "{RIVAL}: {PLAYER}! I'm so excited\n"
	.string "for today! You remember what's\l"
	.string "happening, right?$"

ErinVillage_TalkToRival_Text_1:
# 96 "data/maps/ErinVillage/scripts.pory"
	.string "Yeah! You bet!$"

ErinVillage_TalkToRival_Text_2:
# 99 "data/maps/ErinVillage/scripts.pory"
	.string "What?! How could you have forgotten?$"

ErinVillage_TalkToRival_Text_3:
# 103 "data/maps/ErinVillage/scripts.pory"
	.string "The elders said we're allowed to go into\n"
	.string "their sacred cave!\p"
	.string "I've been waiting for this since your\n"
	.string "birthday! I wanted to go by myself,\l"
	.string "but...\p"
	.string "I really wanna do it together!\n"
	.string "The two of us, yeah!\p"
	.string "You remember where it is, right?\n"
	.string "I'll meet you on the bridge!\p"
	.string "$"

ErinVillage_RivalOnBridge_Text_0:
# 118 "data/maps/ErinVillage/scripts.pory"
	.string "{RIVAL}: Come on, it's just up ahea-$"

ErinVillage_RivalOnBridge_Text_1:
# 132 "data/maps/ErinVillage/scripts.pory"
	.string "Uhh... what was that?\p"
	.string "It was coming from the cave...?\p"
	.string "$"

ErinVillage_RivalOnBridge_Text_2:
# 142 "data/maps/ErinVillage/scripts.pory"
	.string "H- hey, we probably shouldn't stay\n"
	.string "here-$"

ErinVillage_RivalOnBridge_Text_3:
# 156 "data/maps/ErinVillage/scripts.pory"
	.string "{PLAYER}!\p"
	.string "$"

ErinVillage_RivalOnBridge_Text_4:
# 160 "data/maps/ErinVillage/scripts.pory"
	.string "???: Vibrava! There's someone falling!\p"
	.string "$"
