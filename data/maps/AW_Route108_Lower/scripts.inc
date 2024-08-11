AW_Route108_Lower_MapScripts::
# 3 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AW_Route108_Lower/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, Route108_Lower_Transition
	.2byte 0


Route108_HideOrShowTruck::
# 9 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, Route108_HideOrShowTruck_1
	return

Route108_HideOrShowTruck_1:
# 10 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 34, 0x1D8, TRUE
# 11 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 8, 35, 0x1D8, TRUE
# 12 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 9, 34, 0x1D9, TRUE
# 13 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 34, 0x1D2, TRUE
# 14 "data/maps/AW_Route108_Lower/scripts.pory"
	setmetatile 10, 35, 0x1E2, TRUE
	return


Route108_Lower_Transition::
# 19 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 20 "data/maps/AW_Route108_Lower/scripts.pory"
	hideobjectat 3, MAP_AW_ROUTE108_LOWER
# 21 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LeaveLab
# 22 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 23 "data/maps/AW_Route108_Lower/scripts.pory"
	showobjectat 3, MAP_AW_ROUTE108_LOWER
# 24 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_LeaveLab
# 25 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 26 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_0
# 29 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 30 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookRight
# 31 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_1
# 34 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 35 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 36 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_2
# 39 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 40 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 41 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_3
# 46 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 47 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, WalkUpSpot
# 48 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 49 "data/maps/AW_Route108_Lower/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 50 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 51 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 52 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_4
# 56 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 57 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer
# 58 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 59 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_5
# 63 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 64 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 65 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_MoveToGrass
# 66 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_MoveToGrass
# 67 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 68 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass
# 69 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 70 "data/maps/AW_Route108_Lower/scripts.pory"
	setwildbattle SPECIES_DEWSEL, 3
# 71 "data/maps/AW_Route108_Lower/scripts.pory"
	dowildbattle
# 73 "data/maps/AW_Route108_Lower/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route108_Lower_Transition_2
# 82 "data/maps/AW_Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route108_Lower_Transition_3
# 91 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 92 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 93 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 94 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_8
# 97 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
Route108_Lower_Transition_1:
# 100 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 101 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 102 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_9
# 106 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 107 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_10
# 111 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 112 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_11
# 119 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 120 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 121 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpSpot
# 122 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 123 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 124 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 20
# 125 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 126 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_12
# 131 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 132 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab
# 133 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab
# 134 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_13
# 137 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 138 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab2
# 139 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_14
# 142 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 143 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab2
# 144 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 145 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 2
# 146 "data/maps/AW_Route108_Lower/scripts.pory"
	removeobject 3
# 147 "data/maps/AW_Route108_Lower/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 148 "data/maps/AW_Route108_Lower/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 149 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

Route108_Lower_Transition_2:
# 75 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 76 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 77 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_6
# 81 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1

Route108_Lower_Transition_3:
# 83 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 84 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 85 "data/maps/AW_Route108_Lower/scripts.pory"
	special HealPlayerParty
# 86 "data/maps/AW_Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_7
# 89 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1


YouCantParkThere::
# 153 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 154 "data/maps/AW_Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, YouCantParkThere_2
# 191 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 192 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_5
# 196 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 197 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
YouCantParkThere_1:
# 199 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return

YouCantParkThere_2:
# 155 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, WalkLeftSpot
# 156 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 157 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_0
# 160 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 161 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 162 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 163 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 164 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_1
# 167 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 168 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 169 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 170 "data/maps/AW_Route108_Lower/scripts.pory"
	delay 10
# 171 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_2
# 174 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 175 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
# 176 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 177 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 178 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_3
# 181 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, WalkLeftSpot
# 182 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 183 "data/maps/AW_Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_4
# 186 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 187 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 8, FaceOriginalDirection
# 188 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
# 189 "data/maps/AW_Route108_Lower/scripts.pory"
	closemessage
	goto YouCantParkThere_1


DidYouKnow::
# 203 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 204 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 5, FacePlayer
# 205 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 206 "data/maps/AW_Route108_Lower/scripts.pory"
	message DidYouKnow_Text_0
# 210 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 211 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


YoullMeetTrainers::
# 215 "data/maps/AW_Route108_Lower/scripts.pory"
	lockall
# 216 "data/maps/AW_Route108_Lower/scripts.pory"
	applymovement 4, FacePlayer
# 217 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmovement 0
# 218 "data/maps/AW_Route108_Lower/scripts.pory"
	message YoullMeetTrainers_Text_0
# 222 "data/maps/AW_Route108_Lower/scripts.pory"
	waitmessage
# 223 "data/maps/AW_Route108_Lower/scripts.pory"
	releaseall
	return


# 226 "data/maps/AW_Route108_Lower/scripts.pory"
WalkUpSpot:
# 227 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
# 227 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_in_place_up
	step_end

# 230 "data/maps/AW_Route108_Lower/scripts.pory"
LookRight:
# 231 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 234 "data/maps/AW_Route108_Lower/scripts.pory"
LookDown:
# 235 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 238 "data/maps/AW_Route108_Lower/scripts.pory"
Player_LeaveLab:
# 239 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_LeaveLab:
# 243 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 244 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 245 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 246 "data/maps/AW_Route108_Lower/scripts.pory"
	face_down
	step_end

# 249 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GiveBalls:
# 250 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 250 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer:
# 254 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 255 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 258 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_MoveToGrass:
# 259 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 259 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 260 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 261 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 264 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_MoveToGrass:
# 265 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 266 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 267 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 268 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 269 "data/maps/AW_Route108_Lower/scripts.pory"
	face_right
	step_end

