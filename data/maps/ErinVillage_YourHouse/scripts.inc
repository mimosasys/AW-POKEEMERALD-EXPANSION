ErinVillage_YourHouse_MapScripts::
	.byte 0


ErinVillage_YourHouse_WakeUp::
# 6 "data/maps/ErinVillage_YourHouse/scripts.pory"
	lockall
# 7 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, Mum0
# 8 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Dialog1
# 9 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 10 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, Mum1
# 11 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmovement 0
# 12 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Dialog2
# 13 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 14 "data/maps/ErinVillage_YourHouse/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 15 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Text_0
# 16 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 17 "data/maps/ErinVillage_YourHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Text_1
# 19 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 20 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 21 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 22 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Dialog3
# 23 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 24 "data/maps/ErinVillage_YourHouse/scripts.pory"
	closemessage
# 25 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, Mum2
# 26 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 1
# 28 "data/maps/ErinVillage_YourHouse/scripts.pory"
	releaseall
	return


ErinVillage_YourHouse_InteractMum::
# 32 "data/maps/ErinVillage_YourHouse/scripts.pory"
	lockall
# 33 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, FacePlayer
# 34 "data/maps/ErinVillage_YourHouse/scripts.pory"
	msgbox ErinVillage_YourHouse_InteractMum_Text_0
# 35 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, FaceOriginalDirection
# 36 "data/maps/ErinVillage_YourHouse/scripts.pory"
	releaseall
	return


# 59 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum0:
# 60 "data/maps/ErinVillage_YourHouse/scripts.pory"
	face_player
	step_end

# 63 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum1:
# 64 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 64 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 64 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 64 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_left
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_left
	step_end

# 68 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum2:
# 69 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_right
# 69 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_right
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 71 "data/maps/ErinVillage_YourHouse/scripts.pory"
	face_original_direction
	step_end

ErinVillage_YourHouse_WakeUp_Text_0:
# 15 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Oh, and take these too.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Text_1:
# 18 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Got the Running Shoes.\p"
	.string "$"

ErinVillage_YourHouse_InteractMum_Text_0:
# 34 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "You have a good time with {RIVAL},\n"
	.string "ok? Be careful out there on the rocks!\l"
	.string "And remember not to go down too far.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog1::
# 39 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Oh! {PLAYER}! You finally woke up!\n"
	.string "You're such a sleepyhead.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog2::
# 45 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Weren't you meeting up with {RIVAL}\n"
	.string "today? You'd better hurry!\p"
	.string "What? No, it's not, your clock must be\n"
	.string "wrong.\n"
	.string "That explains it. You'd better set it.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog3::
# 52 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "There! Much better.\p"
	.string "You have a good time with {RIVAL},\n"
	.string "ok? Be careful out there on the rocks!\l"
	.string "And remember not to go down too far.\p"
	.string "$"
