AW_ErinVillage_MapScripts::
	.byte 0


ErinVillage_InteractFarmer::
# 6 "data/maps/AW_ErinVillage/scripts.pory"
	lock
# 7 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 1, FacePlayer
# 8 "data/maps/AW_ErinVillage/scripts.pory"
	message ErinVillage_InteractFarmer_Text_0
# 12 "data/maps/AW_ErinVillage/scripts.pory"
	waitmessage
# 13 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 1, FaceOriginalDirection
# 14 "data/maps/AW_ErinVillage/scripts.pory"
	release
	return


# 17 "data/maps/AW_ErinVillage/scripts.pory"
FacePlayer:
# 18 "data/maps/AW_ErinVillage/scripts.pory"
	face_player
	step_end

# 21 "data/maps/AW_ErinVillage/scripts.pory"
FaceOriginalDirection:
# 22 "data/maps/AW_ErinVillage/scripts.pory"
	face_original_direction
	step_end

ErinVillage_TryLeaveVillage::
# 26 "data/maps/AW_ErinVillage/scripts.pory"
	lock
# 27 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 2, EmoteExclamation
# 28 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 29 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 2, FacePlayer
# 30 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 31 "data/maps/AW_ErinVillage/scripts.pory"
	message ErinVillage_TryLeaveVillage_Text_0
# 35 "data/maps/AW_ErinVillage/scripts.pory"
	waitmessage
# 36 "data/maps/AW_ErinVillage/scripts.pory"
	closemessage
# 37 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 2, FaceOriginalDirection
# 38 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_WalkUp
# 39 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 40 "data/maps/AW_ErinVillage/scripts.pory"
	release
	return


# 43 "data/maps/AW_ErinVillage/scripts.pory"
EmoteExclamation:
# 44 "data/maps/AW_ErinVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/AW_ErinVillage/scripts.pory"
Player_WalkUp:
# 48 "data/maps/AW_ErinVillage/scripts.pory"
	walk_up
	step_end

ErinVillage_FindRival_Left::
# 52 "data/maps/AW_ErinVillage/scripts.pory"
	lock
# 53 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 54 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 55 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Left
# 56 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 57 "data/maps/AW_ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 58 "data/maps/AW_ErinVillage/scripts.pory"
	release
	return


ErinVillage_FindRival_Centre::
# 62 "data/maps/AW_ErinVillage/scripts.pory"
	lock
# 63 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 64 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 65 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Centre
# 66 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 67 "data/maps/AW_ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 68 "data/maps/AW_ErinVillage/scripts.pory"
	release
	return


ErinVillage_FindRival_Right::
# 72 "data/maps/AW_ErinVillage/scripts.pory"
	lock
# 73 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, Rival_JumpInPlace
# 74 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 75 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, RivalEnter_Right
# 76 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 77 "data/maps/AW_ErinVillage/scripts.pory"
	call ErinVillage_TalkToRival
# 78 "data/maps/AW_ErinVillage/scripts.pory"
	release
	return


# 81 "data/maps/AW_ErinVillage/scripts.pory"
Rival_JumpInPlace:
# 82 "data/maps/AW_ErinVillage/scripts.pory"
	jump_in_place_down
# 82 "data/maps/AW_ErinVillage/scripts.pory"
	jump_in_place_down
	step_end

ErinVillage_TalkToRival::
# 92 "data/maps/AW_ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_0, MSGBOX_YESNO
# 95 "data/maps/AW_ErinVillage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ErinVillage_TalkToRival_2
# 99 "data/maps/AW_ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_2
# 100 "data/maps/AW_ErinVillage/scripts.pory"
	waitmessage
ErinVillage_TalkToRival_1:
# 102 "data/maps/AW_ErinVillage/scripts.pory"
	message ErinVillage_TalkToRival_Text_3
# 108 "data/maps/AW_ErinVillage/scripts.pory"
	waitmessage
# 109 "data/maps/AW_ErinVillage/scripts.pory"
	applymovement 3, RivalExit
# 110 "data/maps/AW_ErinVillage/scripts.pory"
	waitmovement 0
# 111 "data/maps/AW_ErinVillage/scripts.pory"
	removeobject 3
# 112 "data/maps/AW_ErinVillage/scripts.pory"
	setflag FLAG_AW_START_TUT
# 113 "data/maps/AW_ErinVillage/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 2
# 115 "data/maps/AW_ErinVillage/scripts.pory"
	call ErinVillage_GotoBridge
	return

