Route108_Lower_MapScripts::
# 2 "data/maps/Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route108_Lower_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route108_Lower/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 4, Route108_Lower_Transition
	.2byte 0


Route108_Lower_Transition::
# 8 "data/maps/Route108_Lower/scripts.pory"
	lockall
# 9 "data/maps/Route108_Lower/scripts.pory"
	hideobjectat 3, MAP_ROUTE108_LOWER
# 10 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LeaveLab
# 11 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route108_Lower/scripts.pory"
	showobjectat 3, MAP_ROUTE108_LOWER
# 13 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_LeaveLab
# 14 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_0
# 18 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 19 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookRight
# 20 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_1
# 23 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 24 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 25 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_2
# 28 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 29 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 30 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_3
# 35 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 36 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, WalkUpSpot
# 37 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route108_Lower/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 39 "data/maps/Route108_Lower/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_4
# 41 "data/maps/Route108_Lower/scripts.pory"
	waitfanfare
# 42 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 43 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 44 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_5
# 48 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 49 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer
# 50 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_6
# 55 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 56 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_MoveToGrass
# 57 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_MoveToGrass
# 58 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass
# 60 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route108_Lower/scripts.pory"
	setwildbattle SPECIES_DEWSEL, 3
# 62 "data/maps/Route108_Lower/scripts.pory"
	dowildbattle
# 64 "data/maps/Route108_Lower/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route108_Lower_Transition_2
# 73 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route108_Lower_Transition_3
# 82 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 83 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 84 "data/maps/Route108_Lower/scripts.pory"
	special HealPlayerParty
# 85 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_9
# 88 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
Route108_Lower_Transition_1:
# 91 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 92 "data/maps/Route108_Lower/scripts.pory"
	delay 10
# 93 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_10
# 97 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 98 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_11
# 102 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 103 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_12
# 110 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 111 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 112 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpSpot
# 113 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 115 "data/maps/Route108_Lower/scripts.pory"
	delay 20
# 116 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 117 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_13
# 122 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 123 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab
# 124 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab
# 125 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_14
# 128 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 129 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab2
# 130 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_15
# 133 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 134 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab2
# 135 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route108_Lower/scripts.pory"
	removeobject 2
# 137 "data/maps/Route108_Lower/scripts.pory"
	removeobject 3
# 138 "data/maps/Route108_Lower/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 139 "data/maps/Route108_Lower/scripts.pory"
	setflag FLAG_AW_FINISH_TUT
# 140 "data/maps/Route108_Lower/scripts.pory"
	releaseall
	return

Route108_Lower_Transition_2:
# 66 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 67 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 68 "data/maps/Route108_Lower/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_7
# 72 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1

Route108_Lower_Transition_3:
# 74 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 75 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 76 "data/maps/Route108_Lower/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_8
# 80 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_1


YouCantParkThere::
# 144 "data/maps/Route108_Lower/scripts.pory"
	lockall
# 145 "data/maps/Route108_Lower/scripts.pory"
	goto_if_unset FLAG_AW_VISIT_MULBERRY, YouCantParkThere_2
# 180 "data/maps/Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 181 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_5
# 185 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 186 "data/maps/Route108_Lower/scripts.pory"
	applymovement 9, FaceOriginalDirection
YouCantParkThere_1:
# 188 "data/maps/Route108_Lower/scripts.pory"
	releaseall
	return

YouCantParkThere_2:
# 146 "data/maps/Route108_Lower/scripts.pory"
	applymovement 9, WalkLeftSpot
# 147 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_0
# 151 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 152 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 153 "data/maps/Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 154 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_1
# 158 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 159 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 160 "data/maps/Route108_Lower/scripts.pory"
	applymovement 9, FacePlayer
# 161 "data/maps/Route108_Lower/scripts.pory"
	delay 10
# 162 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_2
# 165 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 166 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 167 "data/maps/Route108_Lower/scripts.pory"
	applymovement 8, WalkRightSpot
# 168 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_3
# 172 "data/maps/Route108_Lower/scripts.pory"
	applymovement 8, WalkLeftSpot
# 173 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route108_Lower/scripts.pory"
	message YouCantParkThere_Text_4
# 177 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 178 "data/maps/Route108_Lower/scripts.pory"
	closemessage
	goto YouCantParkThere_1


