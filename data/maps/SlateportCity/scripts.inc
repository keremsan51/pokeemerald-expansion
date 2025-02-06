# 1 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 21 "data/maps/SlateportCity/scripts.pory"

# 22 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 23 "data/maps/SlateportCity/scripts.pory"

# 24 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 25 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 27 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 28 "data/maps/SlateportCity/scripts.pory"

# 29 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 30 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 31 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 32 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 34 "data/maps/SlateportCity/scripts.pory"
	end
# 35 "data/maps/SlateportCity/scripts.pory"

# 36 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 37 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 38 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 39 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 40 "data/maps/SlateportCity/scripts.pory"
	return
# 41 "data/maps/SlateportCity/scripts.pory"

# 42 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 43 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 57 "data/maps/SlateportCity/scripts.pory"
	return
# 58 "data/maps/SlateportCity/scripts.pory"

# 59 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 60 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 62 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 63 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/SlateportCity/scripts.pory"
	return
# 66 "data/maps/SlateportCity/scripts.pory"

# 67 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 68 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 70 "data/maps/SlateportCity/scripts.pory"
	return
# 71 "data/maps/SlateportCity/scripts.pory"

# 72 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 73 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 74 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 77 "data/maps/SlateportCity/scripts.pory"
	lockall
# 78 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 79 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 81 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 85 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 87 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 92 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 93 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 96 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 98 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 99 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 101 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 104 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 107 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 108 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 109 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 110 "data/maps/SlateportCity/scripts.pory"
	end
# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 113 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 115 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/SlateportCity/scripts.pory"
	step_end
# 117 "data/maps/SlateportCity/scripts.pory"

# 118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity/scripts.pory"

# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	step_end
# 138 "data/maps/SlateportCity/scripts.pory"

# 139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 140 "data/maps/SlateportCity/scripts.pory"
	lock
# 141 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 142 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 143 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 144 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 145 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 146 "data/maps/SlateportCity/scripts.pory"
	release
# 147 "data/maps/SlateportCity/scripts.pory"
	end
# 148 "data/maps/SlateportCity/scripts.pory"

# 149 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 151 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 157 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 158 "data/maps/SlateportCity/scripts.pory"

# 159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 160 "data/maps/SlateportCity/scripts.pory"
	lock
# 161 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 162 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 163 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 164 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 165 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 166 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 167 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 168 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 169 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 171 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 172 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 173 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	release
# 175 "data/maps/SlateportCity/scripts.pory"
	end
# 176 "data/maps/SlateportCity/scripts.pory"

# 177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 178 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 179 "data/maps/SlateportCity/scripts.pory"
	release
# 180 "data/maps/SlateportCity/scripts.pory"
	end
# 181 "data/maps/SlateportCity/scripts.pory"

# 182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 183 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 184 "data/maps/SlateportCity/scripts.pory"
	release
# 185 "data/maps/SlateportCity/scripts.pory"
	end
# 186 "data/maps/SlateportCity/scripts.pory"

# 187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 188 "data/maps/SlateportCity/scripts.pory"
	lock
# 189 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 190 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
# 193 "data/maps/SlateportCity/scripts.pory"
	end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 196 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 197 "data/maps/SlateportCity/scripts.pory"
	release
# 198 "data/maps/SlateportCity/scripts.pory"
	end
# 199 "data/maps/SlateportCity/scripts.pory"

# 200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 201 "data/maps/SlateportCity/scripts.pory"
	lock
# 202 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 203 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 217 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 218 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 219 "data/maps/SlateportCity/scripts.pory"
	release
# 220 "data/maps/SlateportCity/scripts.pory"
	end
# 221 "data/maps/SlateportCity/scripts.pory"

# 222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 223 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 224 "data/maps/SlateportCity/scripts.pory"
	release
# 225 "data/maps/SlateportCity/scripts.pory"
	end
# 226 "data/maps/SlateportCity/scripts.pory"

# 227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 228 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 229 "data/maps/SlateportCity/scripts.pory"
	release
# 230 "data/maps/SlateportCity/scripts.pory"
	end
# 231 "data/maps/SlateportCity/scripts.pory"

# 232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 233 "data/maps/SlateportCity/scripts.pory"
	lock
# 234 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 235 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	release
# 238 "data/maps/SlateportCity/scripts.pory"
	end
# 239 "data/maps/SlateportCity/scripts.pory"

# 240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 241 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity/scripts.pory"
	release
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 246 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 247 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 252 "data/maps/SlateportCity/scripts.pory"
	end
# 253 "data/maps/SlateportCity/scripts.pory"

# 254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 255 "data/maps/SlateportCity/scripts.pory"
	lock
# 256 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 257 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 258 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity/scripts.pory"
	release
# 260 "data/maps/SlateportCity/scripts.pory"
	end
# 261 "data/maps/SlateportCity/scripts.pory"

# 262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 263 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity/scripts.pory"
	release
# 265 "data/maps/SlateportCity/scripts.pory"
	end
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 268 "data/maps/SlateportCity/scripts.pory"
	lock
# 269 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 270 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 277 "data/maps/SlateportCity/scripts.pory"
	release
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 281 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 282 "data/maps/SlateportCity/scripts.pory"
	end
# 283 "data/maps/SlateportCity/scripts.pory"

# 284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 285 "data/maps/SlateportCity/scripts.pory"
	lockall
# 286 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 287 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 289 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 290 "data/maps/SlateportCity/scripts.pory"
	end
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 293 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 294 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 295 "data/maps/SlateportCity/scripts.pory"
	end
# 296 "data/maps/SlateportCity/scripts.pory"

# 297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 298 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 299 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 300 "data/maps/SlateportCity/scripts.pory"
	end
# 301 "data/maps/SlateportCity/scripts.pory"

# 302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 303 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 304 "data/maps/SlateportCity/scripts.pory"
	end
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 312 "data/maps/SlateportCity/scripts.pory"
	end
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 319 "data/maps/SlateportCity/scripts.pory"
	lockall
# 320 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 323 "data/maps/SlateportCity/scripts.pory"
	end
# 324 "data/maps/SlateportCity/scripts.pory"

# 325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 327 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 328 "data/maps/SlateportCity/scripts.pory"
	end
# 329 "data/maps/SlateportCity/scripts.pory"

# 330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 331 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 332 "data/maps/SlateportCity/scripts.pory"
	end
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 335 "data/maps/SlateportCity/scripts.pory"
	lock
# 336 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 337 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 338 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 339 "data/maps/SlateportCity/scripts.pory"
	release
# 340 "data/maps/SlateportCity/scripts.pory"
	end
# 341 "data/maps/SlateportCity/scripts.pory"

# 342 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 345 "data/maps/SlateportCity/scripts.pory"
	release
# 346 "data/maps/SlateportCity/scripts.pory"
	end
# 347 "data/maps/SlateportCity/scripts.pory"

# 348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 349 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 353 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 366 "data/maps/SlateportCity/scripts.pory"
	end
# 367 "data/maps/SlateportCity/scripts.pory"

# 368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 369 "data/maps/SlateportCity/scripts.pory"
	lock
# 370 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 371 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 372 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 373 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 374 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 375 "data/maps/SlateportCity/scripts.pory"
	release
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 379 "data/maps/SlateportCity/scripts.pory"
	lock
# 380 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 381 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 382 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 383 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 384 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 385 "data/maps/SlateportCity/scripts.pory"
	release
# 386 "data/maps/SlateportCity/scripts.pory"
	end
# 387 "data/maps/SlateportCity/scripts.pory"

# 388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 389 "data/maps/SlateportCity/scripts.pory"
	lock
# 390 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 391 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 393 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 394 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 395 "data/maps/SlateportCity/scripts.pory"
	release
# 396 "data/maps/SlateportCity/scripts.pory"
	end
# 397 "data/maps/SlateportCity/scripts.pory"

# 398 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 399 "data/maps/SlateportCity/scripts.pory"
	lock
# 400 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 402 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 403 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 404 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/SlateportCity/scripts.pory"
	release
# 406 "data/maps/SlateportCity/scripts.pory"
	end
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 409 "data/maps/SlateportCity/scripts.pory"
	lock
# 410 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 412 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 413 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 414 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 415 "data/maps/SlateportCity/scripts.pory"
	release
# 416 "data/maps/SlateportCity/scripts.pory"
	end
# 417 "data/maps/SlateportCity/scripts.pory"

# 418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 419 "data/maps/SlateportCity/scripts.pory"
	lock
# 420 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 421 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 422 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 423 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 424 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 425 "data/maps/SlateportCity/scripts.pory"
	release
# 426 "data/maps/SlateportCity/scripts.pory"
	end
# 427 "data/maps/SlateportCity/scripts.pory"

# 428 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 429 "data/maps/SlateportCity/scripts.pory"
	lock
# 430 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 433 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 434 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/SlateportCity/scripts.pory"
	release
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 439 "data/maps/SlateportCity/scripts.pory"
	lock
# 440 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	release
# 446 "data/maps/SlateportCity/scripts.pory"
	end
# 447 "data/maps/SlateportCity/scripts.pory"

# 448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 449 "data/maps/SlateportCity/scripts.pory"
	lock
# 450 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 451 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 452 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 453 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 454 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 455 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 461 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 465 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 466 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 467 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 471 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 475 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	release
# 479 "data/maps/SlateportCity/scripts.pory"
	end
# 480 "data/maps/SlateportCity/scripts.pory"

# 481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 482 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 483 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	step_end
# 485 "data/maps/SlateportCity/scripts.pory"

# 486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 487 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 488 "data/maps/SlateportCity/scripts.pory"
	end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 491 "data/maps/SlateportCity/scripts.pory"
	lock
# 492 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 493 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 494 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 495 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 496 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 497 "data/maps/SlateportCity/scripts.pory"
	release
# 498 "data/maps/SlateportCity/scripts.pory"
	end
# 499 "data/maps/SlateportCity/scripts.pory"

# 500 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 501 "data/maps/SlateportCity/scripts.pory"
	lock
# 502 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 503 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 504 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 505 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 507 "data/maps/SlateportCity/scripts.pory"
	release
# 508 "data/maps/SlateportCity/scripts.pory"
	end
# 509 "data/maps/SlateportCity/scripts.pory"

# 510 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 511 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 512 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 513 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 514 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 515 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 516 "data/maps/SlateportCity/scripts.pory"

# 517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 518 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 519 "data/maps/SlateportCity/scripts.pory"
	release
# 520 "data/maps/SlateportCity/scripts.pory"
	end
# 521 "data/maps/SlateportCity/scripts.pory"

# 522 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 523 "data/maps/SlateportCity/scripts.pory"
	lock
# 524 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 525 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 526 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 527 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 528 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 529 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 530 "data/maps/SlateportCity/scripts.pory"
	release
# 531 "data/maps/SlateportCity/scripts.pory"
	end
# 532 "data/maps/SlateportCity/scripts.pory"

# 533 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 535 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 536 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 537 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 538 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 539 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 540 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 549 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 550 "data/maps/SlateportCity/scripts.pory"

# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 552 "data/maps/SlateportCity/scripts.pory"
	lock
# 553 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 554 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 555 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 556 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 557 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 558 "data/maps/SlateportCity/scripts.pory"
	release
# 559 "data/maps/SlateportCity/scripts.pory"
	end
# 560 "data/maps/SlateportCity/scripts.pory"

# 561 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 565 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 566 "data/maps/SlateportCity/scripts.pory"

# 567 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 568 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 569 "data/maps/SlateportCity/scripts.pory"
	lockall
# 570 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 571 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 572 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 573 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 574 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 580 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 581 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 582 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 583 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 585 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 586 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 587 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 588 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 590 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 591 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 592 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 593 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 597 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 601 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 603 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 605 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 609 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 610 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 611 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 615 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 616 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 617 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 618 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 619 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 620 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 621 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 622 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 623 "data/maps/SlateportCity/scripts.pory"
	end
