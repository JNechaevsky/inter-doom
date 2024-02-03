//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 1993-2008 Raven Software
// Copyright(C) 2005-2014 Simon Howard
// Copyright(C) 2016-2024 Julia Nechaevskaya
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//


// MN_menu.c ---------------------------------------------------------------

#define PRESSKEY	"press a key."
#define PRESSYN		"press y or n."
#define TXT_PAUSED	"PAUSED"
#define QUITMSG		"are you sure you want to\nquit this great game?"
#define LOADNET		"you can't do load while in a net game!\n\n"PRESSKEY
#define QLOADNET	"you can't quickload during a netgame!\n\n"PRESSKEY
#define QSAVESPOT	"you haven't picked a quicksave slot yet!\n\n"PRESSKEY
#define SAVEDEAD 	"you can't save if you aren't playing!\n\n"PRESSKEY
#define QSPROMPT 	"quicksave over your game named\n\n'%s'?\n\n"PRESSYN
#define QLPROMPT	"do you want to quickload the game named"\
					"\n\n'%s'?\n\n"PRESSYN
#define NEWGAME		"you can't start a new game\n"\
					"while in a network game.\n\n"PRESSKEY
#define MSGOFF		"Messages OFF"
#define MSGON		"Messages ON"
#define NETEND		"you can't end a netgame!\n\n"PRESSKEY
#define ENDGAME		"are you sure you want to end the game?\n\n"PRESSYN
#define DOSY		"(press y to quit to dos.)"
#define TXT_GAMMA_LEVEL_OFF	"GAMMA CORRECTION OFF"
#define TXT_GAMMA_LEVEL_1	"GAMMA CORRECTION LEVEL 1"
#define TXT_GAMMA_LEVEL_2	"GAMMA CORRECTION LEVEL 2"
#define TXT_GAMMA_LEVEL_3	"GAMMA CORRECTION LEVEL 3"
#define TXT_GAMMA_LEVEL_4	"GAMMA CORRECTION LEVEL 4"
#define	EMPTYSTRING	"empty slot"

// P_inter.c ---------------------------------------------------------------

// Mana

#define TXT_MANA_1				"BLUE MANA"
#define TXT_MANA_2				"GREEN MANA"
#define TXT_MANA_BOTH			"COMBINED MANA"

// Keys

#define	TXT_KEY_STEEL		"STEEL KEY"
#define	TXT_KEY_CAVE		"CAVE KEY"
#define	TXT_KEY_AXE			"AXE KEY"
#define	TXT_KEY_FIRE		"FIRE KEY"
#define	TXT_KEY_EMERALD		"EMERALD KEY"
#define	TXT_KEY_DUNGEON		"DUNGEON KEY"
#define	TXT_KEY_SILVER		"SILVER KEY"
#define	TXT_KEY_RUSTED		"RUSTED KEY"
#define	TXT_KEY_HORN		"HORN KEY"
#define	TXT_KEY_SWAMP		"SWAMP KEY"
#define TXT_KEY_CASTLE		"CASTLE KEY"

// Artifacts

#define TXT_ARTIINVULNERABILITY		"ICON OF THE DEFENDER"
#define TXT_ARTIHEALTH				"QUARTZ FLASK"
#define TXT_ARTISUPERHEALTH			"MYSTIC URN"
#define TXT_ARTISUMMON				"DARK SERVANT"
#define TXT_ARTITORCH				"TORCH"
#define TXT_ARTIEGG					"PORKALATOR"
#define TXT_ARTIFLY					"WINGS OF WRATH"
#define TXT_ARTITELEPORT			"CHAOS DEVICE"
#define TXT_ARTIPOISONBAG			"FLECHETTE"
#define TXT_ARTITELEPORTOTHER		"BANISHMENT DEVICE"
#define TXT_ARTISPEED				"BOOTS OF SPEED"
#define TXT_ARTIBOOSTMANA			"KRATER OF MIGHT"
#define TXT_ARTIBOOSTARMOR			"DRAGONSKIN BRACERS"
#define TXT_ARTIBLASTRADIUS			"DISC OF REPULSION"
#define TXT_ARTIHEALINGRADIUS		"MYSTIC AMBIT INCANT"

// Puzzle artifacts

