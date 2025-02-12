#ifndef GUARD_CONFIG_RANDOMIZER_H
#define GUARD_CONFIG_RANDOMIZER_H
#include "item.h"

// Global control. If FALSE, no randomizer functionality will be enabled.
// If this is TRUE, that doesn't necessarily mean that a particular part of the randomizer
// will be enabled.
#define RANDOMIZER_AVAILABLE                   TRUE
#define RANDOMIZER_SEED_IS_TRAINER_ID          TRUE

#if RANDOMIZER_AVAILABLE == TRUE

// If TRUE, the trainer ID (including secret ID) will be the randomizer seed.
#define RZ_TRAINER_ID_IS_SEED       TRUE

// If TRUE, dynamically generated randomization tables stored in EWRAM are used.
// This consumes 6 bytes for each species present.
#define RANDOMIZER_DYNAMIC_SPECIES    TRUE

#if RANDOMIZER_DYNAMIC_SPECIES == TRUE

// If the longest evolutionary chain (excluding babies) is longer than this,
// the dynamic evolutionary stage randomization table will be generated
// incorrectly.
#define RANDOMIZER_MAX_EVO_STAGES   5

#endif // RANDOMIZER_DYNAMIC_SPECIES

#define RANDOMIZER_MAX_TM           ITEM_TM100   // Normal was ITEM_TM50

// Vars and features

// These features allow you to force enable or disable individual randomization
// features.
// If undefined, the feature will be enabled if one of the flags below is set.
// If defined and set to TRUE, the feature will always be enabled.
// If defined and set to FALSE, the feature will always be disabled.
//#define FORCE_RANDOMIZE_WILD_MON      TRUE
//#define FORCE_RANDOMIZE_FIELD_ITEMS   TRUE
//#define FORCE_RANDOMIZE_TRAINER_MON   TRUE
//#define FORCE_RANDOMIZE_FIXED_MON     TRUE
//#define FORCE_RANDOMIZE_STARTERS      TRUE

// These flags control whether a particular randomization feature is active.
// They are ignored and disabled if the flags above are set.
#ifndef FORCE_RANDOMIZE_WILD_MON
#define RANDOMIZER_FLAG_WILD_MON            FLAG_RANDOM_WILD_MON     // FLAGS can be renamed to something else (rename it also in the flags.h file)
#endif

#ifndef FORCE_RANDOMIZE_FIELD_ITEMS
#define RANDOMIZER_FLAG_FIELD_ITEMS         FLAG_RANDOM_FIELD_ITEMS
#endif

#ifndef FORCE_RANDOMIZE_TRAINER_MON
#define RANDOMIZER_FLAG_TRAINER_MON         FLAG_RANDOM_TRAINER_MON
#endif

#ifndef FORCE_RANDOMIZE_FIXED_MON
#define RANDOMIZER_FLAG_FIXED_MON           FLAG_RANDOM_FIXED_MON
#endif

#ifndef FORCE_RANDOMIZE_STARTERS
#define RANDOMIZER_FLAG_STARTERS            FLAG_RANDOM_STARTERS
#endif

// Set the Variable VAR_RANDOM_SPECIES_MODE via | setflag VAR_RANDOM_SPECIES_MODE, X | to set or change the randomizer mode.
// 0 = Completely Random-Mons  (DEFAULT)
// 1 = Legends for Legends & Normal for Normal                
// 2 = Basestatpool randomization                    
// 3 = Evolutionary stage based. (Legendaries are separate, as are Pokémon that don't have any evolutionary relations.)
#define RANDOMIZER_VAR_SPECIES_MODE         VAR_RANDOM_SPECIES_MODE

#if RANDOMIZER_SEED_IS_TRAINER_ID == FALSE
#define RANDOMIZER_VAR_SEED_L               VAR_UNUSED_0x40FA
#define RANDOMIZER_VAR_SEED_H               VAR_UNUSED_0x40FB
#endif

#endif // RANDOMIZER_AVAILABLE

#endif // GUARD_CONFIG_RANDOMIZER_H