# 624 "data/maps/SlateportCity/scripts.pory"

# 625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 626 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 627 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 628 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 629 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 630 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 631 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/SlateportCity/scripts.pory"
	step_end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 636 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 637 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 638 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 640 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 641 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 642 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 643 "data/maps/SlateportCity/scripts.pory"
	step_end
# 644 "data/maps/SlateportCity/scripts.pory"

# 645 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 646 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 647 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 648 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 658 "data/maps/SlateportCity/scripts.pory"
	step_end
# 659 "data/maps/SlateportCity/scripts.pory"

# 660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 668 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	step_end
# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 679 "data/maps/SlateportCity/scripts.pory"
	step_end
# 680 "data/maps/SlateportCity/scripts.pory"

# 681 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 683 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 684 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 685 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 686 "data/maps/SlateportCity/scripts.pory"
	step_end
# 687 "data/maps/SlateportCity/scripts.pory"

# 688 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 691 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 692 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 693 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	step_end
# 697 "data/maps/SlateportCity/scripts.pory"

# 698 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 700 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 704 "data/maps/SlateportCity/scripts.pory"
	step_end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 707 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 708 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 709 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 710 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 715 "data/maps/SlateportCity/scripts.pory"
	step_end
# 716 "data/maps/SlateportCity/scripts.pory"

# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 718 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 719 "data/maps/SlateportCity/scripts.pory"
	end
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 722 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 723 "data/maps/SlateportCity/scripts.pory"
	end
# 724 "data/maps/SlateportCity/scripts.pory"

# 725 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 726 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 730 "data/maps/SlateportCity/scripts.pory"
	lock
# 731 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 732 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 733 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 734 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 735 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 736 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 737 "data/maps/SlateportCity/scripts.pory"
	release
# 738 "data/maps/SlateportCity/scripts.pory"
	end
# 739 "data/maps/SlateportCity/scripts.pory"

# 740 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 741 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 742 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 743 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 744 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 745 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 746 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 747 "data/maps/SlateportCity/scripts.pory"
	end
# 748 "data/maps/SlateportCity/scripts.pory"

# 749 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 750 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 751 "data/maps/SlateportCity/scripts.pory"
	release
# 752 "data/maps/SlateportCity/scripts.pory"
	end
# 753 "data/maps/SlateportCity/scripts.pory"

# 754 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 755 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 756 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 757 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 758 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 759 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 760 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 761 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 762 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 763 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 764 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 765 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 766 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 767 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 768 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 769 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 770 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 771 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 772 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 773 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 774 "data/maps/SlateportCity/scripts.pory"
	end
# 775 "data/maps/SlateportCity/scripts.pory"

# 776 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 777 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 778 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 779 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 780 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 781 "data/maps/SlateportCity/scripts.pory"
	end
# 782 "data/maps/SlateportCity/scripts.pory"

# 783 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 784 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 785 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 786 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 787 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 788 "data/maps/SlateportCity/scripts.pory"
	end
# 789 "data/maps/SlateportCity/scripts.pory"

# 790 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 791 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 792 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 793 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 794 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 795 "data/maps/SlateportCity/scripts.pory"
	end
# 796 "data/maps/SlateportCity/scripts.pory"

# 797 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 798 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 799 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 800 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 801 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 802 "data/maps/SlateportCity/scripts.pory"
	end
# 803 "data/maps/SlateportCity/scripts.pory"

# 804 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 805 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 806 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 807 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 808 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 809 "data/maps/SlateportCity/scripts.pory"
	end
# 810 "data/maps/SlateportCity/scripts.pory"

# 811 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 812 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 813 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 814 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 815 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 816 "data/maps/SlateportCity/scripts.pory"
	end
# 817 "data/maps/SlateportCity/scripts.pory"

# 818 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 819 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 820 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 821 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 822 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 823 "data/maps/SlateportCity/scripts.pory"
	end
# 824 "data/maps/SlateportCity/scripts.pory"

# 825 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 826 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 827 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 828 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 829 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 830 "data/maps/SlateportCity/scripts.pory"
	end
