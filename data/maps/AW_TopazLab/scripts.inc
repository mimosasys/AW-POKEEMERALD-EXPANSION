AW_TopazLab_MapScripts::
# 3 "data/maps/AW_TopazLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_TopazLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_TopazLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AW_TopazLab/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, TopazLab_Transition
	.2byte 0


TopazLab_Transition::
# 10 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 12 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 14 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 15 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 2, CarlaLeaveLab
# 16 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 18 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkRightSpot
# 19 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 21 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 22 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 23 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_Transition_Text_0
# 27 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 28 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 29 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 31 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, AveryGotoMons1
# 32 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 34 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 35 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 36 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_Transition_Text_1
# 40 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 41 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 42 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 44 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, AveryGotoMons2
# 45 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 46 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGotoMons
# 47 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 2, CarlaGotoMons
# 48 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 50 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 51 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return


TopazLab_LockedDoor::
# 55 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 56 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_LockedDoor_Text_0
# 60 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 61 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return


TopazLab_TalkAlpacoil::
# 65 "data/maps/AW_TopazLab/scripts.pory"
	lock
# 66 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_ALPACOIL, 10, 3
# 67 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkAlpacoil_Text_0, MSGBOX_YESNO
# 71 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 72 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 74 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkAlpacoil_2
TopazLab_TalkAlpacoil_1:
# 84 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 86 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkAlpacoil_7
TopazLab_TalkAlpacoil_4:
# 90 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return

TopazLab_TalkAlpacoil_2:
# 75 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 76 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 77 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 5, EmoteHeart
# 78 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 80 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkAlpacoil_Text_1
# 82 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto TopazLab_TalkAlpacoil_1

TopazLab_TalkAlpacoil_5:
# 87 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkAlpacoil_4

TopazLab_TalkAlpacoil_6:
# 86 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkAlpacoil_5
	goto TopazLab_TalkAlpacoil_4

TopazLab_TalkAlpacoil_7:
# 86 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkAlpacoil_6
	goto TopazLab_TalkAlpacoil_4


TopazLab_TalkSmackop::
# 94 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 95 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_SMACKOP, 10, 3
# 96 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkSmackop_Text_0, MSGBOX_YESNO
# 100 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 101 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 103 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkSmackop_2
TopazLab_TalkSmackop_1:
# 114 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 116 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkSmackop_7
TopazLab_TalkSmackop_4:
# 120 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return

TopazLab_TalkSmackop_2:
# 104 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 105 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 106 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 4, EmoteHeart
# 107 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 109 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkSmackop_Text_1
# 110 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 112 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto TopazLab_TalkSmackop_1

TopazLab_TalkSmackop_5:
# 117 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkSmackop_4

TopazLab_TalkSmackop_6:
# 116 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkSmackop_5
	goto TopazLab_TalkSmackop_4

TopazLab_TalkSmackop_7:
# 116 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkSmackop_6
	goto TopazLab_TalkSmackop_4


TopazLab_TalkPuppixy::
# 124 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 125 "data/maps/AW_TopazLab/scripts.pory"
	showmonpic SPECIES_PUPPIXY, 10, 3
# 126 "data/maps/AW_TopazLab/scripts.pory"
	msgbox TopazLab_TalkPuppixy_Text_0, MSGBOX_YESNO
# 130 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 131 "data/maps/AW_TopazLab/scripts.pory"
	hidemonpic
# 133 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TopazLab_TalkPuppixy_2
TopazLab_TalkPuppixy_1:
# 144 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 146 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TopazLab_TalkPuppixy_7
TopazLab_TalkPuppixy_4:
# 150 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return

TopazLab_TalkPuppixy_2:
# 134 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 135 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 136 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 3, EmoteHeart
# 137 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 139 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_TalkPuppixy_Text_1
# 140 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 142 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto TopazLab_TalkPuppixy_1

TopazLab_TalkPuppixy_5:
# 147 "data/maps/AW_TopazLab/scripts.pory"
	call TopazLab_CheckAllStarters
	goto TopazLab_TalkPuppixy_4

TopazLab_TalkPuppixy_6:
# 146 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TopazLab_TalkPuppixy_5
	goto TopazLab_TalkPuppixy_4

TopazLab_TalkPuppixy_7:
# 146 "data/maps/AW_TopazLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TopazLab_TalkPuppixy_6
	goto TopazLab_TalkPuppixy_4


TopazLab_CheckAllStarters::
# 154 "data/maps/AW_TopazLab/scripts.pory"
	lockall
# 156 "data/maps/AW_TopazLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/AW_TopazLab/scripts.pory"
	delay 80
# 159 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 16
# 160 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy 5, 10, 15
# 161 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy 4, 10, 16
# 162 "data/maps/AW_TopazLab/scripts.pory"
	setobjectxy 3, 10, 17
# 163 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 164 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 5, FaceRight
# 165 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 4, FaceRight
# 166 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 3, FaceRight
# 167 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 169 "data/maps/AW_TopazLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 170 "data/maps/AW_TopazLab/scripts.pory"
	delay 80
# 172 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkLeftSpot
# 173 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 175 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 176 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 177 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_CheckAllStarters_Text_0
# 183 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 184 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 185 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 187 "data/maps/AW_TopazLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 188 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 190 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 5, WalkRightSpot
# 191 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_ALPACOIL, CRY_MODE_NORMAL
# 192 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 194 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 4, WalkRightSpot
# 195 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_SMACKOP, CRY_MODE_NORMAL
# 196 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 198 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 3, WalkRightSpot
# 199 "data/maps/AW_TopazLab/scripts.pory"
	playmoncry SPECIES_PUPPIXY, CRY_MODE_NORMAL
