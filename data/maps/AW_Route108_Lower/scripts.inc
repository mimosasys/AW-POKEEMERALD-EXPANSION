AW_Route108_Lower_MapScripts::
# 2 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route108_HideOrShowTruck
# 3 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


Route108_HideOrShowTruck::
# 10 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_HELP_GEAR, Route108_HideOrShowTruck_1
	return

Route108_HideOrShowTruck_1:
# 11 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 38, 0x1D8, TRUE
# 12 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 39, 0x1D8, TRUE
# 13 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 9, 38, 0x1D9, TRUE
# 14 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 38, 0x1D2, TRUE
# 15 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 39, 0x1E2, TRUE
# 16 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


Route108_YouCantParkThere::
# 21 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 22 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, Route108_YouCantParkThere_2
# 59 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 60 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_5
# 65 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 66 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
Route108_YouCantParkThere_1:
# 68 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

Route108_YouCantParkThere_2:
# 23 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, WalkLeftSpot
# 24 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 25 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_0
# 28 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 29 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 30 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 31 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 32 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_1
# 35 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 36 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 37 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 38 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 39 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_2
# 42 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 43 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 44 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 45 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 46 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_3
# 49 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkLeftSpot
# 50 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 51 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YouCantParkThere_Text_4
# 54 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 55 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, FaceOriginalDirection
# 56 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
# 57 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
	goto Route108_YouCantParkThere_1


Route108_DidYouKnow::
# 72 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 73 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 5, FacePlayer
# 74 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 75 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_DidYouKnow_Text_0
# 80 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 81 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


Route108_YoullMeetTrainers::
# 85 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 86 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 4, FacePlayer
# 87 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 88 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_YoullMeetTrainers_Text_0
# 92 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 93 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


Route108_SignLab::
# 97 "data/maps/AW_Route108_Lower/scripts.pory"
	lock
# 98 "data/maps/AW_Route108_Lower/scripts.pory"
	msgbox Route108_SignLab_Text_0, MSGBOX_SIGN
# 100 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 101 "data/maps/AW_Route108_Lower/scripts.pory"
	release
	return


Route108_SignToMulberry::
# 105 "data/maps/AW_Route108_Lower/scripts.pory"
	lock
# 106 "data/maps/AW_Route108_Lower/scripts.pory"
	msgbox Route108_SignToMulberry_Text_0, MSGBOX_SIGN
# 112 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 113 "data/maps/AW_Route108_Lower/scripts.pory"
	release
	return


Route108_SignToPuce::
# 117 "data/maps/AW_Route108_Lower/scripts.pory"
	lock
# 118 "data/maps/AW_Route108_Lower/scripts.pory"
	msgbox Route108_SignToPuce_Text_0, MSGBOX_SIGN
# 123 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 124 "data/maps/AW_Route108_Lower/scripts.pory"
	release
	return


Route108_SignToNorth::
# 128 "data/maps/AW_Route108_Lower/scripts.pory"
	lock
# 129 "data/maps/AW_Route108_Lower/scripts.pory"
	msgbox Route108_SignToNorth_Text_0, MSGBOX_SIGN
# 132 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 133 "data/maps/AW_Route108_Lower/scripts.pory"
	release
	return


# 136 "data/maps/AW_Route108_Lower/scripts.pory"
WalkUpSpot:
# 137 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
# 137 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
	step_end

# 140 "data/maps/AW_Route108_Lower/scripts.pory"
FaceRight:
# 141 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 144 "data/maps/AW_Route108_Lower/scripts.pory"
LookDown:
# 145 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 148 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookLeft3:
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
	step_end

# 152 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookRight3:
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
	step_end

# 156 "data/maps/AW_Route108_Lower/scripts.pory"
MoveDown1:
# 157 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 160 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookDown3:
# 161 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 161 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 161 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/AW_Route108_Lower/scripts.pory"
Camera_LookUp3:
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_YouCantParkThere_Text_0:
# 26 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Hey! You can't just park your truck\n"
	.string "there!\p"
	.string "$"

Route108_YouCantParkThere_Text_1:
# 33 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Uh, yes I can. It's my truck.\p"
	.string "$"

Route108_YouCantParkThere_Text_2:
# 40 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "But people can't get past! Like this\n"
	.string "kid, for example.\p"
	.string "$"

Route108_YouCantParkThere_Text_3:
# 47 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, it sucks to be them.\p"
	.string "$"

Route108_YouCantParkThere_Text_4:
# 52 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "...How did you even get it there?\p"
	.string "$"

Route108_YouCantParkThere_Text_5:
# 61 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, lucky for you, there's nothing in\n"
	.string "the way, finally.\p"
	.string "What a doofus, parking your truck in\n"
	.string "the way like that.\p"
	.string "How'd he even get it here?$"

Route108_DidYouKnow_Text_0:
# 76 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Did you know? Route 108 continues up\n"
	.string "here!\p"
	.string "Well, I say that, the gate here's closed.\p"
	.string "Huh? No, I've got no idea why. Strange,\n"
	.string "isn't it?\p"
	.string "$"

Route108_YoullMeetTrainers_Text_0:
# 89 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "If you go on a journey with your\n"
	.string "Pokémon, you'll see plenty of trainers\l"
	.string "around the place wanting to battle!\p"
	.string "Huh? Me? I'm just out for a walk.\p"
	.string "$"

Route108_SignLab_Text_0:
# 99 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "{UP_ARROW_2} TOPAZ LABORATORY$"

Route108_SignToMulberry_Text_0:
# 107 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "{RIGHT_ARROW_2} PORT MULBERRY\n"
	.string "{LEFT_ARROW_2} ROUTE 108 (South)\n"
	.string "{DOWN_ARROW_2} PUCE CITY\n"
	.string "{UP_ARROW_2} ROUTE 108 (North)\n"
	.string "$"

Route108_SignToPuce_Text_0:
# 119 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "{DOWN_ARROW_2} PUCE CITY\n"
	.string "{UP_ARROW_2} ROUTE 108\n"
	.string "{RIGHT_ARROW_2} PORT MULBERRY\n"
	.string "$"

Route108_SignToNorth_Text_0:
# 130 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "{UP_ARROW_2} ROUTE 108 (North)\n"
	.string "$"
