Route108_Lower_MapScripts::
# 2 "data/maps/Route108_Lower/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route108_Lower_Transition
	.byte 0


Route108_Lower_Transition::
# 6 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_AW_PROGRESS_1, 4
	goto_if_eq Route108_Lower_Transition_1
	return

Route108_Lower_Transition_1:
# 7 "data/maps/Route108_Lower/scripts.pory"
	lockall
# 8 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_LeaveLab
# 9 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route108_Lower/scripts.pory"
	setobjectxy 3, 8, 8
# 11 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_LeaveLab
# 12 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 13 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_0
# 16 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 17 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookRight
# 18 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_1
# 21 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 22 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 23 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_2
# 26 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 27 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 28 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_3
# 33 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 34 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, WalkUp
# 35 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route108_Lower/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 37 "data/maps/Route108_Lower/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_4
# 39 "data/maps/Route108_Lower/scripts.pory"
	waitfanfare
# 40 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 41 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 42 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_5
# 46 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 47 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_GoToPlayer
# 48 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_6
# 53 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 54 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_MoveToGrass
# 55 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_MoveToGrass
# 56 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_GoToGrass
# 58 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route108_Lower/scripts.pory"
	setwildbattle SPECIES_DEWSEL, 3
# 60 "data/maps/Route108_Lower/scripts.pory"
	dowildbattle
# 61 "data/maps/Route108_Lower/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 62 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Carla_GoToPlayer2
# 63 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Professor_GoToPlayer
# 64 "data/maps/Route108_Lower/scripts.pory"
	special HealPlayerParty
# 65 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route108_Lower_Transition_4
# 70 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route108_Lower_Transition_5
# 75 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RUN
	goto_if_eq Route108_Lower_Transition_6
# 81 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_10
# 84 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
Route108_Lower_Transition_3:
# 86 "data/maps/Route108_Lower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 87 "data/maps/Route108_Lower/scripts.pory"
	delay 10
# 88 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_11
# 92 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 93 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_12
# 97 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 98 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_13
# 104 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 105 "data/maps/Route108_Lower/scripts.pory"
	msgbox Route108_Lower_Transition_Text_14, MSGBOX_YESNO
# 108 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route108_Lower_Transition_12
Route108_Lower_Transition_11:
# 123 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 124 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 125 "data/maps/Route108_Lower/scripts.pory"
	delay 20
# 126 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookDown
# 127 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_16
# 132 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 133 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab
# 134 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab
# 135 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_17
# 138 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 139 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, Professor_BackToLab2
# 140 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_18
# 143 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
# 144 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, Carla_BackToLab2
# 145 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route108_Lower/scripts.pory"
	removeobject 2
# 147 "data/maps/Route108_Lower/scripts.pory"
	removeobject 3
# 148 "data/maps/Route108_Lower/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 5
# 149 "data/maps/Route108_Lower/scripts.pory"
	releaseall
	return

Route108_Lower_Transition_4:
# 66 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_7
# 69 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_3

Route108_Lower_Transition_5:
# 71 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_8
# 74 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_3

Route108_Lower_Transition_6:
# 76 "data/maps/Route108_Lower/scripts.pory"
	message Route108_Lower_Transition_Text_9
# 79 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_3

Route108_Lower_Transition_12:
# 109 "data/maps/Route108_Lower/scripts.pory"
	closemessage
# 110 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, EmoteExclamation
# 111 "data/maps/Route108_Lower/scripts.pory"
	delay 20
# 112 "data/maps/Route108_Lower/scripts.pory"
	applymovement 2, LookUp
# 113 "data/maps/Route108_Lower/scripts.pory"
	delay 20
# 114 "data/maps/Route108_Lower/scripts.pory"
	applymovement 3, WalkLeftSpot
# 115 "data/maps/Route108_Lower/scripts.pory"
	waitmovement 0
Route108_Lower_Transition_15:
# 116 "data/maps/Route108_Lower/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route108_Lower_Transition_16
# 121 "data/maps/Route108_Lower/scripts.pory"
	waitmessage
	goto Route108_Lower_Transition_11

Route108_Lower_Transition_16:
# 117 "data/maps/Route108_Lower/scripts.pory"
	msgbox Route108_Lower_Transition_Text_15, MSGBOX_YESNO
	goto Route108_Lower_Transition_15


# 153 "data/maps/Route108_Lower/scripts.pory"
LookRight:
# 154 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 157 "data/maps/Route108_Lower/scripts.pory"
LookDown:
# 158 "data/maps/Route108_Lower/scripts.pory"
	face_down
	step_end

# 161 "data/maps/Route108_Lower/scripts.pory"
Player_LeaveLab:
# 162 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 162 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/Route108_Lower/scripts.pory"
Carla_LeaveLab:
# 166 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 167 "data/maps/Route108_Lower/scripts.pory"
	walk_right
# 168 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 169 "data/maps/Route108_Lower/scripts.pory"
	face_down
	step_end

# 172 "data/maps/Route108_Lower/scripts.pory"
Professor_GiveBalls:
# 173 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 173 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/Route108_Lower/scripts.pory"
Carla_GoToPlayer:
# 177 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 178 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 181 "data/maps/Route108_Lower/scripts.pory"
Professor_MoveToGrass:
# 182 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 182 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 183 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 184 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 187 "data/maps/Route108_Lower/scripts.pory"
Carla_MoveToGrass:
# 188 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 189 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 190 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 190 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 190 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 190 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 191 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 192 "data/maps/Route108_Lower/scripts.pory"
	face_right
	step_end

