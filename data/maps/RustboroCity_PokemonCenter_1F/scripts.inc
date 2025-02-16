# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"

Rustboro_Move_Relearner_Start::
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lock
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Start_Text_0, MSGBOX_YESNO
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rustboro_Move_Relearner_Start_1
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Start_Text_1
# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

Rustboro_Move_Relearner_Start_1:
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Move_Relearner
	return


Rustboro_Move_Relearner::
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Text_0
# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	callnative ChooseMonForMoveRelearner
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rustboro_Move_Relearner_2
# 77 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	callnative IsSelectedMonEgg
# 79 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rustboro_Move_Relearner_5
# 84 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Rustboro_Move_Relearner_6
# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Text_3
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	callnative TeachMoveRelearnerMove
# 92 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Rustboro_Move_Relearner_10
# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Text_4
# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

Rustboro_Move_Relearner_2:
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Start_Text_1
# 73 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

Rustboro_Move_Relearner_5:
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Text_1
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

Rustboro_Move_Relearner_6:
# 85 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox Rustboro_Move_Relearner_Text_2
# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	end

Rustboro_Move_Relearner_10:
	return


Rustboro_Move_Relearner_Start_Text_0:
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Do you want to relearn a move?$"

Rustboro_Move_Relearner_Start_Text_1:
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Come back if you change your mind.$"

Rustboro_Move_Relearner_Text_0:
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON should learn a move?$"

Rustboro_Move_Relearner_Text_1:
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "An Egg can't learn any moves...$"

Rustboro_Move_Relearner_Text_2:
# 85 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "That POKéMON is not compatible.$"

Rustboro_Move_Relearner_Text_3:
# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Which move should be relarned?$"

Rustboro_Move_Relearner_Text_4:
# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Come again soon!$"