# 200 "data/maps/AW_TopazLab/scripts.pory"
	waitmoncry
# 202 "data/maps/AW_TopazLab/scripts.pory"
	applymovement 1, WalkLeftSpot
# 203 "data/maps/AW_TopazLab/scripts.pory"
	waitmovement
# 205 "data/maps/AW_TopazLab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_AVERY
# 206 "data/maps/AW_TopazLab/scripts.pory"
	callnative DrawMugshot
# 207 "data/maps/AW_TopazLab/scripts.pory"
	message TopazLab_CheckAllStarters_Text_1
# 210 "data/maps/AW_TopazLab/scripts.pory"
	waitmessage
# 211 "data/maps/AW_TopazLab/scripts.pory"
	closemessage
# 212 "data/maps/AW_TopazLab/scripts.pory"
	callnative ClearMugshot
# 214 "data/maps/AW_TopazLab/scripts.pory"
	releaseall
	return


# 217 "data/maps/AW_TopazLab/scripts.pory"
CarlaLeaveLab:
# 218 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 218 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 218 "data/maps/AW_TopazLab/scripts.pory"
	walk_up
# 219 "data/maps/AW_TopazLab/scripts.pory"
	face_left
	step_end

# 222 "data/maps/AW_TopazLab/scripts.pory"
AveryGotoMons1:
# 223 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 224 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 224 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 225 "data/maps/AW_TopazLab/scripts.pory"
	face_player
	step_end

# 228 "data/maps/AW_TopazLab/scripts.pory"
AveryGotoMons2:
# 229 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 230 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 230 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 233 "data/maps/AW_TopazLab/scripts.pory"
PlayerGotoMons:
# 234 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 234 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 234 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 235 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 235 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 235 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 236 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 236 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/AW_TopazLab/scripts.pory"
CarlaGotoMons:
# 240 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 240 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 240 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 240 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 241 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 241 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 241 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 241 "data/maps/AW_TopazLab/scripts.pory"
	walk_down
# 242 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
# 242 "data/maps/AW_TopazLab/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/AW_TopazLab/scripts.pory"
EmoteHeart:
# 246 "data/maps/AW_TopazLab/scripts.pory"
	emote_heart
	step_end

TopazLab_Transition_Text_0:
# 24 "data/maps/AW_TopazLab/scripts.pory"
	.string "Well, this is the little plot of land\n"
	.string "where we've set up our lab.\p"
	.string "We do archaeology mostly, so we're not\n"
	.string "around here that much, but when we are,\l"
	.string "we take care of hurt or abandoned\l"
	.string "Pokémon.\p"
	.string "$"

TopazLab_Transition_Text_1:
# 37 "data/maps/AW_TopazLab/scripts.pory"
	.string "Speaking of, there's three down here I'd\n"
	.string "like you to get to know.\p"
	.string "They're just around here, come have a\n"
	.string "look!\p"
	.string "$"

TopazLab_LockedDoor_Text_0:
# 57 "data/maps/AW_TopazLab/scripts.pory"
	.string "{COLOR RED}TOPAZ LABORATORY STOREROOM\p"
	.string "The door is locked.\p"
	.string "$"

TopazLab_TalkAlpacoil_Text_0:
# 68 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Alpacoil, the Steel Wool\n"
	.string "Pokémon!\p"
	.string "Give Alpacoil a pat?\p"
	.string "$"

TopazLab_TalkAlpacoil_Text_1:
# 80 "data/maps/AW_TopazLab/scripts.pory"
	.string "Alpacoil rubbed its nose against your\n"
	.string "legs and sniffed your shoes. It likes\l"
	.string "you!\p"
	.string "$"

TopazLab_TalkSmackop_Text_0:
# 97 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Smackop, the Fight Bird Pokémon!\p"
	.string "Give Smackop a pat?\p"
	.string "$"

TopazLab_TalkSmackop_Text_1:
# 109 "data/maps/AW_TopazLab/scripts.pory"
	.string "Smackop delightfully pecked at your\n"
	.string "feet, and looked into your eyes\l"
	.string "playfully. It likes you!\p"
	.string "$"

TopazLab_TalkPuppixy_Text_0:
# 127 "data/maps/AW_TopazLab/scripts.pory"
	.string "This is Puppixy, the Pink Armour\n"
	.string "Pokémon!\p"
	.string "Give Puppixy a pat?\p"
	.string "$"

TopazLab_TalkPuppixy_Text_1:
# 139 "data/maps/AW_TopazLab/scripts.pory"
	.string "Puppixy wagged its tail and scratched\n"
	.string "at the ground in front of you. It likes\l"
	.string "you!\p"
	.string "$"

TopazLab_CheckAllStarters_Text_0:
# 178 "data/maps/AW_TopazLab/scripts.pory"
	.string "So, what do you think? Aren't they\n"
	.string "fantastic?\p"
	.string "You see, truth is, they're all rescues,\n"
	.string "too.\p"
	.string "Unfortunately, since they're a bit\n"
	.string "nervous around people, it's been pretty\l"
	.string "hard to take care of them all.\p"
	.string "So I was wondering, would you like to\n"
	.string "take care of one? It seems they've\l"
	.string "really taken a liking to you!\p"
	.string "$"

TopazLab_CheckAllStarters_Text_1:
# 208 "data/maps/AW_TopazLab/scripts.pory"
	.string "Go on, which one calls to you the most?\p"
	.string "$"