# 195 "data/maps/Route108_Lower/scripts.pory"
Player_GoToGrass:
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 196 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/Route108_Lower/scripts.pory"
Professor_GoToPlayer:
# 200 "data/maps/Route108_Lower/scripts.pory"
	walk_right
# 201 "data/maps/Route108_Lower/scripts.pory"
	walk_down
# 201 "data/maps/Route108_Lower/scripts.pory"
	walk_down
	step_end

# 204 "data/maps/Route108_Lower/scripts.pory"
Carla_GoToPlayer2:
# 205 "data/maps/Route108_Lower/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route108_Lower/scripts.pory"
	walk_fast_down
	step_end

# 208 "data/maps/Route108_Lower/scripts.pory"
Carla_BackToLab:
# 209 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 209 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 209 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 210 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 213 "data/maps/Route108_Lower/scripts.pory"
Professor_BackToLab:
# 214 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 214 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 215 "data/maps/Route108_Lower/scripts.pory"
	face_player
	step_end

# 218 "data/maps/Route108_Lower/scripts.pory"
Professor_BackToLab2:
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 219 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/Route108_Lower/scripts.pory"
Carla_BackToLab2:
# 223 "data/maps/Route108_Lower/scripts.pory"
	walk_left
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
# 224 "data/maps/Route108_Lower/scripts.pory"
	walk_up
	step_end

Route108_Lower_Transition_Text_0:
# 14 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Well, {PLAYER}, this is Route\n"
	.string "108.\p"
	.string "$"

Route108_Lower_Transition_Text_1:
# 19 "data/maps/Route108_Lower/scripts.pory"
	.string "To the east is Port Mulberry. It's the\n"
	.string "closest town to the lab.\p"
	.string "$"

Route108_Lower_Transition_Text_2:
# 24 "data/maps/Route108_Lower/scripts.pory"
	.string "And south of us is Puce City, and the\n"
	.string "nearby Puce Lake. It's an important dig\l"
	.string "site for us.\p"
	.string "$"

Route108_Lower_Transition_Text_3:
# 29 "data/maps/Route108_Lower/scripts.pory"
	.string "And, well, we're smack-bang in the\n"
	.string "middle!\p"
	.string "Say, have you caught a Pokémon before?\n"
	.string "This is as good a spot as any.\p"
	.string "Here, take these. I've got plenty spare.\p"
	.string "$"

Route108_Lower_Transition_Text_4:
# 38 "data/maps/Route108_Lower/scripts.pory"
	.string "Professor Fern gave you 10 pokéballs!\p"
	.string "$"

Route108_Lower_Transition_Text_5:
# 43 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Now, all you have to do is take\n"
	.string "step into that tall grass!\p"
	.string "It's best to lower the other Pokémon's\n"
	.string "health a fair bit before throwing a ball,\l"
	.string "but who knows, you might get lucky!\p"
	.string "$"

Route108_Lower_Transition_Text_6:
# 50 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: You've got this! Go give it a\n"
	.string "shot! Catching Pokémon lets you make\l"
	.string "more friends!\p"
	.string "With the Pokémon, of course.\p"
	.string "$"

Route108_Lower_Transition_Text_7:
# 67 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Hey! Nice job, good catch!\p"
	.string "$"

Route108_Lower_Transition_Text_8:
# 72 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Oop, seems you were a bit\n"
	.string "enthusiastic.\p"
	.string "Nevermind, you'll have plenty of other\n"
	.string "chances!\p"
	.string "$"

Route108_Lower_Transition_Text_9:
# 77 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Aww, you were in with a chance!\n"
	.string "It's ok, though, we all have to run\l"
	.string "sometimes.\p"
	.string "$"

Route108_Lower_Transition_Text_10:
# 82 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Aww, dang! That's too bad. It's\n"
	.string "ok, we'll heal your Pokémon right up!\p"
	.string "$"

Route108_Lower_Transition_Text_11:
# 89 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: Well, you get the picture.\p"
	.string "Actually, I have something to ask of\n"
	.string "you. I hope it's not too much all at\l"
	.string "once.\p"
	.string "$"

Route108_Lower_Transition_Text_12:
# 94 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Oh, you mean...!\p"
	.string "That's a great idea!$"

Route108_Lower_Transition_Text_13:
# 99 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: You see, {PLAYER}, our research\n"
	.string "team is a bit...\p"
	.string "How do I put this...\p"
	.string "Short of staff at the moment. Really,\n"
	.string "it's just Carla, me, and a few other\l"
	.string "hands.\p"
	.string "So... I was thinking that while you're\n"
	.string "here recovering, you could help us out!\p"
	.string "$"

Route108_Lower_Transition_Text_14:
# 105 "data/maps/Route108_Lower/scripts.pory"
	.string " What do you say?$"

Route108_Lower_Transition_Text_15:
# 118 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Aw, please, {PLAYER}? We really\n"
	.string "do need a hand...\p"
	.string "$"

Route108_Lower_Transition_Text_16:
# 128 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: ...! Oh! Well, thanks, {PLAYER}!\n"
	.string "It really will be such a big help for us!\p"
	.string "Carla: Soooo... I guess we'll leave you\n"
	.string "to get used to your surroundings.\p"
	.string "We're gonna go get ready for another\n"
	.string "expedition to Puce Lake, so come join\l"
	.string "us when you've had a look around.\p"
	.string "$"

Route108_Lower_Transition_Text_17:
# 136 "data/maps/Route108_Lower/scripts.pory"
	.string "Fern: See you round, {PLAYER}!\p"
	.string "$"

Route108_Lower_Transition_Text_18:
# 141 "data/maps/Route108_Lower/scripts.pory"
	.string "Carla: Catch lots of Pokémon! And be\n"
	.string "nice to yours, ok?\p"
	.string "$"