# 272 "data/maps/AW_Route108_Lower/scripts.pory"
Player_GoToGrass:
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 273 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_GoToPlayer:
# 277 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_right
# 278 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
# 278 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_GoToPlayer2:
# 282 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_down
# 282 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_fast_down
	step_end

# 285 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab:
# 286 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 286 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 286 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 287 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 290 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab:
# 291 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 291 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 292 "data/maps/AW_Route108_Lower/scripts.pory"
	face_player
	step_end

# 295 "data/maps/AW_Route108_Lower/scripts.pory"
Professor_BackToLab2:
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 296 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

# 299 "data/maps/AW_Route108_Lower/scripts.pory"
Carla_BackToLab2:
# 300 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_left
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
# 301 "data/maps/AW_Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_Lower_Transition_Text_0:
# 27 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, {PLAYER}, this is Route\n"
	.string "108.\p"
	.string "$"

Route108_Lower_Transition_Text_1:
# 32 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "To the east is Port Mulberry. It's the\n"
	.string "closest town to the lab.\p"
	.string "$"

Route108_Lower_Transition_Text_2:
# 37 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And south of us is Puce City, and the\n"
	.string "nearby Puce Lake. It's an important dig\l"
	.string "site for us.\p"
	.string "$"

Route108_Lower_Transition_Text_3:
# 42 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "And, well, we're smack-bang in the\n"
	.string "middle! Hah!\p"
	.string "Say, have you caught a Pokémon before?\n"
	.string "This is as good a spot as any.\p"
	.string "Here, take these. I've got plenty spare.\p"
	.string "$"

Route108_Lower_Transition_Text_4:
# 53 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Now, all you have to do is take\n"
	.string "step into that tall grass!\p"
	.string "It's best to lower the other Pokémon's\n"
	.string "health a fair bit before throwing a ball,\l"
	.string "but who knows, you might get lucky!\p"
	.string "$"

Route108_Lower_Transition_Text_5:
# 60 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: You've got this! Go give it a\n"
	.string "shot! Catching Pokémon lets you make\l"
	.string "more friends!\p"
	.string "With the Pokémon, of course.\p"
	.string "$"

Route108_Lower_Transition_Text_6:
# 79 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Hey! Nice job, good catch!\p"
	.string "$"

Route108_Lower_Transition_Text_7:
# 87 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oop, seems you were a bit\n"
	.string "enthusiastic.\p"
	.string "Nevermind, you'll have plenty of other\n"
	.string "chances!\p"
	.string "$"

Route108_Lower_Transition_Text_8:
# 95 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Aww, dang! That's too bad. It's\n"
	.string "ok, we'll heal your Pokémon right up!\p"
	.string "$"

Route108_Lower_Transition_Text_9:
# 103 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: Well, you get the picture.\p"
	.string "Actually, I have something to ask of\n"
	.string "you. I hope it's not too much all at\l"
	.string "once.\p"
	.string "$"

Route108_Lower_Transition_Text_10:
# 108 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Oh, you mean...!\p"
	.string "That's a great idea!\p"
	.string "$"

Route108_Lower_Transition_Text_11:
# 113 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: You see, {PLAYER}, our research\n"
	.string "team is a bit...\p"
	.string "How do I put this...\p"
	.string "Short of staff at the moment. Really,\n"
	.string "it's just Carla, me, and a few other\l"
	.string "hands.\p"
	.string "So... I was thinking that while you're\n"
	.string "here recovering, you could help us out!\p"
	.string "...You will help us, right?\p"
	.string "$"

Route108_Lower_Transition_Text_12:
# 127 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: ...! Oh! Well, thanks, {PLAYER}!\n"
	.string "It really will be such a big help for us!\p"
	.string "Carla: Soooo... I guess we'll leave you\n"
	.string "to get used to your surroundings.\p"
	.string "We're gonna go get ready for another\n"
	.string "expedition to Puce Lake, so come join\l"
	.string "us when you've had a look around.\p"
	.string "$"

Route108_Lower_Transition_Text_13:
# 135 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Fern: See you round, {PLAYER}!\p"
	.string "$"

Route108_Lower_Transition_Text_14:
# 140 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Carla: Catch lots of Pokémon! And be\n"
	.string "nice to yours, ok?\p"
	.string "$"

YouCantParkThere_Text_0:
# 158 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Hey! You can't just park your truck\n"
	.string "there!\p"
	.string "$"

YouCantParkThere_Text_1:
# 165 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Uh, yes I can. It's my truck.\p"
	.string "$"

YouCantParkThere_Text_2:
# 172 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "But people can't get past! Like this\n"
	.string "kid, for example.\p"
	.string "$"

YouCantParkThere_Text_3:
# 179 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, it sucks to be them.\p"
	.string "$"

YouCantParkThere_Text_4:
# 184 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "...How did you even get it there?\p"
	.string "$"

YouCantParkThere_Text_5:
# 193 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Well, lucky for you, that guy moved his\n"
	.string "truck, finally.\p"
	.string "What a doofus.\p"
	.string "$"

DidYouKnow_Text_0:
# 207 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "Did you know? Route 108 continues up\n"
	.string "here!\p"
	.string "Well, I say that, but you can't exactly\n"
	.string "get over this ledge to see it.\p"
	.string "$"

YoullMeetTrainers_Text_0:
# 219 "data/maps/AW_Route108_Lower/scripts.pory"
	.string "If you go on a journey with your\n"
	.string "Pokémon, you'll see plenty of trainers\l"
	.string "around the place wanting to battle!\p"
	.string "Huh? Me? I'm just out for a walk.\p"
	.string "$"
