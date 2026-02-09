AW_PortMulberry_PokeMart_MapScripts::
	.byte 0


AW_PortMulberry_PokeMart_Clerk::
# 4 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	lock
# 5 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	pokemart AW_PortMulberry_PokeMart_Mart
# 9 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
AW_PortMulberry_PokeMart_Mart:
# 15 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 16 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 20 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 21 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 22 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_X_SPEED
# 23 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 24 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 25 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 26 "data/maps/AW_PortMulberry_PokeMart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE
