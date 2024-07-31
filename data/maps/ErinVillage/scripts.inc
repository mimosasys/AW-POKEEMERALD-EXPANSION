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
	removeobject 3
# 111 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 2
	return

ErinVillage_TalkToRival_2:
# 96 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_1
# 97 "data/maps/ErinVillage/scripts.pory"
	waitmessage
	goto ErinVillage_TalkToRival_1


ErinVillage_RivalOnBridge::
# 115 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_RivalOnBridge_Text_0, MSGBOX_AUTOCLOSE
# 118 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 119 "data/maps/ErinVillage/scripts.pory"
	special StopMapMusic
# 120 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8004, 2
# 121 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8005, 6
# 122 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8006, 6
# 123 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8007, 10
# 124 "data/maps/ErinVillage/scripts.pory"
	special ShakeCamera
# 125 "data/maps/ErinVillage/scripts.pory"
	waitstate
# 126 "data/maps/ErinVillage/scripts.pory"
	delay 30
# 127 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShakeSurprise
# 128 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, ShakeSurprise
# 129 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_1
# 133 "data/maps/ErinVillage/scripts.pory"
	waitmessage
# 134 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 135 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, Rival_WalkBridge
# 136 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkBridge
# 137 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 138 "data/maps/ErinVillage/scripts.pory"
	delay 30
# 139 "data/maps/ErinVillage/scripts.pory"
	msgbox ErinVillage_RivalOnBridge_Text_2, MSGBOX_AUTOCLOSE
# 142 "data/maps/ErinVillage/scripts.pory"
	closemessage
# 143 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8004, 2
# 144 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8005, 6
# 145 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8006, 6
# 146 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_0x8007, 20
# 147 "data/maps/ErinVillage/scripts.pory"
	special ShakeCamera
# 148 "data/maps/ErinVillage/scripts.pory"
	delay 20
# 149 "data/maps/ErinVillage/scripts.pory"
	playse SE_M_RAZOR_WIND
# 150 "data/maps/ErinVillage/scripts.pory"
	applymovement 4, Rival_FallOffBridge
# 151 "data/maps/ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_FallOffBridge
# 152 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_3
# 153 "data/maps/ErinVillage/scripts.pory"
	waitmovement 0
# 154 "data/maps/ErinVillage/scripts.pory"
	fadescreen FADE_TO_WHITE
# 155 "data/maps/ErinVillage/scripts.pory"
	waitstate
# 156 "data/maps/ErinVillage/scripts.pory"
	message ErinVillage_RivalOnBridge_Text_4
# 157 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 158 "data/maps/ErinVillage/scripts.pory"
	waitmoncry
# 159 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 160 "data/maps/ErinVillage/scripts.pory"
	waitmoncry
# 161 "data/maps/ErinVillage/scripts.pory"
	delay 20
# 162 "data/maps/ErinVillage/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_FAINT
# 163 "data/maps/ErinVillage/scripts.pory"
	delay 20
# 164 "data/maps/ErinVillage/scripts.pory"
	playse SE_M_FLY
# 165 "data/maps/ErinVillage/scripts.pory"
	waitse
# 166 "data/maps/ErinVillage/scripts.pory"
	removeobject 4
# 167 "data/maps/ErinVillage/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 3
# 168 "data/maps/ErinVillage/scripts.pory"
	delay 120
# 169 "data/maps/ErinVillage/scripts.pory"
	warpsilent MAP_ROUTE108_LABORATORY, 26, 11
# 170 "data/maps/ErinVillage/scripts.pory"
	releaseall
	return


# 173 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Left:
# 174 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 174 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 174 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 175 "data/maps/ErinVillage/scripts.pory"
	walk_fast_left
# 176 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 179 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Centre:
# 180 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 180 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 180 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 181 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 184 "data/maps/ErinVillage/scripts.pory"
RivalEnter_Right:
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 185 "data/maps/ErinVillage/scripts.pory"
	walk_fast_down
# 186 "data/maps/ErinVillage/scripts.pory"
	walk_fast_right
# 187 "data/maps/ErinVillage/scripts.pory"
	face_player
	step_end

# 190 "data/maps/ErinVillage/scripts.pory"
RivalExit:
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
# 191 "data/maps/ErinVillage/scripts.pory"
	walk_fast_up
	step_end

# 194 "data/maps/ErinVillage/scripts.pory"
ShakeSurprise:
# 195 "data/maps/ErinVillage/scripts.pory"
	face_up
# 196 "data/maps/ErinVillage/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 199 "data/maps/ErinVillage/scripts.pory"
Rival_WalkBridge:
# 200 "data/maps/ErinVillage/scripts.pory"
	walk_slow_up
	step_end

# 203 "data/maps/ErinVillage/scripts.pory"
Player_WalkBridge:
# 204 "data/maps/ErinVillage/scripts.pory"
	walk_up
# 204 "data/maps/ErinVillage/scripts.pory"
	walk_up
# 204 "data/maps/ErinVillage/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/ErinVillage/scripts.pory"
Rival_FallOffBridge:
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
# 208 "data/maps/ErinVillage/scripts.pory"
	walk_faster_left
	step_end

# 211 "data/maps/ErinVillage/scripts.pory"
Player_FallOffBridge:
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
# 212 "data/maps/ErinVillage/scripts.pory"
	walk_faster_right
	step_end

ErinVillage_InteractFarmer_Text_0:
# 9 "data/maps/ErinVillage/scripts.pory"
	.string "Oh, me? I'm making sure these crops\n"
	.string "grow.\p"
	.string "It's not exactly often that someone\n"
	.string "leaves the village to get produce, so\l"
	.string "it's a very important job.$"

ErinVillage_TryLeaveVillage_Text_0:
# 32 "data/maps/ErinVillage/scripts.pory"
	.string "Now, now, {PLAYER}, I think I saw\n"
	.string "{RIVAL} waiting for you at the other\l"
	.string "end of town.\p"
	.string "He seemed very excited, you'd better\n"
	.string "hurry!$"

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
	.string "What?! How could you have forgotten?!$"

ErinVillage_TalkToRival_Text_3:
# 103 "data/maps/ErinVillage/scripts.pory"
	.string "The elders said we're allowed to go into\n"
	.string "their sacred cave!\p"
	.string "I've been waiting for this since your\n"
	.string "birthday! I wanted to go by myself,\l"
	.string "but...\p"
	.string "I really wanna do it together! The two\n"
	.string "of us, yeah!\p"
	.string "You remember where it is, right? I'll\n"
	.string "meet you on the bridge!$"

ErinVillage_RivalOnBridge_Text_0:
# 116 "data/maps/ErinVillage/scripts.pory"
	.string "{RIVAL}: Come on, it's just up ahea-$"

ErinVillage_RivalOnBridge_Text_1:
# 130 "data/maps/ErinVillage/scripts.pory"
	.string "Uhh... what was that?\p"
	.string "It was coming from the cave...!$"

ErinVillage_RivalOnBridge_Text_2:
# 140 "data/maps/ErinVillage/scripts.pory"
	.string "H- hey, we probably shouldn't stay\n"
	.string "here-$"

ErinVillage_RivalOnBridge_Text_3:
# 152 "data/maps/ErinVillage/scripts.pory"
	.string "{PLAYER}!$"

ErinVillage_RivalOnBridge_Text_4:
# 156 "data/maps/ErinVillage/scripts.pory"
	.string "???: Vibrava! There's someone falling!$"
