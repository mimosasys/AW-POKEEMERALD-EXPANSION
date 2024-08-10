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
	closemessage
# 11 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, Mum1
# 12 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Dialog2
# 14 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 15 "data/maps/ErinVillage_YourHouse/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 16 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Text_0
# 17 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 18 "data/maps/ErinVillage_YourHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Text_1
# 20 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 21 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 22 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 23 "data/maps/ErinVillage_YourHouse/scripts.pory"
	message ErinVillage_YourHouse_WakeUp_Dialog3
# 24 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmessage
# 25 "data/maps/ErinVillage_YourHouse/scripts.pory"
	closemessage
# 26 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, Mum2
# 27 "data/maps/ErinVillage_YourHouse/scripts.pory"
	waitmovement 0
# 28 "data/maps/ErinVillage_YourHouse/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 1
# 29 "data/maps/ErinVillage_YourHouse/scripts.pory"
	releaseall
	return


ErinVillage_YourHouse_InteractMum::
# 33 "data/maps/ErinVillage_YourHouse/scripts.pory"
	lockall
# 34 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, FacePlayer
# 35 "data/maps/ErinVillage_YourHouse/scripts.pory"
	msgbox ErinVillage_YourHouse_InteractMum_Text_0
# 36 "data/maps/ErinVillage_YourHouse/scripts.pory"
	applymovement 1, FaceOriginalDirection
# 37 "data/maps/ErinVillage_YourHouse/scripts.pory"
	releaseall
	return


# 60 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum0:
# 61 "data/maps/ErinVillage_YourHouse/scripts.pory"
	face_player
	step_end

# 64 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum1:
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 65 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_up
# 66 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_left
	step_end

# 69 "data/maps/ErinVillage_YourHouse/scripts.pory"
Mum2:
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_right
# 70 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_right
# 71 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 71 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 71 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 71 "data/maps/ErinVillage_YourHouse/scripts.pory"
	walk_down
# 72 "data/maps/ErinVillage_YourHouse/scripts.pory"
	face_original_direction
	step_end

ErinVillage_YourHouse_WakeUp_Text_0:
# 16 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Oh, and take these too.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Text_1:
# 19 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Got the Running Shoes.\p"
	.string "$"

ErinVillage_YourHouse_InteractMum_Text_0:
# 35 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "You have a good time with {RIVAL},\n"
	.string "ok? Be careful out there on the rocks!\l"
	.string "And remember not to go down too far.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog1::
# 40 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Oh! {PLAYER}! You finally woke up!\n"
	.string "You're such a sleepyhead.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog2::
# 46 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "Weren't you meeting up with {RIVAL}\n"
	.string "today? You'd better hurry!\p"
	.string "What? No, it's not, your clock must be\n"
	.string "wrong.\p"
	.string "That explains it. You'd better set it.\p"
	.string "$"

ErinVillage_YourHouse_WakeUp_Dialog3::
# 53 "data/maps/ErinVillage_YourHouse/scripts.pory"
	.string "There! Much better.\p"
	.string "You have a good time with {RIVAL},\n"
	.string "ok? Be careful out there on the rocks!\l"
	.string "And remember not to go down too far.\p"
	.string "$"