# 831 "data/maps/SlateportCity/scripts.pory"

# 832 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 833 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 834 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 835 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 836 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 837 "data/maps/SlateportCity/scripts.pory"
	end
# 838 "data/maps/SlateportCity/scripts.pory"

# 839 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 840 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 841 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 842 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 843 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 844 "data/maps/SlateportCity/scripts.pory"
	end
# 845 "data/maps/SlateportCity/scripts.pory"

# 846 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 847 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 848 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 849 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 850 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 851 "data/maps/SlateportCity/scripts.pory"
	end
# 852 "data/maps/SlateportCity/scripts.pory"

# 853 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 854 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 855 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 856 "data/maps/SlateportCity/scripts.pory"
	release
# 857 "data/maps/SlateportCity/scripts.pory"
	end
# 858 "data/maps/SlateportCity/scripts.pory"

# 859 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 860 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 861 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 862 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 863 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 864 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 865 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 866 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 867 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 868 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 869 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 870 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 871 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 872 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 873 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 874 "data/maps/SlateportCity/scripts.pory"
	release
# 875 "data/maps/SlateportCity/scripts.pory"
	end
# 876 "data/maps/SlateportCity/scripts.pory"

# 877 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 878 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 879 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 880 "data/maps/SlateportCity/scripts.pory"
	release
# 881 "data/maps/SlateportCity/scripts.pory"
	end
# 882 "data/maps/SlateportCity/scripts.pory"

# 883 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 884 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 885 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 886 "data/maps/SlateportCity/scripts.pory"
	end
# 887 "data/maps/SlateportCity/scripts.pory"

# 888 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 889 "data/maps/SlateportCity/scripts.pory"
	lockall
# 890 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 891 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 892 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 893 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 894 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 895 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 896 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 897 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 898 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 899 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 900 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 901 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 902 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 903 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 904 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 905 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 906 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 907 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 908 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 909 "data/maps/SlateportCity/scripts.pory"
	end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 912 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 913 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 914 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 915 "data/maps/SlateportCity/scripts.pory"
	step_end
# 916 "data/maps/SlateportCity/scripts.pory"

# 917 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 918 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 920 "data/maps/SlateportCity/scripts.pory"
	step_end
# 921 "data/maps/SlateportCity/scripts.pory"

# 922 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 923 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 924 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 925 "data/maps/SlateportCity/scripts.pory"
	step_end
# 926 "data/maps/SlateportCity/scripts.pory"

# 927 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 928 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 929 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 930 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 931 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 933 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 934 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 935 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 936 "data/maps/SlateportCity/scripts.pory"
	step_end
# 937 "data/maps/SlateportCity/scripts.pory"

# 938 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 939 "data/maps/SlateportCity/scripts.pory"
	lockall
# 940 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 941 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 942 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 943 "data/maps/SlateportCity/scripts.pory"
	end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 946 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 947 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 948 "data/maps/SlateportCity/scripts.pory"

# 949 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 951 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 957 "data/maps/SlateportCity/scripts.pory"

# 958 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 960 "data/maps/SlateportCity/scripts.pory"

# 961 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 964 "data/maps/SlateportCity/scripts.pory"

# 965 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 968 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 969 "data/maps/SlateportCity/scripts.pory"

# 970 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 973 "data/maps/SlateportCity/scripts.pory"

# 974 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 975 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 986 "data/maps/SlateportCity/scripts.pory"

# 987 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 993 "data/maps/SlateportCity/scripts.pory"

# 994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 998 "data/maps/SlateportCity/scripts.pory"

# 999 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1011 "data/maps/SlateportCity/scripts.pory"

# 1012 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1018 "data/maps/SlateportCity/scripts.pory"

# 1019 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1053 "data/maps/SlateportCity/scripts.pory"

# 1054 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1066 "data/maps/SlateportCity/scripts.pory"

# 1067 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1085 "data/maps/SlateportCity/scripts.pory"

# 1086 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1091 "data/maps/SlateportCity/scripts.pory"

