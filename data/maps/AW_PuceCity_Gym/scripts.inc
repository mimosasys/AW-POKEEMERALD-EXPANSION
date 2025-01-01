AW_PuceCity_Gym_MapScripts::
# 2 "data/maps/AW_PuceCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_PuceCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_PuceCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_PuceCity_Gym/scripts.pory"
	map_script_2 VAR_AW_GYM_PROGRESS, 0, PuceCity_Gym_Welcome
	.2byte 0


PuceCity_Gym_Man::
	return


PuceCity_Gym_Welcome::
# 13 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lockall
# 14 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_AW_GYM_PROGRESS, 1
# 15 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PuceCity_Gym_PlayerEnter
# 16 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, WalkDownSpot
# 17 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 18 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_0
# 27 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_1, MSGBOX_YESNO
PuceCity_Gym_Welcome_2:
# 31 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceCity_Gym_Welcome_3
# 55 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_4
# 59 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 60 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 61 "data/maps/AW_PuceCity_Gym/scripts.pory"
	delay 30
# 62 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playse SE_DING_DONG
# 63 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitse
# 64 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_5
# 69 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 70 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 71 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, WalkUpSpot
# 72 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 73 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_6
# 76 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 77 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 78 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, LookDown
# 79 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 80 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_7
# 86 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 87 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 89 "data/maps/AW_PuceCity_Gym/scripts.pory"
	applymovement 6, PuceCity_Gym_WendyWalkAway
# 90 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setflag FLAG_AW_START_GYM
# 92 "data/maps/AW_PuceCity_Gym/scripts.pory"
	removeobject 6
# 94 "data/maps/AW_PuceCity_Gym/scripts.pory"
	releaseall
	return

PuceCity_Gym_Welcome_3:
# 32 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PuceCity_Gym_Welcome_5
# 49 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_3, MSGBOX_YESNO
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_5:
# 34 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PuceCity_Gym_Welcome_8
# 37 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Welcome_Text_2, MSGBOX_YESNO
# 43 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/AW_PuceCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PuceCity_Gym_Welcome_11
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_8:
# 35 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PuceCity_Gym_Welcome_2

PuceCity_Gym_Welcome_11:
# 45 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto PuceCity_Gym_Welcome_2


PuceCity_Gym_Trainer1::
# 98 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARA, BirdkeeperParaIntro, BirdkeeperParaOutro
	end


PuceCity_Gym_Trainer2::
# 103 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, BirdkeeperRobinIntro, BirdkeeperRobinOutro
	end


PuceCity_Gym_Trainer3::
# 108 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JAY, BirdkeeperJayIntro, BirdkeeperJayOutro
	end


PuceCity_Gym_Wendy::
# 113 "data/maps/AW_PuceCity_Gym/scripts.pory"
	lockall
# 114 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Wendy_Text_0
# 121 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 122 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 123 "data/maps/AW_PuceCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_WENDY, LeaderWendyOutro
# 124 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Wendy_Text_1
# 130 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 131 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 132 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 133 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Wendy_Text_2
# 136 "data/maps/AW_PuceCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 137 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitfanfare
# 138 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 139 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 140 "data/maps/AW_PuceCity_Gym/scripts.pory"
	msgbox PuceCity_Gym_Wendy_Text_3
# 148 "data/maps/AW_PuceCity_Gym/scripts.pory"
	waitmessage
# 149 "data/maps/AW_PuceCity_Gym/scripts.pory"
	closemessage
# 150 "data/maps/AW_PuceCity_Gym/scripts.pory"
	setvar VAR_AW_PROGRESS_1, 9
# 151 "data/maps/AW_PuceCity_Gym/scripts.pory"
	releaseall
	return


# 198 "data/maps/AW_PuceCity_Gym/scripts.pory"
PuceCity_Gym_PlayerEnter:
# 199 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 200 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 201 "data/maps/AW_PuceCity_Gym/scripts.pory"
	face_up
	step_end

# 204 "data/maps/AW_PuceCity_Gym/scripts.pory"
PuceCity_Gym_WendyWalkAway:
# 205 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 206 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 206 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 206 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 206 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_right
# 207 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 207 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 207 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
# 207 "data/maps/AW_PuceCity_Gym/scripts.pory"
	walk_up
	step_end

