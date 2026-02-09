AW_MtEigoApproach_MapScripts::
# 2 "data/maps/AW_MtEigoApproach/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AW_MtEigoApproach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AW_MtEigoApproach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AW_MtEigoApproach/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 2, MtEigoApproach_CrossBridge1
# 4 "data/maps/AW_MtEigoApproach/scripts.pory"
	map_script_2 VAR_AW_PROGRESS_1, 3, MtEigoApproach_CrossBridge2
	.2byte 0


MtEigoApproach_CrossBridge1::
# 12 "data/maps/AW_MtEigoApproach/scripts.pory"
	special StopMapMusic
# 14 "data/maps/AW_MtEigoApproach/scripts.pory"
	setflag FLAG_AW_SHOWELDERS
# 16 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerEnterBridge
# 17 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 60
# 18 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 19 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 23 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge1_Text_0
# 27 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 29 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_CrossBridgeUp1
# 30 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_CrossBridgeUp2
# 31 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 33 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge1_Text_1
# 37 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 38 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 40 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_RivalGoIntoCave
# 41 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement
# 42 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/AW_MtEigoApproach/scripts.pory"
	removeobject 1
# 45 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerGoIntoCave
# 46 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement
# 47 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_EXIT
# 48 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/AW_MtEigoApproach/scripts.pory"
	warpsilent MAP_AW_EIGOGROTTO, 10, 17
	return


MtEigoApproach_CrossBridge2::
# 55 "data/maps/AW_MtEigoApproach/scripts.pory"
	lockall
# 56 "data/maps/AW_MtEigoApproach/scripts.pory"
	special StopMapMusic
# 58 "data/maps/AW_MtEigoApproach/scripts.pory"
	clearflag FLAG_AW_SHOWELDERS
# 60 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 2, MAP_AW_MT_EIGO_APPROACH
# 61 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 3, MAP_AW_MT_EIGO_APPROACH
# 62 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 4, MAP_AW_MT_EIGO_APPROACH
# 63 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 1, MAP_AW_MT_EIGO_APPROACH
# 65 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 15, 4
# 66 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerLeaveCave
# 67 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 68 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 1, MAP_AW_MT_EIGO_APPROACH
# 69 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 1, 15, 4
# 70 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_RivalLeaveCave
# 71 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 72 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 2, MAP_AW_MT_EIGO_APPROACH
# 73 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 2, 15, 4
# 74 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 2, MtEigoApproach_Elder1LeaveCave
# 75 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 76 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 3, MAP_AW_MT_EIGO_APPROACH
# 77 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 3, 15, 4
# 78 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 3, MtEigoApproach_Elder2LeaveCave
# 79 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 80 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 4, 15, 4
# 81 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 4, MAP_AW_MT_EIGO_APPROACH
# 82 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 4, MtEigoApproach_Elder3LeaveCave
# 83 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 4
# 85 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 86 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 2, WalkDownSpot
# 87 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 88 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_0
# 91 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 92 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 94 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 2, MtEigoApproach_Elder1CrossBridge
# 95 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 3, MtEigoApproach_Elder2CrossBridge
# 96 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 4, MtEigoApproach_Elder3CrossBridge
# 97 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_RivalNervous
# 98 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 99 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerGoDown
# 100 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 103 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_1
# 106 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 107 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 109 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerHelpRival
# 110 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 112 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_2
# 116 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 117 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 119 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_CrossBridgeDown1
# 120 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_CrossBridgeDown1
# 121 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 123 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 124 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 125 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 5
# 126 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 127 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 128 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 129 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 130 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 131 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 5
# 132 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 133 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 134 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 135 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 136 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 137 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 12
# 138 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 139 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 140 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 141 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 30
# 143 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 144 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 145 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 5
# 146 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 147 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 148 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 149 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 150 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 151 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 5
# 152 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 153 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 154 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 155 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 156 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 157 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 12
# 158 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 2
# 159 "data/maps/AW_MtEigoApproach/scripts.pory"
	special SpawnCameraObject
# 160 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 161 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerFall
# 162 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_PlayerFall
# 163 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 60
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_TO_WHITE
# 165 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 60
# 167 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_3
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 169 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmoncry
# 170 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 171 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmoncry
# 172 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 20
# 173 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_FAINT
# 174 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 20
# 175 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_M_FLY
# 176 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitse
# 177 "data/maps/AW_MtEigoApproach/scripts.pory"
	removeobject 4
# 178 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 120
# 179 "data/maps/AW_MtEigoApproach/scripts.pory"
	special RemoveCameraObject
# 180 "data/maps/AW_MtEigoApproach/scripts.pory"
	warpwhitefade MAP_AW_ROUTE108_LABORATORY, 26, 11
# 181 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 120
# 183 "data/maps/AW_MtEigoApproach/scripts.pory"
	releaseall
	return


# 186 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerEnterBridge:
# 187 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 187 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 187 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 189 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 189 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 189 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeUp1:
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeUp2:
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalGoIntoCave:
# 201 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 201 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 202 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 202 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 203 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 203 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 206 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerGoIntoCave:
# 207 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 207 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 208 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 209 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 209 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 209 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 212 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerLeaveCave:
# 213 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 213 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 213 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 213 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 216 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalLeaveCave:
# 217 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 217 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 217 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 218 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_right
# 219 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder1LeaveCave:
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 226 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder2LeaveCave:
# 227 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 227 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 228 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 229 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder3LeaveCave:
# 233 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 233 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 234 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_right
# 235 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 238 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalNervous:
# 239 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
	step_end

# 242 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerGoDown:
# 243 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 243 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 244 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 245 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 248 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder1CrossBridge:
# 249 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 250 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 250 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 251 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 251 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 253 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 256 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder2CrossBridge:
# 257 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 257 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 258 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 258 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 260 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 261 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 262 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 265 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder3CrossBridge:
# 266 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 266 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 267 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 267 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 269 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 270 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 271 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 272 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 275 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerHelpRival:
# 276 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 278 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 279 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 279 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 279 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 280 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 281 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 282 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
	step_end

# 285 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeDown1:
# 286 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 286 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 287 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 288 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 289 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 289 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 289 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 289 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
	step_end

# 292 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerFall:
# 293 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 294 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 295 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
# 296 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 297 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 297 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 297 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 298 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
	step_end

# 301 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalFall:
# 302 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 303 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 304 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
# 305 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 306 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 307 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
	step_end

MtEigoApproach_CrossBridge1_Text_0:
# 24 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: Made it, hey?\p"
	.string "Not far now...\p"
	.string "$"

MtEigoApproach_CrossBridge1_Text_1:
# 34 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "I can hear some commotion inside. They\n"
	.string "must be getting ready.\p"
	.string "Quick, let's not leave them waiting!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_0:
# 89 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "Quick, children! Across the bridge!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_1:
# 104 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: {PLAYER}... I... I can't...\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_2:
# 113 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: You'll... help me across?\p"
	.string "Y-yeah! Let's go together!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_3:
# 167 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "???: Vibrava! There's someone falling!\p"
	.string "$"