#define TXT_ARTIPUZZSKULL			"YORICK'S SKULL"
#define TXT_ARTIPUZZGEMBIG			"HEART OF D'SPARIL"
#define TXT_ARTIPUZZGEMRED			"RUBY PLANET"
#define TXT_ARTIPUZZGEMGREEN1		"EMERALD PLANET"
#define TXT_ARTIPUZZGEMGREEN2		"EMERALD PLANET"
#define TXT_ARTIPUZZGEMBLUE1		"SAPPHIRE PLANET"
#define TXT_ARTIPUZZGEMBLUE2		"SAPPHIRE PLANET"
#define TXT_ARTIPUZZBOOK1			"DAEMON CODEX"
#define TXT_ARTIPUZZBOOK2			"LIBER OSCURA"
#define TXT_ARTIPUZZSKULL2			"FLAME MASK"
#define TXT_ARTIPUZZFWEAPON			"GLAIVE SEAL"
#define TXT_ARTIPUZZCWEAPON			"HOLY RELIC"
#define TXT_ARTIPUZZMWEAPON			"SIGIL OF THE MAGUS"
#define TXT_ARTIPUZZGEAR			"CLOCK GEAR"
#define TXT_USEPUZZLEFAILED			"YOU CANNOT USE THIS HERE"

// Items

#define TXT_ITEMHEALTH			"CRYSTAL VIAL"
#define TXT_ITEMBAGOFHOLDING	"BAG OF HOLDING"
#define TXT_ITEMSHIELD1			"SILVER SHIELD"
#define TXT_ITEMSHIELD2			"ENCHANTED SHIELD"
#define TXT_ITEMSUPERMAP		"MAP SCROLL"
#define TXT_ARMOR1				"MESH ARMOR"
#define TXT_ARMOR2				"FALCON SHIELD"
#define TXT_ARMOR3				"PLATINUM HELMET"
#define TXT_ARMOR4				"AMULET OF WARDING"

// Weapons

#define TXT_WEAPON_F2			"TIMON'S AXE"
#define TXT_WEAPON_F3			"HAMMER OF RETRIBUTION"
#define TXT_WEAPON_F4			"QUIETUS ASSEMBLED"
#define TXT_WEAPON_C2			"SERPENT STAFF"
#define TXT_WEAPON_C3			"FIRESTORM"
#define TXT_WEAPON_C4			"WRAITHVERGE ASSEMBLED"
#define TXT_WEAPON_M2			"FROST SHARDS"
#define TXT_WEAPON_M3			"ARC OF DEATH"
#define TXT_WEAPON_M4			"BLOODSCOURGE ASSEMBLED"
#define TXT_QUIETUS_PIECE		"SEGMENT OF QUIETUS"
#define TXT_WRAITHVERGE_PIECE	"SEGMENT OF WRAITHVERGE"
#define TXT_BLOODSCOURGE_PIECE	"SEGMENT OF BLOODSCOURGE"

// SB_bar.c ----------------------------------------------------------------

#define TXT_CHEATGODON			"GOD MODE ON"
#define TXT_CHEATGODOFF			"GOD MODE OFF"
#define TXT_CHEATNOCLIPON		"NO CLIPPING ON"
#define TXT_CHEATNOCLIPOFF		"NO CLIPPING OFF"
#define TXT_CHEATWEAPONS		"ALL WEAPONS"
#define TXT_CHEATHEALTH			"FULL HEALTH"
#define TXT_CHEATKEYS			"ALL KEYS"
#define TXT_CHEATSOUNDON		"SOUND DEBUG ON"
#define TXT_CHEATSOUNDOFF		"SOUND DEBUG OFF"
#define TXT_CHEATTICKERON		"TICKER ON"
#define TXT_CHEATTICKEROFF		"TICKER OFF"
#define TXT_CHEATARTIFACTS3		"ALL ARTIFACTS"
#define TXT_CHEATARTIFACTSFAIL	"BAD INPUT"
#define TXT_CHEATWARP			"LEVEL WARP"
#define TXT_CHEATSCREENSHOT		"SCREENSHOT"
#define TXT_CHEATIDDQD			"TRYING TO CHEAT, EH?  NOW YOU DIE!"
#define TXT_CHEATIDKFA			"CHEATER - YOU DON'T DESERVE WEAPONS"
#define TXT_CHEATBADINPUT		"BAD INPUT"
#define TXT_CHEATNOMAP			"CAN'T FIND MAP"

// G_game.c ----------------------------------------------------------------

#define TXT_GAMESAVED			"GAME SAVED"

// M_misc.c ----------------------------------------------------------------

#define HUSTR_CHATMACRO1 "I'm ready to kick butt!"
#define HUSTR_CHATMACRO2 "I'm OK."
#define HUSTR_CHATMACRO3 "I'm not looking too good!"
#define HUSTR_CHATMACRO4 "Help!"
#define HUSTR_CHATMACRO5 "You suck!"
#define HUSTR_CHATMACRO6 "Next time, scumbag..."
#define HUSTR_CHATMACRO7 "Come here!"
#define HUSTR_CHATMACRO8 "I'll take care of it."
#define HUSTR_CHATMACRO9 "Yes"
#define HUSTR_CHATMACRO0 "No"