PuceCity_Gym_Welcome_Text_0:
# 19 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Wendy: Ah! Great, you came!\p"
	.string "I'll introduce myself again. Th' name's\n"
	.string "Wendy, and I'm the gym leader.\p"
	.string "Since you've never done one before, I'll\n"
	.string "give you the rundown.\p"
	.string "Across the --- region, there are 8 gyms.\p"
	.string "'f you defeat all of 'em, you get to\n"
	.string "fight these super-strong trainers\l"
	.string "called the 'Elite Four'.\p"
	.string "Then you face the Champion, the\n"
	.string "strongest trainer in the region!\p"
	.string "That's if you want to take the league\n"
	.string "challenge, of course.$"

PuceCity_Gym_Welcome_Text_1:
# 29 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "So, whaddaya say? You want to give it a\n"
	.string "shot?$"

PuceCity_Gym_Welcome_Text_2:
# 38 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Aw, come on, I think you've really got\n"
	.string "some skills in battling.\p"
	.string "I saw how you handled those guys back\n"
	.string "at the lake.\p"
	.string "And you clearly love being with your\n"
	.string "Pokémon. It'll be a good chance for all\l"
	.string "of you to strengthen your bonds.\p"
	.string "So, whaddaya say? You want to give it a\n"
	.string "shot?$"

PuceCity_Gym_Welcome_Text_3:
# 50 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Aw, come on, please?$"

PuceCity_Gym_Welcome_Text_4:
# 56 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Excellent! Consider this your formal\n"
	.string "introduction to the Pokémon league!\p"
	.string "Let me just make sure the registry goes\n"
	.string "through...$"

PuceCity_Gym_Welcome_Text_5:
# 65 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Fantastic! You're all registered!\p"
	.string "Now all you need to do is tackle the gym\n"
	.string "itself!\p"
	.string "Since this is your first time in a Gym,\n"
	.string "there's not really a puzzle to it.$"

PuceCity_Gym_Welcome_Text_6:
# 74 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "I just stand at the other end of the\n"
	.string "room, while you defeat the 3 trainers\l"
	.string "between us.$"

PuceCity_Gym_Welcome_Text_7:
# 81 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Then you get to fight me, and if you win,\n"
	.string "I give you a badge as proof of your\l"
	.string "victory.\p"
	.string "Sound good?\p"
	.string "Great! Then I'll get to my place!\p"
	.string "Good luck, {PLAYER}! I'll see you at\n"
	.string "the other end, yeah?$"

PuceCity_Gym_Wendy_Text_0:
# 115 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Wendy: {PLAYER}! Nice job!\p"
	.string "Now there's just one thing left to do in\n"
	.string "the gym!\p"
	.string "I gotta say, you're gonna be the first\n"
	.string "gym challenger I've had.\p"
	.string "You ready? I'm flying at you, full force!\p"
	.string "Gimme a good battle, won't'cha?$"

PuceCity_Gym_Wendy_Text_1:
# 125 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Well, I can't say I'm all that surprised!\p"
	.string "That was some battle, alright,\n"
	.string "{PLAYER}. You sure have some skills!\p"
	.string "'n those Pokémon of yours are just\n"
	.string "amazing, too!\p"
	.string "Before I get started rambling, here's\n"
	.string "your badge! You've earned it!$"

PuceCity_Gym_Wendy_Text_2:
# 134 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Obtained the Gale Badge from Wendy!$"

PuceCity_Gym_Wendy_Text_3:
# 141 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Nice! Keep that close, hey?\p"
	.string "Well, you've got a whole journey ahead\n"
	.string "of ya, and a whole region to explore!\p"
	.string "I did something like that when I was\n"
	.string "still studying, and now I'm a gym leader.\p"
	.string "Who knows where your journey will take\n"
	.string "you, eh?\p"
	.string "Just make sure to enjoy yourself,\n"
	.string "{PLAYER}. That's what's important.\p"
	.string "I'll see you around, ok? And thanks for\n"
	.string "the great battle!$"

BirdkeeperParaIntro::
# 154 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Hey! Welcome to the gym!\p"
	.string "Prepare to lose!$"

BirdkeeperParaOutro::
# 161 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "I wasn't expecting that!$"

BirdkeeperRobinIntro::
# 167 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "I'm a big fan of birds! That's why I'm\n"
	.string "here!$"

BirdkeeperRobinOutro::
# 173 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Just... just fly away, won't you?!$"

BirdkeeperJayIntro::
# 179 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Not much longer now! Wendy's just over\n"
	.string "there!\p"
	.string "But it's not over yet!$"

BirdkeeperJayOutro::
# 186 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Woah!$"

LeaderWendyOutro::
# 192 "data/maps/AW_PuceCity_Gym/scripts.pory"
	.string "Gah! My feathers, everywhere!$"
