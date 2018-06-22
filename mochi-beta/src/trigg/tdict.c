/*
## tdict.c  Trigg's Algorithm  -- Dictionary for the semantic grammar
##
## Copyright (c) 2018 by Adequate Systems, LLC.  All Rights Reserved.
## See LICENSE.TXT   **** NO WARRANTY ****
##
## Date: 9 April 2018
## Revision: 5
##
*/
/*
         morning smoke
         peaceful serenity
         lingering
*/

static DICT Dict[MAXDICT] = {

/* Adverbs and function words */
   { "NIL",     0    },
   { "\n",	F_OP },
   { "\b:",	F_OP },
   { "\b--",	F_OP },
   { "like",	F_OP },
   { "a",	F_OP },
   { "the",	F_OP },
   { "of",	F_OP },
   { "no",	F_OP },
   { "\bs",	F_OP },
   { "after",	F_OP },
   { "before",	F_OP },

/* Prepositions */
   { "at",	F_PREP },
   { "in",	F_PREP },
   { "on",	F_PREP },
   { "under",	F_PREP },
   { "above",	F_PREP },
   { "below",	F_PREP },
 
/* Verbs - intransitive ING and MOTION */
   { "arriving",	F_ING | F_MOTION },
   { "departing",	F_ING | F_MOTION },
   { "going",	F_ING | F_MOTION },
   { "coming",	F_ING | F_MOTION },
   { "creeping",	F_ING | F_MOTION },
   { "dancing",	F_ING | F_MOTION },
   { "riding",	F_ING | F_MOTION },
   { "strutting",	F_ING | F_MOTION },
   { "leaping",	F_ING | F_MOTION },
   { "leaving",	F_ING | F_MOTION },
   { "entering",	F_ING | F_MOTION },
   { "drifting",	F_ING | F_MOTION },
   { "returning",	F_ING | F_MOTION },
   { "rising",	F_ING | F_MOTION },
   { "falling",	F_ING | F_MOTION },
   { "rushing",	F_ING | F_MOTION },
   { "soaring",	F_ING | F_MOTION },
   { "travelling",	F_ING | F_MOTION },
   { "turning",	F_ING | F_MOTION },
   { "singing",	F_ING | F_MOTION },
   { "walking",	F_ING | F_MOTION },
/* Verbs - intransitive ING */
   { "crying",	F_ING },
   { "weeping",	F_ING },
   { "lingering", F_ING },
   { "pausing",	F_ING },
   { "shining",	F_ING },
/* -------------- motion intransitive infinitive */
   { "fall",	F_INF | F_MOTION },
   { "flow",	F_INF | F_MOTION },
   { "wander",	F_INF | F_MOTION },
   { "disappear", F_INF | F_MOTION },
/* -------------- intransitive infinitive */
   { "wait",	F_INF },
   { "bloom",	F_INF },
   { "doze",	F_INF },
   { "dream",	F_INF },
   { "laugh",	F_INF },
   { "meditate",	F_INF },
   { "listen",	F_INF },
   { "sing",	F_INF },
   { "decay",	F_INF },
   { "cling",	F_INF },
   { "grow",	F_INF },
   { "forget",	F_INF },
   { "remain",	F_INF },
 
/* Adjectives - physical */
/* valences (e) based on Osgood's evaluation factor */
   { "arid",	F_ADJ },
   { "abandoned",	F_ADJ },
   { "aged",	F_ADJ },
   { "ancient",	F_ADJ },
   { "full",	F_ADJ },
   { "glorious",	F_ADJ },
   { "good",	F_ADJ },
   { "beautiful",	F_ADJ },
   { "first",	F_ADJ },
   { "last",	F_ADJ },
   { "forsaken",	F_ADJ },
   { "sad",	F_ADJ },
   { "mandarin",	F_ADJ },
   { "naked",	F_ADJ },
   { "nameless",	F_ADJ },
   { "old",	F_ADJ },

/* Ambient adjectives */
   { "quiet",	F_ADJ | F_AMB },
   { "peaceful", F_ADJ },
   { "still",	F_ADJ },
   { "tranquil", F_ADJ },
   { "bare",	F_ADJ },

/* Time interval adjectives or nouns */
   { "evening",	F_ADJ | F_TIMED },
   { "morning",	F_ADJ | F_TIMED },
   { "afternoon",	F_ADJ | F_TIMED },
   { "spring",	F_ADJ | F_TIMEY },
   { "summer",	F_ADJ | F_TIMEY },
   { "autumn",	F_ADJ | F_TIMEY },
   { "winter",	F_ADJ | F_TIMEY },

/* Adjectives - physical */
   { "broken",	F_ADJ },
   { "thick",	F_ADJ },
   { "thin",	F_ADJ },
   { "little",	F_ADJ },
   { "big",	F_ADJ },
/* Physical + ambient adjectives */
   { "parched",	F_ADJ | F_AMB },
   { "withered", F_ADJ | F_AMB },
   { "worn",	F_ADJ | F_AMB },
/* Physical adj -- material things */
   { "soft",	F_ADJ },
   { "bitter",	F_ADJ },
   { "bright",	F_ADJ },
   { "brilliant",	F_ADJ },
   { "cold",	F_ADJ },
   { "cool",	F_ADJ },
   { "crimson",	F_ADJ },
   { "dark",	F_ADJ },
   { "frozen",	F_ADJ },
   { "grey",	F_ADJ },
   { "hard",	F_ADJ },
   { "hot",	F_ADJ },
   { "scarlet",	F_ADJ },
   { "shallow",	F_ADJ },
   { "sharp",	F_ADJ },
   { "warm",	F_ADJ },
   { "close",	F_ADJ },
   { "calm",	F_ADJ },
   { "cruel",	F_ADJ },
   { "drowned",	F_ADJ },
   { "dull",	F_ADJ },
   { "dead",	F_ADJ },
   { "sick",	F_ADJ },
   { "deep",	F_ADJ },
   { "fast",	F_ADJ },
   { "fleeting",	F_ADJ },
   { "fragrant",	F_ADJ },
   { "fresh",	F_ADJ },
   { "loud",	F_ADJ },
   { "moonlit",	F_ADJ | F_AMB },
   { "sacred",	F_ADJ },
   { "slow",	F_ADJ },
 
/* Nouns top-level */
/* Humans */
   { "traveller",	F_NS },
   { "poet",	F_NS },
   { "beggar",	F_NS },
   { "monk",	F_NS },
   { "warrior",	F_NS },
   { "wife",    F_NS },
   { "courtesan", F_NS },
   { "dancer",	F_NS },
   { "daemon",	F_NS },

/* Animals */
   { "frog",	F_NS },
   { "hawks",	F_NPL },
   { "larks",	F_NPL },
   { "cranes",	F_NPL },
   { "crows",	F_NPL },
   { "ducks",	F_NPL },
   { "birds",	F_NPL },
   { "skylark",	F_NS },
   { "sparrows",	F_NPL },
   { "minnows",	F_NPL },
   { "snakes",	F_NPL },
   { "dog",	F_NS },
   { "monkeys",	F_NPL },
   { "cats",	F_NPL },
   { "cuckoos",	F_NPL },
   { "mice",	F_NPL },
   { "dragonfly",	F_NS },
   { "butterfly",	F_NS },
   { "firefly",	F_NS },
   { "grasshopper",	F_NS },
   { "mosquitos",	F_NPL },

/* Plants */
   { "trees",	F_NPL | F_IN | F_AT },
   { "roses",	F_NPL },
   { "cherries",	F_NPL },
   { "flowers",	F_NPL },
   { "lotuses",	F_NPL },
   { "plums",	F_NPL },
   { "poppies",	F_NPL },
   { "violets",	F_NPL },
   { "oaks",	F_NPL | F_AT },
   { "pines",	F_NPL | F_AT },
   { "chestnuts",	F_NPL },
   { "clovers",	F_NPL },
   { "leaves",	F_NPL },
   { "petals",	F_NPL },
   { "thorns",	F_NPL },
   { "blossoms", F_NPL },
   { "vines",	F_NPL },
   { "willows",	F_NPL },

/* Things */
   { "mountain",	F_NS | F_AT | F_ON },
   { "moor",	F_NS | F_AT | F_ON | F_IN },
   { "sea",	F_NS | F_AT | F_ON | F_IN },
   { "shadow",	F_NS | F_IN   },
   { "skies",	F_NPL | F_IN   },
   { "moon",	F_NS },
   { "star",	F_NS },
   { "stone",	F_NS },
   { "cloud",	F_NS },
   { "bridge",	F_NS | F_ON | F_AT },
   { "gate",	F_NS | F_AT },
   { "temple",	F_NS | F_IN | F_AT },
   { "hovel",	F_NS | F_IN | F_AT },
   { "forest",	F_NS | F_IN | F_AT },
   { "grave",	F_NS | F_IN | F_AT | F_ON },
   { "stream",	F_NS | F_IN | F_AT | F_ON },
   { "pond",	F_NS | F_IN | F_AT | F_ON },
   { "island",	F_NS | F_ON | F_AT },
   { "bell",	F_NS },
   { "boat",	F_NS | F_IN | F_ON },
   { "sailboat",	F_NS | F_IN | F_ON },
   { "bon fire",	F_NS | F_AT },
   { "straw mat",	F_NS | F_ON },
   { "cup",	F_NS | F_IN },
   { "nest",	F_NS | F_IN },
   { "sun",	F_NS | F_IN },
   { "village",	F_NS | F_IN },
   { "tomb",	F_NS | F_IN | F_AT },
   { "raindrop",	F_NS | F_IN },
   { "wave",	F_NS | F_IN },
   { "wind",	F_NS | F_IN },
   { "tide",	F_NS | F_IN | F_AT },
   { "fan",	F_NS },
   { "hat",	F_NS },
   { "sandal",	F_NS },
   { "shroud",	F_NS },
   { "pole",	F_NS },

/* Mass - substance */
   { "water",	 F_ON | F_IN | F_MASS | F_AMB },
   { "air",	 F_ON | F_IN | F_MASS | F_AMB },
   { "mud",	 F_ON | F_IN | F_MASS | F_AMB },
   { "rain",	 F_IN | F_MASS | F_AMB },
   { "thunder",	 F_IN | F_MASS | F_AMB },
   { "ice",	 F_ON | F_IN | F_MASS | F_AMB },
   { "snow",	 F_ON | F_IN | F_MASS | F_AMB },
   { "salt",	 F_ON | F_IN | F_MASS },
   { "hail",	 F_IN | F_MASS | F_AMB },
   { "mist",	 F_IN | F_MASS | F_AMB },
   { "dew",	 F_IN | F_MASS | F_AMB },
   { "foam",	 F_IN | F_MASS | F_AMB },
   { "frost",	 F_IN | F_MASS | F_AMB },
   { "smoke",	 F_IN | F_MASS | F_AMB },
   { "twilight",  F_IN | F_AT | F_MASS | F_AMB },
   { "earth",	 F_ON | F_IN | F_MASS },
   { "grass",	 F_ON | F_IN | F_MASS },
   { "bamboo",	 F_MASS },
   { "gold",	 F_MASS },
   { "grain",	 F_MASS },
   { "rice",	 F_MASS },
   { "tea",	 F_IN | F_MASS },
   { "light",	 F_IN | F_MASS | F_AMB },
   { "darkness",   F_IN | F_MASS | F_AMB },
   { "firelight",  F_IN | F_MASS | F_AMB },
   { "sunlight",   F_IN | F_MASS | F_AMB },
   { "sunshine",   F_IN | F_MASS | F_AMB },

/* Abstract nouns and acts */
   { "journey" ,  F_NS | F_ON },
   { "serenity",  F_MASS },
   { "dusk",    F_TIMED },
   { "glow",	F_NS },
   { "scent",	F_NS },
   { "sound",	F_NS },
   { "silence",	F_NS },
   { "voice",	F_NS },
   { "day",	F_NS | F_TIMED },
   { "night",	F_NS | F_TIMED },
   { "sunrise",	F_NS | F_TIMED },
   { "sunset",	F_NS | F_TIMED },
   { "midnight", F_NS | F_TIMED },
   { "equinox",	F_NS | F_TIMEY },
   { "noon",	F_NS | F_TIMED }

};  /* end Dict[] */