// AM_map.c ----------------------------------------------------------------

#define AMSTR_FOLLOWON		"FOLLOW MODE ON"
#define AMSTR_FOLLOWOFF		"FOLLOW MODE OFF"

#define AMSTR_GRIDON		"GRID ON"
#define AMSTR_GRIDOFF		"GRID OFF"

#define AMSTR_MARKEDSPOT	"MARKED SPOT"
#define AMSTR_MARKCLEARED	"CLEARED SPOT"
#define AMSTR_MARKSCLEARED	"ALL MARKS CLEARED"

// -----------------------------------------------------------------------------
// [JN] ID-specific strings.
// -----------------------------------------------------------------------------

#define ID_SPECTATOR_ON     "SPECTATOR MODE ON"
#define ID_SPECTATOR_OFF    "SPECTATOR MODE OFF"

#define ID_FREEZE_ON        "FREEZE MODE ON"
#define ID_FREEZE_OFF       "FREEZE MODE OFF"
#define ID_FREEZE_NA_R      "FREEZE NOT AVAILABLE IN DEMO RECORDING"
#define ID_FREEZE_NA_P      "FREEZE NOT AVAILABLE IN DEMO PLAYING"
#define ID_FREEZE_NA_N      "FREEZE NOT AVAILABLE IN MULTIPLAYER GAME"

#define ID_NOTARGET_ON      "NOTARGET MODE ON"
#define ID_NOTARGET_OFF     "NOTARGET MODE OFF"
#define ID_NOTARGET_NA_R    "NOTARGET NOT AVAILABLE IN DEMO RECORDING"
#define ID_NOTARGET_NA_P    "NOTARGET NOT AVAILABLE IN DEMO PLAYING"
#define ID_NOTARGET_NA_N    "NOTARGET NOT AVAILABLE IN MULTIPLAYER GAME"

#define ID_BUDDHA_ON        "BUDDHA MODE ON"
#define ID_BUDDHA_OFF       "BUDDHA MODE OFF"
#define ID_BUDDHA_NA_R      "BUDDHA NOT AVAILABLE IN DEMO RECORDING"
#define ID_BUDDHA_NA_P      "BUDDHA NOT AVAILABLE IN DEMO PLAYING"
#define ID_BUDDHA_NA_N      "BUDDHA NOT AVAILABLE IN MULTIPLAYER GAME"

#define ID_AUTOMAPROTATE_ON     "ROTATE MODE ON"
#define ID_AUTOMAPROTATE_OFF    "ROTATE MODE OFF"
#define ID_AUTOMAPOVERLAY_ON    "OVERLAY MODE ON"
#define ID_AUTOMAPOVERLAY_OFF   "OVERLAY MODE OFF"

#define ID_AUTORUN_ON      "ALWAYS RUN ON"
#define ID_AUTORUN_OFF     "ALWAYS RUN OFF"

#define ID_MLOOK_ON        "MOUSE LOOK ON"
#define ID_MLOOK_OFF       "MOUSE LOOK OFF"

#define ID_SECRET_FOUND     "A SECRET IS REVEALED!"

#define DETAILHI    "HIGH DETAIL"
#define DETAILLO    "LOW DETAIL"

#define GAMMALVL05  "GAMMA CORRECTION LEVEL 0.50"
#define GAMMALVL055 "GAMMA CORRECTION LEVEL 0.55"
#define GAMMALVL06  "GAMMA CORRECTION LEVEL 0.60"
#define GAMMALVL065 "GAMMA CORRECTION LEVEL 0.65"
#define GAMMALVL07  "GAMMA CORRECTION LEVEL 0.70"
#define GAMMALVL075 "GAMMA CORRECTION LEVEL 0.75"
#define GAMMALVL08  "GAMMA CORRECTION LEVEL 0.80"
#define GAMMALVL085 "GAMMA CORRECTION LEVEL 0.85"
#define GAMMALVL09  "GAMMA CORRECTION LEVEL 0.90"
#define GAMMALVL095 "GAMMA CORRECTION LEVEL 0.95"
#define GAMMALVL0   "GAMMA CORRECTION OFF"
#define GAMMALVL1   "GAMMA CORRECTION LEVEL 1"
#define GAMMALVL2   "GAMMA CORRECTION LEVEL 2"
#define GAMMALVL3   "GAMMA CORRECTION LEVEL 3"
#define GAMMALVL4   "GAMMA CORRECTION LEVEL 4"
