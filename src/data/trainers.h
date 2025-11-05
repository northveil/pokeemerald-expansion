//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 91
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 98
        .trainerName = _("GRUNT"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 111
        .trainerName = _("GRUNT"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 120
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 123
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 128
        .trainerName = _("GRUNT"),
#line 129
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 130
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 133
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 141
        .trainerName = _("GRUNT"),
#line 142
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 143
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 145
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 146
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 150
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 153
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 154
        .trainerName = _("GRUNT"),
#line 155
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 156
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 158
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 159
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 162
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 163
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 167
        .trainerName = _("GRUNT"),
#line 168
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 169
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 171
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 172
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 176
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 180
        .trainerName = _("GRUNT"),
#line 181
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 182
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 184
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 185
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 188
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 189
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
    {
#line 193
        .trainerName = _("GABRIELLE"),
#line 194
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 195
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 196
F_TRAINER_FEMALE | 
#line 197
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 201
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 202
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 205
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 206
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 209
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 213
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 217
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 218
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 221
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 222
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 225
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 226
        .trainerName = _("GRUNT"),
#line 227
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 228
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 230
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 231
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 234
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 235
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 238
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 239
        .trainerName = _("MARCEL"),
#line 240
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 241
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 243
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 244
        .items = { ITEM_HYPER_POTION },
#line 245
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 246
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 249
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 252
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 253
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 257
        .trainerName = _("GRUNT"),
#line 258
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 259
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 260
F_TRAINER_FEMALE | 
#line 261
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 262
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 265
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 266
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 269
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 270
        .trainerName = _("GRUNT"),
#line 271
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 272
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 274
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 275
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 278
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 279
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 282
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 283
        .trainerName = _("GRUNT"),
#line 284
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 285
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 287
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 288
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 291
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 292
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 295
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 296
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 299
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 300
        .trainerName = _("GRUNT"),
#line 301
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 302
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 304
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 305
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 308
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 309
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 312
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 313
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 316
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 317
        .trainerName = _("GRUNT"),
#line 318
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 319
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 321
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 322
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 325
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 326
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 329
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 330
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 333
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 334
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 337
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 338
        .trainerName = _("GRUNT"),
#line 339
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 340
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 342
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 343
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 346
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 347
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 350
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 351
        .trainerName = _("GRUNT"),
#line 352
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 353
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 355
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 356
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 359
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 360
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 363
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 364
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 367
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 368
        .trainerName = _("GRUNT"),
#line 369
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 370
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 372
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 373
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 376
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 377
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 380
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 381
        .trainerName = _("GRUNT"),
#line 382
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 383
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 385
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 389
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 390
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 393
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 394
        .trainerName = _("GRUNT"),
#line 395
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 396
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 398
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 402
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 403
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 406
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 407
        .trainerName = _("GRUNT"),
#line 408
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 409
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 411
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 412
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 415
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 416
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 419
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 420
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 423
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 424
        .trainerName = _("GRUNT"),
#line 425
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 426
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 427
F_TRAINER_FEMALE | 
#line 428
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 429
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 432
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 433
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 436
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 437
        .trainerName = _("GRUNT"),
#line 438
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 439
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 440
F_TRAINER_FEMALE | 
#line 441
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 442
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 445
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 446
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 449
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 450
        .trainerName = _("GRUNT"),
#line 451
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 452
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 453
F_TRAINER_FEMALE | 
#line 454
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 455
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 458
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 459
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 462
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 463
        .trainerName = _("MATT"),
#line 464
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 465
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 467
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 468
        .items = { ITEM_SUPER_POTION },
#line 469
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 470
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 472
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 473
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 476
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 478
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 477
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 480
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 481
        .trainerName = _("ZANDER"),
#line 482
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 483
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 485
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 489
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 490
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 493
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 494
        .trainerName = _("SHELLY"),
#line 495
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 496
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 497
F_TRAINER_FEMALE | 
#line 498
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 499
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 500
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 502
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 503
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 506
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 508
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 507
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 510
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 511
        .trainerName = _("SHELLY"),
#line 512
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 513
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 514
F_TRAINER_FEMALE | 
#line 515
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 517
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 519
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 521
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 520
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 523
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 525
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 524
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 527
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 528
        .trainerName = _("ARCHIE"),
#line 529
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 530
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 532
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 533
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 535
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 537
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 539
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 538
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 541
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 543
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 542
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 545
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 547
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 546
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 549
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 550
        .trainerName = _("LEAH"),
#line 551
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 552
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 553
F_TRAINER_FEMALE | 
#line 554
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 555
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 558
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 559
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 562
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 563
        .trainerName = _("DAISY"),
#line 564
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 565
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 566
F_TRAINER_FEMALE | 
#line 567
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 571
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 572
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 575
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 576
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 579
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 580
        .trainerName = _("ROSE"),
#line 581
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 582
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 583
F_TRAINER_FEMALE | 
#line 584
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 585
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 588
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 589
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 592
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 593
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 596
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 597
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 600
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 601
        .trainerName = _("FELIX"),
#line 602
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 603
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 605
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 606
        .items = { ITEM_FULL_RESTORE },
#line 607
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 608
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 610
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 611
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 613
                MOVE_PSYCHIC,
            },
            },
            {
#line 615
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 616
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 618
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 621
    [DIFFICULTY_NORMAL][TRAINER_ROSE_2] =
    {
#line 622
        .trainerName = _("ROSE"),
#line 623
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 624
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 625
F_TRAINER_FEMALE | 
#line 626
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 630
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 632
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 631
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 634
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 636
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 635
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 638
    [DIFFICULTY_NORMAL][TRAINER_ROSE_3] =
    {
#line 639
        .trainerName = _("ROSE"),
#line 640
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 641
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 642
F_TRAINER_FEMALE | 
#line 643
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 647
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 648
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 651
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 652
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 655
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 657
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 656
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 659
    [DIFFICULTY_NORMAL][TRAINER_ROSE_4] =
    {
#line 660
        .trainerName = _("ROSE"),
#line 661
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 662
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 663
F_TRAINER_FEMALE | 
#line 664
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 668
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 669
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 672
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 673
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 676
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 678
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 677
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 680
    [DIFFICULTY_NORMAL][TRAINER_ROSE_5] =
    {
#line 681
        .trainerName = _("ROSE"),
#line 682
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 683
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 684
F_TRAINER_FEMALE | 
#line 685
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 689
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 691
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 690
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 693
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 695
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 694
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 697
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 698
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 701
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 702
        .trainerName = _("DUSTY"),
#line 703
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 704
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 706
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 707
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 710
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 712
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 711
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 713
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 718
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
    {
#line 719
        .trainerName = _("DUSTY"),
#line 720
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 721
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 723
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 727
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 729
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 728
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 730
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 735
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_3] =
    {
#line 736
        .trainerName = _("DUSTY"),
#line 737
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 738
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 740
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 741
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 744
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 746
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 745
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 747
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 752
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
    {
#line 753
        .trainerName = _("DUSTY"),
#line 754
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 755
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 757
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 761
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 762
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 764
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 769
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
    {
#line 770
        .trainerName = _("DUSTY"),
#line 771
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 772
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 774
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 775
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 778
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 779
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 781
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 786
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
#line 787
        .trainerName = _("GABBY & TY"),
#line 788
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 789
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 791
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 792
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 795
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 797
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 796
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 799
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 801
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 800
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 803
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
    {
#line 804
        .trainerName = _("GABBY & TY"),
#line 805
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 806
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 808
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 809
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 812
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 814
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 813
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 816
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 817
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 820
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
    {
#line 821
        .trainerName = _("GABBY & TY"),
#line 822
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 823
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 825
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 826
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 829
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 831
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 830
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 833
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 835
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 834
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 837
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
    {
#line 838
        .trainerName = _("GABBY & TY"),
#line 839
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 840
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 842
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 843
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 846
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 848
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 847
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 850
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 852
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 851
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 854
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
    {
#line 855
        .trainerName = _("GABBY & TY"),
#line 856
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 857
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 859
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 860
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 863
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 865
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 864
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 867
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 869
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 868
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 871
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 872
        .trainerName = _("GABBY & TY"),
#line 873
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 874
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 876
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 877
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 880
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 882
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 881
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 883
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 888
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 889
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 891
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 896
    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
#line 897
        .trainerName = _("LOLA"),
#line 898
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 899
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 900
F_TRAINER_FEMALE | 
#line 901
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 905
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 907
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 906
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 909
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 910
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 913
    [DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
    {
#line 914
        .trainerName = _("LOLA"),
#line 915
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 916
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 917
F_TRAINER_FEMALE | 
#line 918
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 919
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 922
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 924
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 923
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 926
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 928
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 927
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 930
    [DIFFICULTY_NORMAL][TRAINER_LOLA_3] =
    {
#line 931
        .trainerName = _("LOLA"),
#line 932
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 933
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 934
F_TRAINER_FEMALE | 
#line 935
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 936
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 939
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 941
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 940
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 943
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 944
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 947
    [DIFFICULTY_NORMAL][TRAINER_LOLA_4] =
    {
#line 948
        .trainerName = _("LOLA"),
#line 949
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 950
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 951
F_TRAINER_FEMALE | 
#line 952
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 953
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 956
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 957
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 960
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 961
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 964
    [DIFFICULTY_NORMAL][TRAINER_LOLA_5] =
    {
#line 965
        .trainerName = _("LOLA"),
#line 966
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 967
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 968
F_TRAINER_FEMALE | 
#line 969
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 970
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 973
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 975
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 974
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 977
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 978
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 981
    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
#line 982
        .trainerName = _("RICKY"),
#line 983
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 984
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 986
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 987
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 990
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 992
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 991
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 993
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 998
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 999
        .trainerName = _("SIMON"),
#line 1000
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1001
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1003
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1004
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1007
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1008
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1011
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1012
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1015
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 1016
        .trainerName = _("CHARLIE"),
#line 1017
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1018
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1020
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1021
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1024
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1025
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1028
    [DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
    {
#line 1029
        .trainerName = _("RICKY"),
#line 1030
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1031
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1033
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1034
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1037
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1039
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1038
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1040
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1045
    [DIFFICULTY_NORMAL][TRAINER_RICKY_3] =
    {
#line 1046
        .trainerName = _("RICKY"),
#line 1047
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1048
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1050
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1051
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1054
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 1055
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1057
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1062
    [DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
    {
#line 1063
        .trainerName = _("RICKY"),
#line 1064
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1065
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1067
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1068
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1071
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1073
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 1072
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1074
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1079
    [DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
    {
#line 1080
        .trainerName = _("RICKY"),
#line 1081
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1082
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1084
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1085
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1088
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1090
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1089
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1091
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1096
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1097
        .trainerName = _("RANDALL"),
#line 1098
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1099
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1101
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1102
        .items = { ITEM_HYPER_POTION },
#line 1103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1104
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1106
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1107
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1109
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 1113
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1114
        .trainerName = _("PARKER"),
#line 1115
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1119
        .items = { ITEM_HYPER_POTION },
#line 1120
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1121
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1123
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1124
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1126
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1130
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1131
        .trainerName = _("GEORGE"),
#line 1132
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1133
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1135
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1136
        .items = { ITEM_HYPER_POTION },
#line 1137
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1138
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1140
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1140
            .heldItem = ITEM_SITRUS_BERRY,
#line 1142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1141
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1143
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1147
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1148
        .trainerName = _("BERKE"),
#line 1149
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1152
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1153
        .items = { ITEM_HYPER_POTION },
#line 1154
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1155
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1157
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1158
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1160
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1163
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1164
        .trainerName = _("VINCENT"),
#line 1165
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1166
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1168
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1169
        .items = { ITEM_FULL_RESTORE },
#line 1170
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1171
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1173
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1174
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1177
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1178
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1181
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1182
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1185
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1186
        .trainerName = _("LEROY"),
#line 1187
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1190
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1191
        .items = { ITEM_FULL_RESTORE },
#line 1192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1193
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1195
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1196
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1199
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1200
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1203
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1204
        .trainerName = _("WILTON"),
#line 1205
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1206
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1208
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1209
        .items = { ITEM_SUPER_POTION },
#line 1210
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1211
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1213
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1215
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1214
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1217
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1219
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1218
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1221
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1222
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1225
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1226
        .trainerName = _("EDGAR"),
#line 1227
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1228
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1230
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1231
        .items = { ITEM_FULL_RESTORE },
#line 1232
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1233
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1235
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1237
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1236
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1239
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1241
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1240
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1243
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1244
        .trainerName = _("ALBERT"),
#line 1245
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1246
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1248
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1249
        .items = { ITEM_FULL_RESTORE },
#line 1250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1251
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1253
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1255
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1254
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1257
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1259
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1258
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1261
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 1262
        .trainerName = _("SAMUEL"),
#line 1263
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1264
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1266
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1267
        .items = { ITEM_FULL_RESTORE },
#line 1268
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1269
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1271
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1273
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1272
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1275
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1277
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1276
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1279
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1281
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1280
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1283
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1284
        .trainerName = _("VITO"),
#line 1285
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1286
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1288
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1289
        .items = { ITEM_FULL_RESTORE },
#line 1290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1291
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1293
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1295
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1294
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1297
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1298
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1301
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1303
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1302
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1305
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1307
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1306
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1309
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1310
        .trainerName = _("OWEN"),
#line 1311
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1312
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1314
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1315
        .items = { ITEM_FULL_RESTORE },
#line 1316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1317
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1319
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1321
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1320
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1323
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1324
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1327
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1329
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1328
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1331
    [DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
    {
#line 1332
        .trainerName = _("WILTON"),
#line 1333
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1334
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1336
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1337
        .items = { ITEM_HYPER_POTION },
#line 1338
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1339
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1341
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1343
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1342
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1345
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1347
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1346
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1349
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1350
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1353
    [DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
    {
#line 1354
        .trainerName = _("WILTON"),
#line 1355
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1356
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1358
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1359
        .items = { ITEM_HYPER_POTION },
#line 1360
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1361
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1363
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1365
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1364
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1367
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1369
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1368
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1371
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1373
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1372
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1375
    [DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
    {
#line 1376
        .trainerName = _("WILTON"),
#line 1377
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1378
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1380
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1381
        .items = { ITEM_FULL_RESTORE },
#line 1382
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1385
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1386
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1389
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1391
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1390
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1393
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1394
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1397
    [DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
    {
#line 1398
        .trainerName = _("WILTON"),
#line 1399
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1400
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1402
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1403
        .items = { ITEM_FULL_RESTORE },
#line 1404
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1405
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1407
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1409
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1408
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1411
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1412
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1415
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1417
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1416
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1419
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1420
        .trainerName = _("MARY"),
#line 1421
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1422
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1423
F_TRAINER_FEMALE | 
#line 1424
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1425
        .items = { ITEM_HYPER_POTION },
#line 1426
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1427
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1429
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1430
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1432
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1435
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1436
        .trainerName = _("ALEXIA"),
#line 1437
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1438
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1439
F_TRAINER_FEMALE | 
#line 1440
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1441
        .items = { ITEM_HYPER_POTION },
#line 1442
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1443
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1445
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1446
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1448
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1452
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1453
        .trainerName = _("JODY"),
#line 1454
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1455
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1456
F_TRAINER_FEMALE | 
#line 1457
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1458
        .items = { ITEM_HYPER_POTION },
#line 1459
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1462
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1463
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1465
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1468
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1469
        .trainerName = _("KEIRA"),
#line 1470
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1471
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1472
F_TRAINER_FEMALE | 
#line 1473
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1474
        .items = { ITEM_FULL_RESTORE },
#line 1475
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1478
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1480
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1479
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1482
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1484
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1483
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1486
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1487
        .trainerName = _("BROOKE"),
#line 1488
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1489
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1490
F_TRAINER_FEMALE | 
#line 1491
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1492
        .items = { ITEM_SUPER_POTION },
#line 1493
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1494
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1496
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1497
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1500
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1501
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1504
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1506
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1505
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1508
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1509
        .trainerName = _("HOPE"),
#line 1510
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1511
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1512
F_TRAINER_FEMALE | 
#line 1513
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1514
        .items = { ITEM_FULL_RESTORE },
#line 1515
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1516
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1518
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1519
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1522
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1523
        .trainerName = _("SHANNON"),
#line 1524
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1525
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1526
F_TRAINER_FEMALE | 
#line 1527
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1528
        .items = { ITEM_FULL_RESTORE },
#line 1529
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1530
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1532
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1534
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1533
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1536
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1537
        .trainerName = _("MICHELLE"),
#line 1538
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1539
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1540
F_TRAINER_FEMALE | 
#line 1541
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1542
        .items = { ITEM_FULL_RESTORE },
#line 1543
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1544
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1546
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1548
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1547
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1550
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1552
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1551
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1554
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1556
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1555
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1558
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1559
        .trainerName = _("CAROLINE"),
#line 1560
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1561
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1562
F_TRAINER_FEMALE | 
#line 1563
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1564
        .items = { ITEM_FULL_RESTORE },
#line 1565
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1566
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1568
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1569
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1572
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1574
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1573
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1576
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1577
        .trainerName = _("JULIE"),
#line 1578
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1579
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1580
F_TRAINER_FEMALE | 
#line 1581
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1582
        .items = { ITEM_FULL_RESTORE },
#line 1583
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1584
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1586
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1587
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1590
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1591
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1594
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1595
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1598
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
    {
#line 1599
        .trainerName = _("BROOKE"),
#line 1600
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1601
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1602
F_TRAINER_FEMALE | 
#line 1603
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1604
        .items = { ITEM_HYPER_POTION },
#line 1605
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1606
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1608
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1609
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1612
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1613
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1616
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 1617
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1620
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_3] =
    {
#line 1621
        .trainerName = _("BROOKE"),
#line 1622
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1623
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1624
F_TRAINER_FEMALE | 
#line 1625
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1626
        .items = { ITEM_HYPER_POTION },
#line 1627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1628
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1630
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1632
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1631
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1634
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1635
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1638
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1640
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 1639
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1642
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_4] =
    {
#line 1643
        .trainerName = _("BROOKE"),
#line 1644
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1645
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1646
F_TRAINER_FEMALE | 
#line 1647
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1648
        .items = { ITEM_FULL_RESTORE },
#line 1649
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1650
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1652
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1654
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1653
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1656
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1658
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1657
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1660
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1662
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 1661
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1664
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_5] =
    {
#line 1665
        .trainerName = _("BROOKE"),
#line 1666
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1667
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1668
F_TRAINER_FEMALE | 
#line 1669
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1670
        .items = { ITEM_FULL_RESTORE },
#line 1671
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1672
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1674
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1676
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1675
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1678
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1680
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1679
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1682
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1684
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1683
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1686
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1687
        .trainerName = _("PATRICIA"),
#line 1688
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1689
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1690
F_TRAINER_FEMALE | 
#line 1691
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1692
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1695
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1696
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1699
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1700
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1703
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1704
        .trainerName = _("TAMMY"),
#line 1705
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1706
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1707
F_TRAINER_FEMALE | 
#line 1708
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1709
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1712
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1713
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1716
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1717
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1720
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
#line 1721
        .trainerName = _("VALERIE"),
#line 1722
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1723
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1724
F_TRAINER_FEMALE | 
#line 1725
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1726
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1729
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1730
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1733
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1734
        .trainerName = _("TASHA"),
#line 1735
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1736
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1737
F_TRAINER_FEMALE | 
#line 1738
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1739
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1742
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1744
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1743
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1746
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
    {
#line 1747
        .trainerName = _("VALERIE"),
#line 1748
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1749
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1750
F_TRAINER_FEMALE | 
#line 1751
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1752
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1755
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1757
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1756
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1759
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1761
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1760
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1763
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_3] =
    {
#line 1764
        .trainerName = _("VALERIE"),
#line 1765
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1766
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1767
F_TRAINER_FEMALE | 
#line 1768
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1769
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1772
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1774
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 1773
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1776
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1778
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 1777
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1780
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_4] =
    {
#line 1781
        .trainerName = _("VALERIE"),
#line 1782
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1783
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1784
F_TRAINER_FEMALE | 
#line 1785
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1786
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1789
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1791
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 1790
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1793
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1795
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 1794
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1797
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_5] =
    {
#line 1798
        .trainerName = _("VALERIE"),
#line 1799
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1800
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1801
F_TRAINER_FEMALE | 
#line 1802
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1803
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1806
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1808
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1807
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1810
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1812
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1811
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1814
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1816
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1815
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1818
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1819
        .trainerName = _("CINDY"),
#line 1820
        .trainerClass = TRAINER_CLASS_LADY,
#line 1821
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1822
F_TRAINER_FEMALE | 
#line 1823
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1824
        .items = { ITEM_FULL_RESTORE },
#line 1825
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1828
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1828
            .heldItem = ITEM_NUGGET,
#line 1830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1829
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1832
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1833
        .trainerName = _("DAPHNE"),
#line 1834
        .trainerClass = TRAINER_CLASS_LADY,
#line 1835
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1836
F_TRAINER_FEMALE | 
#line 1837
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1838
        .items = { ITEM_FULL_RESTORE },
#line 1839
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1842
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1842
            .heldItem = ITEM_NUGGET,
#line 1844
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1843
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1845
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1850
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1850
            .heldItem = ITEM_NUGGET,
#line 1852
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1851
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1853
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1858
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1859
        .trainerName = _("GRUNT"),
#line 1860
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1861
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1863
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1864
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1867
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1868
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1871
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1872
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1875
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1876
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1879
    [DIFFICULTY_NORMAL][TRAINER_CINDY_2] =
    {
#line 1880
        .trainerName = _("CINDY"),
#line 1881
        .trainerClass = TRAINER_CLASS_LADY,
#line 1882
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1883
F_TRAINER_FEMALE | 
#line 1884
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1885
        .items = { ITEM_FULL_RESTORE },
#line 1886
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1889
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1889
            .heldItem = ITEM_NUGGET,
#line 1891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1890
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1892
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
            },
            },
        },
    },
#line 1895
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1896
        .trainerName = _("BRIANNA"),
#line 1897
        .trainerClass = TRAINER_CLASS_LADY,
#line 1898
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1899
F_TRAINER_FEMALE | 
#line 1900
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1901
        .items = { ITEM_FULL_RESTORE },
#line 1902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1905
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1905
            .heldItem = ITEM_NUGGET,
#line 1907
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1906
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1909
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 1910
        .trainerName = _("NAOMI"),
#line 1911
        .trainerClass = TRAINER_CLASS_LADY,
#line 1912
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1913
F_TRAINER_FEMALE | 
#line 1914
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1915
        .items = { ITEM_FULL_RESTORE },
#line 1916
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1919
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1919
            .heldItem = ITEM_NUGGET,
#line 1921
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1920
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1923
    [DIFFICULTY_NORMAL][TRAINER_CINDY_3] =
    {
#line 1924
        .trainerName = _("CINDY"),
#line 1925
        .trainerClass = TRAINER_CLASS_LADY,
#line 1926
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1927
F_TRAINER_FEMALE | 
#line 1928
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1929
        .items = { ITEM_FULL_RESTORE },
#line 1930
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1933
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1933
            .heldItem = ITEM_NUGGET,
#line 1935
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1934
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1937
    [DIFFICULTY_NORMAL][TRAINER_CINDY_4] =
    {
#line 1938
        .trainerName = _("CINDY"),
#line 1939
        .trainerClass = TRAINER_CLASS_LADY,
#line 1940
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1941
F_TRAINER_FEMALE | 
#line 1942
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1943
        .items = { ITEM_FULL_RESTORE },
#line 1944
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1947
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1947
            .heldItem = ITEM_NUGGET,
#line 1949
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 1948
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1951
    [DIFFICULTY_NORMAL][TRAINER_CINDY_5] =
    {
#line 1952
        .trainerName = _("CINDY"),
#line 1953
        .trainerClass = TRAINER_CLASS_LADY,
#line 1954
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1955
F_TRAINER_FEMALE | 
#line 1956
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1957
        .items = { ITEM_FULL_RESTORE },
#line 1958
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1961
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1961
            .heldItem = ITEM_NUGGET,
#line 1963
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 1962
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1965
    [DIFFICULTY_NORMAL][TRAINER_CINDY_6] =
    {
#line 1966
        .trainerName = _("CINDY"),
#line 1967
        .trainerClass = TRAINER_CLASS_LADY,
#line 1968
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1969
F_TRAINER_FEMALE | 
#line 1970
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1971
        .items = { ITEM_FULL_RESTORE },
#line 1972
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1975
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .heldItem = ITEM_NUGGET,
#line 1977
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1976
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1978
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 1983
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 1984
        .trainerName = _("MELISSA"),
#line 1985
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1986
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1987
F_TRAINER_FEMALE | 
#line 1988
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1989
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1992
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1993
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1996
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1997
        .trainerName = _("SHEILA"),
#line 1998
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1999
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2000
F_TRAINER_FEMALE | 
#line 2001
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2002
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2005
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2006
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2009
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 2010
        .trainerName = _("SHIRLEY"),
#line 2011
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2012
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2013
F_TRAINER_FEMALE | 
#line 2014
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2015
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2018
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2019
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2022
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 2023
        .trainerName = _("JESSICA"),
#line 2024
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2025
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2026
F_TRAINER_FEMALE | 
#line 2027
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2028
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2031
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2032
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2034
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2039
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2040
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2042
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2047
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 2048
        .trainerName = _("CONNIE"),
#line 2049
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2050
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2051
F_TRAINER_FEMALE | 
#line 2052
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2053
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2056
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2058
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2057
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2060
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 2061
        .trainerName = _("BRIDGET"),
#line 2062
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2063
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2064
F_TRAINER_FEMALE | 
#line 2065
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2066
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2069
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2071
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2070
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2073
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 2074
        .trainerName = _("OLIVIA"),
#line 2075
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2076
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2077
F_TRAINER_FEMALE | 
#line 2078
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2079
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2082
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2084
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2083
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2085
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2090
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2092
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2091
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2093
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2097
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2098
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2100
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2105
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 2106
        .trainerName = _("TIFFANY"),
#line 2107
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2108
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2109
F_TRAINER_FEMALE | 
#line 2110
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2111
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2114
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2115
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2118
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2119
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2122
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
    {
#line 2123
        .trainerName = _("JESSICA"),
#line 2124
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2125
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2126
F_TRAINER_FEMALE | 
#line 2127
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2128
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2131
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2132
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2134
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2139
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2141
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2140
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2142
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2147
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_3] =
    {
#line 2148
        .trainerName = _("JESSICA"),
#line 2149
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2150
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2151
F_TRAINER_FEMALE | 
#line 2152
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2153
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2156
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2158
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2157
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2159
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2164
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2165
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2167
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2172
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_4] =
    {
#line 2173
        .trainerName = _("JESSICA"),
#line 2174
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2175
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2176
F_TRAINER_FEMALE | 
#line 2177
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2178
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2181
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2183
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2182
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2184
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2189
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2191
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2190
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2192
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2197
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_5] =
    {
#line 2198
        .trainerName = _("JESSICA"),
#line 2199
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2200
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2201
F_TRAINER_FEMALE | 
#line 2202
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2203
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2206
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2208
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2207
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2209
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2214
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2216
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2215
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2217
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2222
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 2223
        .trainerName = _("WINSTON"),
#line 2224
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2225
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2227
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2228
        .items = { ITEM_FULL_RESTORE },
#line 2229
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2232
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .heldItem = ITEM_NUGGET,
#line 2234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2233
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2236
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 2237
        .trainerName = _("GARRET"),
#line 2238
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2239
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2241
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2242
        .items = { ITEM_FULL_RESTORE },
#line 2243
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2246
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2246
            .heldItem = ITEM_NUGGET,
#line 2248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2247
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2250
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
    {
#line 2251
        .trainerName = _("WINSTON"),
#line 2252
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2253
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2255
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2256
        .items = { ITEM_FULL_RESTORE },
#line 2257
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2260
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2260
            .heldItem = ITEM_NUGGET,
#line 2262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2261
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2264
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_3] =
    {
#line 2265
        .trainerName = _("WINSTON"),
#line 2266
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2267
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2269
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2270
        .items = { ITEM_FULL_RESTORE },
#line 2271
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2274
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .heldItem = ITEM_NUGGET,
#line 2276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2275
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2278
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_4] =
    {
#line 2279
        .trainerName = _("WINSTON"),
#line 2280
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2281
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2283
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2284
        .items = { ITEM_FULL_RESTORE },
#line 2285
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2288
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .heldItem = ITEM_NUGGET,
#line 2290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2289
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2292
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_5] =
    {
#line 2293
        .trainerName = _("WINSTON"),
#line 2294
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2295
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2297
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2298
        .items = { ITEM_FULL_RESTORE },
#line 2299
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2302
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .heldItem = ITEM_NUGGET,
#line 2304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2303
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2305
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 2310
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 2311
        .trainerName = _("STEVE"),
#line 2312
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2313
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2315
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2319
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2320
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2323
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 2324
        .trainerName = _("THALIA"),
#line 2325
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2326
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2327
F_TRAINER_FEMALE | 
#line 2328
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2329
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2332
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2333
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2336
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2337
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2340
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 2341
        .trainerName = _("MARK"),
#line 2342
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2343
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2345
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2346
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2349
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2350
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2353
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2354
        .trainerName = _("GRUNT"),
#line 2355
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2356
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2357
F_TRAINER_FEMALE | 
#line 2358
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2359
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2362
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2363
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2366
    [DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
    {
#line 2367
        .trainerName = _("STEVE"),
#line 2368
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2369
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2371
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2372
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2375
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2377
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2376
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2379
    [DIFFICULTY_NORMAL][TRAINER_STEVE_3] =
    {
#line 2380
        .trainerName = _("STEVE"),
#line 2381
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2382
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2384
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2385
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2388
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2390
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2389
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2392
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2394
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2393
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2396
    [DIFFICULTY_NORMAL][TRAINER_STEVE_4] =
    {
#line 2397
        .trainerName = _("STEVE"),
#line 2398
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2399
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2401
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2405
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2407
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2406
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2409
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2410
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2413
    [DIFFICULTY_NORMAL][TRAINER_STEVE_5] =
    {
#line 2414
        .trainerName = _("STEVE"),
#line 2415
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2416
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2418
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2419
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2422
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2424
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2423
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2426
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2428
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2427
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2430
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 2431
        .trainerName = _("DOMINIK"),
#line 2432
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2433
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2435
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2436
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2439
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2440
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2443
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 2444
        .trainerName = _("TONY"),
#line 2445
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2446
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2448
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2449
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2452
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2453
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2456
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2457
        .trainerName = _("DUDLEY"),
#line 2458
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2459
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2461
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2462
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2465
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2466
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2469
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2470
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2473
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2474
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2477
    [DIFFICULTY_NORMAL][TRAINER_TONY_2] =
    {
#line 2478
        .trainerName = _("TONY"),
#line 2479
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2480
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2482
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2483
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2486
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2488
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2487
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2490
    [DIFFICULTY_NORMAL][TRAINER_TONY_3] =
    {
#line 2491
        .trainerName = _("TONY"),
#line 2492
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2493
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2495
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2496
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2499
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2501
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2500
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2503
    [DIFFICULTY_NORMAL][TRAINER_TONY_4] =
    {
#line 2504
        .trainerName = _("TONY"),
#line 2505
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2506
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2508
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2509
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2512
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2514
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2513
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2516
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2518
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2517
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2520
    [DIFFICULTY_NORMAL][TRAINER_TONY_5] =
    {
#line 2521
        .trainerName = _("TONY"),
#line 2522
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2523
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2525
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2526
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2529
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2531
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2530
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2533
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2535
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2534
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2537
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2538
        .trainerName = _("TAKAO"),
#line 2539
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2540
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2542
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2543
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2546
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2548
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2547
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2550
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2551
        .trainerName = _("NOB"),
#line 2552
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2553
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2555
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2556
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2559
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2561
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2560
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2563
    [DIFFICULTY_NORMAL][TRAINER_NOB_2] =
    {
#line 2564
        .trainerName = _("NOB"),
#line 2565
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2566
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2568
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2569
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2572
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 2573
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2576
    [DIFFICULTY_NORMAL][TRAINER_NOB_3] =
    {
#line 2577
        .trainerName = _("NOB"),
#line 2578
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2579
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2581
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2582
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2585
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2587
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2586
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2589
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2591
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2593
    [DIFFICULTY_NORMAL][TRAINER_NOB_4] =
    {
#line 2594
        .trainerName = _("NOB"),
#line 2595
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2596
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2598
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2599
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2602
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2604
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2603
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2606
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2608
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2607
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2610
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2612
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2611
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2614
    [DIFFICULTY_NORMAL][TRAINER_NOB_5] =
    {
#line 2615
        .trainerName = _("NOB"),
#line 2616
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2617
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2619
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2620
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2623
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2625
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2624
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2627
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2629
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2628
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2631
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2633
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2632
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2635
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .heldItem = ITEM_BLACK_BELT,
#line 2637
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2636
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2639
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2640
        .trainerName = _("YUJI"),
#line 2641
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2642
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2644
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2645
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2648
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2649
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2652
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2653
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2656
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2657
        .trainerName = _("ATSUSHI"),
#line 2658
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2659
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2661
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2662
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2665
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2666
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2669
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2670
        .trainerName = _("KIRK"),
#line 2671
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2672
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2674
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2675
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2678
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2679
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2681
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2686
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2687
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2689
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2693
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2694
        .trainerName = _("GRUNT"),
#line 2695
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2696
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2697
F_TRAINER_FEMALE | 
#line 2698
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2699
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2702
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2703
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2706
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2707
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2710
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2711
        .trainerName = _("GRUNT"),
#line 2712
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2713
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2715
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2716
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2719
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2720
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2723
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2724
        .trainerName = _("SHAWN"),
#line 2725
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2726
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2728
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2729
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2732
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2734
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2733
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2736
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2737
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2740
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2741
        .trainerName = _("FERNANDO"),
#line 2742
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2743
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2745
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2746
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2749
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2750
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2753
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2754
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2757
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2758
        .trainerName = _("DALTON"),
#line 2759
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2760
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2762
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2763
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2766
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2767
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2770
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2771
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2774
    [DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
    {
#line 2775
        .trainerName = _("DALTON"),
#line 2776
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2777
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2779
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2780
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2783
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2785
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2784
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2787
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2789
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2788
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2791
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2793
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2792
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2795
    [DIFFICULTY_NORMAL][TRAINER_DALTON_3] =
    {
#line 2796
        .trainerName = _("DALTON"),
#line 2797
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2798
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2800
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2801
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2804
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2806
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2805
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2808
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2810
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2809
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2812
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2814
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2813
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2816
    [DIFFICULTY_NORMAL][TRAINER_DALTON_4] =
    {
#line 2817
        .trainerName = _("DALTON"),
#line 2818
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2819
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2821
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2822
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2825
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2827
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2826
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2829
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2831
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2830
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2833
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2834
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2837
    [DIFFICULTY_NORMAL][TRAINER_DALTON_5] =
    {
#line 2838
        .trainerName = _("DALTON"),
#line 2839
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2840
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2842
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2843
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2846
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2848
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2847
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2850
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2851
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2854
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2855
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2858
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2859
        .trainerName = _("COLE"),
#line 2860
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2861
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2863
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2864
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2867
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2869
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2868
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2871
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2872
        .trainerName = _("JEFF"),
#line 2873
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2874
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2876
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2877
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2880
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2882
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2881
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2884
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2885
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2888
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2889
        .trainerName = _("AXLE"),
#line 2890
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2891
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2893
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2894
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2897
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2899
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2898
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2901
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2902
        .trainerName = _("JACE"),
#line 2903
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2904
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2906
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2907
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2910
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2912
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2911
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2914
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2915
        .trainerName = _("KEEGAN"),
#line 2916
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2917
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2919
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2920
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2923
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2925
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2924
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2927
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
#line 2928
        .trainerName = _("BERNIE"),
#line 2929
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2930
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2932
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2933
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2936
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2937
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2940
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2941
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2944
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
    {
#line 2945
        .trainerName = _("BERNIE"),
#line 2946
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2947
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2949
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2950
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2953
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2954
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2957
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2959
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2958
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2961
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_3] =
    {
#line 2962
        .trainerName = _("BERNIE"),
#line 2963
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2964
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2966
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2967
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2970
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2972
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2971
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2974
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2976
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 2975
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2978
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_4] =
    {
#line 2979
        .trainerName = _("BERNIE"),
#line 2980
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2981
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2983
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2984
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2987
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2989
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2988
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2991
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2993
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 2992
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2995
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_5] =
    {
#line 2996
        .trainerName = _("BERNIE"),
#line 2997
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2998
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3000
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3001
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3004
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3005
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3008
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3010
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3009
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3012
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 3013
        .trainerName = _("ETHAN"),
#line 3014
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3015
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3017
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3021
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3022
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3025
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3026
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3029
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 3030
        .trainerName = _("AUTUMN"),
#line 3031
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3032
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3033
F_TRAINER_FEMALE | 
#line 3034
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3035
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3038
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3039
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3042
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
    {
#line 3043
        .trainerName = _("ETHAN"),
#line 3044
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3045
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3047
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3048
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3051
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3053
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3052
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3055
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3057
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3056
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3059
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_3] =
    {
#line 3060
        .trainerName = _("ETHAN"),
#line 3061
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3062
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3064
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3065
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3068
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3070
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3069
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3072
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3074
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3073
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3076
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_4] =
    {
#line 3077
        .trainerName = _("ETHAN"),
#line 3078
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3079
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3081
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3085
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3087
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3086
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3089
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3091
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3090
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3093
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3095
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3094
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3097
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_5] =
    {
#line 3098
        .trainerName = _("ETHAN"),
#line 3099
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3100
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3106
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3108
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3107
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3110
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3112
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3111
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3114
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3116
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3115
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3118
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 3119
        .trainerName = _("JEFFREY"),
#line 3120
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3121
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3123
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3124
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3127
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3128
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3131
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3132
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3135
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3136
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3139
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
    {
#line 3140
        .trainerName = _("JEFFREY"),
#line 3141
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3142
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3144
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3145
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3148
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3150
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3149
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3152
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3154
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3153
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3156
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3157
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3160
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_3] =
    {
#line 3161
        .trainerName = _("JEFFREY"),
#line 3162
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3163
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3165
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3166
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3169
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3171
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3170
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3173
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3174
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3177
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3179
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3178
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3181
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_4] =
    {
#line 3182
        .trainerName = _("JEFFREY"),
#line 3183
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3184
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3186
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3187
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3190
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3192
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3191
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3194
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3195
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3198
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3200
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3199
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3202
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3203
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3206
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_5] =
    {
#line 3207
        .trainerName = _("JEFFREY"),
#line 3208
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3209
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3211
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3212
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3215
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3217
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3216
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3219
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3221
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3220
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3223
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3224
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3227
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3227
            .heldItem = ITEM_SILVER_POWDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3228
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3231
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3233
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3232
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3235
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 3236
        .trainerName = _("JOSHUA"),
#line 3237
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3238
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3240
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3241
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3244
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3245
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3248
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3249
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3252
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 3253
        .trainerName = _("CAMERON"),
#line 3254
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3255
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3257
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3258
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3261
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3262
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3265
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
    {
#line 3266
        .trainerName = _("CAMERON"),
#line 3267
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3268
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3270
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3271
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3274
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3275
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3278
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3279
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3282
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_3] =
    {
#line 3283
        .trainerName = _("CAMERON"),
#line 3284
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3285
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3287
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3288
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3291
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3292
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3295
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3296
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3299
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_4] =
    {
#line 3300
        .trainerName = _("CAMERON"),
#line 3301
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3302
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3304
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3305
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3308
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3309
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3312
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3313
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3316
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_5] =
    {
#line 3317
        .trainerName = _("CAMERON"),
#line 3318
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3319
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3321
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3322
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3325
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3326
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3329
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3330
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3333
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 3334
        .trainerName = _("ALEXIS"),
#line 3335
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3336
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3337
F_TRAINER_FEMALE | 
#line 3338
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3339
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3342
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3343
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3346
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3347
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3350
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 3351
        .trainerName = _("JACKI"),
#line 3352
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3353
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3354
F_TRAINER_FEMALE | 
#line 3355
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3356
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3359
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3360
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3363
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3364
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3367
    [DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
    {
#line 3368
        .trainerName = _("JACKI"),
#line 3369
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3370
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3371
F_TRAINER_FEMALE | 
#line 3372
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3373
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3376
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3378
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3377
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3380
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3381
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3384
    [DIFFICULTY_NORMAL][TRAINER_JACKI_3] =
    {
#line 3385
        .trainerName = _("JACKI"),
#line 3386
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3387
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3388
F_TRAINER_FEMALE | 
#line 3389
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3393
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3395
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3394
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3397
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3399
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3398
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3401
    [DIFFICULTY_NORMAL][TRAINER_JACKI_4] =
    {
#line 3402
        .trainerName = _("JACKI"),
#line 3403
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3404
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3405
F_TRAINER_FEMALE | 
#line 3406
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3407
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3410
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3412
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3411
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3414
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3415
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3418
    [DIFFICULTY_NORMAL][TRAINER_JACKI_5] =
    {
#line 3419
        .trainerName = _("JACKI"),
#line 3420
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3421
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3422
F_TRAINER_FEMALE | 
#line 3423
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3424
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3427
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3428
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3431
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3432
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3435
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 3436
        .trainerName = _("WALTER"),
#line 3437
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3438
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3440
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3441
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3444
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3445
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3448
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 3449
        .trainerName = _("MICAH"),
#line 3450
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3451
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3453
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3457
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3458
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3461
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3462
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3465
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 3466
        .trainerName = _("THOMAS"),
#line 3467
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3468
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3470
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3471
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3474
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3475
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3478
    [DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
    {
#line 3479
        .trainerName = _("WALTER"),
#line 3480
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3481
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3483
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3484
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3487
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3489
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3488
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3491
    [DIFFICULTY_NORMAL][TRAINER_WALTER_3] =
    {
#line 3492
        .trainerName = _("WALTER"),
#line 3493
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3494
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3496
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3500
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3501
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3503
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3508
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3510
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 3509
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
                MOVE_ROAR,
            },
            },
        },
    },
#line 3516
    [DIFFICULTY_NORMAL][TRAINER_WALTER_4] =
    {
#line 3517
        .trainerName = _("WALTER"),
#line 3518
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3519
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3521
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3522
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3525
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3527
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3526
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3528
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3533
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3534
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
            },
            },
        },
    },
#line 3540
    [DIFFICULTY_NORMAL][TRAINER_WALTER_5] =
    {
#line 3541
        .trainerName = _("WALTER"),
#line 3542
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3543
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3545
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3549
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3551
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3550
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3552
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3557
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3559
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3558
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3560
                MOVE_FURY_SWIPES,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 3565
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3567
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3566
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
                MOVE_ROAR,
            },
            },
        },
    },
#line 3573
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 3574
        .trainerName = _("SIDNEY"),
#line 3575
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3576
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 3578
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3579
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3580
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3581
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_FORCE_SETUP_FIRST_TURN,
#line 3582
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3584
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3585
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3592
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3594
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3593
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3595
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3600
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3601
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3603
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3608
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3610
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3609
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3611
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3616
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3616
            .heldItem = ITEM_SITRUS_BERRY,
#line 3618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3617
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3619
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3624
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 3625
        .trainerName = _("PHOEBE"),
#line 3626
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3627
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender =
#line 3628
F_TRAINER_FEMALE | 
#line 3629
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3630
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3632
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3633
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3635
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3636
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3643
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3645
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3644
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3646
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3651
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3652
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3654
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3659
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3661
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3660
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3662
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3667
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3667
            .heldItem = ITEM_SITRUS_BERRY,
#line 3669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3668
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3670
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3675
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 3676
        .trainerName = _("GLACIA"),
#line 3677
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3678
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender =
#line 3679
F_TRAINER_FEMALE | 
#line 3680
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3681
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3683
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3684
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3686
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3687
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3689
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3694
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3696
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3695
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3697
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3702
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3704
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3703
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3705
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3710
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3712
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3711
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3713
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3718
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3718
            .heldItem = ITEM_SITRUS_BERRY,
#line 3720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3719
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3721
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3726
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3727
        .trainerName = _("DRAKE"),
#line 3728
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3729
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3731
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3732
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3734
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3735
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3737
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3738
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3745
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3747
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3746
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3748
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3753
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3755
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3754
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3756
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3761
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3763
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3762
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3764
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3769
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .heldItem = ITEM_SITRUS_BERRY,
#line 3771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3770
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3777
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3778
        .trainerName = _("ROXANNE"),
#line 3779
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3780
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 3781
F_TRAINER_FEMALE | 
#line 3782
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3783
        .items = { ITEM_POTION, ITEM_POTION },
#line 3784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3785
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3787
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3788
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3790
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3795
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3797
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3796
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3798
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3803
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3803
            .heldItem = ITEM_ORAN_BERRY,
#line 3805
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3804
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3806
                MOVE_BLOCK,
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3811
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3812
        .trainerName = _("BRAWLY"),
#line 3813
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3814
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3816
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3817
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3818
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3819
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3821
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3823
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3822
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3824
                MOVE_KARATE_CHOP,
                MOVE_LOW_KICK,
                MOVE_SEISMIC_TOSS,
                MOVE_BULK_UP,
            },
            },
            {
#line 3829
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3831
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3830
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3832
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_BULK_UP,
            },
            },
            {
#line 3837
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3837
            .heldItem = ITEM_SITRUS_BERRY,
#line 3839
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3838
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3840
                MOVE_ARM_THRUST,
                MOVE_VITAL_THROW,
                MOVE_REVERSAL,
                MOVE_BULK_UP,
            },
            },
        },
    },
#line 3845
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 3846
        .trainerName = _("WATTSON"),
#line 3847
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3848
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3850
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3851
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3852
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3853
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3855
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3857
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3856
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3858
                MOVE_ROLLOUT,
                MOVE_SPARK,
                MOVE_SELF_DESTRUCT,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3863
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3865
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3864
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3866
                MOVE_SHOCK_WAVE,
                MOVE_LEER,
                MOVE_QUICK_ATTACK,
                MOVE_HOWL,
            },
            },
            {
#line 3871
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3872
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3874
                MOVE_SUPERSONIC,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 3879
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .heldItem = ITEM_SITRUS_BERRY,
#line 3881
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3880
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3882
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_HOWL,
            },
            },
        },
    },
#line 3887
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3888
        .trainerName = _("FLANNERY"),
#line 3889
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3890
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3891
F_TRAINER_FEMALE | 
#line 3892
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3893
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3894
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3895
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3897
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3899
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3898
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3900
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3905
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3907
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3906
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3908
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3913
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3914
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3916
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 3921
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3921
            .heldItem = ITEM_WHITE_HERB,
#line 3923
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3922
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3924
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 3929
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3930
        .trainerName = _("NORMAN"),
#line 3931
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3932
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 3934
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3935
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3936
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3937
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3939
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3940
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 3947
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3949
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3948
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3950
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3955
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3956
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3958
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3963
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3963
            .heldItem = ITEM_SITRUS_BERRY,
#line 3965
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3964
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3966
                MOVE_COUNTER,
                MOVE_YAWN,
                MOVE_FACADE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3971
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3972
        .trainerName = _("WINONA"),
#line 3973
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3974
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3975
F_TRAINER_FEMALE | 
#line 3976
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3977
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3978
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3979
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3981
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3983
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3982
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3984
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3989
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3990
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3992
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 3997
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3999
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3998
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4000
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4005
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4007
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 4006
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4008
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4013
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .heldItem = ITEM_ORAN_BERRY,
#line 4015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4014
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4016
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4021
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 4022
        .trainerName = _("TATE&LIZA"),
#line 4023
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4024
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 4026
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4027
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 4028
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4029
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4031
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4033
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4032
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4034
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4039
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4040
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4042
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4047
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .heldItem = ITEM_SITRUS_BERRY,
#line 4049
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4048
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4050
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4055
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .heldItem = ITEM_SITRUS_BERRY,
#line 4057
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4056
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4058
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 4063
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 4064
        .trainerName = _("JUAN"),
#line 4065
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4066
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 4068
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4069
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 4070
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4071
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4073
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4074
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4076
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 4081
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4083
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4082
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4084
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4089
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4091
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4090
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4092
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4097
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4099
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4098
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4100
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4105
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4105
            .heldItem = ITEM_CHESTO_BERRY,
#line 4107
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4106
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4108
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4113
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 4114
        .trainerName = _("JERRY"),
#line 4115
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4116
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4118
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4119
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4122
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4124
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4123
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4126
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 4127
        .trainerName = _("TED"),
#line 4128
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4129
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4131
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4132
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4135
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4136
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4139
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 4140
        .trainerName = _("PAUL"),
#line 4141
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4142
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4145
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4149
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4152
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4154
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4153
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4156
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4157
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
    {
#line 4161
        .trainerName = _("JERRY"),
#line 4162
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4163
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4165
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4166
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4170
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4173
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4174
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4177
    [DIFFICULTY_NORMAL][TRAINER_JERRY_3] =
    {
#line 4178
        .trainerName = _("JERRY"),
#line 4179
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4180
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4183
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4186
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4187
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4190
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4191
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4194
    [DIFFICULTY_NORMAL][TRAINER_JERRY_4] =
    {
#line 4195
        .trainerName = _("JERRY"),
#line 4196
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4197
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4203
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4204
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4207
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4209
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4208
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4211
    [DIFFICULTY_NORMAL][TRAINER_JERRY_5] =
    {
#line 4212
        .trainerName = _("JERRY"),
#line 4213
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4214
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4217
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4220
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4222
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4221
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4224
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4225
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4228
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4229
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4232
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 4233
        .trainerName = _("KAREN"),
#line 4234
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4235
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4236
F_TRAINER_FEMALE | 
#line 4237
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4238
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4241
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4242
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4245
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 4246
        .trainerName = _("GEORGIA"),
#line 4247
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4248
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4249
F_TRAINER_FEMALE | 
#line 4250
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4251
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4254
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4256
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4255
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4258
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4260
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4259
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4262
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 4263
        .trainerName = _("KAREN"),
#line 4264
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4265
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4266
F_TRAINER_FEMALE | 
#line 4267
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4268
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4271
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4273
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4272
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4275
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4276
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4279
    [DIFFICULTY_NORMAL][TRAINER_KAREN_3] =
    {
#line 4280
        .trainerName = _("KAREN"),
#line 4281
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4282
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4283
F_TRAINER_FEMALE | 
#line 4284
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4285
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4288
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4289
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4292
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4293
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4296
    [DIFFICULTY_NORMAL][TRAINER_KAREN_4] =
    {
#line 4297
        .trainerName = _("KAREN"),
#line 4298
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4299
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4300
F_TRAINER_FEMALE | 
#line 4301
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4302
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4305
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4306
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4309
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4311
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4310
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4313
    [DIFFICULTY_NORMAL][TRAINER_KAREN_5] =
    {
#line 4314
        .trainerName = _("KAREN"),
#line 4315
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4316
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4317
F_TRAINER_FEMALE | 
#line 4318
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4319
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4322
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4323
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4326
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4327
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4330
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 4331
        .trainerName = _("KATE & JOY"),
#line 4332
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4333
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4335
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4336
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4339
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4340
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4342
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 4347
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4348
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4350
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4355
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 4356
        .trainerName = _("ANNA & MEG"),
#line 4357
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4358
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4360
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4361
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4365
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4367
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4372
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4375
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4379
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
    {
#line 4380
        .trainerName = _("ANNA & MEG"),
#line 4381
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4382
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4384
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4385
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4388
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4390
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4389
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4391
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4396
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4397
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4399
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4403
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_3] =
    {
#line 4404
        .trainerName = _("ANNA & MEG"),
#line 4405
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4406
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4408
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4409
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4412
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4413
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4415
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4420
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4422
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4421
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4423
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4427
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_4] =
    {
#line 4428
        .trainerName = _("ANNA & MEG"),
#line 4429
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4430
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4432
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4433
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4437
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4439
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4444
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4445
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4447
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_5] =
    {
#line 4452
        .trainerName = _("ANNA & MEG"),
#line 4453
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4454
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4456
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4457
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4461
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4463
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4468
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4469
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4471
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4475
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 4476
        .trainerName = _("VICTOR"),
#line 4477
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4478
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4480
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4481
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4484
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .heldItem = ITEM_ORAN_BERRY,
#line 4486
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4485
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4488
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .heldItem = ITEM_ORAN_BERRY,
#line 4490
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4489
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4492
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 4493
        .trainerName = _("MIGUEL"),
#line 4494
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4495
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4497
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4498
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4501
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .heldItem = ITEM_ORAN_BERRY,
#line 4503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4502
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4505
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 4506
        .trainerName = _("COLTON"),
#line 4507
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4508
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4510
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4511
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4514
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .heldItem = ITEM_ORAN_BERRY,
#line 4516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4515
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4517
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4522
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .heldItem = ITEM_ORAN_BERRY,
#line 4524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4523
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4525
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4530
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .heldItem = ITEM_ORAN_BERRY,
#line 4532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4531
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4533
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4538
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .heldItem = ITEM_ORAN_BERRY,
#line 4540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4539
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4541
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4546
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .heldItem = ITEM_ORAN_BERRY,
#line 4548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4547
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4549
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4554
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .heldItem = ITEM_ORAN_BERRY,
#line 4556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4555
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4557
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4562
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
    {
#line 4563
        .trainerName = _("MIGUEL"),
#line 4564
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4565
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4567
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4571
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .heldItem = ITEM_ORAN_BERRY,
#line 4573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4572
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4575
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_3] =
    {
#line 4576
        .trainerName = _("MIGUEL"),
#line 4577
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4578
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4580
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4581
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4584
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4584
            .heldItem = ITEM_ORAN_BERRY,
#line 4586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4585
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4588
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_4] =
    {
#line 4589
        .trainerName = _("MIGUEL"),
#line 4590
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4591
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4593
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4594
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4597
            .heldItem = ITEM_ORAN_BERRY,
#line 4599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4598
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4601
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_5] =
    {
#line 4602
        .trainerName = _("MIGUEL"),
#line 4603
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4604
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4606
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4607
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4610
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .heldItem = ITEM_SITRUS_BERRY,
#line 4612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4611
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4614
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4615
        .trainerName = _("VICTORIA"),
#line 4616
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4617
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4618
F_TRAINER_FEMALE | 
#line 4619
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4620
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4623
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .heldItem = ITEM_ORAN_BERRY,
#line 4625
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4624
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4627
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4628
        .trainerName = _("BETHANY"),
#line 4629
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4630
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4631
F_TRAINER_FEMALE | 
#line 4632
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4633
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .heldItem = ITEM_ORAN_BERRY,
#line 4638
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4637
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4640
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4640
            .heldItem = ITEM_ORAN_BERRY,
#line 4642
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4641
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4644
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .heldItem = ITEM_ORAN_BERRY,
#line 4646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4645
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4648
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 4649
        .trainerName = _("ISABEL"),
#line 4650
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4651
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4652
F_TRAINER_FEMALE | 
#line 4653
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4654
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4657
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .heldItem = ITEM_ORAN_BERRY,
#line 4659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4658
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4661
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4661
            .heldItem = ITEM_ORAN_BERRY,
#line 4663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4662
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4665
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
    {
#line 4666
        .trainerName = _("ISABEL"),
#line 4667
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4668
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4669
F_TRAINER_FEMALE | 
#line 4670
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4671
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4674
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .heldItem = ITEM_ORAN_BERRY,
#line 4676
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4675
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4678
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .heldItem = ITEM_ORAN_BERRY,
#line 4680
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4679
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4682
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_3] =
    {
#line 4683
        .trainerName = _("ISABEL"),
#line 4684
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4685
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4686
F_TRAINER_FEMALE | 
#line 4687
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4688
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4691
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .heldItem = ITEM_ORAN_BERRY,
#line 4693
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4692
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4695
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .heldItem = ITEM_ORAN_BERRY,
#line 4697
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4696
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4699
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_4] =
    {
#line 4700
        .trainerName = _("ISABEL"),
#line 4701
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4702
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4703
F_TRAINER_FEMALE | 
#line 4704
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4705
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4708
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .heldItem = ITEM_ORAN_BERRY,
#line 4710
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4709
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4712
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .heldItem = ITEM_ORAN_BERRY,
#line 4714
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4713
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4716
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_5] =
    {
#line 4717
        .trainerName = _("ISABEL"),
#line 4718
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4719
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4720
F_TRAINER_FEMALE | 
#line 4721
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4722
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4725
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .heldItem = ITEM_SITRUS_BERRY,
#line 4727
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4726
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4729
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .heldItem = ITEM_SITRUS_BERRY,
#line 4731
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4730
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4733
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 4734
        .trainerName = _("TIMOTHY"),
#line 4735
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4736
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4739
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4740
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4742
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4743
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4746
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
    {
#line 4747
        .trainerName = _("TIMOTHY"),
#line 4748
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4749
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4751
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4752
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4753
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4757
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4756
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4758
                MOVE_ARM_THRUST,
                MOVE_KNOCK_OFF,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 4763
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_3] =
    {
#line 4764
        .trainerName = _("TIMOTHY"),
#line 4765
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4766
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4768
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4769
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4770
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4772
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4774
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 4773
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4775
                MOVE_ARM_THRUST,
                MOVE_KNOCK_OFF,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 4780
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_4] =
    {
#line 4781
        .trainerName = _("TIMOTHY"),
#line 4782
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4783
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4785
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4786
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4787
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4789
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4791
            .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
#line 4790
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4792
                MOVE_ARM_THRUST,
                MOVE_BELLY_DRUM,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 4797
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_5] =
    {
#line 4798
        .trainerName = _("TIMOTHY"),
#line 4799
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4800
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4802
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4803
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4804
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4806
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4807
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4809
                MOVE_ARM_THRUST,
                MOVE_BELLY_DRUM,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 4814
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4815
        .trainerName = _("VICKY"),
#line 4816
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4817
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4818
F_TRAINER_FEMALE | 
#line 4819
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4820
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4821
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4823
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4825
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4824
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4826
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 4831
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 4832
        .trainerName = _("SHELBY"),
#line 4833
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4834
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4835
F_TRAINER_FEMALE | 
#line 4836
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4837
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4838
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4840
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4841
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4844
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4845
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4848
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
    {
#line 4849
        .trainerName = _("SHELBY"),
#line 4850
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4851
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4852
F_TRAINER_FEMALE | 
#line 4853
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4854
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4855
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4859
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4858
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4861
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4863
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 4862
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4865
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_3] =
    {
#line 4866
        .trainerName = _("SHELBY"),
#line 4867
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4868
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4869
F_TRAINER_FEMALE | 
#line 4870
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4871
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4872
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4874
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 4875
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4878
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4880
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 4879
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4882
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_4] =
    {
#line 4883
        .trainerName = _("SHELBY"),
#line 4884
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4885
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4886
F_TRAINER_FEMALE | 
#line 4887
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4888
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4889
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4891
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4893
            .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
#line 4892
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4895
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4897
            .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
#line 4896
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4899
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_5] =
    {
#line 4900
        .trainerName = _("SHELBY"),
#line 4901
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4902
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4903
F_TRAINER_FEMALE | 
#line 4904
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4905
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4906
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4908
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4910
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4909
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4912
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4913
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4916
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 4917
        .trainerName = _("CALVIN"),
#line 4918
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4919
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4922
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4925
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4926
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4929
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4930
        .trainerName = _("JOSH"),
#line 4931
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4932
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4934
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4938
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4940
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4939
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4941
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4943
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4944
        .trainerName = _("TOMMY"),
#line 4945
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4946
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4948
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4949
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4952
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4953
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4956
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4957
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4960
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4961
        .trainerName = _("BEN"),
#line 4962
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4963
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4965
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4966
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4970
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4972
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4977
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4979
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4978
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4980
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4985
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4986
        .trainerName = _("QUINCY"),
#line 4987
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4988
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4990
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4991
        .items = { ITEM_FULL_RESTORE },
#line 4992
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4993
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4995
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4997
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4996
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4998
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 5003
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5005
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5004
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5006
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5011
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 5012
        .trainerName = _("KATELYNN"),
#line 5013
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5014
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5015
F_TRAINER_FEMALE | 
#line 5016
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5017
        .items = { ITEM_FULL_RESTORE },
#line 5018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5019
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5021
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5023
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5022
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5024
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5029
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5031
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5030
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5032
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 5037
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
    {
#line 5038
        .trainerName = _("CALVIN"),
#line 5039
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5040
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5042
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5046
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5048
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5047
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5050
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_3] =
    {
#line 5051
        .trainerName = _("CALVIN"),
#line 5052
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5053
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5055
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5056
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5059
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5060
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5063
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5065
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5064
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5067
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_4] =
    {
#line 5068
        .trainerName = _("CALVIN"),
#line 5069
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5070
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5073
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5076
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5078
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5077
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5080
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5081
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5084
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5086
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5085
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5088
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_5] =
    {
#line 5089
        .trainerName = _("CALVIN"),
#line 5090
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5091
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5093
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5094
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5097
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5099
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5098
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5101
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5103
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5102
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5105
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5107
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5106
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5109
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 5110
        .trainerName = _("EDDIE"),
#line 5111
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5112
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5115
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5118
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5119
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5122
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5123
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5126
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 5127
        .trainerName = _("WALLACE"),
#line 5128
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 5129
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 5131
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5132
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 5133
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5134
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 5135
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5137
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5138
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5140
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 5145
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5146
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5148
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5153
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5154
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5156
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5161
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5162
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5164
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 5169
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5170
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5172
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 5177
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5177
            .heldItem = ITEM_SITRUS_BERRY,
#line 5179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5178
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5180
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5185
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 5186
        .trainerName = _("ELLIOT"),
#line 5187
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5188
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5190
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5191
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5194
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5195
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5198
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5199
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5202
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5203
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5206
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
    {
#line 5207
        .trainerName = _("ELLIOT"),
#line 5208
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5209
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5211
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5212
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5215
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5217
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5216
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5219
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5221
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5220
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5223
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5224
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5227
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_3] =
    {
#line 5228
        .trainerName = _("ELLIOT"),
#line 5229
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5230
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5232
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5233
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5236
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5237
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5240
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5241
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5244
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5246
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5245
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5248
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5250
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5249
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5252
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_4] =
    {
#line 5253
        .trainerName = _("ELLIOT"),
#line 5254
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5255
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5257
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5258
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5261
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5263
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5262
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5265
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5267
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5266
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5269
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5271
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5270
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5273
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5275
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5274
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5277
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_5] =
    {
#line 5278
        .trainerName = _("ELLIOT"),
#line 5279
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5280
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5282
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5283
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5286
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5288
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5287
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5290
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5292
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5291
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5294
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5296
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5295
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5298
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5300
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5299
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5302
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 5303
        .trainerName = _("BENJAMIN"),
#line 5304
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5305
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5307
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5308
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5311
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5312
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5315
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
    {
#line 5316
        .trainerName = _("BENJAMIN"),
#line 5317
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5318
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5320
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5321
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5324
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5326
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5325
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5328
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_3] =
    {
#line 5329
        .trainerName = _("BENJAMIN"),
#line 5330
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5331
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5337
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5339
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5338
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5341
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_4] =
    {
#line 5342
        .trainerName = _("BENJAMIN"),
#line 5343
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5344
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5346
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5347
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5350
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5352
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5351
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5354
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_5] =
    {
#line 5355
        .trainerName = _("BENJAMIN"),
#line 5356
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5357
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5359
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5360
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5363
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5365
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5364
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5367
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 5368
        .trainerName = _("ABIGAIL"),
#line 5369
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5370
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5371
F_TRAINER_FEMALE | 
#line 5372
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5373
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5376
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5377
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5380
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
    {
#line 5381
        .trainerName = _("ABIGAIL"),
#line 5382
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5383
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5384
F_TRAINER_FEMALE | 
#line 5385
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5389
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5390
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5393
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_3] =
    {
#line 5394
        .trainerName = _("ABIGAIL"),
#line 5395
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5396
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5397
F_TRAINER_FEMALE | 
#line 5398
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5404
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5403
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5406
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_4] =
    {
#line 5407
        .trainerName = _("ABIGAIL"),
#line 5408
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5409
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5410
F_TRAINER_FEMALE | 
#line 5411
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5412
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5415
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5417
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5416
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5419
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_5] =
    {
#line 5420
        .trainerName = _("ABIGAIL"),
#line 5421
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5422
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5423
F_TRAINER_FEMALE | 
#line 5424
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5425
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5428
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5430
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5429
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5432
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 5433
        .trainerName = _("DYLAN"),
#line 5434
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5435
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5437
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5438
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5441
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5442
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5445
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
    {
#line 5446
        .trainerName = _("DYLAN"),
#line 5447
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5448
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5450
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5451
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5454
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5455
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5458
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_3] =
    {
#line 5459
        .trainerName = _("DYLAN"),
#line 5460
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5461
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5463
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5464
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5467
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5468
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5471
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_4] =
    {
#line 5472
        .trainerName = _("DYLAN"),
#line 5473
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5474
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5476
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5477
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5480
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5482
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5481
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5484
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_5] =
    {
#line 5485
        .trainerName = _("DYLAN"),
#line 5486
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5487
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5489
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5490
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5493
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5495
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5494
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5497
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 5498
        .trainerName = _("MARIA"),
#line 5499
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5500
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5501
F_TRAINER_FEMALE | 
#line 5502
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5503
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5506
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5510
    [DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
    {
#line 5511
        .trainerName = _("MARIA"),
#line 5512
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5513
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5514
F_TRAINER_FEMALE | 
#line 5515
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5519
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5520
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_MARIA_3] =
    {
#line 5524
        .trainerName = _("MARIA"),
#line 5525
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5526
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5527
F_TRAINER_FEMALE | 
#line 5528
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5529
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5533
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5536
    [DIFFICULTY_NORMAL][TRAINER_MARIA_4] =
    {
#line 5537
        .trainerName = _("MARIA"),
#line 5538
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5539
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5540
F_TRAINER_FEMALE | 
#line 5541
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5545
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5547
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5546
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5549
    [DIFFICULTY_NORMAL][TRAINER_MARIA_5] =
    {
#line 5550
        .trainerName = _("MARIA"),
#line 5551
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5552
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5553
F_TRAINER_FEMALE | 
#line 5554
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5555
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5558
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5560
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5559
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5562
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5563
        .trainerName = _("DEMETRIUS"),
#line 5564
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5565
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5571
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5572
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5575
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5576
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5579
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 5580
        .trainerName = _("ISAIAH"),
#line 5581
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5582
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5584
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5585
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5588
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5589
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5592
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 5593
        .trainerName = _("PABLO"),
#line 5594
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5595
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5597
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5602
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5605
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5609
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
    {
#line 5610
        .trainerName = _("ISAIAH"),
#line 5611
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5612
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5614
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5615
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5619
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5622
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_3] =
    {
#line 5623
        .trainerName = _("ISAIAH"),
#line 5624
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5625
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5627
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5628
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5631
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5633
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5632
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5635
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_4] =
    {
#line 5636
        .trainerName = _("ISAIAH"),
#line 5637
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5638
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5640
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5644
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5646
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5645
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5648
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_5] =
    {
#line 5649
        .trainerName = _("ISAIAH"),
#line 5650
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5651
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5653
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5654
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5657
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5659
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5658
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5661
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 5662
        .trainerName = _("KATELYN"),
#line 5663
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5664
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5665
F_TRAINER_FEMALE | 
#line 5666
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5667
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5670
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5671
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5674
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
    {
#line 5675
        .trainerName = _("KATELYN"),
#line 5676
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5677
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5678
F_TRAINER_FEMALE | 
#line 5679
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5680
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5683
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5684
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5687
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_3] =
    {
#line 5688
        .trainerName = _("KATELYN"),
#line 5689
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5690
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5691
F_TRAINER_FEMALE | 
#line 5692
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5696
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5697
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5700
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_4] =
    {
#line 5701
        .trainerName = _("KATELYN"),
#line 5702
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5703
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5704
F_TRAINER_FEMALE | 
#line 5705
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5706
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5711
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5710
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5713
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_5] =
    {
#line 5714
        .trainerName = _("KATELYN"),
#line 5715
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5716
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5717
F_TRAINER_FEMALE | 
#line 5718
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5719
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5722
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5723
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5726
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 5727
        .trainerName = _("NICOLAS"),
#line 5728
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5729
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5731
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5732
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5735
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5737
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5736
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5739
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5741
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5740
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5743
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
    {
#line 5744
        .trainerName = _("NICOLAS"),
#line 5745
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5746
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5748
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5749
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5752
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 5753
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5756
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 5757
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5760
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_3] =
    {
#line 5761
        .trainerName = _("NICOLAS"),
#line 5762
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5763
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5765
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5766
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5769
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5771
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5770
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5773
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 5774
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5777
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_4] =
    {
#line 5778
        .trainerName = _("NICOLAS"),
#line 5779
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5780
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5782
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5783
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5786
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5788
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5787
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5790
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5791
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5794
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5795
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5798
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_5] =
    {
#line 5799
        .trainerName = _("NICOLAS"),
#line 5800
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5801
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5803
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5804
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5807
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5808
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5811
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5813
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5812
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5815
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .heldItem = ITEM_DRAGON_FANG,
#line 5817
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5816
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5819
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5820
        .trainerName = _("HUGH"),
#line 5821
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5822
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5824
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5825
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5828
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5829
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5832
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5833
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5836
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5837
        .trainerName = _("HUMBERTO"),
#line 5838
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5839
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5841
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5842
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5845
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5847
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5846
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5849
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5850
        .trainerName = _("EDWARDO"),
#line 5851
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5852
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5854
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5855
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5858
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5860
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5859
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5862
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5864
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5863
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5866
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 5867
        .trainerName = _("ROBERT"),
#line 5868
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5869
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5871
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5872
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5875
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5876
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5879
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
    {
#line 5880
        .trainerName = _("ROBERT"),
#line 5881
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5882
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5884
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5885
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5888
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5890
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5889
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5892
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5894
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5893
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5896
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_3] =
    {
#line 5897
        .trainerName = _("ROBERT"),
#line 5898
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5899
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5901
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5905
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5907
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5906
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5909
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5911
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5910
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5913
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_4] =
    {
#line 5914
        .trainerName = _("ROBERT"),
#line 5915
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5916
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5918
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5919
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5922
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5924
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5923
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5926
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5928
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 5927
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5930
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_5] =
    {
#line 5931
        .trainerName = _("ROBERT"),
#line 5932
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5933
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5935
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5936
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5939
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5941
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5940
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5943
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5945
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5944
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5947
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5948
        .trainerName = _("DIANNE"),
#line 5949
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5950
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5951
F_TRAINER_FEMALE | 
#line 5952
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5953
        .items = { ITEM_FULL_RESTORE },
#line 5954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5956
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5957
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5959
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5962
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5963
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5965
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5968
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5969
        .trainerName = _("JANI"),
#line 5970
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5971
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5972
F_TRAINER_FEMALE | 
#line 5973
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5977
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5980
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5981
        .trainerName = _("LAO"),
#line 5982
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5983
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5985
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5986
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5988
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5989
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5991
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5996
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5997
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5999
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6004
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6005
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6007
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 6012
    [DIFFICULTY_NORMAL][TRAINER_LAO_2] =
    {
#line 6013
        .trainerName = _("LAO"),
#line 6014
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6015
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6017
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6018
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6020
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6021
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6023
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6028
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6029
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6031
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6035
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6036
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6038
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6043
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6044
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6046
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6049
    [DIFFICULTY_NORMAL][TRAINER_LAO_3] =
    {
#line 6050
        .trainerName = _("LAO"),
#line 6051
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6052
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6054
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6055
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6057
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6059
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6058
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6060
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6065
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6066
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6068
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6073
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6075
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6074
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6076
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6080
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6081
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6083
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6086
    [DIFFICULTY_NORMAL][TRAINER_LAO_4] =
    {
#line 6087
        .trainerName = _("LAO"),
#line 6088
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6089
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6091
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6092
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6094
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6095
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6097
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6101
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6103
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6102
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6104
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6108
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6110
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6109
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6111
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6115
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6117
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6116
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6118
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6121
    [DIFFICULTY_NORMAL][TRAINER_LAO_5] =
    {
#line 6122
        .trainerName = _("LAO"),
#line 6123
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6124
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6126
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6127
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6129
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6130
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6132
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6136
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6137
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6139
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6144
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6146
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6145
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6147
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6152
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6152
            .heldItem = ITEM_SMOKE_BALL,
#line 6154
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6153
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6155
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6158
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 6159
        .trainerName = _("JOCELYN"),
#line 6160
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6161
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6162
F_TRAINER_FEMALE | 
#line 6163
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6164
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6167
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6168
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6171
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 6172
        .trainerName = _("LAURA"),
#line 6173
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6174
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6175
F_TRAINER_FEMALE | 
#line 6176
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6180
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6182
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6181
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6184
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 6185
        .trainerName = _("CYNDY"),
#line 6186
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6187
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6188
F_TRAINER_FEMALE | 
#line 6189
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6190
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6193
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6194
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6197
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6199
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6198
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6201
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 6202
        .trainerName = _("CORA"),
#line 6203
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6204
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6205
F_TRAINER_FEMALE | 
#line 6206
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6207
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6210
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6212
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6211
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6214
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 6215
        .trainerName = _("PAULA"),
#line 6216
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6217
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6218
F_TRAINER_FEMALE | 
#line 6219
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6220
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6223
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6225
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6224
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6227
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
    {
#line 6228
        .trainerName = _("CYNDY"),
#line 6229
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6230
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6231
F_TRAINER_FEMALE | 
#line 6232
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6233
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6236
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 6237
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6240
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6242
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 6241
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6244
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_3] =
    {
#line 6245
        .trainerName = _("CYNDY"),
#line 6246
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6247
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6248
F_TRAINER_FEMALE | 
#line 6249
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6253
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6254
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6257
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6259
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6258
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6261
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_4] =
    {
#line 6262
        .trainerName = _("CYNDY"),
#line 6263
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6264
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6265
F_TRAINER_FEMALE | 
#line 6266
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6267
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6270
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6272
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6271
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6274
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6276
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6275
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6278
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_5] =
    {
#line 6279
        .trainerName = _("CYNDY"),
#line 6280
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6281
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6282
F_TRAINER_FEMALE | 
#line 6283
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6284
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6287
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6289
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6288
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6291
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6293
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 6292
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6295
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 6296
        .trainerName = _("MADELINE"),
#line 6297
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6298
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6299
F_TRAINER_FEMALE | 
#line 6300
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6304
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6305
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6307
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6312
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
#line 6313
        .trainerName = _("MADELINE"),
#line 6314
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6315
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6316
F_TRAINER_FEMALE | 
#line 6317
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6318
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6321
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6323
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6322
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6324
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6329
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
    {
#line 6330
        .trainerName = _("MADELINE"),
#line 6331
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6332
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6333
F_TRAINER_FEMALE | 
#line 6334
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6335
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6338
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6340
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6339
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6341
                MOVE_EMBER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6346
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
    {
#line 6347
        .trainerName = _("MADELINE"),
#line 6348
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6349
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6350
F_TRAINER_FEMALE | 
#line 6351
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6352
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6355
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6357
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6356
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6358
                MOVE_LEECH_SEED,
                MOVE_MEGA_DRAIN,
                MOVE_GRASS_WHISTLE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6363
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6365
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6364
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6366
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6371
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
    {
#line 6372
        .trainerName = _("MADELINE"),
#line 6373
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6374
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6375
F_TRAINER_FEMALE | 
#line 6376
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6377
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6380
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6382
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6381
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6383
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6388
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6390
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6389
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6391
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6396
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 6397
        .trainerName = _("JENNY"),
#line 6398
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6399
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6400
F_TRAINER_FEMALE | 
#line 6401
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6405
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6406
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6409
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 6410
        .trainerName = _("KAYLEE"),
#line 6411
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6412
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6413
F_TRAINER_FEMALE | 
#line 6414
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6415
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6418
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6419
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6422
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6423
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
#line 6427
        .trainerName = _("JENNY"),
#line 6428
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6429
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6430
F_TRAINER_FEMALE | 
#line 6431
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6432
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6435
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6436
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6439
    [DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
    {
#line 6440
        .trainerName = _("JENNY"),
#line 6441
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6442
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6443
F_TRAINER_FEMALE | 
#line 6444
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6445
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6448
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6449
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6452
    [DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
    {
#line 6453
        .trainerName = _("JENNY"),
#line 6454
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6455
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6456
F_TRAINER_FEMALE | 
#line 6457
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6458
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6461
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6462
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6465
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6466
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6469
    [DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
    {
#line 6470
        .trainerName = _("JENNY"),
#line 6471
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6472
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6473
F_TRAINER_FEMALE | 
#line 6474
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6475
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6478
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6479
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6482
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6483
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6486
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6487
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6491
        .trainerName = _("MARTHA"),
#line 6492
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6493
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6494
F_TRAINER_FEMALE | 
#line 6495
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6496
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6499
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6500
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6503
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6504
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6507
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 6508
        .trainerName = _("DIANA"),
#line 6509
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6510
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6511
F_TRAINER_FEMALE | 
#line 6512
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6513
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6516
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6517
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6520
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6521
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6524
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6525
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6528
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6529
        .trainerName = _("CEDRIC"),
#line 6530
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6531
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6533
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6537
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6538
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6540
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
#line 6546
        .trainerName = _("DIANA"),
#line 6547
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6548
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6549
F_TRAINER_FEMALE | 
#line 6550
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6555
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6558
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6559
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6562
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6563
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6566
    [DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
    {
#line 6567
        .trainerName = _("DIANA"),
#line 6568
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6569
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6570
F_TRAINER_FEMALE | 
#line 6571
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6572
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6575
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6577
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6576
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6579
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6580
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6583
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6584
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6587
    [DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
    {
#line 6588
        .trainerName = _("DIANA"),
#line 6589
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6590
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6591
F_TRAINER_FEMALE | 
#line 6592
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6593
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6596
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6598
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6597
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6600
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6601
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6604
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6606
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6605
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6608
    [DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
    {
#line 6609
        .trainerName = _("DIANA"),
#line 6610
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6611
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6612
F_TRAINER_FEMALE | 
#line 6613
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6614
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6617
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6619
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6618
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6621
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6623
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6622
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6625
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6626
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 6630
        .trainerName = _("AMY & LIV"),
#line 6631
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6632
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6634
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6635
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6639
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6642
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6643
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
#line 6647
        .trainerName = _("AMY & LIV"),
#line 6648
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6649
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6651
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6652
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6656
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6660
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6663
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6664
        .trainerName = _("GINA & MIA"),
#line 6665
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6666
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6668
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6669
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6672
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6673
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6676
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6680
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_3] =
    {
#line 6681
        .trainerName = _("AMY & LIV"),
#line 6682
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6683
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6685
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6686
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6689
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6690
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6693
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6694
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6697
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
    {
#line 6698
        .trainerName = _("GINA & MIA"),
#line 6699
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6700
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6702
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6703
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6706
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6707
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6709
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 6712
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6713
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6715
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6718
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
    {
#line 6719
        .trainerName = _("AMY & LIV"),
#line 6720
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6721
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6723
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6724
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6727
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6729
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6728
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6731
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6732
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6735
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
    {
#line 6736
        .trainerName = _("AMY & LIV"),
#line 6737
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6738
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6740
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6741
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6744
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6746
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6745
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6747
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 6752
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6753
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6755
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 6760
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_6] =
    {
#line 6761
        .trainerName = _("AMY & LIV"),
#line 6762
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6763
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6765
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6766
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6769
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6771
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6770
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6772
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 6777
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6779
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6778
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6780
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 6785
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6786
        .trainerName = _("ERNEST"),
#line 6787
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6788
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6790
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6791
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6794
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6795
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6798
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6799
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6802
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6803
        .trainerName = _("DWAYNE"),
#line 6804
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6805
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6807
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6808
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6811
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6812
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6815
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6816
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6819
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6820
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6823
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6824
        .trainerName = _("PHILLIP"),
#line 6825
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6826
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6828
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6829
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6832
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6833
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6836
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6837
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6840
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6841
        .trainerName = _("LEONARD"),
#line 6842
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6843
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6845
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6846
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6850
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6853
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6854
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6857
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6858
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6861
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6862
        .trainerName = _("DUNCAN"),
#line 6863
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6864
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6866
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6867
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6870
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6871
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6874
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6875
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6878
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
#line 6879
        .trainerName = _("ERNEST"),
#line 6880
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6881
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6883
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6884
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6887
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6888
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6891
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6892
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6895
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6897
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6896
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6899
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
    {
#line 6900
        .trainerName = _("ERNEST"),
#line 6901
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6902
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6904
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6905
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6908
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6910
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6909
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6912
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6914
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6913
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6916
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6918
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6917
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6920
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
    {
#line 6921
        .trainerName = _("ERNEST"),
#line 6922
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6923
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6925
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6926
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6929
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6931
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6930
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6933
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6934
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6937
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6938
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6941
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
    {
#line 6942
        .trainerName = _("ERNEST"),
#line 6943
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6944
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6946
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6947
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6950
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6951
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6954
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6955
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6958
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6959
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6963
        .trainerName = _("ELI"),
#line 6964
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6965
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6967
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6972
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6975
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6976
        .trainerName = _("ANNIKA"),
#line 6977
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6978
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6979
F_TRAINER_FEMALE | 
#line 6980
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6984
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .heldItem = ITEM_ORAN_BERRY,
#line 6986
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6985
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6987
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6992
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .heldItem = ITEM_ORAN_BERRY,
#line 6994
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6993
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6995
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 7000
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 7001
        .trainerName = _("EDWIN"),
#line 7002
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7003
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7005
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7006
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7009
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7010
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7013
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7014
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7017
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7018
        .trainerName = _("TABITHA"),
#line 7019
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7020
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7022
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7023
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7026
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7028
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7027
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7030
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7032
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7031
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7034
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7035
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7038
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
#line 7039
        .trainerName = _("EDWIN"),
#line 7040
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7041
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7043
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7044
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7047
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7048
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7051
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7052
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7055
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
    {
#line 7056
        .trainerName = _("EDWIN"),
#line 7057
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7058
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7060
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7061
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7064
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7065
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7068
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7069
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7072
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
    {
#line 7073
        .trainerName = _("EDWIN"),
#line 7074
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7075
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7077
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7078
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7081
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7082
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7085
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7086
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7089
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
    {
#line 7090
        .trainerName = _("EDWIN"),
#line 7091
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7092
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7094
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7098
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7099
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7102
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7103
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 7107
        .trainerName = _("WALLY"),
#line 7108
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7109
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7111
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7112
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7113
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7114
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7116
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7118
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7117
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7119
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7124
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7126
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7125
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7127
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7132
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7134
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7133
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7135
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7140
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7141
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7143
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7148
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7150
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7149
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7151
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7156
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7157
        .trainerName = _("BRENDAN"),
#line 7158
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7159
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7161
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7163
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7165
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7166
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7169
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7170
        .trainerName = _("BRENDAN"),
#line 7171
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7172
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7174
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7175
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7176
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7178
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7179
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7182
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7183
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7186
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7187
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7190
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7191
        .trainerName = _("BRENDAN"),
#line 7192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7193
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7196
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7199
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7200
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7203
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7204
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7207
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7209
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7208
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7211
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7212
        .trainerName = _("BRENDAN"),
#line 7213
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7214
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7217
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7220
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7221
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7224
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7225
        .trainerName = _("BRENDAN"),
#line 7226
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7227
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7233
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7234
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7237
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7239
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7238
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7241
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7243
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7242
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7245
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7246
        .trainerName = _("BRENDAN"),
#line 7247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7248
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7250
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7251
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7252
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7254
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7256
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7255
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7258
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7260
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7259
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7262
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7264
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7263
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7266
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7267
        .trainerName = _("BRENDAN"),
#line 7268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7269
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7271
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7273
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7275
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7276
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7279
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7280
        .trainerName = _("BRENDAN"),
#line 7281
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7282
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7285
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7286
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7288
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7289
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7292
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7294
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7293
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7296
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7298
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7297
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7300
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7301
        .trainerName = _("BRENDAN"),
#line 7302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7303
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7309
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7311
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7310
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7313
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7315
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7314
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7317
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7319
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7318
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7321
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7322
        .trainerName = _("MAY"),
#line 7323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7324
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7325
F_TRAINER_FEMALE | 
#line 7326
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7327
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7328
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7330
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7331
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7334
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7335
        .trainerName = _("MAY"),
#line 7336
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7337
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7338
F_TRAINER_FEMALE | 
#line 7339
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7340
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7343
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7345
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7344
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7347
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7349
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7348
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7351
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7353
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7352
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7355
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7356
        .trainerName = _("MAY"),
#line 7357
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7358
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7359
F_TRAINER_FEMALE | 
#line 7360
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7362
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7364
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7366
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7365
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7368
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7370
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7369
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7372
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7374
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7373
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7376
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7377
        .trainerName = _("MAY"),
#line 7378
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7379
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7380
F_TRAINER_FEMALE | 
#line 7381
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7382
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7385
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7386
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7389
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7390
        .trainerName = _("MAY"),
#line 7391
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7392
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7393
F_TRAINER_FEMALE | 
#line 7394
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7395
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7396
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7398
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7400
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7399
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7402
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7403
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7406
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7407
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7411
        .trainerName = _("MAY"),
#line 7412
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7413
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7414
F_TRAINER_FEMALE | 
#line 7415
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7416
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7417
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7421
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7420
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7423
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7425
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7424
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7427
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7428
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7431
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7432
        .trainerName = _("MAY"),
#line 7433
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7434
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7435
F_TRAINER_FEMALE | 
#line 7436
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7437
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7438
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7440
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7441
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7444
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7445
        .trainerName = _("MAY"),
#line 7446
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7447
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7448
F_TRAINER_FEMALE | 
#line 7449
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7450
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7451
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7453
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7455
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7454
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7457
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7458
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7461
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7463
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7462
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7465
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7466
        .trainerName = _("MAY"),
#line 7467
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7468
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7469
F_TRAINER_FEMALE | 
#line 7470
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7471
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7472
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7474
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7475
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7478
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7480
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7479
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7482
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7483
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7486
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 7487
        .trainerName = _("ISAAC"),
#line 7488
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7489
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7491
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7492
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7495
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7496
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7499
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7500
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7503
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7504
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7507
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7508
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7511
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7512
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7515
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7516
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7519
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 7520
        .trainerName = _("MITCHELL"),
#line 7521
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7522
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7524
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7525
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7526
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7528
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7529
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7531
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7536
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7537
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7539
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 7544
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
#line 7545
        .trainerName = _("ISAAC"),
#line 7546
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7547
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7549
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7550
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7553
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7555
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7554
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7557
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7559
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7558
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7561
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7562
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7565
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7567
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7566
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7569
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7571
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7570
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7573
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7575
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7574
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7577
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_3] =
    {
#line 7578
        .trainerName = _("ISAAC"),
#line 7579
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7580
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7582
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7583
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7587
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7590
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7591
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7594
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7596
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7595
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7598
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7599
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7602
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7603
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7606
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7607
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7610
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_4] =
    {
#line 7611
        .trainerName = _("ISAAC"),
#line 7612
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7613
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7615
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7616
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7619
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7620
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7623
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7625
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7624
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7627
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7629
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7628
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7631
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7633
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7632
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7635
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7636
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7639
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7640
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7643
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_5] =
    {
#line 7644
        .trainerName = _("ISAAC"),
#line 7645
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7646
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7649
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7652
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7653
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7656
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7658
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7657
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7660
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7661
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7664
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7666
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7665
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7668
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7670
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7669
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7672
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7674
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7673
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7676
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7677
        .trainerName = _("LYDIA"),
#line 7678
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7679
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7680
F_TRAINER_FEMALE | 
#line 7681
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7685
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7686
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7689
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7690
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7693
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7694
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7697
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7698
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7701
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7702
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7705
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7706
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7709
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7710
        .trainerName = _("HALLE"),
#line 7711
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7712
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7713
F_TRAINER_FEMALE | 
#line 7714
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7715
        .items = { ITEM_FULL_RESTORE },
#line 7716
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7717
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7719
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7720
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7723
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7724
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7727
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7728
        .trainerName = _("GARRISON"),
#line 7729
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7730
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 7732
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7736
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7737
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7740
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
#line 7741
        .trainerName = _("LYDIA"),
#line 7742
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7743
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7744
F_TRAINER_FEMALE | 
#line 7745
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7746
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7749
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7751
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7750
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7753
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7754
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7757
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7758
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7761
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7762
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7765
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7766
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7769
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7771
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7770
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7773
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_3] =
    {
#line 7774
        .trainerName = _("LYDIA"),
#line 7775
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7776
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7777
F_TRAINER_FEMALE | 
#line 7778
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7779
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7782
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7783
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7786
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7788
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7787
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7790
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7792
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7791
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7794
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7795
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7798
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7800
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7799
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7802
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7804
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7803
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7806
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_4] =
    {
#line 7807
        .trainerName = _("LYDIA"),
#line 7808
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7809
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7810
F_TRAINER_FEMALE | 
#line 7811
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7812
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7815
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7816
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7819
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7820
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7823
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7824
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7827
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7829
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7828
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7831
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7832
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7835
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7837
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7836
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7839
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_5] =
    {
#line 7840
        .trainerName = _("LYDIA"),
#line 7841
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7842
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7843
F_TRAINER_FEMALE | 
#line 7844
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7845
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7848
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7849
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7852
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7854
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7853
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7856
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7857
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7860
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7861
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7864
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7865
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7868
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7870
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7869
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7872
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7873
        .trainerName = _("JACKSON"),
#line 7874
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7875
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7877
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7878
        .items = { ITEM_FULL_RESTORE },
#line 7879
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7880
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7882
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7883
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7886
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
    {
#line 7887
        .trainerName = _("JACKSON"),
#line 7888
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7889
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7891
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7892
        .items = { ITEM_FULL_RESTORE },
#line 7893
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7896
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 7897
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7900
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_3] =
    {
#line 7901
        .trainerName = _("JACKSON"),
#line 7902
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7903
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7905
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7906
        .items = { ITEM_FULL_RESTORE },
#line 7907
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7908
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7910
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7911
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_4] =
    {
#line 7915
        .trainerName = _("JACKSON"),
#line 7916
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7917
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7919
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7920
        .items = { ITEM_FULL_RESTORE },
#line 7921
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7924
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7926
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 7925
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7928
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_5] =
    {
#line 7929
        .trainerName = _("JACKSON"),
#line 7930
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7931
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7933
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7934
        .items = { ITEM_FULL_RESTORE },
#line 7935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7936
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7939
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7942
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7943
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7947
        .trainerName = _("CATHERINE"),
#line 7948
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7949
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7950
F_TRAINER_FEMALE | 
#line 7951
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7952
        .items = { ITEM_FULL_RESTORE },
#line 7953
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7956
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7958
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7957
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7960
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7961
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7964
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
#line 7965
        .trainerName = _("CATHERINE"),
#line 7966
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7967
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7968
F_TRAINER_FEMALE | 
#line 7969
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7970
        .items = { ITEM_FULL_RESTORE },
#line 7971
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7974
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7976
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 7975
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7978
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 7979
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7982
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
    {
#line 7983
        .trainerName = _("CATHERINE"),
#line 7984
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7985
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7986
F_TRAINER_FEMALE | 
#line 7987
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7988
        .items = { ITEM_FULL_RESTORE },
#line 7989
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7990
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7992
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7994
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7993
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7996
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7998
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7997
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8000
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
    {
#line 8001
        .trainerName = _("CATHERINE"),
#line 8002
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8003
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 8004
F_TRAINER_FEMALE | 
#line 8005
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8006
        .items = { ITEM_FULL_RESTORE },
#line 8007
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8010
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8012
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8011
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8014
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8016
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8015
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8018
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
    {
#line 8019
        .trainerName = _("CATHERINE"),
#line 8020
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 8021
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 8022
F_TRAINER_FEMALE | 
#line 8023
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8024
        .items = { ITEM_FULL_RESTORE },
#line 8025
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8026
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8028
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 8029
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 8033
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 8037
        .trainerName = _("JULIO"),
#line 8038
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8039
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 8041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8045
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8046
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8049
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 8050
        .trainerName = _("GRUNT"),
#line 8051
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8052
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 8054
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8055
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8058
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8060
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8059
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8062
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8063
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8066
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 8067
        .trainerName = _("GRUNT"),
#line 8068
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8069
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 8070
F_TRAINER_FEMALE | 
#line 8071
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8072
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8075
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8076
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8079
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8080
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8083
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 8084
        .trainerName = _("GRUNT"),
#line 8085
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8086
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 8087
F_TRAINER_FEMALE | 
#line 8088
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8089
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8092
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8093
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8096
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8097
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8100
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 8101
        .trainerName = _("GRUNT"),
#line 8102
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8103
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8105
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8109
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8111
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8110
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8113
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8115
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8114
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 8118
        .trainerName = _("MARC"),
#line 8119
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8120
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8122
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8123
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8126
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 8127
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8130
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 8131
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8134
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 8135
        .trainerName = _("BRENDEN"),
#line 8136
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8137
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 8139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8140
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8143
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8145
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8144
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8147
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 8148
        .trainerName = _("LILITH"),
#line 8149
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8150
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8151
F_TRAINER_FEMALE | 
#line 8152
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8153
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8156
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8158
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8157
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8160
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 8161
        .trainerName = _("CRISTIAN"),
#line 8162
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8163
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8165
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8166
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8169
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8171
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8170
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8173
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 8174
        .trainerName = _("GRUNT"),
#line 8175
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8176
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8178
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8179
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8182
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8183
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8186
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 8187
        .trainerName = _("TERRY"),
#line 8188
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8189
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8190
F_TRAINER_FEMALE | 
#line 8191
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8195
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8196
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8199
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8200
        .trainerName = _("GRUNT"),
#line 8201
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8202
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8203
F_TRAINER_FEMALE | 
#line 8204
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8205
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8208
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8209
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8212
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8213
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8216
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8217
        .trainerName = _("GRUNT"),
#line 8218
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8219
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8221
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8222
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8225
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8226
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8229
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8230
        .trainerName = _("GRUNT"),
#line 8231
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8232
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8234
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8235
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8238
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8239
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8242
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8243
        .trainerName = _("GRUNT"),
#line 8244
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8245
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8247
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8248
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8251
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8252
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8255
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8256
        .trainerName = _("GRUNT"),
#line 8257
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8258
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8260
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8261
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8264
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8265
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8268
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8269
        .trainerName = _("BRENDAN"),
#line 8270
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8271
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8274
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8277
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8279
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8278
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8281
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8283
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8282
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8285
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8286
        .trainerName = _("BRENDAN"),
#line 8287
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8288
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8290
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8291
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8294
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8296
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8295
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8298
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8300
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8299
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8302
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8303
        .trainerName = _("GRUNT"),
#line 8304
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8305
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 8306
F_TRAINER_FEMALE | 
#line 8307
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8308
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8311
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8312
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8315
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8316
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8319
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8320
        .trainerName = _("TABITHA"),
#line 8321
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8322
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8324
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8325
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8326
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8328
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8330
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8329
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8332
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8334
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8333
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8336
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8338
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8337
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8340
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8342
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8341
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8344
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8345
        .trainerName = _("BRENDAN"),
#line 8346
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8347
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8349
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8351
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8353
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8355
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8354
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8357
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8359
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8358
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8361
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8362
        .trainerName = _("MAY"),
#line 8363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8364
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8365
F_TRAINER_FEMALE | 
#line 8366
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8367
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8370
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8372
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8371
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8374
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8375
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8378
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8379
        .trainerName = _("MAXIE"),
#line 8380
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8381
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8383
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8384
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8385
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8388
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8390
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8389
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8392
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8394
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8393
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8396
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8397
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8400
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 8401
        .trainerName = _("MAXIE"),
#line 8402
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8403
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8405
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8406
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8407
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8408
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8410
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8411
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8414
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8416
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8415
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8418
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8420
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8419
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8422
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 8423
        .trainerName = _("HALEY"),
#line 8424
        .trainerClass = TRAINER_CLASS_LASS,
#line 8425
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8426
F_TRAINER_FEMALE | 
#line 8427
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8428
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8431
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8432
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8435
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8436
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8439
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 8440
        .trainerName = _("VIVI"),
#line 8441
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8442
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8443
F_TRAINER_FEMALE | 
#line 8444
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8445
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8446
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8448
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8450
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8449
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8452
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8454
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8453
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8456
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8458
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8457
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8460
    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
#line 8461
        .trainerName = _("HALEY"),
#line 8462
        .trainerClass = TRAINER_CLASS_LASS,
#line 8463
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8464
F_TRAINER_FEMALE | 
#line 8465
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8466
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8469
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8471
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8470
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8473
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8475
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8474
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8477
    [DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
    {
#line 8478
        .trainerName = _("HALEY"),
#line 8479
        .trainerClass = TRAINER_CLASS_LASS,
#line 8480
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8481
F_TRAINER_FEMALE | 
#line 8482
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8483
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8486
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8487
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8490
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8491
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8494
    [DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
    {
#line 8495
        .trainerName = _("HALEY"),
#line 8496
        .trainerClass = TRAINER_CLASS_LASS,
#line 8497
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8498
F_TRAINER_FEMALE | 
#line 8499
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8500
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8503
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8504
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8507
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8509
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8508
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8511
    [DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
    {
#line 8512
        .trainerName = _("HALEY"),
#line 8513
        .trainerClass = TRAINER_CLASS_LASS,
#line 8514
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8515
F_TRAINER_FEMALE | 
#line 8516
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8517
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8520
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8521
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8524
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8526
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8525
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8528
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8530
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8529
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8532
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 8533
        .trainerName = _("SALLY"),
#line 8534
        .trainerClass = TRAINER_CLASS_LASS,
#line 8535
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8536
F_TRAINER_FEMALE | 
#line 8537
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8538
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8541
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8542
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8545
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 8546
        .trainerName = _("ROBIN"),
#line 8547
        .trainerClass = TRAINER_CLASS_LASS,
#line 8548
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8549
F_TRAINER_FEMALE | 
#line 8550
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8554
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8555
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8558
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8559
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8562
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8563
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8566
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 8567
        .trainerName = _("ANDREA"),
#line 8568
        .trainerClass = TRAINER_CLASS_LASS,
#line 8569
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8570
F_TRAINER_FEMALE | 
#line 8571
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8572
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8575
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8577
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8576
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8579
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 8580
        .trainerName = _("CRISSY"),
#line 8581
        .trainerClass = TRAINER_CLASS_LASS,
#line 8582
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8583
F_TRAINER_FEMALE | 
#line 8584
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8585
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8588
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8590
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8589
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8592
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8594
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8593
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8596
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 8597
        .trainerName = _("LYLE"),
#line 8598
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8599
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8601
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8602
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8605
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8606
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8609
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8610
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8613
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8614
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8617
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8618
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8621
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 8622
        .trainerName = _("JAMES"),
#line 8623
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8624
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8626
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8630
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8634
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8635
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
#line 8639
        .trainerName = _("JAMES"),
#line 8640
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8641
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8643
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8648
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8651
    [DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
    {
#line 8652
        .trainerName = _("JAMES"),
#line 8653
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8654
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8656
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8657
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8660
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8661
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8664
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8665
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8668
    [DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
    {
#line 8669
        .trainerName = _("JAMES"),
#line 8670
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8671
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8673
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8674
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8677
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8678
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8681
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8682
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8685
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8687
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8686
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8689
    [DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
    {
#line 8690
        .trainerName = _("JAMES"),
#line 8691
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8692
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8695
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8698
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8699
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8702
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8704
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8703
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8706
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8708
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8707
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8710
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8711
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 8715
        .trainerName = _("TRENT"),
#line 8716
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8717
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8719
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8720
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8723
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8724
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8727
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8728
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8731
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8732
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8735
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 8736
        .trainerName = _("LUCAS"),
#line 8737
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8738
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8740
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8741
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8744
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8745
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8748
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8749
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8752
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 8753
        .trainerName = _("ALAN"),
#line 8754
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8755
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8757
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8761
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8762
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8765
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8766
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8769
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8770
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8773
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8774
        .trainerName = _("ERIC"),
#line 8775
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8776
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8778
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8779
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8782
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8783
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8786
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8787
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8790
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
    {
#line 8791
        .trainerName = _("LUCAS"),
#line 8792
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8793
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8795
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8796
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8799
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8800
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8802
                MOVE_SPLASH,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 8805
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
#line 8806
        .trainerName = _("MIKE"),
#line 8807
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8808
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8810
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8811
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8814
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8815
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8817
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 8820
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8821
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8823
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 8826
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
#line 8827
        .trainerName = _("MIKE"),
#line 8828
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8829
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8831
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8835
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8836
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8839
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8840
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8843
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8844
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8847
    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
#line 8848
        .trainerName = _("TRENT"),
#line 8849
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8850
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8853
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8856
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8858
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8857
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8860
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8862
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8861
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8864
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8865
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8868
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8870
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8869
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8872
    [DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
    {
#line 8873
        .trainerName = _("TRENT"),
#line 8874
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8875
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8877
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8878
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8881
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8883
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8882
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8885
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8886
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8889
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8891
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8890
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8893
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8895
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8894
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8897
    [DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
    {
#line 8898
        .trainerName = _("TRENT"),
#line 8899
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8900
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8902
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8906
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8908
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8907
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8910
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8912
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8911
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8914
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8915
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8918
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8920
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8919
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8922
    [DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
    {
#line 8923
        .trainerName = _("TRENT"),
#line 8924
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8925
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8927
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8928
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8931
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8932
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8935
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8937
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8936
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8939
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8940
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8943
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8945
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8944
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8947
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8948
        .trainerName = _("DEZ & LUKE"),
#line 8949
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8950
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8952
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8953
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8956
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8957
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8960
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8961
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8964
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8965
        .trainerName = _("LEA & JED"),
#line 8966
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8967
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8969
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8970
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8973
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8974
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8977
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8978
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8981
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 8982
        .trainerName = _("KIRA & DAN"),
#line 8983
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8984
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8986
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8987
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8990
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8991
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8994
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8995
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8998
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
#line 8999
        .trainerName = _("KIRA & DAN"),
#line 9000
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9001
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9003
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9004
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9007
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9009
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9008
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9011
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9012
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9015
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
    {
#line 9016
        .trainerName = _("KIRA & DAN"),
#line 9017
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9018
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9020
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9021
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9024
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9026
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 9025
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9028
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9030
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 9029
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9032
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
    {
#line 9033
        .trainerName = _("KIRA & DAN"),
#line 9034
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9035
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9037
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9038
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9041
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9043
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9042
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9045
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9047
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9046
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9049
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
    {
#line 9050
        .trainerName = _("KIRA & DAN"),
#line 9051
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9052
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9054
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9055
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9058
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9059
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9062
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9064
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9063
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9066
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 9067
        .trainerName = _("JOHANNA"),
#line 9068
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9069
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9070
F_TRAINER_FEMALE | 
#line 9071
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9072
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9075
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9076
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9079
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 9080
        .trainerName = _("GERALD"),
#line 9081
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9082
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9084
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9085
        .items = { ITEM_HYPER_POTION },
#line 9086
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9087
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9089
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9091
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9090
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9092
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 9097
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 9098
        .trainerName = _("VIVIAN"),
#line 9099
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9100
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9101
F_TRAINER_FEMALE | 
#line 9102
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9106
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9108
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9107
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9109
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9114
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9115
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9117
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9122
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 9123
        .trainerName = _("DANIELLE"),
#line 9124
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9125
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9126
F_TRAINER_FEMALE | 
#line 9127
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9128
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9131
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9132
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9134
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9139
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 9140
        .trainerName = _("FLINT"),
#line 9141
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9142
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9145
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9148
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9150
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9149
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9152
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9154
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9153
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9156
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 9157
        .trainerName = _("ASHLEY"),
#line 9158
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9159
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9160
F_TRAINER_FEMALE | 
#line 9161
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9165
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9167
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9166
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9169
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9170
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9173
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9174
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9177
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 9178
        .trainerName = _("WALLY"),
#line 9179
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9180
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9183
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9184
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9186
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9187
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9190
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
#line 9191
        .trainerName = _("WALLY"),
#line 9192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9193
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9196
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9197
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9198
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9200
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9201
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9203
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9208
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9210
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9209
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9211
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9216
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9218
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9217
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9219
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9224
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9226
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9225
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9227
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9232
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9233
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9235
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9240
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
    {
#line 9241
        .trainerName = _("WALLY"),
#line 9242
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9243
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9246
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9247
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9248
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9250
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9252
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9251
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9253
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9258
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9259
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9261
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9266
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9268
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9267
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9269
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9274
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9275
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9277
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9282
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9283
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9285
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9290
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
    {
#line 9291
        .trainerName = _("WALLY"),
#line 9292
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9293
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9295
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9296
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9297
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9298
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9300
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9302
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9301
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9303
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9308
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9309
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9316
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9318
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9317
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9319
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9324
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9326
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9325
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9327
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9332
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9334
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9333
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9335
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9340
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
    {
#line 9341
        .trainerName = _("WALLY"),
#line 9342
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9343
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9345
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9346
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9347
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9350
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9352
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9351
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9353
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9358
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9359
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9361
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9366
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9367
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9369
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9374
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9375
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9377
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9382
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9384
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9383
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9385
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9390
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9391
        .trainerName = _("BRENDAN"),
#line 9392
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9393
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9395
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9396
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9397
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9399
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9401
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9400
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9403
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9404
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9407
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9409
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9408
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9411
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9413
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9412
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9415
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 9416
        .trainerName = _("BRENDAN"),
#line 9417
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9418
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9420
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9421
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9424
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9426
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9425
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9428
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9429
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9432
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9433
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9436
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9437
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9440
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 9441
        .trainerName = _("BRENDAN"),
#line 9442
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9443
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9445
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9446
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9450
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9453
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9455
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9454
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9457
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9458
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9461
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9462
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 9466
        .trainerName = _("MAY"),
#line 9467
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9468
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9469
F_TRAINER_FEMALE | 
#line 9470
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9471
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9472
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9475
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9478
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9479
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9482
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9483
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9486
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9487
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9491
        .trainerName = _("MAY"),
#line 9492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9493
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9494
F_TRAINER_FEMALE | 
#line 9495
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9496
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9497
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9499
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9500
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9503
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9505
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9504
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9507
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9509
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9508
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9511
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9513
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9512
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9515
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9516
        .trainerName = _("MAY"),
#line 9517
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9518
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9519
F_TRAINER_FEMALE | 
#line 9520
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9521
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9522
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9524
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9526
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9525
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9528
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9530
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9529
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9532
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9534
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9533
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9536
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9538
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9537
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9540
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 9541
        .trainerName = _("KOJI"),
#line 9542
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9543
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9545
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9549
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9550
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9553
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 9554
        .trainerName = _("JOHN & JAY"),
#line 9555
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9556
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9558
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9559
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9560
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9562
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9564
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9563
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9565
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9570
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9572
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9571
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9573
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9578
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
#line 9579
        .trainerName = _("JOHN & JAY"),
#line 9580
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9581
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9583
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9584
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9585
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9587
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9589
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9588
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9590
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9595
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9596
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9598
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9603
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_3] =
    {
#line 9604
        .trainerName = _("JOHN & JAY"),
#line 9605
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9606
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9608
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9609
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9610
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9612
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 9613
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9615
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9620
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9622
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 9621
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9623
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9628
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_4] =
    {
#line 9629
        .trainerName = _("JOHN & JAY"),
#line 9630
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9631
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9633
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9634
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9637
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9639
            .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
#line 9638
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9640
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9645
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9647
            .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
#line 9646
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9648
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9653
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_5] =
    {
#line 9654
        .trainerName = _("JOHN & JAY"),
#line 9655
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9656
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9658
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9659
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9660
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9662
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9664
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9663
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9665
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9670
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9672
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9671
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9673
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9678
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 9679
        .trainerName = _("LILA & ROY"),
#line 9680
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9681
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9683
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9684
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9687
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9688
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9691
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9692
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9695
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
#line 9696
        .trainerName = _("LILA & ROY"),
#line 9697
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9698
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9700
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9701
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9704
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9705
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9708
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9709
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9712
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
    {
#line 9713
        .trainerName = _("LILA & ROY"),
#line 9714
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9715
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9717
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9718
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9721
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9722
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9725
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9726
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9729
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
    {
#line 9730
        .trainerName = _("LILA & ROY"),
#line 9731
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9732
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9734
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9735
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9738
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9739
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9742
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9743
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9746
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
    {
#line 9747
        .trainerName = _("LILA & ROY"),
#line 9748
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9749
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9751
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9752
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9755
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9756
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9759
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9760
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9763
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 9764
        .trainerName = _("LISA & RAY"),
#line 9765
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9766
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9768
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9769
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9772
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9773
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9776
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9777
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9780
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 9781
        .trainerName = _("CHRIS"),
#line 9782
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9783
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9785
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9786
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9789
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9790
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9793
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9794
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9797
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9798
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9801
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9802
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9805
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9806
        .trainerName = _("MAXIE"),
#line 9807
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9808
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9810
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9811
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9814
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9816
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9815
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9818
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9819
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9822
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9824
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9823
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 9827
        .trainerName = _("ANDRES"),
#line 9828
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9829
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9831
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9835
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9836
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9839
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9840
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9844
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 9845
        .trainerName = _("CORY"),
#line 9846
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9847
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9849
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9850
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9853
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9854
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9857
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9858
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9861
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9862
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9865
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9866
        .trainerName = _("BRYANT"),
#line 9867
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9868
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9870
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9871
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9874
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9875
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9878
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9879
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9882
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 9883
        .trainerName = _("CRISTIN"),
#line 9884
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9885
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9886
F_TRAINER_FEMALE | 
#line 9887
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9888
        .items = { ITEM_HYPER_POTION },
#line 9889
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9890
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9892
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9894
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9893
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9896
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9898
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9897
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9900
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9901
        .trainerName = _("MAY"),
#line 9902
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9903
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9904
F_TRAINER_FEMALE | 
#line 9905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9907
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9909
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9911
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9910
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9913
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9914
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9917
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9918
        .trainerName = _("MAY"),
#line 9919
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9920
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9921
F_TRAINER_FEMALE | 
#line 9922
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9923
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9924
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9926
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9928
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9927
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9930
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9932
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9931
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9934
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
#line 9935
        .trainerName = _("ROXANNE"),
#line 9936
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9937
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9938
F_TRAINER_FEMALE | 
#line 9939
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9940
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9941
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9942
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9944
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9945
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9947
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 9952
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9952
            .heldItem = ITEM_SITRUS_BERRY,
#line 9954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9953
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9955
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9960
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9961
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9963
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9968
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9968
            .heldItem = ITEM_SITRUS_BERRY,
#line 9970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9969
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9971
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 9976
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
    {
#line 9977
        .trainerName = _("ROXANNE"),
#line 9978
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9979
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 9980
F_TRAINER_FEMALE | 
#line 9981
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9982
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9983
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9984
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9986
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9987
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9989
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 9994
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9995
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9997
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 10002
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10002
            .heldItem = ITEM_SITRUS_BERRY,
#line 10004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10003
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10005
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10010
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10011
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10013
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10018
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10018
            .heldItem = ITEM_SITRUS_BERRY,
#line 10020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10019
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10021
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 10026
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
    {
#line 10027
        .trainerName = _("ROXANNE"),
#line 10028
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10029
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 10030
F_TRAINER_FEMALE | 
#line 10031
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10032
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10033
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10034
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10036
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10037
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10039
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 10044
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10045
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10047
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 10052
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .heldItem = ITEM_SITRUS_BERRY,
#line 10054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10053
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10055
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10060
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10061
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10063
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10068
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10068
            .heldItem = ITEM_SITRUS_BERRY,
#line 10070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10069
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10071
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 10076
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
    {
#line 10077
        .trainerName = _("ROXANNE"),
#line 10078
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10079
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 10080
F_TRAINER_FEMALE | 
#line 10081
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10082
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10083
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10084
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10086
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10087
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10089
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 10094
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10095
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10097
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 10102
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10103
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10105
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 10110
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10110
            .heldItem = ITEM_SITRUS_BERRY,
#line 10112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10111
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10113
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10118
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10119
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10121
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10126
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10126
            .heldItem = ITEM_SITRUS_BERRY,
#line 10128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10127
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10129
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 10134
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
#line 10135
        .trainerName = _("BRAWLY"),
#line 10136
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10137
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 10139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10140
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10141
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10142
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10144
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .heldItem = ITEM_SITRUS_BERRY,
#line 10146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10145
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10147
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10152
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10153
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10155
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10160
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10161
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10163
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10168
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10168
            .heldItem = ITEM_SITRUS_BERRY,
#line 10170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10169
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10171
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10176
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
    {
#line 10177
        .trainerName = _("BRAWLY"),
#line 10178
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10179
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 10181
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10182
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10183
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10184
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10186
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10186
            .heldItem = ITEM_SITRUS_BERRY,
#line 10188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10187
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10189
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10194
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10195
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10197
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10202
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10203
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10205
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10210
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10210
            .heldItem = ITEM_SITRUS_BERRY,
#line 10212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10211
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10213
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10218
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
    {
#line 10219
        .trainerName = _("BRAWLY"),
#line 10220
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10221
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 10223
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10224
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10225
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10226
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10228
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10229
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10231
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10236
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10236
            .heldItem = ITEM_SITRUS_BERRY,
#line 10238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10237
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10239
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10244
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10245
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10247
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10252
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10253
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10255
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10260
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10260
            .heldItem = ITEM_SITRUS_BERRY,
#line 10262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10261
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10263
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10268
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
    {
#line 10269
        .trainerName = _("BRAWLY"),
#line 10270
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10271
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 10273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10274
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10275
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10276
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10278
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10279
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10281
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 10286
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10287
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10289
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10294
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .heldItem = ITEM_SITRUS_BERRY,
#line 10296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10295
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10297
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 10302
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10303
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10305
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10310
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10311
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10313
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 10318
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10318
            .heldItem = ITEM_SITRUS_BERRY,
#line 10320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10319
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10321
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10326
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
#line 10327
        .trainerName = _("WATTSON"),
#line 10328
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10329
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10331
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10332
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10333
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10334
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10336
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10337
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10339
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10344
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10345
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10347
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10352
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10352
            .heldItem = ITEM_SITRUS_BERRY,
#line 10354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10353
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10355
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10360
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10360
            .heldItem = ITEM_SITRUS_BERRY,
#line 10362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10361
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10363
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10368
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
    {
#line 10369
        .trainerName = _("WATTSON"),
#line 10370
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10371
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10373
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10374
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10375
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10378
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10379
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10381
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 10386
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10387
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10389
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10394
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10395
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10397
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10402
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10402
            .heldItem = ITEM_SITRUS_BERRY,
#line 10404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10403
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10405
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10410
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10410
            .heldItem = ITEM_SITRUS_BERRY,
#line 10412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10411
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10413
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10418
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
    {
#line 10419
        .trainerName = _("WATTSON"),
#line 10420
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10421
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10423
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10424
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10425
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10426
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10428
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10429
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10431
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10436
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10437
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10439
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10444
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10445
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10447
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10452
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10452
            .heldItem = ITEM_SITRUS_BERRY,
#line 10454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10453
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10455
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10460
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10460
            .heldItem = ITEM_SITRUS_BERRY,
#line 10462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10461
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10463
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10468
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
    {
#line 10469
        .trainerName = _("WATTSON"),
#line 10470
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10471
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10473
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10474
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10475
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10476
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10478
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10479
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10481
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10486
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10487
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10489
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 10494
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10495
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10497
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10502
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10503
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10505
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10510
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .heldItem = ITEM_SITRUS_BERRY,
#line 10512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10511
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10513
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10518
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10518
            .heldItem = ITEM_SITRUS_BERRY,
#line 10520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10519
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10521
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10526
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
#line 10527
        .trainerName = _("FLANNERY"),
#line 10528
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10529
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10530
F_TRAINER_FEMALE | 
#line 10531
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10532
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10533
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10534
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10536
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10536
            .heldItem = ITEM_WHITE_HERB,
#line 10538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10537
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10539
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10544
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10545
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10547
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10552
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .heldItem = ITEM_WHITE_HERB,
#line 10554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10553
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10555
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10560
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10560
            .heldItem = ITEM_WHITE_HERB,
#line 10562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10561
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10563
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10568
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
    {
#line 10569
        .trainerName = _("FLANNERY"),
#line 10570
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10571
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10572
F_TRAINER_FEMALE | 
#line 10573
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10574
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10575
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10576
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10578
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10579
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10581
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10586
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10586
            .heldItem = ITEM_WHITE_HERB,
#line 10588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10587
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10589
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10594
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10595
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10597
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10602
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10602
            .heldItem = ITEM_WHITE_HERB,
#line 10604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10603
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10605
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10610
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10610
            .heldItem = ITEM_WHITE_HERB,
#line 10612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10611
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10613
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10618
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
    {
#line 10619
        .trainerName = _("FLANNERY"),
#line 10620
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10621
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10622
F_TRAINER_FEMALE | 
#line 10623
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10624
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10625
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10626
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10628
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10629
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10631
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10636
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10637
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10639
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10644
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10644
            .heldItem = ITEM_WHITE_HERB,
#line 10646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10645
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10647
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10652
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10653
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10655
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10660
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10660
            .heldItem = ITEM_WHITE_HERB,
#line 10662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10661
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10663
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10668
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10668
            .heldItem = ITEM_WHITE_HERB,
#line 10670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10669
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10671
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10676
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
    {
#line 10677
        .trainerName = _("FLANNERY"),
#line 10678
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10679
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 10680
F_TRAINER_FEMALE | 
#line 10681
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10682
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10683
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10684
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10686
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10687
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10689
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 10694
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10694
            .heldItem = ITEM_WHITE_HERB,
#line 10696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10695
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10697
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10702
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10703
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10705
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 10710
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10711
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10713
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 10718
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10718
            .heldItem = ITEM_WHITE_HERB,
#line 10720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10719
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10721
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 10726
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10726
            .heldItem = ITEM_WHITE_HERB,
#line 10728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10727
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10729
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 10734
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
#line 10735
        .trainerName = _("NORMAN"),
#line 10736
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10737
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10740
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10741
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10742
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10744
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10745
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10747
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10752
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10752
            .heldItem = ITEM_SITRUS_BERRY,
#line 10754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10753
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10755
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10760
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10761
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10763
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10768
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10768
            .heldItem = ITEM_SITRUS_BERRY,
#line 10770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10769
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10771
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10776
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
    {
#line 10777
        .trainerName = _("NORMAN"),
#line 10778
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10779
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10782
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10783
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10784
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10786
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10786
            .heldItem = ITEM_SITRUS_BERRY,
#line 10788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10787
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10789
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10794
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10795
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10797
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10802
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10803
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10805
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10810
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10811
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10813
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10818
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .heldItem = ITEM_SITRUS_BERRY,
#line 10820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10819
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10821
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10826
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
    {
#line 10827
        .trainerName = _("NORMAN"),
#line 10828
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10829
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10831
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10832
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10833
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10834
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10836
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10836
            .heldItem = ITEM_SITRUS_BERRY,
#line 10838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10837
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10839
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10844
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10845
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10847
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10852
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10853
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10855
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10860
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10861
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10863
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10868
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10868
            .heldItem = ITEM_SITRUS_BERRY,
#line 10870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10869
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10871
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10876
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
    {
#line 10877
        .trainerName = _("NORMAN"),
#line 10878
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10879
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 10881
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10882
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10883
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10884
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10886
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10886
            .heldItem = ITEM_SITRUS_BERRY,
#line 10888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10887
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10889
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10894
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10895
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10897
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 10902
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10903
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10905
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 10910
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10911
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10913
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10918
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10919
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10921
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10926
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10926
            .heldItem = ITEM_SITRUS_BERRY,
#line 10928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10927
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10929
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10934
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10935
        .trainerName = _("WINONA"),
#line 10936
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10937
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10938
F_TRAINER_FEMALE | 
#line 10939
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10940
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10941
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10942
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10944
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10944
            .heldItem = ITEM_SITRUS_BERRY,
#line 10946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10945
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10947
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 10952
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10953
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10955
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10960
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10961
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10963
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10968
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10969
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10971
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 10976
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10976
            .heldItem = ITEM_CHESTO_BERRY,
#line 10978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10977
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10979
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 10984
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10985
        .trainerName = _("WINONA"),
#line 10986
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10987
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 10988
F_TRAINER_FEMALE | 
#line 10989
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10990
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10991
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10992
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10994
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10995
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10997
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 11002
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11003
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11005
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11010
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11010
            .heldItem = ITEM_SITRUS_BERRY,
#line 11012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11011
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11013
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11018
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11019
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11021
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11026
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11027
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11029
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11034
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11034
            .heldItem = ITEM_CHESTO_BERRY,
#line 11036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11035
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11037
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11042
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 11043
        .trainerName = _("WINONA"),
#line 11044
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11045
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 11046
F_TRAINER_FEMALE | 
#line 11047
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11048
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11049
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11050
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11052
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11053
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11055
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 11060
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11061
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11063
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11068
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11068
            .heldItem = ITEM_SITRUS_BERRY,
#line 11070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11069
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11071
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11076
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11077
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11079
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11084
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11085
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11087
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11092
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11092
            .heldItem = ITEM_CHESTO_BERRY,
#line 11094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11093
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11095
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11100
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 11101
        .trainerName = _("WINONA"),
#line 11102
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11103
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 11104
F_TRAINER_FEMALE | 
#line 11105
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11106
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11107
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11108
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11110
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11111
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11113
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 11118
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11119
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11121
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11126
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11127
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11129
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11134
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11134
            .heldItem = ITEM_SITRUS_BERRY,
#line 11136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11135
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11137
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11142
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11143
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11145
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11150
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11150
            .heldItem = ITEM_CHESTO_BERRY,
#line 11152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11151
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11153
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11158
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 11159
        .trainerName = _("TATE&LIZA"),
#line 11160
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11161
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11163
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11164
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11165
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11166
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11168
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11169
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11171
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11176
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11177
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11179
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11184
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11184
            .heldItem = ITEM_CHESTO_BERRY,
#line 11186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11185
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11187
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11192
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11192
            .heldItem = ITEM_CHESTO_BERRY,
#line 11194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11193
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11195
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11200
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11200
            .heldItem = ITEM_SITRUS_BERRY,
#line 11202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11201
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11203
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11208
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 11209
        .trainerName = _("TATE&LIZA"),
#line 11210
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11211
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11213
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11214
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11215
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11216
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11218
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11219
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11221
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11226
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11227
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11229
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11234
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11235
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11237
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11242
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11242
            .heldItem = ITEM_CHESTO_BERRY,
#line 11244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11243
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11245
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11250
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11250
            .heldItem = ITEM_CHESTO_BERRY,
#line 11252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11251
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11253
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11258
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11258
            .heldItem = ITEM_SITRUS_BERRY,
#line 11260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11259
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11261
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11266
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 11267
        .trainerName = _("TATE&LIZA"),
#line 11268
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11269
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11271
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11272
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11273
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11274
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11276
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11277
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11279
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11284
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11285
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11287
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11292
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11293
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11295
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11300
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11300
            .heldItem = ITEM_CHESTO_BERRY,
#line 11302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11301
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11303
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11308
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11308
            .heldItem = ITEM_CHESTO_BERRY,
#line 11310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11309
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11311
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11316
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11316
            .heldItem = ITEM_SITRUS_BERRY,
#line 11318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11317
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11319
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11324
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 11325
        .trainerName = _("TATE&LIZA"),
#line 11326
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11327
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11329
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11330
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11331
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11332
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11334
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11335
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11337
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11342
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11343
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11345
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11350
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11351
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11353
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11358
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11358
            .heldItem = ITEM_CHESTO_BERRY,
#line 11360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11359
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11361
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11366
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11366
            .heldItem = ITEM_CHESTO_BERRY,
#line 11368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11367
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11369
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11374
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11374
            .heldItem = ITEM_SITRUS_BERRY,
#line 11376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11375
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11377
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11382
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
#line 11383
        .trainerName = _("JUAN"),
#line 11384
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11385
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11387
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11388
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11389
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11390
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11392
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11393
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11395
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11400
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11401
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11403
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11408
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11409
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11411
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11416
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11416
            .heldItem = ITEM_CHESTO_BERRY,
#line 11418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11417
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11419
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11424
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11424
            .heldItem = ITEM_CHESTO_BERRY,
#line 11426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11425
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11427
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11432
    [DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
    {
#line 11433
        .trainerName = _("JUAN"),
#line 11434
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11435
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11437
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11438
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11439
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11440
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11442
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11443
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11445
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11450
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11451
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11453
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11458
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11459
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11461
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11466
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11466
            .heldItem = ITEM_CHESTO_BERRY,
#line 11468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11467
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11469
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11474
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11474
            .heldItem = ITEM_CHESTO_BERRY,
#line 11476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11475
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11477
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11482
    [DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
    {
#line 11483
        .trainerName = _("JUAN"),
#line 11484
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11485
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11487
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11488
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11489
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11490
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11492
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11493
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11495
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11500
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11501
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11503
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11508
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11509
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11511
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 11516
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11517
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11519
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11524
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11524
            .heldItem = ITEM_CHESTO_BERRY,
#line 11526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11525
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11527
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11532
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11532
            .heldItem = ITEM_CHESTO_BERRY,
#line 11534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11533
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11535
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11540
    [DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
    {
#line 11541
        .trainerName = _("JUAN"),
#line 11542
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11543
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11545
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11546
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11547
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11548
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11550
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11551
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11553
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11558
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11559
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11561
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11566
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11567
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11569
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11574
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11575
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11577
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11582
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11582
            .heldItem = ITEM_CHESTO_BERRY,
#line 11584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11583
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11585
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11590
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11590
            .heldItem = ITEM_CHESTO_BERRY,
#line 11592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11591
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11593
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11598
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 11599
        .trainerName = _("ANGELO"),
#line 11600
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11601
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 11603
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11604
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11605
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11607
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11609
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11608
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11610
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11614
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11616
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11615
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11617
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11621
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 11622
        .trainerName = _("DARIUS"),
#line 11623
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11624
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 11626
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11628
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11630
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11632
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11631
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11634
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 11635
        .trainerName = _("STEVEN"),
#line 11636
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11637
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 11639
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11640
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11642
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11644
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11645
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11647
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11652
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11653
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11655
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11660
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11661
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11663
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11668
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11669
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11671
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11676
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11678
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11677
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11679
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11684
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11684
            .heldItem = ITEM_SITRUS_BERRY,
#line 11686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11685
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11687
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11692
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 11693
        .trainerName = _("ANABEL"),
#line 11694
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11695
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 11696
F_TRAINER_FEMALE | 
#line 11697
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11698
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11699
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11701
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11702
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11705
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 11706
        .trainerName = _("TUCKER"),
#line 11707
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11708
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 11710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11711
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11712
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11714
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11715
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11718
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 11719
        .trainerName = _("SPENSER"),
#line 11720
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11721
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 11723
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11725
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11727
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11728
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11731
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11732
        .trainerName = _("GRETA"),
#line 11733
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11734
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11735
F_TRAINER_FEMALE | 
#line 11736
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11738
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11740
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11741
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11744
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11745
        .trainerName = _("NOLAND"),
#line 11746
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11747
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11749
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11751
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11753
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11754
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11757
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11758
        .trainerName = _("LUCY"),
#line 11759
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11760
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11761
F_TRAINER_FEMALE | 
#line 11762
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11763
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11764
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11766
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11767
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11770
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11771
        .trainerName = _("BRANDON"),
#line 11772
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11773
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11775
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11776
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11777
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11779
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11780
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11783
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 11784
        .trainerName = _("ANDRES"),
#line 11785
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11786
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11788
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11789
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11792
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11794
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11793
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11796
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11798
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11797
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11800
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 11801
        .trainerName = _("ANDRES"),
#line 11802
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11803
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11805
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11809
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11811
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11810
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11813
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11815
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11814
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11817
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11819
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11818
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11821
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 11822
        .trainerName = _("ANDRES"),
#line 11823
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11824
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11826
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11827
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11830
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11832
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11831
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11834
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11836
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11835
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11838
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11840
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11839
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11842
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 11843
        .trainerName = _("ANDRES"),
#line 11844
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11845
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11847
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11848
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11851
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11853
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11852
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11855
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11857
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11856
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11859
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11861
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11860
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11863
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 11864
        .trainerName = _("CORY"),
#line 11865
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11866
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11868
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11869
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11872
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11874
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11873
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11876
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11878
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11877
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11880
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11882
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11881
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11884
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 11885
        .trainerName = _("CORY"),
#line 11886
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11887
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11890
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11893
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11895
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11894
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11897
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11899
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11898
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11901
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11903
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11902
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11905
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 11906
        .trainerName = _("CORY"),
#line 11907
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11908
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11911
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11914
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11916
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11915
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11918
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11920
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11919
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11922
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11924
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11923
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11926
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 11927
        .trainerName = _("CORY"),
#line 11928
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11929
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11931
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11932
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11935
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11937
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11936
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11939
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11941
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11940
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11943
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11945
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11944
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11947
    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
#line 11948
        .trainerName = _("PABLO"),
#line 11949
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11950
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 11952
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11953
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11956
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11958
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11957
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11960
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11962
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11961
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11964
    [DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
    {
#line 11965
        .trainerName = _("PABLO"),
#line 11966
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11967
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 11969
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11970
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11973
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11975
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11974
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11977
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11979
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11978
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11981
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11983
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 11982
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11985
    [DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
    {
#line 11986
        .trainerName = _("PABLO"),
#line 11987
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11988
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 11990
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11991
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11994
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11996
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11995
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11998
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12000
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11999
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12002
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12004
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12003
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12006
    [DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
    {
#line 12007
        .trainerName = _("PABLO"),
#line 12008
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12009
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 12011
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12012
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12015
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12017
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12016
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12019
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12021
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12020
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12023
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12025
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12024
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12027
    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
#line 12028
        .trainerName = _("KOJI"),
#line 12029
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 12030
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 12032
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12033
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12036
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12038
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12037
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12040
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12042
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12041
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12044
    [DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
    {
#line 12045
        .trainerName = _("KOJI"),
#line 12046
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 12047
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 12049
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12053
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12055
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12054
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12057
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12059
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12058
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12061
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12063
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12062
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12065
    [DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
    {
#line 12066
        .trainerName = _("KOJI"),
#line 12067
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 12068
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 12070
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12071
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12074
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12076
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12075
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12078
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12080
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12079
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12082
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12084
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12083
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12086
    [DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
    {
#line 12087
        .trainerName = _("KOJI"),
#line 12088
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 12089
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 12091
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12092
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12095
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12097
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12096
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12099
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12101
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12100
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12103
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12105
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12104
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12107
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
#line 12108
        .trainerName = _("CRISTIN"),
#line 12109
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12110
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 12111
F_TRAINER_FEMALE | 
#line 12112
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12113
        .items = { ITEM_HYPER_POTION },
#line 12114
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12115
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12117
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12119
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 12118
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12121
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12123
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 12122
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12125
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
    {
#line 12126
        .trainerName = _("CRISTIN"),
#line 12127
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12128
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 12129
F_TRAINER_FEMALE | 
#line 12130
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12131
        .items = { ITEM_HYPER_POTION },
#line 12132
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12133
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12135
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12137
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 12136
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12139
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12141
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 12140
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12143
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12145
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 12144
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12147
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
    {
#line 12148
        .trainerName = _("CRISTIN"),
#line 12149
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12150
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 12151
F_TRAINER_FEMALE | 
#line 12152
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12153
        .items = { ITEM_HYPER_POTION },
#line 12154
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12155
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12157
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12159
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12158
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12161
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12163
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 12162
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12165
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12167
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12166
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12169
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
    {
#line 12170
        .trainerName = _("CRISTIN"),
#line 12171
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12172
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 12173
F_TRAINER_FEMALE | 
#line 12174
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12175
        .items = { ITEM_HYPER_POTION },
#line 12176
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12177
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12179
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12181
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 12180
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12183
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12185
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 12184
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12187
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12189
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 12188
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12191
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
#line 12192
        .trainerName = _("FERNANDO"),
#line 12193
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12194
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 12196
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12197
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12200
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12202
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12201
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12204
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12206
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12205
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12208
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12210
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12209
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12212
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
    {
#line 12213
        .trainerName = _("FERNANDO"),
#line 12214
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12215
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 12217
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12218
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12221
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12223
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12222
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12225
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12227
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12226
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12229
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12231
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12230
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12233
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
    {
#line 12234
        .trainerName = _("FERNANDO"),
#line 12235
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12236
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 12238
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12239
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12242
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12244
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12243
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12246
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12248
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12247
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12250
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12252
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12251
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12254
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
    {
#line 12255
        .trainerName = _("FERNANDO"),
#line 12256
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12257
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 12259
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12260
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12263
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12265
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12264
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12267
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12269
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12268
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12271
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12273
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12272
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12275
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
#line 12276
        .trainerName = _("SAWYER"),
#line 12277
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12278
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12280
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12281
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12282
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12284
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12286
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12285
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12288
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12290
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12289
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12292
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
    {
#line 12293
        .trainerName = _("SAWYER"),
#line 12294
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12295
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12297
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12298
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12299
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12301
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12303
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12302
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12305
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12307
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12306
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12309
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12311
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12310
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12313
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
    {
#line 12314
        .trainerName = _("SAWYER"),
#line 12315
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12316
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12318
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12319
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12320
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12322
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12324
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12323
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12326
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12328
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12327
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12330
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12332
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12331
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12334
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
    {
#line 12335
        .trainerName = _("SAWYER"),
#line 12336
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12337
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12339
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12340
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12343
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12345
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12344
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12347
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12349
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12348
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12351
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12353
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12352
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12355
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
#line 12356
        .trainerName = _("GABRIELLE"),
#line 12357
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12358
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 12359
F_TRAINER_FEMALE | 
#line 12360
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12364
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12366
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12365
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12368
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12370
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12369
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12372
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12374
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12373
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12376
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12378
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12377
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12380
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12382
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12381
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12384
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12386
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12385
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12388
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_3] =
    {
#line 12389
        .trainerName = _("GABRIELLE"),
#line 12390
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12391
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 12392
F_TRAINER_FEMALE | 
#line 12393
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12394
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12397
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12399
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12398
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12401
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12403
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12402
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12405
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12407
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12406
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12409
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12411
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12410
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12413
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12415
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12414
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12417
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12419
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12418
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12421
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_4] =
    {
#line 12422
        .trainerName = _("GABRIELLE"),
#line 12423
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12424
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 12425
F_TRAINER_FEMALE | 
#line 12426
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12430
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12432
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12431
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12434
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12436
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12435
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12438
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12440
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12439
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12442
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12444
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12443
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12446
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12448
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12447
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12450
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12452
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12451
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12454
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_5] =
    {
#line 12455
        .trainerName = _("GABRIELLE"),
#line 12456
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12457
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 12458
F_TRAINER_FEMALE | 
#line 12459
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12460
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12463
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12465
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12464
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12467
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12469
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12468
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12471
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12473
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12472
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12475
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12477
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12476
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12479
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12481
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12480
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12483
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12485
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12484
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12487
    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
#line 12488
        .trainerName = _("THALIA"),
#line 12489
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 12490
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 12491
F_TRAINER_FEMALE | 
#line 12492
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12493
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12496
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12498
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12497
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12500
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12502
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 12501
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12504
    [DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
    {
#line 12505
        .trainerName = _("THALIA"),
#line 12506
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 12507
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 12508
F_TRAINER_FEMALE | 
#line 12509
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12510
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12513
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12515
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12514
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12517
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12519
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12518
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12521
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12523
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 12522
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12525
    [DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
    {
#line 12526
        .trainerName = _("THALIA"),
#line 12527
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 12528
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 12529
F_TRAINER_FEMALE | 
#line 12530
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12531
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12534
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12536
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12535
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12538
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12540
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12539
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12542
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12544
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 12543
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12546
    [DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
    {
#line 12547
        .trainerName = _("THALIA"),
#line 12548
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 12549
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 12550
F_TRAINER_FEMALE | 
#line 12551
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12552
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12555
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12557
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12556
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12559
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12561
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12560
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12563
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12565
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12564
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12567
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 12568
        .trainerName = _("MARIELA"),
#line 12569
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12570
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 12571
F_TRAINER_FEMALE | 
#line 12572
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12573
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12575
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12576
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12579
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 12580
        .trainerName = _("ALVARO"),
#line 12581
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12582
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 12584
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12585
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12587
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12588
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12591
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12592
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12595
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 12596
        .trainerName = _("EVERETT"),
#line 12597
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12598
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 12600
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 12601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12603
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12604
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12607
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 12608
        .trainerName = _("RED"),
#line 12609
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12610
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 12612
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12613
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12615
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12616
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12619
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 12620
        .trainerName = _("LEAF"),
#line 12621
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12622
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 12623
F_TRAINER_FEMALE | 
#line 12624
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12625
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12627
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12628
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12631
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 12632
        .trainerName = _("BRENDAN"),
#line 12633
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12634
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 12636
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12637
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12639
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12640
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12643
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 12644
        .trainerName = _("MAY"),
#line 12645
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12646
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 12647
F_TRAINER_FEMALE | 
#line 12648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12649
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12651
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12652
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12659
    [DIFFICULTY_NORMAL][TRAINER_NATALIE] =
    {
#line 12660
        .trainerName = _("Natalie"),
#line 12661
        .trainerClass = TRAINER_CLASS_LASS,
#line 12662
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 12663
F_TRAINER_FEMALE | 
#line 12664
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12668
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12669
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12672
    [DIFFICULTY_NORMAL][TRAINER_TRISTAN] =
    {
#line 12673
        .trainerName = _("Tristan"),
#line 12674
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12675
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12677
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12678
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12681
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12682
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12685
    [DIFFICULTY_NORMAL][TRAINER_LOGAN] =
    {
#line 12686
        .trainerName = _("Logan"),
#line 12687
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12688
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12691
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12694
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12695
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12700
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 12701
        .trainerName = _("Sebastian"),
#line 12702
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12703
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12705
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12706
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12709
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12710
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12713
    [DIFFICULTY_NORMAL][TRAINER_MICHAEL] =
    {
#line 12714
        .trainerName = _("Michael"),
#line 12715
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12716
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12718
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12719
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12722
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12723
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12726
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12727
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12730
    [DIFFICULTY_NORMAL][TRAINER_KAITLIN] =
    {
#line 12731
        .trainerName = _("Kaitlin"),
#line 12732
        .trainerClass = TRAINER_CLASS_LASS,
#line 12733
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 12734
F_TRAINER_FEMALE | 
#line 12735
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12736
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12739
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12740
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12743
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12744
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12747
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12748
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12751
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12752
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12755
    [DIFFICULTY_NORMAL][TRAINER_DALLAS] =
    {
#line 12756
        .trainerName = _("Dallas"),
#line 12757
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12758
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12760
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12761
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12764
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12765
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12768
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 12769
        .trainerName = _("Madeline"),
#line 12770
        .trainerClass = TRAINER_CLASS_LASS,
#line 12771
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 12772
F_TRAINER_FEMALE | 
#line 12773
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12774
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12777
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12778
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12781
    [DIFFICULTY_NORMAL][TRAINER_BARRY_ROUTE_203_TURTWIG] =
    {
#line 12782
        .trainerName = _("Barry"),
#line 12783
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12784
        .trainerPic = TRAINER_PIC_BARRY,
        .encounterMusic_gender =
#line 12786
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12787
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12790
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12792
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12791
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12794
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12796
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12795
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12798
    [DIFFICULTY_NORMAL][TRAINER_BARRY_ROUTE_203_PIPLUP] =
    {
#line 12799
        .trainerName = _("Barry"),
#line 12800
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12801
        .trainerPic = TRAINER_PIC_BARRY,
        .encounterMusic_gender =
#line 12803
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12804
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12807
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12809
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12808
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12811
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12813
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12812
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12815
    [DIFFICULTY_NORMAL][TRAINER_BARRY_ROUTE_203_CHIMCHAR] =
    {
#line 12816
        .trainerName = _("Barry"),
#line 12817
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12818
        .trainerPic = TRAINER_PIC_BARRY,
        .encounterMusic_gender =
#line 12820
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12821
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12824
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12826
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12825
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12828
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12830
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 12829
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12834
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 12835
        .trainerName = _("Sarah"),
#line 12836
        .trainerClass = TRAINER_CLASS_LASS,
#line 12837
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 12838
F_TRAINER_FEMALE | 
#line 12839
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12840
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12843
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12844
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12847
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 12848
        .trainerName = _("Samantha"),
#line 12849
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 12850
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 12851
F_TRAINER_FEMALE | 
#line 12852
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12853
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12856
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12857
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12860
    [DIFFICULTY_NORMAL][TRAINER_TYLER] =
    {
#line 12861
        .trainerName = _("Tyler"),
#line 12862
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12863
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 12865
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12866
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12869
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12870
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12875
    [DIFFICULTY_NORMAL][TRAINER_BRANDON1] =
    {
#line 12876
        .trainerName = _("Brandon"),
#line 12877
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 12878
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 12880
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12881
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12884
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12885
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12888
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12889
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12892
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 12893
        .trainerName = _("Taylor"),
#line 12894
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 12895
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 12896
F_TRAINER_FEMALE | 
#line 12897
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12898
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12901
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12902
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12905
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12906
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12909
    [DIFFICULTY_NORMAL][TRAINER_LIV_AND_LIZ] =
    {
#line 12910
        .trainerName = _("Liv & Liz"),
#line 12911
        .trainerClass = TRAINER_CLASS_TWINS,
#line 12912
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 12914
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 12915
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 12916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12918
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12919
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12922
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12923
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12928
    [DIFFICULTY_NORMAL][TRAINER_DANIEL] =
    {
#line 12929
        .trainerName = _("Daniel"),
#line 12930
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12931
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12933
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12937
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12938
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12941
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12942
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12945
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12946
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12949
    [DIFFICULTY_NORMAL][TRAINER_ELIZABETH] =
    {
#line 12950
        .trainerName = _("Elizabeth"),
#line 12951
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 12952
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 12953
F_TRAINER_FEMALE | 
#line 12954
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12955
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12958
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12959
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12962
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 12963
        .trainerName = _("Jacob"),
#line 12964
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 12965
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 12967
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12971
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12972
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12975
    [DIFFICULTY_NORMAL][TRAINER_SIENA] =
    {
#line 12976
        .trainerName = _("Siena"),
#line 12977
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 12978
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 12979
F_TRAINER_FEMALE | 
#line 12980
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12984
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12985
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12988
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12989
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12992
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 12993
        .trainerName = _("Nicholas"),
#line 12994
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12995
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 12997
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12998
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13001
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13002
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13005
    [DIFFICULTY_NORMAL][TRAINER_KELSEY] =
    {
#line 13006
        .trainerName = _("Kelsey"),
#line 13007
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 13008
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 13009
F_TRAINER_FEMALE | 
#line 13010
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 13011
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13014
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13015
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13018
    [DIFFICULTY_NORMAL][TRAINER_KARINA] =
    {
#line 13019
        .trainerName = _("Karina"),
#line 13020
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 13021
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 13022
F_TRAINER_FEMALE | 
#line 13023
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13027
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13028
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13031
    [DIFFICULTY_NORMAL][TRAINER_ZACKARY] =
    {
#line 13032
        .trainerName = _("Zackary"),
#line 13033
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 13034
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 13036
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13040
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13041
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13046
    [DIFFICULTY_NORMAL][TRAINER_THEODORE] =
    {
#line 13047
        .trainerName = _("Theodore"),
#line 13048
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13049
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13051
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13052
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13055
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13056
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13059
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13060
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13063
    [DIFFICULTY_NORMAL][TRAINER_AXEL] =
    {
#line 13064
        .trainerName = _("Axel"),
#line 13065
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13066
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 13068
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13069
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13072
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13073
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13076
    [DIFFICULTY_NORMAL][TRAINER_MEGAN] =
    {
#line 13077
        .trainerName = _("Megan"),
#line 13078
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13079
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 13080
F_TRAINER_FEMALE | 
#line 13081
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13085
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13086
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13089
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 13090
        .trainerName = _("James"),
#line 13091
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13092
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 13094
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13098
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13099
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13102
    [DIFFICULTY_NORMAL][TRAINER_NICOLE] =
    {
#line 13103
        .trainerName = _("Nicole"),
#line 13104
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13105
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 13106
F_TRAINER_FEMALE | 
#line 13107
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13108
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 13111
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13112
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13115
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13116
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13119
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13120
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13123
    [DIFFICULTY_NORMAL][TRAINER_JOHN] =
    {
#line 13124
        .trainerName = _("John"),
#line 13125
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13126
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 13128
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13129
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13132
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13133
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13136
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13137
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13140
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 13141
        .trainerName = _("Kayla"),
#line 13142
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13143
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 13144
F_TRAINER_FEMALE | 
#line 13145
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13146
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13149
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13150
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13153
    [DIFFICULTY_NORMAL][TRAINER_RYAN] =
    {
#line 13154
        .trainerName = _("Ryan"),
#line 13155
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13156
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 13158
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13159
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13162
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13163
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13166
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 13167
        .trainerName = _("Rachel"),
#line 13168
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 13169
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 13170
F_TRAINER_FEMALE | 
#line 13171
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13172
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13175
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13176
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13179
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13180
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13185
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 13186
        .trainerName = _("Anthony"),
#line 13187
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 13188
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 13190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13191
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13194
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13195
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13198
    [DIFFICULTY_NORMAL][TRAINER_LAUREN] =
    {
#line 13199
        .trainerName = _("Lauren"),
#line 13200
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 13201
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 13202
F_TRAINER_FEMALE | 
#line 13203
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13204
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13207
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13208
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13211
    [DIFFICULTY_NORMAL][TRAINER_AUSTIN] =
    {
#line 13212
        .trainerName = _("Austin"),
#line 13213
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 13214
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 13216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13217
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 13220
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13221
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13224
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13225
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13228
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13229
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13232
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 13233
        .trainerName = _("Justin"),
#line 13234
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13235
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13237
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13238
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13241
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13242
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13245
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13246
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13249
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 13250
        .trainerName = _("Kevin"),
#line 13251
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13252
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13254
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13255
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 13258
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13259
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13262
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13263
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13266
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13267
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13270
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13271
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13274
    [DIFFICULTY_NORMAL][TRAINER_HELEN] =
    {
#line 13275
        .trainerName = _("Helen"),
#line 13276
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 13277
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 13278
F_TRAINER_FEMALE | 
#line 13279
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 13280
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13283
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13284
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13287
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13288
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13293
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 13294
        .trainerName = _("Robert"),
#line 13295
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13296
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13298
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13299
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13302
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13303
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13306
    [DIFFICULTY_NORMAL][TRAINER_ALEXANDER] =
    {
#line 13307
        .trainerName = _("Alexander"),
#line 13308
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13309
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13311
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13312
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13315
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13316
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13319
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13320
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13323
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 13324
        .trainerName = _("Jonathan"),
#line 13325
        .trainerClass = TRAINER_CLASS_HIKER,
#line 13326
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 13328
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13329
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13332
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13333
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13336
    [DIFFICULTY_NORMAL][TRAINER_KYLE] =
    {
#line 13337
        .trainerName = _("Kyle"),
#line 13338
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 13339
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 13341
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13342
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13345
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13346
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13349
    [DIFFICULTY_NORMAL][TRAINER_CODY] =
    {
#line 13350
        .trainerName = _("Cody"),
#line 13351
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 13352
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 13354
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13355
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13358
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13359
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13362
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13363
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13366
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 13367
        .trainerName = _("Hannah"),
#line 13368
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 13369
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 13370
F_TRAINER_FEMALE | 
#line 13371
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13372
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13375
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13376
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13379
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13380
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13383
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 13384
        .trainerName = _("William"),
#line 13385
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 13386
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 13388
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13389
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13392
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13393
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 13396
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 13397
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 13404
    [DIFFICULTY_NORMAL][TRAINER_ROARK] =
    {
#line 13405
        .trainerName = _("ROARK"),
#line 13406
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13407
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 13409
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13410
        .items = { ITEM_POTION, ITEM_POTION },
#line 13411
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13412
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13414
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13417
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13416
            .ability = ABILITY_STURDY,
#line 13415
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13418
                MOVE_STEALTH_ROCK,
                MOVE_ROCK_TOMB,
                MOVE_ROCK_POLISH,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 13423
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13426
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13425
            .ability = ABILITY_SHELL_ARMOR,
#line 13424
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13427
                MOVE_SMACK_DOWN,
                MOVE_BUG_BITE,
                MOVE_REST,
                MOVE_WITHDRAW,
            },
            },
            {
#line 13432
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13435
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13434
            .ability = ABILITY_ROCK_HEAD,
#line 13433
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13436
                MOVE_COIL,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_THROW,
                MOVE_ROCK_POLISH,
            },
            },
            {
#line 13441
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13444
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13443
            .ability = ABILITY_SNIPER,
#line 13442
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13445
                MOVE_WATER_PULSE,
                MOVE_FURY_CUTTER,
                MOVE_TAUNT,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 13450
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13450
            .heldItem = ITEM_ORAN_BERRY,
#line 13452
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13451
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13453
                MOVE_HEADBUTT,
                MOVE_PURSUIT,
                MOVE_LEER,
                MOVE_SMACK_DOWN,
            },
            },
        },
    },
#line 13458
    [DIFFICULTY_NORMAL][TRAINER_GARDENIA] =
    {
#line 13459
        .trainerName = _("Gardenia"),
#line 13460
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13461
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 13462
F_TRAINER_FEMALE | 
#line 13463
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13464
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 13465
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13466
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13468
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13472
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13471
            .ability = ABILITY_SHELL_ARMOR,
#line 13470
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 13469
            .tags = MON_POOL_TAG_WEATHER_SETTER,
            .moves = {
#line 13473
                MOVE_SUNNY_DAY,
                MOVE_PROTECT,
                MOVE_BULLDOZE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 13478
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13478
            .heldItem = ITEM_WEPEAR_BERRY,
#line 13481
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13480
            .ability = ABILITY_OWN_TEMPO,
#line 13479
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13482
                MOVE_WATER_PULSE,
                MOVE_NATURAL_GIFT,
                MOVE_FAKE_OUT,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 13487
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13491
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13490
            .ability = ABILITY_FLOWER_GIFT,
#line 13489
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 13488
            .tags = MON_POOL_TAG_WEATHER_ABUSER,
            .moves = {
#line 13492
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_WEATHER_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 13497
            .species = SPECIES_TREVENANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13500
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13499
            .ability = ABILITY_NATURAL_CURE,
#line 13498
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13501
                MOVE_WILL_O_WISP,
                MOVE_ALLY_SWITCH,
                MOVE_SHADOW_CLAW,
                MOVE_SEED_BOMB,
            },
            },
            {
#line 13506
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13506
            .heldItem = ITEM_SITRUS_BERRY,
#line 13509
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13508
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 13507
            .tags = MON_POOL_TAG_WEATHER_ABUSER,
            .moves = {
#line 13510
                MOVE_GRASS_KNOT,
                MOVE_WEATHER_BALL,
                MOVE_SLUDGE,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 13515
    [DIFFICULTY_NORMAL][TRAINER_FANTINA] =
    {
#line 13516
        .trainerName = _("Fantina"),
#line 13517
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13518
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 13519
F_TRAINER_FEMALE | 
#line 13520
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13521
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_FULL_HEAL },
#line 13522
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13523
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13525
            .species = SPECIES_GOURGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13525
            .heldItem = ITEM_LEFTOVERS,
#line 13528
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13527
            .ability = ABILITY_INSOMNIA,
#line 13526
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13529
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_PROTECT,
                MOVE_EXPLOSION,
            },
            },
            {
#line 13534
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13534
            .heldItem = ITEM_SITRUS_BERRY,
#line 13537
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13536
            .ability = ABILITY_PRANKSTER,
#line 13535
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13538
                MOVE_TAUNT,
                MOVE_CURSE,
                MOVE_RECOVER,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 13543
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13543
            .heldItem = ITEM_FOCUS_SASH,
#line 13546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13545
            .ability = ABILITY_LEVITATE,
#line 13544
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13547
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
                MOVE_HYPNOSIS,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 13552
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13552
            .heldItem = ITEM_FLYING_GEM,
#line 13555
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13554
            .ability = ABILITY_UNBURDEN,
#line 13553
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13556
                MOVE_ACROBATICS,
                MOVE_OMINOUS_WIND,
                MOVE_PSYCHIC,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 13561
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13561
            .heldItem = ITEM_SITRUS_BERRY,
#line 13563
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13562
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13564
                MOVE_SHADOW_BALL,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
                MOVE_MYSTICAL_FIRE,
            },
            },
        },
    },
#line 13569
    [DIFFICULTY_NORMAL][TRAINER_MAYLENE] =
    {
#line 13570
        .trainerName = _("Maylene"),
#line 13571
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13572
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 13573
F_TRAINER_FEMALE | 
#line 13574
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13575
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 13576
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13577
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13579
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13579
            .heldItem = ITEM_LEFTOVERS,
#line 13582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13581
            .ability = ABILITY_INTIMIDATE,
#line 13580
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13583
                MOVE_DRAIN_PUNCH,
                MOVE_PROTECT,
                MOVE_THUNDER_PUNCH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 13588
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13588
            .heldItem = ITEM_EVIOLITE,
#line 13591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13590
            .ability = ABILITY_REGENERATOR,
#line 13589
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13592
                MOVE_FAKE_OUT,
                MOVE_U_TURN,
                MOVE_DRAIN_PUNCH,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13597
            .species = SPECIES_HAWLUCHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13597
            .heldItem = ITEM_FLYING_GEM,
#line 13600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13599
            .ability = ABILITY_UNBURDEN,
#line 13598
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13601
                MOVE_ACROBATICS,
                MOVE_FLYING_PRESS,
                MOVE_THROAT_CHOP,
                MOVE_ROOST,
            },
            },
            {
#line 13606
            .species = SPECIES_EMBOAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13606
            .heldItem = ITEM_SITRUS_BERRY,
#line 13609
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13608
            .ability = ABILITY_RECKLESS,
#line 13607
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13610
                MOVE_FLARE_BLITZ,
                MOVE_WILD_CHARGE,
                MOVE_EARTHQUAKE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 13615
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13615
            .heldItem = ITEM_LUCARIONITE,
#line 13618
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13617
            .ability = ABILITY_STEADFAST,
#line 13616
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13619
                MOVE_AURA_SPHERE,
                MOVE_DARK_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 13624
    [DIFFICULTY_NORMAL][TRAINER_WAKE] =
    {
#line 13625
        .trainerName = _("Wake"),
#line 13626
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13627
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 13629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13630
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL },
#line 13631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13632
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13634
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13634
            .heldItem = ITEM_DAMP_ROCK,
#line 13637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13636
            .ability = ABILITY_DRIZZLE,
#line 13635
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13638
                MOVE_SCALD,
                MOVE_ENCORE,
                MOVE_TOXIC,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 13643
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13643
            .heldItem = ITEM_WACAN_BERRY,
#line 13646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13645
            .ability = ABILITY_INTIMIDATE,
#line 13644
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13647
                MOVE_WATERFALL,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 13652
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13652
            .heldItem = ITEM_LEFTOVERS,
#line 13655
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13654
            .ability = ABILITY_REGENERATOR,
#line 13653
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13656
                MOVE_SLACK_OFF,
                MOVE_POWER_GEM,
                MOVE_SCALD,
                MOVE_YAWN,
            },
            },
            {
#line 13661
            .species = SPECIES_GRENINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13661
            .heldItem = ITEM_SITRUS_BERRY,
#line 13664
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13663
            .ability = ABILITY_PROTEAN,
#line 13662
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13665
                MOVE_SCALD,
                MOVE_EXTRASENSORY,
                MOVE_TAUNT,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13670
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13670
            .heldItem = ITEM_SWAMPERTITE,
#line 13673
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13672
            .ability = ABILITY_TORRENT,
#line 13671
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13674
                MOVE_EARTHQUAKE,
                MOVE_WATERFALL,
                MOVE_HAMMER_ARM,
                MOVE_BULK_UP,
            },
            },
        },
    },
#line 13679
    [DIFFICULTY_NORMAL][TRAINER_BYRON] =
    {
#line 13680
        .trainerName = _("Byron"),
#line 13681
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13682
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 13684
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13685
        .items = { ITEM_MAX_POTION, ITEM_MAX_POTION, ITEM_FULL_HEAL },
#line 13686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13687
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13689
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13689
            .heldItem = ITEM_CHOICE_SCARF,
#line 13692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13691
            .ability = ABILITY_LEVITATE,
#line 13690
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13693
                MOVE_STEALTH_ROCK,
                MOVE_SANDSTORM,
                MOVE_EXPLOSION,
                MOVE_TRICK,
            },
            },
            {
#line 13698
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13698
            .heldItem = ITEM_SHELL_BELL,
#line 13701
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13700
            .ability = ABILITY_OVERCOAT,
#line 13699
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13702
                MOVE_LASER_FOCUS,
                MOVE_FELL_STINGER,
                MOVE_SMART_STRIKE,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 13707
            .species = SPECIES_AEGISLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13707
            .heldItem = ITEM_LIFE_ORB,
#line 13710
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13709
            .ability = ABILITY_STANCE_CHANGE,
#line 13708
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13711
                MOVE_KINGS_SHIELD,
                MOVE_SACRED_SWORD,
                MOVE_SHADOW_SNEAK,
                MOVE_PURSUIT,
            },
            },
            {
#line 13716
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13716
            .heldItem = ITEM_SITRUS_BERRY,
#line 13719
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13718
            .ability = ABILITY_TORRENT,
#line 13717
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13720
                MOVE_SCALD,
                MOVE_GRASS_KNOT,
                MOVE_FLASH_CANNON,
                MOVE_YAWN,
            },
            },
            {
#line 13725
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13725
            .heldItem = ITEM_LEFTOVERS,
#line 13728
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13727
            .ability = ABILITY_STURDY,
#line 13726
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13729
                MOVE_BULLDOZE,
                MOVE_CURSE,
                MOVE_PROTECT,
                MOVE_STONE_EDGE,
            },
            },
            {
#line 13734
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13734
            .heldItem = ITEM_AGGRONITE,
#line 13737
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13736
            .ability = ABILITY_STURDY,
#line 13735
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13738
                MOVE_AUTOTOMIZE,
                MOVE_EARTHQUAKE,
                MOVE_HEAD_SMASH,
                MOVE_DRAGON_RUSH,
            },
            },
        },
    },
#line 13743
    [DIFFICULTY_NORMAL][TRAINER_CANDICE] =
    {
#line 13744
        .trainerName = _("Candice"),
#line 13745
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13746
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 13747
F_TRAINER_FEMALE | 
#line 13748
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13749
        .items = { ITEM_MAX_POTION, ITEM_MAX_POTION, ITEM_FULL_HEAL },
#line 13750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 13751
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13753
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13753
            .heldItem = ITEM_ICY_ROCK,
#line 13756
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13755
            .ability = ABILITY_SNOW_WARNING,
#line 13754
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13757
                MOVE_WOOD_HAMMER,
                MOVE_BLIZZARD,
                MOVE_LEECH_SEED,
                MOVE_ATTRACT,
            },
            },
            {
#line 13762
            .species = SPECIES_AURORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13762
            .heldItem = ITEM_RED_CARD,
#line 13765
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13764
            .ability = ABILITY_SNOW_WARNING,
#line 13763
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13766
                MOVE_FREEZE_DRY,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 13771
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13771
            .heldItem = ITEM_ASSAULT_VEST,
#line 13774
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13773
            .ability = ABILITY_THICK_FAT,
#line 13772
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13775
                MOVE_EARTHQUAKE,
                MOVE_ICE_SHARD,
                MOVE_SUPERPOWER,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 13780
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13780
            .heldItem = ITEM_CHESTO_BERRY,
#line 13783
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13782
            .ability = ABILITY_THICK_FAT,
#line 13781
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13784
                MOVE_YAWN,
                MOVE_SURF,
                MOVE_BLIZZARD,
                MOVE_REST,
            },
            },
            {
#line 13789
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13789
            .heldItem = ITEM_GLALITITE,
#line 13792
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 13791
            .ability = ABILITY_MOODY,
#line 13790
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13793
                MOVE_EXPLOSION,
                MOVE_ICE_SHARD,
                MOVE_HYPER_BEAM,
                MOVE_CRUNCH,
            },
            },
            {
#line 13798
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13798
            .heldItem = ITEM_FOCUS_SASH,
#line 13801
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 13800
            .ability = ABILITY_SNOW_CLOAK,
#line 13799
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 13802
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_TAUNT,
            },
            },
        },
    },