# 1092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1102 "data/maps/SlateportCity/scripts.pory"

# 1103 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1108 "data/maps/SlateportCity/scripts.pory"

# 1109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1117 "data/maps/SlateportCity/scripts.pory"

# 1118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1123 "data/maps/SlateportCity/scripts.pory"

# 1124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1137 "data/maps/SlateportCity/scripts.pory"

# 1138 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1143 "data/maps/SlateportCity/scripts.pory"

# 1144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1154 "data/maps/SlateportCity/scripts.pory"

# 1155 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1166 "data/maps/SlateportCity/scripts.pory"

# 1167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1181 "data/maps/SlateportCity/scripts.pory"

# 1182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1218 "data/maps/SlateportCity/scripts.pory"

# 1219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1231 "data/maps/SlateportCity/scripts.pory"

# 1232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1237 "data/maps/SlateportCity/scripts.pory"

# 1238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1243 "data/maps/SlateportCity/scripts.pory"

# 1244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1268 "data/maps/SlateportCity/scripts.pory"

# 1269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1277 "data/maps/SlateportCity/scripts.pory"

# 1278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1319 "data/maps/SlateportCity/scripts.pory"

# 1320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1325 "data/maps/SlateportCity/scripts.pory"

# 1326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1344 "data/maps/SlateportCity/scripts.pory"

# 1345 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1355 "data/maps/SlateportCity/scripts.pory"

# 1356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1359 "data/maps/SlateportCity/scripts.pory"

# 1360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1367 "data/maps/SlateportCity/scripts.pory"

# 1368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCity_EventScript_MegastoneMan::
# 1381 "data/maps/SlateportCity/scripts.pory"
	lock
# 1382 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_EventScript_MegastoneMan_Text_0
# 1383 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1384 "data/maps/SlateportCity/scripts.pory"
	pokemart Megastone_Man
# 1385 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_MegastoneMan_Text_1
# 1386 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1390 "data/maps/SlateportCity/scripts.pory"
Megastone_Man:
# 1391 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 1392 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 1393 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 1394 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 1395 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 1396 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 1397 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 1398 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 1399 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENGARITE
# 1400 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 1401 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PINSIRITE
# 1402 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 1403 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 1404 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 1405 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 1406 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 1407 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STEELIXITE
# 1408 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCIZORITE
# 1409 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HERACRONITE
# 1410 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 1411 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 1412 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 1413 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 1414 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 1415 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 1416 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SABLENITE
# 1417 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAWILITE
# 1418 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AGGRONITE
# 1419 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 1420 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MANECTITE
# 1421 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 1422 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 1423 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 1424 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BANETTITE
# 1425 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABSOLITE
# 1426 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GLALITITE
# 1427 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 1428 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 1429 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LATIASITE
# 1430 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LATIOSITE
# 1431 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 1432 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 1433 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 1434 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABOMASITE
# 1435 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALLADITE
# 1436 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUDINITE
# 1437 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DIANCITE
	.2byte ITEM_NONE

SlateportCity_EventScript_MintLady::
# 1441 "data/maps/SlateportCity/scripts.pory"
	lock
# 1442 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_EventScript_MintLady_Text_0
# 1443 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1444 "data/maps/SlateportCity/scripts.pory"
	pokemart Mint_Lady
# 1445 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_MegastoneMan_Text_1
# 1446 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1450 "data/maps/SlateportCity/scripts.pory"
Mint_Lady:
# 1451 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1452 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1453 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1454 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1455 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1456 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1457 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1458 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1459 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1460 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1461 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1462 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1463 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1464 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1465 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1466 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1467 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1468 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1469 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1470 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1471 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

SlateportCity_EventScript_MegastoneMan_Text_0:
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome to my store!\pI sell megastones that will\nmake your Pokemon get stronger!$"

SlateportCity_EventScript_MegastoneMan_Text_1:
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "Come again soon.$"

SlateportCity_EventScript_MintLady_Text_0:
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome to my store!\pI sell mints that will\nmake your Pokemon feel great!$"