ErinVillage_TalkToRival_2:
# 96 "data/maps/AW_ErinVillage/scripts.pory"
	msgbox ErinVillage_TalkToRival_Text_1
# 97 "data/maps/AW_ErinVillage/scripts.pory"
	waitmessage
	goto ErinVillage_TalkToRival_1


ErinVillage_GotoBridge::
# 119 "data/maps/AW_ErinVillage/scripts.pory"
	lockall
# 121 "data/maps/AW_ErinVillage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/AW_ErinVillage/scripts.pory"
	warpsilent MAP_AW_MT_EIGO_APPROACH, 19, 23
	return


# 186 "data/maps/AW_ErinVillage/scripts.pory"
RivalEnter_Left:
# 187 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 187 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 187 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 188 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_left
# 189 "data/maps/AW_ErinVillage/scripts.pory"
	face_player
	step_end

# 192 "data/maps/AW_ErinVillage/scripts.pory"
RivalEnter_Centre:
# 193 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 193 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 193 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 194 "data/maps/AW_ErinVillage/scripts.pory"
	face_player
	step_end

# 197 "data/maps/AW_ErinVillage/scripts.pory"
RivalEnter_Right:
# 198 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 198 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 198 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_down
# 199 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_right
# 200 "data/maps/AW_ErinVillage/scripts.pory"
	face_player
	step_end

# 203 "data/maps/AW_ErinVillage/scripts.pory"
RivalExit:
# 204 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_up
# 204 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_up
# 204 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_up
# 204 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_up
# 204 "data/maps/AW_ErinVillage/scripts.pory"
	walk_fast_up
	step_end

# 207 "data/maps/AW_ErinVillage/scripts.pory"
ShakeSurprise:
# 208 "data/maps/AW_ErinVillage/scripts.pory"
	face_up
# 209 "data/maps/AW_ErinVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 212 "data/maps/AW_ErinVillage/scripts.pory"
Rival_WalkBridge:
# 213 "data/maps/AW_ErinVillage/scripts.pory"
	walk_slow_up
	step_end

# 216 "data/maps/AW_ErinVillage/scripts.pory"
Player_WalkBridge:
# 217 "data/maps/AW_ErinVillage/scripts.pory"
	walk_up
# 217 "data/maps/AW_ErinVillage/scripts.pory"
	walk_up
# 217 "data/maps/AW_ErinVillage/scripts.pory"
	walk_up
	step_end

# 220 "data/maps/AW_ErinVillage/scripts.pory"
Rival_FallOffBridge:
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
# 221 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_left
	step_end

# 224 "data/maps/AW_ErinVillage/scripts.pory"
Player_FallOffBridge:
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
# 225 "data/maps/AW_ErinVillage/scripts.pory"
	walk_faster_right
	step_end

ErinVillage_InteractFarmer_Text_0:
# 9 "data/maps/AW_ErinVillage/scripts.pory"
	.string "Oh, me? I'm making sure these crops\n"
	.string "grow.\p"
	.string "It's not exactly often that someone\n"
	.string "leaves the village to get produce, so\l"
	.string "it's a very important job.\p"
	.string "$"

ErinVillage_TryLeaveVillage_Text_0:
# 32 "data/maps/AW_ErinVillage/scripts.pory"
	.string "Now, now, {PLAYER}, I think I saw\n"
	.string "{RIVAL} waiting for you at the other\l"
	.string "end of town.\p"
	.string "He seemed very excited, you'd better\n"
	.string "hurry!\p"
	.string "$"

ErinVillage_TalkToRival_Text_0:
# 93 "data/maps/AW_ErinVillage/scripts.pory"
	.string "{RIVAL}: {PLAYER}! I'm so excited\n"
	.string "for today! You remember what's\l"
	.string "happening, right?$"

ErinVillage_TalkToRival_Text_1:
# 96 "data/maps/AW_ErinVillage/scripts.pory"
	.string "Yeah! You bet!$"

ErinVillage_TalkToRival_Text_2:
# 99 "data/maps/AW_ErinVillage/scripts.pory"
	.string "What?! How could you have forgotten?$"

ErinVillage_TalkToRival_Text_3:
# 103 "data/maps/AW_ErinVillage/scripts.pory"
	.string "The elders said we're allowed to go into\n"
	.string "their sacred cave!\p"
	.string "I've been waiting for this since your\n"
	.string "birthday! I wanted to go by myself,\l"
	.string "but...\p"
	.string "I really wanna do it together!\n"
	.string "The two of us, yeah!\p"
	.string "You remember where it is, right?\n"
	.string "I'll meet you at the bridge!\p"
	.string "$"
