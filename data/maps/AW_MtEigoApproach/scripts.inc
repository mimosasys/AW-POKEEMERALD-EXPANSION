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
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerEnterBridge
# 15 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 60
# 16 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 17 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 21 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge1_Text_0
# 25 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 27 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_CrossBridgeUp1
# 28 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_CrossBridgeUp2
# 29 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 31 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge1_Text_1
# 35 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 37 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_RivalGoIntoCave
# 38 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement
# 39 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/AW_MtEigoApproach/scripts.pory"
	removeobject 1
# 42 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerGoIntoCave
# 43 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement
# 44 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/AW_MtEigoApproach/scripts.pory"
	warpsilent MAP_AW_EIGOGROTTO, 10, 17
	return


MtEigoApproach_CrossBridge2::
# 52 "data/maps/AW_MtEigoApproach/scripts.pory"
	lockall
# 53 "data/maps/AW_MtEigoApproach/scripts.pory"
	special StopMapMusic
# 55 "data/maps/AW_MtEigoApproach/scripts.pory"
	setflag FLAG_AW_SHOWELDERS
# 57 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 1, 15, 4
# 58 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 2, 15, 4
# 59 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 3, 15, 4
# 60 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy 4, 15, 4
# 61 "data/maps/AW_MtEigoApproach/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 15, 4
# 63 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 2, MAP_AW_MT_EIGO_APPROACH
# 64 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 3, MAP_AW_MT_EIGO_APPROACH
# 65 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 4, MAP_AW_MT_EIGO_APPROACH
# 66 "data/maps/AW_MtEigoApproach/scripts.pory"
	hideobjectat 1, MAP_AW_MT_EIGO_APPROACH
# 68 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerLeaveCave
# 71 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 72 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 1, MAP_AW_MT_EIGO_APPROACH
# 73 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_RivalLeaveCave
# 74 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 75 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 2, MAP_AW_MT_EIGO_APPROACH
# 76 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 2, MtEigoApproach_Elder1LeaveCave
# 77 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
# 78 "data/maps/AW_MtEigoApproach/scripts.pory"
	showobjectat 3, MAP_AW_MT_EIGO_APPROACH
# 79 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 3, MtEigoApproach_Elder2LeaveCave
# 80 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 32
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
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerGoDown
# 99 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_1
# 104 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 105 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 107 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerHelpRival
# 108 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 110 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_2
# 114 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmessage
# 115 "data/maps/AW_MtEigoApproach/scripts.pory"
	closemessage
# 117 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_CrossBridgeDown1
# 118 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_CrossBridgeDown1
# 119 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmovement 0
# 121 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8004, 2
# 122 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8005, 6
# 123 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8006, 6
# 124 "data/maps/AW_MtEigoApproach/scripts.pory"
	setvar VAR_0x8007, 10
# 125 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 126 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 127 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 30
# 129 "data/maps/AW_MtEigoApproach/scripts.pory"
	special SpawnCameraObject
# 130 "data/maps/AW_MtEigoApproach/scripts.pory"
	special ShakeCamera
# 131 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtEigoApproach_PlayerFall
# 132 "data/maps/AW_MtEigoApproach/scripts.pory"
	applymovement 1, MtEigoApproach_PlayerFall
# 133 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 60
# 134 "data/maps/AW_MtEigoApproach/scripts.pory"
	fadescreen FADE_TO_WHITE
# 135 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitstate
# 136 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 16
# 138 "data/maps/AW_MtEigoApproach/scripts.pory"
	message MtEigoApproach_CrossBridge2_Text_3
# 139 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 140 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmoncry
# 141 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_NORMAL
# 142 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitmoncry
# 143 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 20
# 144 "data/maps/AW_MtEigoApproach/scripts.pory"
	playmoncry SPECIES_VIBRAVA, CRY_MODE_FAINT
# 145 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 20
# 146 "data/maps/AW_MtEigoApproach/scripts.pory"
	playse SE_M_FLY
# 147 "data/maps/AW_MtEigoApproach/scripts.pory"
	waitse
# 148 "data/maps/AW_MtEigoApproach/scripts.pory"
	removeobject 4
# 149 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 120
# 150 "data/maps/AW_MtEigoApproach/scripts.pory"
	special RemoveCameraObject
# 151 "data/maps/AW_MtEigoApproach/scripts.pory"
	warpwhitefade MAP_AW_ROUTE108_LABORATORY, 26, 11
# 152 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay 120
# 154 "data/maps/AW_MtEigoApproach/scripts.pory"
	releaseall
	return


# 157 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerEnterBridge:
# 158 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 158 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 158 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 159 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 159 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 159 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 160 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 160 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 160 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeUp1:
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 164 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 167 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeUp2:
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 168 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 171 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalGoIntoCave:
# 172 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 172 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 173 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 173 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 174 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 174 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 177 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerGoIntoCave:
# 178 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 178 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 179 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 180 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 180 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 180 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
	step_end

# 183 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerLeaveCave:
# 184 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 184 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 184 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 184 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 187 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalLeaveCave:
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 188 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 189 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_right
# 190 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder1LeaveCave:
# 194 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 194 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 194 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder2LeaveCave:
# 198 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 198 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 199 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_left
# 200 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder3LeaveCave:
# 204 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 204 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 205 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_right
# 206 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
	step_end

# 209 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalNervous:
# 210 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
	step_end

# 213 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerGoDown:
# 214 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 214 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_down
# 215 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 216 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 219 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder1CrossBridge:
# 220 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 221 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 221 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 222 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 222 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 223 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 224 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 227 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder2CrossBridge:
# 228 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 228 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 229 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 229 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 230 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 231 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 232 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 233 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 236 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_Elder3CrossBridge:
# 237 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 237 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 238 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 238 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 239 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 239 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_right
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 240 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 241 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_left
# 242 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_fast_down
# 243 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
	step_end

# 246 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerHelpRival:
# 247 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_up
# 248 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 249 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 250 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 250 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 250 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_down
# 251 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 252 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 253 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
	step_end

# 256 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_CrossBridgeDown1:
# 257 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 257 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 258 "data/maps/AW_MtEigoApproach/scripts.pory"
	delay_16
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
# 259 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_slow_down
	step_end

# 262 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_PlayerFall:
# 263 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 264 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 265 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
# 266 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 267 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 267 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 267 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_right
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
# 268 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_left
	step_end

# 271 "data/maps/AW_MtEigoApproach/scripts.pory"
MtEigoApproach_RivalFall:
# 272 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 273 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_left
# 274 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_up
# 275 "data/maps/AW_MtEigoApproach/scripts.pory"
	face_right
# 276 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_in_place_faster_left
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
# 277 "data/maps/AW_MtEigoApproach/scripts.pory"
	walk_faster_right
	step_end

MtEigoApproach_CrossBridge1_Text_0:
# 22 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: Made it, hey?\p"
	.string "Not far now...\p"
	.string "$"

MtEigoApproach_CrossBridge1_Text_1:
# 32 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "I can hear some commotion inside. They\n"
	.string "must be getting ready.\p"
	.string "Quick, let's not leave them waiting!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_0:
# 89 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "Quick, children! Across the bridge!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_1:
# 102 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: {PLAYER}... I... I can't...\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_2:
# 111 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "{RIVAL}: You'll... help me across?\p"
	.string "Y-yeah! Let's go together!\p"
	.string "$"

MtEigoApproach_CrossBridge2_Text_3:
# 138 "data/maps/AW_MtEigoApproach/scripts.pory"
	.string "???: Vibrava! There's someone falling!\p"
	.string "$"