DidYouKnow::
# 192 "data/maps/Route108_Lower/scripts.pory"
	lockall
# 193 "data/maps/Route108_Lower/scripts.pory"
	applymovement 5, FacePlayer
# 194 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route108_Lower/scripts.pory"
	message DidYouKnow_Text_0
# 199 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 200 "data/maps/Route108_Lower/scripts.pory"
	releaseall
	return


YoullMeetTrainers::
# 204 "data/maps/Route108_Lower/scripts.pory"
	lockall
# 205 "data/maps/Route108_Lower/scripts.pory"
	applymovement 4, FacePlayer
# 206 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route108_Lower/scripts.pory"
	message YoullMeetTrainers_Text_0
# 211 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 212 "data/maps/Route108_Lower/scripts.pory"
	releaseall
	return


# 215 "data/maps/Route108_Lower/scripts.pory"
WalkUpSpot:
# 216 "data/maps/Route108_Lower/scripts.pory"
	walk_in_place_up
# 216 "data/maps/Route108_Lower/scripts.pory"
	walk_in_place_up
	step_end

# 219 "data/maps/Route108_Lower/scripts.pory"
LookRight:
# 220 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 223 "data/maps/Route108_Lower/scripts.pory"
LookDown:
# 224 "data/maps/Route108_Lower/scripts.pory"
	face_down
	step_end

# 227 "data/maps/Route108_Lower/scripts.pory"
Player_LeaveLab:
# 228 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/Route108_Lower/scripts.pory"
Carla_LeaveLab:
# 232 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 233 "data/maps/Route108_Lower/scripts.pory"
	walk_right
# 234 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 235 "data/maps/Route108_Lower/scripts.pory"
	face_down
	step_end

# 238 "data/maps/Route108_Lower/scripts.pory"
Professor_GiveBalls:
# 239 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 239 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

# 242 "data/maps/Route108_Lower/scripts.pory"
Carla_GoToPlayer:
# 243 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 244 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 247 "data/maps/Route108_Lower/scripts.pory"
Professor_MoveToGrass:
# 248 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 248 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 249 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 250 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 253 "data/maps/Route108_Lower/scripts.pory"
Carla_MoveToGrass:
# 254 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 255 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 256 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 256 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 256 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 256 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 257 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 258 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 261 "data/maps/Route108_Lower/scripts.pory"
Player_GoToGrass:
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 262 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 265 "data/maps/Route108_Lower/scripts.pory"
Professor_GoToPlayer:
# 266 "data/maps/Route108_Lower/scripts.pory"
	walk_right
# 267 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 267 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 270 "data/maps/Route108_Lower/scripts.pory"
Carla_GoToPlayer2:
# 271 "data/maps/Route108_Lower/scripts.pory"
	walk_fast_down
# 271 "data/maps/Route108_Lower/scripts.pory"
	walk_fast_down
	step_end

# 274 "data/maps/Route108_Lower/scripts.pory"
Carla_BackToLab:
# 275 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 275 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 275 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 276 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 279 "data/maps/Route108_Lower/scripts.pory"
Professor_BackToLab:
# 280 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 280 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 281 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 284 "data/maps/Route108_Lower/scripts.pory"
Professor_BackToLab2:
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 285 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/Route108_Lower/scripts.pory"
Carla_BackToLab2:
# 289 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 290 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_Lower_Transition_Text_0:
# 16 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Well, {PLAYER}, this is Route\n"
	.string "108.\p"
	.string "$"

Route108_Lower_Transition_Text_1:
# 21 "data/maps/Route108_Lower/scripts.pory"
	.string "To the east is Port Mulberry. It's the\n"
	.string "closest town to the lab.\p"
	.string "$"

Route108_Lower_Transition_Text_2:
# 26 "data/maps/Route108_Lower/scripts.pory"
	.string "And south of us is Puce City, and the\n"
	.string "nearby Puce Lake. It's an important dig\l"
	.string "site for us.\p"
	.string "$"

Route108_Lower_Transition_Text_3:
# 31 "data/maps/Route108_Lower/scripts.pory"
	.string "And, well, we're smack-bang in the\n"
	.string "middle! Hah!\p"
	.string "Say, have you caught a Pokémon before?\n"
	.string "This is as good a spot as any.\p"
	.string "Here, take these. I've got plenty spare.\p"
	.string "$"

Route108_Lower_Transition_Text_4:
# 40 "data/maps/Route108_Lower/scripts.pory"
	.string "Professor Fern gave you 10 pokéballs!\p"
	.string "$"

Route108_Lower_Transition_Text_5:
# 45 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Now, all you have to do is take\n"
	.string "step into that tall grass!\p"
	.string "It's best to lower the other Pokémon's\n"
	.string "health a fair bit before throwing a ball,\l"
	.string "but who knows, you might get lucky!\p"
	.string "$"

Route108_Lower_Transition_Text_6:
# 52 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: You've got this! Go give it a\n"
	.string "shot! Catching Pokémon lets you make\l"
	.string "more friends!\p"
	.string "With the Pokémon, of course.\p"
	.string "$"

Route108_Lower_Transition_Text_7:
# 70 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Hey! Nice job, good catch!\p"
	.string "$"

Route108_Lower_Transition_Text_8:
# 78 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Oop, seems you were a bit\n"
	.string "enthusiastic.\p"
	.string "Nevermind, you'll have plenty of other\n"
	.string "chances!\p"
	.string "$"

Route108_Lower_Transition_Text_9:
# 86 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Aww, dang! That's too bad. It's\n"
	.string "ok, we'll heal your Pokémon right up!\p"
	.string "$"

Route108_Lower_Transition_Text_10:
# 94 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Well, you get the picture.\p"
	.string "Actually, I have something to ask of\n"
	.string "you. I hope it's not too much all at\l"
	.string "once.\p"
	.string "$"

Route108_Lower_Transition_Text_11:
# 99 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Oh, you mean...!\p"
	.string "That's a great idea!\p"
	.string "$"

Route108_Lower_Transition_Text_12:
# 104 "data/maps/Route108_Lower/scripts.pory"
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

Route108_Lower_Transition_Text_13:
# 118 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: ...! Oh! Well, thanks, {PLAYER}!\n"
	.string "It really will be such a big help for us!\p"
	.string "Carla: Soooo... I guess we'll leave you\n"
	.string "to get used to your surroundings.\p"
	.string "We're gonna go get ready for another\n"
	.string "expedition to Puce Lake, so come join\l"
	.string "us when you've had a look around.\p"
	.string "$"

Route108_Lower_Transition_Text_14:
# 126 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: See you round, {PLAYER}!\p"
	.string "$"

Route108_Lower_Transition_Text_15:
# 131 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Catch lots of Pokémon! And be\n"
	.string "nice to yours, ok?\p"
	.string "$"

YouCantParkThere_Text_0:
# 149 "data/maps/Route108_Lower/scripts.pory"
	.string "Hey! You can't just park your truck\n"
	.string "there!\p"
	.string "$"

YouCantParkThere_Text_1:
# 156 "data/maps/Route108_Lower/scripts.pory"
	.string "Uh, yes I can. It's my truck.\p"
	.string "$"

YouCantParkThere_Text_2:
# 163 "data/maps/Route108_Lower/scripts.pory"
	.string "But people can't get past! Like this\n"
	.string "kid, for example.\p"
	.string "$"

YouCantParkThere_Text_3:
# 170 "data/maps/Route108_Lower/scripts.pory"
	.string "Well, it sucks to be them.\p"
	.string "$"

YouCantParkThere_Text_4:
# 175 "data/maps/Route108_Lower/scripts.pory"
	.string "Ok, buddy, I'm calling the police. Sit\n"
	.string "tight.\p"
	.string "$"

YouCantParkThere_Text_5:
# 182 "data/maps/Route108_Lower/scripts.pory"
	.string "Well, lucky for you, that guy moved his\n"
	.string "truck, finally.\p"
	.string "What a doofus.\p"
	.string "$"

DidYouKnow_Text_0:
# 196 "data/maps/Route108_Lower/scripts.pory"
	.string "Did you know? Route 108 continues up\n"
	.string "here!\p"
	.string "Well, I say that, but you can't exactly\n"
	.string "get over this ledge to see it.\p"
	.string "$"

YoullMeetTrainers_Text_0:
# 208 "data/maps/Route108_Lower/scripts.pory"
	.string "If you go on a journey with your\n"
	.string "Pokémon, you'll see plenty of trainers\l"
	.string "around the place wanting to battle!\p"
	.string "Huh? Me? I'm just out for a walk.\p"
	.string "$"
