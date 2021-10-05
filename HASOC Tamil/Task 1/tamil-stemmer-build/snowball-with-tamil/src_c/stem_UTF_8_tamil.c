
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "../runtime/header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int tamil_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_has_min_length(struct SN_env * z);
static int r_strlen(struct SN_env * z);
static int r_remove_common_word_endings(struct SN_env * z);
static int r_remove_tense_suffixes(struct SN_env * z);
static int r_remove_tense_suffix(struct SN_env * z);
static int r_fix_endings(struct SN_env * z);
static int r_fix_ending(struct SN_env * z);
static int r_fix_va_start(struct SN_env * z);
static int r_remove_vetrumai_urupukal(struct SN_env * z);
static int r_remove_um(struct SN_env * z);
static int r_remove_command_suffixes(struct SN_env * z);
static int r_remove_pronoun_prefixes(struct SN_env * z);
static int r_remove_question_prefixes(struct SN_env * z);
static int r_remove_question_suffixes(struct SN_env * z);
static int r_remove_plural_suffix(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * tamil_UTF_8_create_env(void);
extern void tamil_UTF_8_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const unsigned char g_q_suffixes[] = { 1, 34 };

static const unsigned char g_q_prefixes[] = { 1 };

static const unsigned char g_word_starter[] = { 49, 130, 40, 6, 1 };

static const unsigned char g_suttezhuthu[] = { 21 };

static const unsigned char g_vallinam[] = { 33, 132, 32, 16 };

static const unsigned char g_mellinam[] = { 33, 132, 33 };

static const unsigned char g_itaiyinam[] = { 123 };

static const unsigned char g_vowel_signs[] = { 31, 7 };

static const unsigned char g_uyir[] = { 63, 238 };

static const symbol s_0[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x8B };
static const symbol s_1[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x8B };
static const symbol s_2[] = { 0xE0, 0xAE, 0x93 };
static const symbol s_3[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x8A };
static const symbol s_4[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x8A };
static const symbol s_5[] = { 0xE0, 0xAE, 0x92 };
static const symbol s_6[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x81 };
static const symbol s_7[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x81 };
static const symbol s_8[] = { 0xE0, 0xAE, 0x89 };
static const symbol s_9[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x82 };
static const symbol s_10[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x82 };
static const symbol s_11[] = { 0xE0, 0xAE, 0x8A };
static const symbol s_12[] = { 0xE0, 0xAE, 0x8E };
static const symbol s_13[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_14[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_15[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_16[] = { 0xE0, 0xAE, 0xB5 };
static const symbol s_17[] = { 0xE0, 0xAE, 0xA8 };
static const symbol s_18[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_19[] = { 0xE0, 0xAE, 0xAE };
static const symbol s_20[] = { 0xE0, 0xAE, 0xAF };
static const symbol s_21[] = { 0xE0, 0xAE, 0x99 };
static const symbol s_22[] = { 0xE0, 0xAE, 0x9E };
static const symbol s_23[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_24[] = { 0xE0, 0xAE, 0xA8, 0xE0, 0xAF, 0x8D };
static const symbol s_25[] = { 0xE0, 0xAE, 0xA8, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xA4 };
static const symbol s_26[] = { 0xE0, 0xAE, 0xA8, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x8D };
static const symbol s_27[] = { 0xE0, 0xAE, 0xAF, 0xE0, 0xAF, 0x8D };
static const symbol s_28[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_29[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_30[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_31[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xAA, 0xE0, 0xAF, 0x8D };
static const symbol s_32[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D };
static const symbol s_33[] = { 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_34[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };
static const symbol s_35[] = { 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_36[] = { 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D };
static const symbol s_37[] = { 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_38[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D };
static const symbol s_39[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_40[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x8D };
static const symbol s_41[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_42[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_43[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D };
static const symbol s_44[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D };
static const symbol s_45[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_46[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_47[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_48[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_49[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_50[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_51[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_52[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_53[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_54[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_55[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_56[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_57[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_58[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_59[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_60[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8D };
static const symbol s_61[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_62[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_63[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_64[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_65[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_66[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_67[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_68[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_69[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_70[] = { 0xE0, 0xAE, 0xAF };
static const symbol s_71[] = { 0xE0, 0xAE, 0xB0 };
static const symbol s_72[] = { 0xE0, 0xAE, 0xB2 };
static const symbol s_73[] = { 0xE0, 0xAE, 0xB5 };
static const symbol s_74[] = { 0xE0, 0xAE, 0xB4 };
static const symbol s_75[] = { 0xE0, 0xAE, 0xB3 };
static const symbol s_76[] = { 0xE0, 0xAE, 0x99 };
static const symbol s_77[] = { 0xE0, 0xAE, 0x9E };
static const symbol s_78[] = { 0xE0, 0xAE, 0xA3 };
static const symbol s_79[] = { 0xE0, 0xAE, 0xA8 };
static const symbol s_80[] = { 0xE0, 0xAE, 0xAE };
static const symbol s_81[] = { 0xE0, 0xAE, 0xA9 };
static const symbol s_82[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_83[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_84[] = { 0xE0, 0xAE, 0xB5 };
static const symbol s_85[] = { 0xE0, 0xAE, 0xAF };
static const symbol s_86[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x8D };
static const symbol s_87[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x81 };
static const symbol s_88[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_89[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_90[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_91[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_92[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_93[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_94[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_95[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_96[] = { 0xE0, 0xAE, 0x99, 0xE0, 0xAF, 0x8D };
static const symbol s_97[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_98[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_99[] = { 0xE0, 0xAE, 0x99, 0xE0, 0xAF, 0x8D };
static const symbol s_100[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_101[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_102[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_103[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_104[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_105[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_106[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_107[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_108[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_109[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_110[] = { 0xE0, 0xAE, 0x85 };
static const symbol s_111[] = { 0xE0, 0xAE, 0x87 };
static const symbol s_112[] = { 0xE0, 0xAE, 0x89 };
static const symbol s_113[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_114[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_115[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_116[] = { 0xE0, 0xAE, 0xB5 };
static const symbol s_117[] = { 0xE0, 0xAE, 0xA8 };
static const symbol s_118[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_119[] = { 0xE0, 0xAE, 0xAE };
static const symbol s_120[] = { 0xE0, 0xAE, 0xAF };
static const symbol s_121[] = { 0xE0, 0xAE, 0x99 };
static const symbol s_122[] = { 0xE0, 0xAE, 0x9E };
static const symbol s_123[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_124[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x99, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_125[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_126[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_127[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_128[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_129[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_130[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_131[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_132[] = { 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_133[] = { 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_134[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_135[] = { 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_136[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_137[] = { 0xE0, 0xAF, 0x8B };
static const symbol s_138[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_139[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_140[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_141[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xBF };
static const symbol s_142[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xBF };
static const symbol s_143[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_144[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_145[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_146[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x88 };
static const symbol s_147[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_148[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAE, 0xBF };
static const symbol s_149[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF };
static const symbol s_150[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xAF };
static const symbol s_151[] = { 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x81 };
static const symbol s_152[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB3 };
static const symbol s_153[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x88, 0xE0, 0xAE, 0xAF };
static const symbol s_154[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x88 };
static const symbol s_155[] = { 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_156[] = { 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB2 };
static const symbol s_157[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_158[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_159[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_160[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_161[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_162[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_163[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_164[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_165[] = { 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xA9 };
static const symbol s_166[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF };
static const symbol s_167[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_168[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_169[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F };
static const symbol s_170[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_171[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81 };
static const symbol s_172[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xA3 };
static const symbol s_173[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xB0, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xAF };
static const symbol s_174[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xB0, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xAF };
static const symbol s_175[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAE, 0xBF };
static const symbol s_176[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_177[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_178[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA4, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA9 };
static const symbol s_179[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xBF };
static const symbol s_180[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA9 };
static const symbol s_181[] = { 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB2, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_182[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x88 };
static const symbol s_183[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x88 };
static const symbol s_184[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_185[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_186[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_187[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_188[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_189[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_190[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_191[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_192[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_193[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_194[] = { 0xE0, 0xAE, 0x9F };
static const symbol s_195[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_196[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_197[] = { 0xE0, 0xAE, 0xB1 };
static const symbol s_198[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_199[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_200[] = { 0xE0, 0xAF, 0x8A, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_201[] = { 0xE0, 0xAF, 0x8B, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_202[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_203[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };
static const symbol s_204[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_205[] = { 0xE0, 0xAE, 0xAE };
static const symbol s_206[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x81 };
static const symbol s_207[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xA8, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81 };
static const symbol s_208[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0x9F };
static const symbol s_209[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_210[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_211[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x88 };
static const symbol s_212[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xAE, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_213[] = { 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_214[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_215[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_216[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_217[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_218[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_219[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_220[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_221[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_222[] = { 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_223[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_224[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xA3, 0xE0, 0xAF, 0x8D };
static const symbol s_225[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_226[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x87, 0xE0, 0xAE, 0xB2, 0xE0, 0xAF, 0x8D };
static const symbol s_227[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x87, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };
static const symbol s_228[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x80, 0xE0, 0xAE, 0xB4, 0xE0, 0xAF, 0x8D };
static const symbol s_229[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_230[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81 };
static const symbol s_231[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_232[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_233[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_234[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_235[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_236[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_237[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_238[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_239[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_240[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_241[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_242[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_243[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x8A, 0xE0, 0xAE, 0xA3, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0x9F, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_244[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81 };
static const symbol s_245[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_246[] = { 0xE0, 0xAE, 0xAE, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_247[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_248[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_249[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_250[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_251[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_252[] = { 0xE0, 0xAE, 0x85 };
static const symbol s_253[] = { 0xE0, 0xAE, 0x86 };
static const symbol s_254[] = { 0xE0, 0xAE, 0x87 };
static const symbol s_255[] = { 0xE0, 0xAE, 0x88 };
static const symbol s_256[] = { 0xE0, 0xAE, 0x89 };
static const symbol s_257[] = { 0xE0, 0xAE, 0x8A };
static const symbol s_258[] = { 0xE0, 0xAE, 0x8E };
static const symbol s_259[] = { 0xE0, 0xAE, 0x8F };
static const symbol s_260[] = { 0xE0, 0xAE, 0x90 };
static const symbol s_261[] = { 0xE0, 0xAE, 0x92 };
static const symbol s_262[] = { 0xE0, 0xAE, 0x93 };
static const symbol s_263[] = { 0xE0, 0xAE, 0x94 };
static const symbol s_264[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_265[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_266[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_267[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_268[] = { 0xE0, 0xAE, 0xA9 };
static const symbol s_269[] = { 0xE0, 0xAE, 0xAA };
static const symbol s_270[] = { 0xE0, 0xAE, 0x95 };
static const symbol s_271[] = { 0xE0, 0xAE, 0xA4 };
static const symbol s_272[] = { 0xE0, 0xAE, 0xAF };
static const symbol s_273[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_274[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_275[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_276[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81 };
static const symbol s_277[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_278[] = { 0xE0, 0xAE, 0xBF };
static const symbol s_279[] = { 0xE0, 0xAF, 0x80 };
static const symbol s_280[] = { 0xE0, 0xAF, 0x86 };
static const symbol s_281[] = { 0xE0, 0xAF, 0x87 };
static const symbol s_282[] = { 0xE0, 0xAF, 0x81 };
static const symbol s_283[] = { 0xE0, 0xAF, 0x82 };
static const symbol s_284[] = { 0xE0, 0xAF, 0x88 };
static const symbol s_285[] = { 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x81 };
static const symbol s_286[] = { 0xE0, 0xAE, 0xAA, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_287[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_288[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_289[] = { 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_290[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_291[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_292[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x88 };
static const symbol s_293[] = { 0xE0, 0xAE, 0xB5, 0xE0, 0xAF, 0x88 };
static const symbol s_294[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_295[] = { 0xE0, 0xAE, 0x9A };
static const symbol s_296[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB3, 0xE0, 0xAF, 0x8D };
static const symbol s_297[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_298[] = { 0xE0, 0xAF, 0x87, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_299[] = { 0xE0, 0xAE, 0xBE };
static const symbol s_300[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_301[] = { 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_302[] = { 0xE0, 0xAF, 0x87, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_303[] = { 0xE0, 0xAF, 0x8B, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_304[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_305[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_306[] = { 0xE0, 0xAE, 0x9F, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_307[] = { 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x81, 0xE0, 0xAE, 0xAE, 0xE0, 0xAF, 0x8D };
static const symbol s_308[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xAF, 0xE0, 0xAF, 0x8D };
static const symbol s_309[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x86, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D };
static const symbol s_310[] = { 0xE0, 0xAE, 0xA9, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_311[] = { 0xE0, 0xAF, 0x80, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_312[] = { 0xE0, 0xAF, 0x80, 0xE0, 0xAE, 0xAF, 0xE0, 0xAE, 0xB0, 0xE0, 0xAF, 0x8D };
static const symbol s_313[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_314[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAF, 0x81 };
static const symbol s_315[] = { 0xE0, 0xAE, 0xA4, 0xE0, 0xAF, 0x81 };
static const symbol s_316[] = { 0xE0, 0xAF, 0x8D };
static const symbol s_317[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA8, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1 };
static const symbol s_318[] = { 0xE0, 0xAE, 0xBE, 0xE0, 0xAE, 0xA8, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };
static const symbol s_319[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1 };
static const symbol s_320[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xA9, 0xE0, 0xAF, 0x8D, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };
static const symbol s_321[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB1 };
static const symbol s_322[] = { 0xE0, 0xAE, 0x95, 0xE0, 0xAE, 0xBF, 0xE0, 0xAE, 0xB1, 0xE0, 0xAF, 0x8D };

static int r_strlen(struct SN_env * z) {
    z->I[2] = 0;
    {   int c1 = z->c; /* do, line 134 */
        while(1) { /* repeat, line 134 */
            {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                if (ret < 0) goto lab1;
                z->c = ret; /* next, line 134 */
            }
            z->I[2] = (z->I[2] + 1);
            continue;
        lab1:
            break;
        }
        z->c = c1;
    }
    return 1;
}

static int r_has_min_length(struct SN_env * z) {
    {   int ret = r_strlen(z);
        if (ret == 0) return 0; /* call strlen, line 137 */
        if (ret < 0) return ret;
    }
    if (!(z->I[2] > 4)) return 0;
    return 1;
}

static int r_fix_va_start(struct SN_env * z) {
    {   int c1 = z->c; /* or, line 141 */
        {   int c2 = z->c; /* and, line 141 */
            {   int c_keep = z->c; /* try, line 141 */
                if (!(eq_s(z, 6, s_0))) { z->c = c_keep; goto lab2; }
            lab2:
                ;
            }
            z->c = c2;
            z->bra = z->c; /* [, line 141 */
        }
        if (!(eq_s(z, 6, s_1))) goto lab1;
        z->ket = z->c; /* ], line 141 */
        {   int ret = slice_from_s(z, 3, s_2); /* <-, line 141 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = c1;
        {   int c3 = z->c; /* and, line 142 */
            {   int c_keep = z->c; /* try, line 142 */
                if (!(eq_s(z, 6, s_3))) { z->c = c_keep; goto lab4; }
            lab4:
                ;
            }
            z->c = c3;
            z->bra = z->c; /* [, line 142 */
        }
        if (!(eq_s(z, 6, s_4))) goto lab3;
        z->ket = z->c; /* ], line 142 */
        {   int ret = slice_from_s(z, 3, s_5); /* <-, line 142 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab3:
        z->c = c1;
        {   int c4 = z->c; /* and, line 143 */
            {   int c_keep = z->c; /* try, line 143 */
                if (!(eq_s(z, 6, s_6))) { z->c = c_keep; goto lab6; }
            lab6:
                ;
            }
            z->c = c4;
            z->bra = z->c; /* [, line 143 */
        }
        if (!(eq_s(z, 6, s_7))) goto lab5;
        z->ket = z->c; /* ], line 143 */
        {   int ret = slice_from_s(z, 3, s_8); /* <-, line 143 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab5:
        z->c = c1;
        {   int c5 = z->c; /* and, line 144 */
            {   int c_keep = z->c; /* try, line 144 */
                if (!(eq_s(z, 6, s_9))) { z->c = c_keep; goto lab7; }
            lab7:
                ;
            }
            z->c = c5;
            z->bra = z->c; /* [, line 144 */
        }
        if (!(eq_s(z, 6, s_10))) return 0;
        z->ket = z->c; /* ], line 144 */
        {   int ret = slice_from_s(z, 3, s_11); /* <-, line 144 */
            if (ret < 0) return ret;
        }
    }
lab0:
    return 1;
}

static int r_fix_endings(struct SN_env * z) {
    z->B[3] = 1; /* set found_wrong_ending, line 147 */
    while(1) { /* repeat, line 148 */
        int c1 = z->c;
        if (!(z->B[3])) goto lab0; /* Boolean test found_wrong_ending, line 148 */
        {   int c2 = z->c; /* do, line 148 */
            {   int ret = r_fix_ending(z);
                if (ret == 0) goto lab1; /* call fix_ending, line 148 */
                if (ret < 0) return ret;
            }
        lab1:
            z->c = c2;
        }
        continue;
    lab0:
        z->c = c1;
        break;
    }
    return 1;
}

static int r_remove_question_prefixes(struct SN_env * z) {
    z->bra = z->c; /* [, line 151 */
    if (!(eq_s(z, 3, s_12))) return 0;
    {   int c1 = z->c; /* or, line 151 */
        if (!(eq_s(z, 3, s_13))) goto lab1;
        goto lab0;
    lab1:
        z->c = c1;
        if (!(eq_s(z, 3, s_14))) goto lab2;
        goto lab0;
    lab2:
        z->c = c1;
        if (!(eq_s(z, 3, s_15))) goto lab3;
        goto lab0;
    lab3:
        z->c = c1;
        if (!(eq_s(z, 3, s_16))) goto lab4;
        goto lab0;
    lab4:
        z->c = c1;
        if (!(eq_s(z, 3, s_17))) goto lab5;
        goto lab0;
    lab5:
        z->c = c1;
        if (!(eq_s(z, 3, s_18))) goto lab6;
        goto lab0;
    lab6:
        z->c = c1;
        if (!(eq_s(z, 3, s_19))) goto lab7;
        goto lab0;
    lab7:
        z->c = c1;
        if (!(eq_s(z, 3, s_20))) goto lab8;
        goto lab0;
    lab8:
        z->c = c1;
        if (!(eq_s(z, 3, s_21))) goto lab9;
        goto lab0;
    lab9:
        z->c = c1;
        if (!(eq_s(z, 3, s_22))) return 0;
    }
lab0:
    if (!(eq_s(z, 3, s_23))) return 0;
    z->ket = z->c; /* ], line 151 */
    {   int ret = slice_del(z); /* delete, line 151 */
        if (ret < 0) return ret;
    }
    {   int c2 = z->c; /* do, line 152 */
        {   int ret = r_fix_va_start(z);
            if (ret == 0) goto lab10; /* call fix_va_start, line 152 */
            if (ret < 0) return ret;
        }
    lab10:
        z->c = c2;
    }
    return 1;
}

static int r_fix_ending(struct SN_env * z) {
    z->B[3] = 0; /* unset found_wrong_ending, line 155 */
    {   int ret = r_strlen(z);
        if (ret == 0) return 0; /* call strlen, line 156 */
        if (ret < 0) return ret;
    }
    if (!(z->I[2] > 3)) return 0;
    z->lb = z->c; z->c = z->l; /* backwards, line 158 */

    {   int m1 = z->l - z->c; (void)m1; /* or, line 160 */
        z->ket = z->c; /* [, line 159 */
        {   int m2 = z->l - z->c; (void)m2; /* or, line 159 */
            if (!(eq_s_b(z, 6, s_24))) goto lab3;
            goto lab2;
        lab3:
            z->c = z->l - m2;
            if (!(eq_s_b(z, 9, s_25))) goto lab4;
            goto lab2;
        lab4:
            z->c = z->l - m2;
            if (!(eq_s_b(z, 12, s_26))) goto lab1;
        }
    lab2:
        z->bra = z->c; /* ], line 159 */
        {   int ret = slice_del(z); /* delete, line 159 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 161 */
        if (!(eq_s_b(z, 6, s_27))) goto lab5;
        {   int m_test = z->l - z->c; /* test, line 161 */
            {   int m3 = z->l - z->c; (void)m3; /* or, line 161 */
                if (!(eq_s_b(z, 3, s_28))) goto lab7;
                goto lab6;
            lab7:
                z->c = z->l - m3;
                if (!(eq_s_b(z, 3, s_29))) goto lab8;
                goto lab6;
            lab8:
                z->c = z->l - m3;
                if (!(eq_s_b(z, 3, s_30))) goto lab5;
            }
        lab6:
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 161 */
        {   int ret = slice_del(z); /* delete, line 161 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab5:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 163 */
        {   int m4 = z->l - z->c; (void)m4; /* or, line 163 */
            if (!(eq_s_b(z, 12, s_31))) goto lab11;
            goto lab10;
        lab11:
            z->c = z->l - m4;
            if (!(eq_s_b(z, 12, s_32))) goto lab9;
        }
    lab10:
        z->bra = z->c; /* ], line 163 */
        {   int ret = slice_from_s(z, 6, s_33); /* <-, line 163 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab9:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 165 */
        if (!(eq_s_b(z, 12, s_34))) goto lab12;
        z->bra = z->c; /* ], line 165 */
        {   int ret = slice_from_s(z, 6, s_35); /* <-, line 165 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab12:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 168 */
        if (!(eq_s_b(z, 12, s_36))) goto lab13;
        z->bra = z->c; /* ], line 168 */
        {   int ret = slice_from_s(z, 6, s_37); /* <-, line 168 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab13:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 170 */
        if (!(eq_s_b(z, 12, s_38))) goto lab14;
        z->bra = z->c; /* ], line 170 */
        {   int ret = slice_from_s(z, 6, s_39); /* <-, line 170 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab14:
        z->c = z->l - m1;
        if (!(z->B[2])) goto lab15; /* Boolean test found_vetrumai_urupu, line 172 */
        z->ket = z->c; /* [, line 172 */
        if (!(eq_s_b(z, 12, s_40))) goto lab15;
        {   int m_test = z->l - z->c; /* test, line 172 */
            {   int m5 = z->l - z->c; (void)m5; /* not, line 172 */
                if (!(eq_s_b(z, 3, s_41))) goto lab16;
                goto lab15;
            lab16:
                z->c = z->l - m5;
            }
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 172 */
        {   int ret = slice_from_s(z, 6, s_42); /* <-, line 172 */
            if (ret < 0) return ret;
        }
        z->bra = z->c; /* ], line 172 */
        goto lab0;
    lab15:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 174 */
        {   int m6 = z->l - z->c; (void)m6; /* or, line 174 */
            if (!(eq_s_b(z, 9, s_43))) goto lab19;
            goto lab18;
        lab19:
            z->c = z->l - m6;
            if (!(eq_s_b(z, 15, s_44))) goto lab17;
        }
    lab18:
        z->bra = z->c; /* ], line 174 */
        {   int ret = slice_from_s(z, 3, s_45); /* <-, line 174 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab17:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 176 */
        if (!(eq_s_b(z, 3, s_46))) goto lab20;
        {   int m7 = z->l - z->c; (void)m7; /* or, line 176 */
            if (!(eq_s_b(z, 3, s_47))) goto lab22;
            goto lab21;
        lab22:
            z->c = z->l - m7;
            if (!(eq_s_b(z, 3, s_48))) goto lab23;
            goto lab21;
        lab23:
            z->c = z->l - m7;
            if (!(eq_s_b(z, 3, s_49))) goto lab24;
            goto lab21;
        lab24:
            z->c = z->l - m7;
            if (!(eq_s_b(z, 3, s_50))) goto lab25;
            goto lab21;
        lab25:
            z->c = z->l - m7;
            if (!(eq_s_b(z, 3, s_51))) goto lab26;
            goto lab21;
        lab26:
            z->c = z->l - m7;
            if (!(eq_s_b(z, 3, s_52))) goto lab20;
        }
    lab21:
        if (!(eq_s_b(z, 3, s_53))) goto lab20;
        {   int m8 = z->l - z->c; (void)m8; /* or, line 176 */
            if (!(eq_s_b(z, 3, s_54))) goto lab28;
            goto lab27;
        lab28:
            z->c = z->l - m8;
            if (!(eq_s_b(z, 3, s_55))) goto lab29;
            goto lab27;
        lab29:
            z->c = z->l - m8;
            if (!(eq_s_b(z, 3, s_56))) goto lab30;
            goto lab27;
        lab30:
            z->c = z->l - m8;
            if (!(eq_s_b(z, 3, s_57))) goto lab31;
            goto lab27;
        lab31:
            z->c = z->l - m8;
            if (!(eq_s_b(z, 3, s_58))) goto lab32;
            goto lab27;
        lab32:
            z->c = z->l - m8;
            if (!(eq_s_b(z, 3, s_59))) goto lab20;
        }
    lab27:
        z->bra = z->c; /* ], line 176 */
        {   int ret = slice_del(z); /* delete, line 176 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab20:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 178 */
        if (!(eq_s_b(z, 9, s_60))) goto lab33;
        z->bra = z->c; /* ], line 178 */
        {   int ret = slice_from_s(z, 3, s_61); /* <-, line 178 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab33:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 180 */
        if (!(eq_s_b(z, 3, s_62))) goto lab34;
        {   int m9 = z->l - z->c; (void)m9; /* or, line 180 */
            if (!(eq_s_b(z, 3, s_63))) goto lab36;
            goto lab35;
        lab36:
            z->c = z->l - m9;
            if (!(eq_s_b(z, 3, s_64))) goto lab37;
            goto lab35;
        lab37:
            z->c = z->l - m9;
            if (!(eq_s_b(z, 3, s_65))) goto lab38;
            goto lab35;
        lab38:
            z->c = z->l - m9;
            if (!(eq_s_b(z, 3, s_66))) goto lab39;
            goto lab35;
        lab39:
            z->c = z->l - m9;
            if (!(eq_s_b(z, 3, s_67))) goto lab40;
            goto lab35;
        lab40:
            z->c = z->l - m9;
            if (!(eq_s_b(z, 3, s_68))) goto lab34;
        }
    lab35:
        z->bra = z->c; /* ], line 180 */
        {   int ret = slice_del(z); /* delete, line 180 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab34:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 182 */
        if (!(eq_s_b(z, 3, s_69))) goto lab41;
        {   int m10 = z->l - z->c; (void)m10; /* or, line 182 */
            {   int m11 = z->l - z->c; (void)m11; /* or, line 182 */
                if (!(eq_s_b(z, 3, s_70))) goto lab45;
                goto lab44;
            lab45:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 3, s_71))) goto lab46;
                goto lab44;
            lab46:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 3, s_72))) goto lab47;
                goto lab44;
            lab47:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 3, s_73))) goto lab48;
                goto lab44;
            lab48:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 3, s_74))) goto lab49;
                goto lab44;
            lab49:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 3, s_75))) goto lab43;
            }
        lab44:
            goto lab42;
        lab43:
            z->c = z->l - m10;
            {   int m12 = z->l - z->c; (void)m12; /* or, line 182 */
                if (!(eq_s_b(z, 3, s_76))) goto lab51;
                goto lab50;
            lab51:
                z->c = z->l - m12;
                if (!(eq_s_b(z, 3, s_77))) goto lab52;
                goto lab50;
            lab52:
                z->c = z->l - m12;
                if (!(eq_s_b(z, 3, s_78))) goto lab53;
                goto lab50;
            lab53:
                z->c = z->l - m12;
                if (!(eq_s_b(z, 3, s_79))) goto lab54;
                goto lab50;
            lab54:
                z->c = z->l - m12;
                if (!(eq_s_b(z, 3, s_80))) goto lab55;
                goto lab50;
            lab55:
                z->c = z->l - m12;
                if (!(eq_s_b(z, 3, s_81))) goto lab41;
            }
        lab50:
            ;
        }
    lab42:
        if (!(eq_s_b(z, 3, s_82))) goto lab41;
        z->bra = z->c; /* ], line 182 */
        {   int ret = slice_from_s(z, 3, s_83); /* <-, line 182 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab41:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 184 */
        {   int m13 = z->l - z->c; (void)m13; /* or, line 184 */
            if (!(eq_s_b(z, 3, s_84))) goto lab58;
            goto lab57;
        lab58:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 3, s_85))) goto lab59;
            goto lab57;
        lab59:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 6, s_86))) goto lab56;
        }
    lab57:
        z->bra = z->c; /* ], line 184 */
        {   int ret = slice_del(z); /* delete, line 184 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab56:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 186 */
        if (!(eq_s_b(z, 6, s_87))) goto lab60;
        {   int m_test = z->l - z->c; /* test, line 186 */
            {   int m14 = z->l - z->c; (void)m14; /* not, line 186 */
                {   int m15 = z->l - z->c; (void)m15; /* or, line 186 */
                    if (!(eq_s_b(z, 3, s_88))) goto lab63;
                    goto lab62;
                lab63:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_89))) goto lab64;
                    goto lab62;
                lab64:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_90))) goto lab65;
                    goto lab62;
                lab65:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_91))) goto lab66;
                    goto lab62;
                lab66:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_92))) goto lab67;
                    goto lab62;
                lab67:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_93))) goto lab68;
                    goto lab62;
                lab68:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_94))) goto lab69;
                    goto lab62;
                lab69:
                    z->c = z->l - m15;
                    if (!(eq_s_b(z, 3, s_95))) goto lab61;
                }
            lab62:
                goto lab60;
            lab61:
                z->c = z->l - m14;
            }
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 186 */
        {   int ret = slice_del(z); /* delete, line 186 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab60:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 188 */
        if (!(eq_s_b(z, 6, s_96))) goto lab70;
        {   int m_test = z->l - z->c; /* test, line 188 */
            {   int m16 = z->l - z->c; (void)m16; /* not, line 188 */
                if (!(eq_s_b(z, 3, s_97))) goto lab71;
                goto lab70;
            lab71:
                z->c = z->l - m16;
            }
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 188 */
        {   int ret = slice_from_s(z, 6, s_98); /* <-, line 188 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab70:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 190 */
        if (!(eq_s_b(z, 6, s_99))) goto lab72;
        z->bra = z->c; /* ], line 190 */
        {   int ret = slice_del(z); /* delete, line 190 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab72:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 192 */
        if (!(eq_s_b(z, 3, s_100))) return 0;
        {   int m_test = z->l - z->c; /* test, line 192 */
            {   int m17 = z->l - z->c; (void)m17; /* or, line 192 */
                {   int m18 = z->l - z->c; (void)m18; /* or, line 192 */
                    if (!(eq_s_b(z, 3, s_101))) goto lab76;
                    goto lab75;
                lab76:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_102))) goto lab77;
                    goto lab75;
                lab77:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_103))) goto lab78;
                    goto lab75;
                lab78:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_104))) goto lab79;
                    goto lab75;
                lab79:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_105))) goto lab80;
                    goto lab75;
                lab80:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_106))) goto lab81;
                    goto lab75;
                lab81:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_107))) goto lab82;
                    goto lab75;
                lab82:
                    z->c = z->l - m18;
                    if (!(eq_s_b(z, 3, s_108))) goto lab74;
                }
            lab75:
                goto lab73;
            lab74:
                z->c = z->l - m17;
                if (!(eq_s_b(z, 3, s_109))) return 0;
            }
        lab73:
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 192 */
        {   int ret = slice_del(z); /* delete, line 192 */
            if (ret < 0) return ret;
        }
    }
lab0:
    z->c = z->lb;
    z->B[3] = 1; /* set found_wrong_ending, line 195 */
    return 1;
}

static int r_remove_pronoun_prefixes(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 198 */
    z->bra = z->c; /* [, line 199 */
    {   int c1 = z->c; /* or, line 199 */
        if (!(eq_s(z, 3, s_110))) goto lab1;
        goto lab0;
    lab1:
        z->c = c1;
        if (!(eq_s(z, 3, s_111))) goto lab2;
        goto lab0;
    lab2:
        z->c = c1;
        if (!(eq_s(z, 3, s_112))) return 0;
    }
lab0:
    {   int c2 = z->c; /* or, line 199 */
        if (!(eq_s(z, 3, s_113))) goto lab4;
        goto lab3;
    lab4:
        z->c = c2;
        if (!(eq_s(z, 3, s_114))) goto lab5;
        goto lab3;
    lab5:
        z->c = c2;
        if (!(eq_s(z, 3, s_115))) goto lab6;
        goto lab3;
    lab6:
        z->c = c2;
        if (!(eq_s(z, 3, s_116))) goto lab7;
        goto lab3;
    lab7:
        z->c = c2;
        if (!(eq_s(z, 3, s_117))) goto lab8;
        goto lab3;
    lab8:
        z->c = c2;
        if (!(eq_s(z, 3, s_118))) goto lab9;
        goto lab3;
    lab9:
        z->c = c2;
        if (!(eq_s(z, 3, s_119))) goto lab10;
        goto lab3;
    lab10:
        z->c = c2;
        if (!(eq_s(z, 3, s_120))) goto lab11;
        goto lab3;
    lab11:
        z->c = c2;
        if (!(eq_s(z, 3, s_121))) goto lab12;
        goto lab3;
    lab12:
        z->c = c2;
        if (!(eq_s(z, 3, s_122))) return 0;
    }
lab3:
    if (!(eq_s(z, 3, s_123))) return 0;
    z->ket = z->c; /* ], line 199 */
    {   int ret = slice_del(z); /* delete, line 199 */
        if (ret < 0) return ret;
    }
    z->B[1] = 1; /* set found_a_match, line 200 */
    {   int c3 = z->c; /* do, line 201 */
        {   int ret = r_fix_va_start(z);
            if (ret == 0) goto lab13; /* call fix_va_start, line 201 */
            if (ret < 0) return ret;
        }
    lab13:
        z->c = c3;
    }
    return 1;
}

static int r_remove_plural_suffix(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 204 */
    z->lb = z->c; z->c = z->l; /* backwards, line 205 */

    {   int m1 = z->l - z->c; (void)m1; /* or, line 206 */
        z->ket = z->c; /* [, line 206 */
        if (!(eq_s_b(z, 18, s_124))) goto lab1;
        {   int m_test = z->l - z->c; /* test, line 206 */
            {   int m2 = z->l - z->c; (void)m2; /* not, line 206 */
                {   int m3 = z->l - z->c; (void)m3; /* or, line 206 */
                    if (!(eq_s_b(z, 3, s_125))) goto lab4;
                    goto lab3;
                lab4:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_126))) goto lab5;
                    goto lab3;
                lab5:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_127))) goto lab6;
                    goto lab3;
                lab6:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_128))) goto lab7;
                    goto lab3;
                lab7:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_129))) goto lab8;
                    goto lab3;
                lab8:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_130))) goto lab2;
                }
            lab3:
                goto lab1;
            lab2:
                z->c = z->l - m2;
            }
            z->c = z->l - m_test;
        }
        z->bra = z->c; /* ], line 206 */
        {   int ret = slice_from_s(z, 3, s_131); /* <-, line 206 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 207 */
        if (!(eq_s_b(z, 15, s_132))) goto lab9;
        z->bra = z->c; /* ], line 207 */
        {   int ret = slice_from_s(z, 6, s_133); /* <-, line 207 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab9:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 208 */
        if (!(eq_s_b(z, 15, s_134))) goto lab10;
        z->bra = z->c; /* ], line 208 */
        {   int ret = slice_from_s(z, 6, s_135); /* <-, line 208 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab10:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 209 */
        if (!(eq_s_b(z, 9, s_136))) return 0;
        z->bra = z->c; /* ], line 209 */
        {   int ret = slice_del(z); /* delete, line 209 */
            if (ret < 0) return ret;
        }
    }
lab0:
    z->B[1] = 1; /* set found_a_match, line 210 */
    z->c = z->lb;
    return 1;
}

static int r_remove_question_suffixes(struct SN_env * z) {
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 215 */
        if (ret < 0) return ret;
    }
    z->B[1] = 0; /* unset found_a_match, line 216 */
    z->lb = z->c; z->c = z->l; /* backwards, line 217 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 218 */
        z->ket = z->c; /* [, line 219 */
        {   int m2 = z->l - z->c; (void)m2; /* or, line 219 */
            if (!(eq_s_b(z, 3, s_137))) goto lab2;
            goto lab1;
        lab2:
            z->c = z->l - m2;
            if (!(eq_s_b(z, 3, s_138))) goto lab3;
            goto lab1;
        lab3:
            z->c = z->l - m2;
            if (!(eq_s_b(z, 3, s_139))) goto lab0;
        }
    lab1:
        z->bra = z->c; /* ], line 219 */
        {   int ret = slice_from_s(z, 3, s_140); /* <-, line 219 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set found_a_match, line 220 */
    lab0:
        z->c = z->l - m1;
    }
    z->c = z->lb;
    {   int c3 = z->c; /* do, line 224 */
        {   int ret = r_fix_endings(z);
            if (ret == 0) goto lab4; /* call fix_endings, line 224 */
            if (ret < 0) return ret;
        }
    lab4:
        z->c = c3;
    }
    return 1;
}

static int r_remove_command_suffixes(struct SN_env * z) {
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 227 */
        if (ret < 0) return ret;
    }
    z->B[1] = 0; /* unset found_a_match, line 228 */
    z->lb = z->c; z->c = z->l; /* backwards, line 229 */

    z->ket = z->c; /* [, line 230 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 230 */
        if (!(eq_s_b(z, 6, s_141))) goto lab1;
        goto lab0;
    lab1:
        z->c = z->l - m1;
        if (!(eq_s_b(z, 6, s_142))) return 0;
    }
lab0:
    z->bra = z->c; /* ], line 230 */
    {   int ret = slice_del(z); /* delete, line 230 */
        if (ret < 0) return ret;
    }
    z->B[1] = 1; /* set found_a_match, line 231 */
    z->c = z->lb;
    return 1;
}

static int r_remove_um(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 236 */
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 237 */
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 238 */

    z->ket = z->c; /* [, line 238 */
    if (!(eq_s_b(z, 9, s_143))) return 0;
    z->bra = z->c; /* ], line 238 */
    {   int ret = slice_from_s(z, 3, s_144); /* <-, line 238 */
        if (ret < 0) return ret;
    }
    z->B[1] = 1; /* set found_a_match, line 239 */
    z->c = z->lb;
    {   int c1 = z->c; /* do, line 241 */
        {   int ret = r_fix_ending(z);
            if (ret == 0) goto lab0; /* call fix_ending, line 241 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    return 1;
}

static int r_remove_common_word_endings(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 248 */
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 249 */
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 250 */

    {   int m1 = z->l - z->c; (void)m1; /* or, line 262 */
        {   int m_test = z->l - z->c; /* test, line 251 */
            z->ket = z->c; /* [, line 251 */
            {   int m2 = z->l - z->c; (void)m2; /* or, line 251 */
                if (!(eq_s_b(z, 12, s_145))) goto lab3;
                goto lab2;
            lab3:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 15, s_146))) goto lab4;
                goto lab2;
            lab4:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 12, s_147))) goto lab5;
                goto lab2;
            lab5:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 15, s_148))) goto lab6;
                goto lab2;
            lab6:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 9, s_149))) goto lab7;
                goto lab2;
            lab7:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 12, s_150))) goto lab8;
                goto lab2;
            lab8:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 15, s_151))) goto lab9;
                goto lab2;
            lab9:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 12, s_152))) goto lab10;
                goto lab2;
            lab10:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 12, s_153))) goto lab11;
                goto lab2;
            lab11:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 9, s_154))) goto lab12;
                goto lab2;
            lab12:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 15, s_155))) goto lab13;
                goto lab2;
            lab13:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 9, s_156))) goto lab14;
                {   int m_test = z->l - z->c; /* test, line 258 */
                    {   int m3 = z->l - z->c; (void)m3; /* not, line 258 */
                        {   int m4 = z->l - z->c; (void)m4; /* or, line 258 */
                            if (!(eq_s_b(z, 3, s_157))) goto lab17;
                            goto lab16;
                        lab17:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_158))) goto lab18;
                            goto lab16;
                        lab18:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_159))) goto lab19;
                            goto lab16;
                        lab19:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_160))) goto lab20;
                            goto lab16;
                        lab20:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_161))) goto lab21;
                            goto lab16;
                        lab21:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_162))) goto lab22;
                            goto lab16;
                        lab22:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_163))) goto lab23;
                            goto lab16;
                        lab23:
                            z->c = z->l - m4;
                            if (!(eq_s_b(z, 3, s_164))) goto lab15;
                        }
                    lab16:
                        goto lab14;
                    lab15:
                        z->c = z->l - m3;
                    }
                    z->c = z->l - m_test;
                }
                goto lab2;
            lab14:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 6, s_165))) goto lab24;
                goto lab2;
            lab24:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 9, s_166))) goto lab1;
            }
        lab2:
            z->bra = z->c; /* ], line 259 */
            {   int ret = slice_from_s(z, 3, s_167); /* <-, line 259 */
                if (ret < 0) return ret;
            }
            z->B[1] = 1; /* set found_a_match, line 260 */
            z->c = z->l - m_test;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        {   int m_test = z->l - z->c; /* test, line 263 */
            z->ket = z->c; /* [, line 263 */
            {   int m5 = z->l - z->c; (void)m5; /* or, line 263 */
                if (!(eq_s_b(z, 9, s_168))) goto lab26;
                goto lab25;
            lab26:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 12, s_169))) goto lab27;
                goto lab25;
            lab27:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 15, s_170))) goto lab28;
                goto lab25;
            lab28:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 18, s_171))) goto lab29;
                goto lab25;
            lab29:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 15, s_172))) goto lab30;
                goto lab25;
            lab30:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 15, s_173))) goto lab31;
                goto lab25;
            lab31:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 15, s_174))) goto lab32;
                goto lab25;
            lab32:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 15, s_175))) goto lab33;
                goto lab25;
            lab33:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 12, s_176))) goto lab34;
                goto lab25;
            lab34:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 18, s_177))) goto lab35;
                goto lab25;
            lab35:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 18, s_178))) goto lab36;
                goto lab25;
            lab36:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 9, s_179))) goto lab37;
                goto lab25;
            lab37:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 9, s_180))) goto lab38;
                goto lab25;
            lab38:
                z->c = z->l - m5;
                if (!(eq_s_b(z, 21, s_181))) return 0;
            }
        lab25:
            z->bra = z->c; /* ], line 272 */
            {   int ret = slice_del(z); /* delete, line 272 */
                if (ret < 0) return ret;
            }
            z->B[1] = 1; /* set found_a_match, line 273 */
            z->c = z->l - m_test;
        }
    }
lab0:
    z->c = z->lb;
    {   int c6 = z->c; /* do, line 276 */
        {   int ret = r_fix_endings(z);
            if (ret == 0) goto lab39; /* call fix_endings, line 276 */
            if (ret < 0) return ret;
        }
    lab39:
        z->c = c6;
    }
    return 1;
}

static int r_remove_vetrumai_urupukal(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 279 */
    z->B[2] = 0; /* unset found_vetrumai_urupu, line 280 */
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 281 */
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 282 */

    {   int m1 = z->l - z->c; (void)m1; /* or, line 285 */
        {   int m_test = z->l - z->c; /* test, line 284 */
            z->ket = z->c; /* [, line 284 */
            if (!(eq_s_b(z, 6, s_182))) goto lab1;
            z->bra = z->c; /* ], line 284 */
            {   int ret = slice_del(z); /* delete, line 284 */
                if (ret < 0) return ret;
            }
            z->c = z->l - m_test;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        {   int m_test = z->l - z->c; /* test, line 286 */
            z->ket = z->c; /* [, line 286 */
            {   int m2 = z->l - z->c; (void)m2; /* or, line 287 */
                {   int m3 = z->l - z->c; (void)m3; /* or, line 286 */
                    if (!(eq_s_b(z, 9, s_183))) goto lab6;
                    goto lab5;
                lab6:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 3, s_184))) goto lab4;
                }
            lab5:
                {   int m_test = z->l - z->c; /* test, line 287 */
                    {   int m4 = z->l - z->c; (void)m4; /* not, line 287 */
                        {   int m5 = z->l - z->c; (void)m5; /* or, line 287 */
                            if (!(eq_s_b(z, 3, s_185))) goto lab9;
                            goto lab8;
                        lab9:
                            z->c = z->l - m5;
                            if (!(eq_s_b(z, 3, s_186))) goto lab10;
                            goto lab8;
                        lab10:
                            z->c = z->l - m5;
                            if (!(eq_s_b(z, 3, s_187))) goto lab11;
                            goto lab8;
                        lab11:
                            z->c = z->l - m5;
                            if (!(eq_s_b(z, 3, s_188))) goto lab12;
                            goto lab8;
                        lab12:
                            z->c = z->l - m5;
                            if (!(eq_s_b(z, 3, s_189))) goto lab13;
                            goto lab8;
                        lab13:
                            z->c = z->l - m5;
                            if (!(eq_s_b(z, 3, s_190))) goto lab7;
                        }
                    lab8:
                        goto lab4;
                    lab7:
                        z->c = z->l - m4;
                    }
                    z->c = z->l - m_test;
                }
                goto lab3;
            lab4:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 3, s_191))) goto lab2;
                {   int m_test = z->l - z->c; /* test, line 288 */
                    {   int m6 = z->l - z->c; (void)m6; /* or, line 288 */
                        if (!(eq_s_b(z, 3, s_192))) goto lab15;
                        goto lab14;
                    lab15:
                        z->c = z->l - m6;
                        if (!(eq_s_b(z, 3, s_193))) goto lab16;
                        goto lab14;
                    lab16:
                        z->c = z->l - m6;
                        if (!(eq_s_b(z, 3, s_194))) goto lab17;
                        goto lab14;
                    lab17:
                        z->c = z->l - m6;
                        if (!(eq_s_b(z, 3, s_195))) goto lab18;
                        goto lab14;
                    lab18:
                        z->c = z->l - m6;
                        if (!(eq_s_b(z, 3, s_196))) goto lab19;
                        goto lab14;
                    lab19:
                        z->c = z->l - m6;
                        if (!(eq_s_b(z, 3, s_197))) goto lab2;
                    }
                lab14:
                    if (!(eq_s_b(z, 3, s_198))) goto lab2;
                    z->c = z->l - m_test;
                }
            }
        lab3:
            z->bra = z->c; /* ], line 289 */
            {   int ret = slice_from_s(z, 3, s_199); /* <-, line 289 */
                if (ret < 0) return ret;
            }
            z->c = z->l - m_test;
        }
        goto lab0;
    lab2:
        z->c = z->l - m1;
        {   int m_test = z->l - z->c; /* test, line 293 */
            z->ket = z->c; /* [, line 293 */
            {   int m7 = z->l - z->c; (void)m7; /* or, line 293 */
                if (!(eq_s_b(z, 9, s_200))) goto lab22;
                goto lab21;
            lab22:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_201))) goto lab23;
                goto lab21;
            lab23:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_202))) goto lab24;
                goto lab21;
            lab24:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_203))) goto lab25;
                goto lab21;
            lab25:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_204))) goto lab26;
                {   int m_test = z->l - z->c; /* test, line 295 */
                    {   int m8 = z->l - z->c; (void)m8; /* not, line 295 */
                        if (!(eq_s_b(z, 3, s_205))) goto lab27;
                        goto lab26;
                    lab27:
                        z->c = z->l - m8;
                    }
                    z->c = z->l - m_test;
                }
                goto lab21;
            lab26:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 15, s_206))) goto lab28;
                goto lab21;
            lab28:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 21, s_207))) goto lab29;
                goto lab21;
            lab29:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_208))) goto lab30;
                goto lab21;
            lab30:
                z->c = z->l - m7;
                if (!(z->I[2] >= 7)) goto lab31;
                if (!(eq_s_b(z, 12, s_209))) goto lab31;
                goto lab21;
            lab31:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_210))) goto lab32;
                goto lab21;
            lab32:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_211))) goto lab33;
                goto lab21;
            lab33:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 12, s_212))) goto lab34;
                goto lab21;
            lab34:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 6, s_213))) goto lab35;
                {   int m_test = z->l - z->c; /* test, line 301 */
                    {   int m9 = z->l - z->c; (void)m9; /* not, line 301 */
                        {   int m10 = z->l - z->c; (void)m10; /* or, line 301 */
                            if (!(eq_s_b(z, 3, s_214))) goto lab38;
                            goto lab37;
                        lab38:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_215))) goto lab39;
                            goto lab37;
                        lab39:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_216))) goto lab40;
                            goto lab37;
                        lab40:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_217))) goto lab41;
                            goto lab37;
                        lab41:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_218))) goto lab42;
                            goto lab37;
                        lab42:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_219))) goto lab43;
                            goto lab37;
                        lab43:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_220))) goto lab44;
                            goto lab37;
                        lab44:
                            z->c = z->l - m10;
                            if (!(eq_s_b(z, 3, s_221))) goto lab36;
                        }
                    lab37:
                        goto lab35;
                    lab36:
                        z->c = z->l - m9;
                    }
                    z->c = z->l - m_test;
                }
                goto lab21;
            lab35:
                z->c = z->l - m7;
                if (!(eq_s_b(z, 9, s_222))) goto lab20;
            }
        lab21:
            z->bra = z->c; /* ], line 302 */
            {   int ret = slice_from_s(z, 3, s_223); /* <-, line 302 */
                if (ret < 0) return ret;
            }
            z->c = z->l - m_test;
        }
        goto lab0;
    lab20:
        z->c = z->l - m1;
        {   int m_test = z->l - z->c; /* test, line 306 */
            z->ket = z->c; /* [, line 306 */
            {   int m11 = z->l - z->c; (void)m11; /* or, line 306 */
                if (!(eq_s_b(z, 9, s_224))) goto lab47;
                goto lab46;
            lab47:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 12, s_225))) goto lab48;
                goto lab46;
            lab48:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 12, s_226))) goto lab49;
                goto lab46;
            lab49:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 12, s_227))) goto lab50;
                goto lab46;
            lab50:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 12, s_228))) goto lab51;
                goto lab46;
            lab51:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 12, s_229))) goto lab52;
                goto lab46;
            lab52:
                z->c = z->l - m11;
                if (!(eq_s_b(z, 6, s_230))) goto lab45;
                {   int m_test = z->l - z->c; /* test, line 309 */
                    {   int m12 = z->l - z->c; (void)m12; /* not, line 309 */
                        {   int m13 = z->l - z->c; (void)m13; /* or, line 309 */
                            if (!(eq_s_b(z, 3, s_231))) goto lab55;
                            goto lab54;
                        lab55:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_232))) goto lab56;
                            goto lab54;
                        lab56:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_233))) goto lab57;
                            goto lab54;
                        lab57:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_234))) goto lab58;
                            goto lab54;
                        lab58:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_235))) goto lab59;
                            goto lab54;
                        lab59:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_236))) goto lab60;
                            goto lab54;
                        lab60:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_237))) goto lab61;
                            goto lab54;
                        lab61:
                            z->c = z->l - m13;
                            if (!(eq_s_b(z, 3, s_238))) goto lab53;
                        }
                    lab54:
                        goto lab45;
                    lab53:
                        z->c = z->l - m12;
                    }
                    z->c = z->l - m_test;
                }
            }
        lab46:
            z->bra = z->c; /* ], line 309 */
            {   int ret = slice_del(z); /* delete, line 309 */
                if (ret < 0) return ret;
            }
            z->c = z->l - m_test;
        }
        goto lab0;
    lab45:
        z->c = z->l - m1;
        {   int m_test = z->l - z->c; /* test, line 313 */
            z->ket = z->c; /* [, line 313 */
            if (!(eq_s_b(z, 3, s_239))) return 0;
            z->bra = z->c; /* ], line 313 */
            {   int ret = slice_from_s(z, 3, s_240); /* <-, line 313 */
                if (ret < 0) return ret;
            }
            z->c = z->l - m_test;
        }
    }
lab0:
    z->B[1] = 1; /* set found_a_match, line 317 */
    z->B[2] = 1; /* set found_vetrumai_urupu, line 318 */
    {   int m14 = z->l - z->c; (void)m14; /* do, line 319 */
        z->ket = z->c; /* [, line 319 */
        if (!(eq_s_b(z, 9, s_241))) goto lab62;
        z->bra = z->c; /* ], line 319 */
        {   int ret = slice_from_s(z, 3, s_242); /* <-, line 319 */
            if (ret < 0) return ret;
        }
    lab62:
        z->c = z->l - m14;
    }
    z->c = z->lb;
    {   int c15 = z->c; /* do, line 321 */
        {   int ret = r_fix_endings(z);
            if (ret == 0) goto lab63; /* call fix_endings, line 321 */
            if (ret < 0) return ret;
        }
    lab63:
        z->c = c15;
    }
    return 1;
}

static int r_remove_tense_suffixes(struct SN_env * z) {
    z->B[1] = 1; /* set found_a_match, line 324 */
    while(1) { /* repeat, line 325 */
        int c1 = z->c;
        if (!(z->B[1])) goto lab0; /* Boolean test found_a_match, line 325 */
        {   int c2 = z->c; /* do, line 325 */
            {   int ret = r_remove_tense_suffix(z);
                if (ret == 0) goto lab1; /* call remove_tense_suffix, line 325 */
                if (ret < 0) return ret;
            }
        lab1:
            z->c = c2;
        }
        continue;
    lab0:
        z->c = c1;
        break;
    }
    return 1;
}

static int r_remove_tense_suffix(struct SN_env * z) {
    z->B[1] = 0; /* unset found_a_match, line 328 */
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 329 */
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 330 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 331 */
        {   int m2 = z->l - z->c; (void)m2; /* or, line 337 */
            {   int m_test = z->l - z->c; /* test, line 332 */
                z->ket = z->c; /* [, line 332 */
                {   int m3 = z->l - z->c; (void)m3; /* or, line 332 */
                    if (!(eq_s_b(z, 24, s_243))) goto lab4;
                    goto lab3;
                lab4:
                    z->c = z->l - m3;
                    if (!(eq_s_b(z, 9, s_244))) goto lab2;
                }
            lab3:
                z->bra = z->c; /* ], line 333 */
                {   int ret = slice_del(z); /* delete, line 334 */
                    if (ret < 0) return ret;
                }
                z->B[1] = 1; /* set found_a_match, line 335 */
                z->c = z->l - m_test;
            }
            goto lab1;
        lab2:
            z->c = z->l - m2;
            {   int m_test = z->l - z->c; /* test, line 338 */
                z->ket = z->c; /* [, line 338 */
                {   int m4 = z->l - z->c; (void)m4; /* or, line 339 */
                    if (!(eq_s_b(z, 12, s_245))) goto lab7;
                    goto lab6;
                lab7:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_246))) goto lab8;
                    goto lab6;
                lab8:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_247))) goto lab9;
                    goto lab6;
                lab9:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_248))) goto lab10;
                    goto lab6;
                lab10:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_249))) goto lab11;
                    goto lab6;
                lab11:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_250))) goto lab12;
                    goto lab6;
                lab12:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_251))) goto lab13;
                    {   int m_test = z->l - z->c; /* test, line 342 */
                        {   int m5 = z->l - z->c; (void)m5; /* not, line 342 */
                            {   int m6 = z->l - z->c; (void)m6; /* or, line 342 */
                                if (!(eq_s_b(z, 3, s_252))) goto lab16;
                                goto lab15;
                            lab16:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_253))) goto lab17;
                                goto lab15;
                            lab17:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_254))) goto lab18;
                                goto lab15;
                            lab18:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_255))) goto lab19;
                                goto lab15;
                            lab19:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_256))) goto lab20;
                                goto lab15;
                            lab20:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_257))) goto lab21;
                                goto lab15;
                            lab21:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_258))) goto lab22;
                                goto lab15;
                            lab22:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_259))) goto lab23;
                                goto lab15;
                            lab23:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_260))) goto lab24;
                                goto lab15;
                            lab24:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_261))) goto lab25;
                                goto lab15;
                            lab25:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_262))) goto lab26;
                                goto lab15;
                            lab26:
                                z->c = z->l - m6;
                                if (!(eq_s_b(z, 3, s_263))) goto lab14;
                            }
                        lab15:
                            goto lab13;
                        lab14:
                            z->c = z->l - m5;
                        }
                        z->c = z->l - m_test;
                    }
                    goto lab6;
                lab13:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_264))) goto lab27;
                    goto lab6;
                lab27:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_265))) goto lab28;
                    goto lab6;
                lab28:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_266))) goto lab29;
                    goto lab6;
                lab29:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_267))) goto lab30;
                    goto lab6;
                lab30:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 3, s_268))) goto lab31;
                    goto lab6;
                lab31:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 3, s_269))) goto lab32;
                    goto lab6;
                lab32:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 3, s_270))) goto lab33;
                    goto lab6;
                lab33:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 3, s_271))) goto lab34;
                    goto lab6;
                lab34:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 3, s_272))) goto lab35;
                    goto lab6;
                lab35:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_273))) goto lab36;
                    goto lab6;
                lab36:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_274))) goto lab37;
                    goto lab6;
                lab37:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_275))) goto lab38;
                    goto lab6;
                lab38:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 6, s_276))) goto lab39;
                    {   int m_test = z->l - z->c; /* test, line 348 */
                        {   int m7 = z->l - z->c; (void)m7; /* not, line 348 */
                            {   int m8 = z->l - z->c; (void)m8; /* or, line 348 */
                                if (!(eq_s_b(z, 3, s_277))) goto lab42;
                                goto lab41;
                            lab42:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_278))) goto lab43;
                                goto lab41;
                            lab43:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_279))) goto lab44;
                                goto lab41;
                            lab44:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_280))) goto lab45;
                                goto lab41;
                            lab45:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_281))) goto lab46;
                                goto lab41;
                            lab46:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_282))) goto lab47;
                                goto lab41;
                            lab47:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_283))) goto lab48;
                                goto lab41;
                            lab48:
                                z->c = z->l - m8;
                                if (!(eq_s_b(z, 3, s_284))) goto lab40;
                            }
                        lab41:
                            goto lab39;
                        lab40:
                            z->c = z->l - m7;
                        }
                        z->c = z->l - m_test;
                    }
                    goto lab6;
                lab39:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 15, s_285))) goto lab49;
                    goto lab6;
                lab49:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_286))) goto lab50;
                    goto lab6;
                lab50:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 9, s_287))) goto lab51;
                    goto lab6;
                lab51:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_288))) goto lab52;
                    goto lab6;
                lab52:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_289))) goto lab53;
                    goto lab6;
                lab53:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_290))) goto lab54;
                    goto lab6;
                lab54:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 12, s_291))) goto lab55;
                    goto lab6;
                lab55:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 6, s_292))) goto lab56;
                    goto lab6;
                lab56:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 6, s_293))) goto lab5;
                }
            lab6:
                z->bra = z->c; /* ], line 354 */
                {   int ret = slice_del(z); /* delete, line 354 */
                    if (ret < 0) return ret;
                }
                z->B[1] = 1; /* set found_a_match, line 355 */
                z->c = z->l - m_test;
            }
            goto lab1;
        lab5:
            z->c = z->l - m2;
            {   int m_test = z->l - z->c; /* test, line 358 */
                z->ket = z->c; /* [, line 358 */
                {   int m9 = z->l - z->c; (void)m9; /* or, line 358 */
                    if (!(eq_s_b(z, 9, s_294))) goto lab59;
                    {   int m_test = z->l - z->c; /* test, line 358 */
                        {   int m10 = z->l - z->c; (void)m10; /* not, line 358 */
                            if (!(eq_s_b(z, 3, s_295))) goto lab60;
                            goto lab59;
                        lab60:
                            z->c = z->l - m10;
                        }
                        z->c = z->l - m_test;
                    }
                    goto lab58;
                lab59:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_296))) goto lab61;
                    goto lab58;
                lab61:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_297))) goto lab62;
                    goto lab58;
                lab62:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_298))) goto lab63;
                    goto lab58;
                lab63:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 3, s_299))) goto lab64;
                    goto lab58;
                lab64:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_300))) goto lab65;
                    goto lab58;
                lab65:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_301))) goto lab66;
                    goto lab58;
                lab66:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_302))) goto lab67;
                    goto lab58;
                lab67:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_303))) goto lab68;
                    goto lab58;
                lab68:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_304))) goto lab69;
                    goto lab58;
                lab69:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_305))) goto lab70;
                    goto lab58;
                lab70:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_306))) goto lab71;
                    goto lab58;
                lab71:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_307))) goto lab72;
                    goto lab58;
                lab72:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_308))) goto lab73;
                    goto lab58;
                lab73:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_309))) goto lab74;
                    goto lab58;
                lab74:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_310))) goto lab75;
                    goto lab58;
                lab75:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 9, s_311))) goto lab76;
                    goto lab58;
                lab76:
                    z->c = z->l - m9;
                    if (!(eq_s_b(z, 12, s_312))) goto lab57;
                }
            lab58:
                z->bra = z->c; /* ], line 368 */
                {   int ret = slice_from_s(z, 3, s_313); /* <-, line 368 */
                    if (ret < 0) return ret;
                }
                z->B[1] = 1; /* set found_a_match, line 369 */
                z->c = z->l - m_test;
            }
            goto lab1;
        lab57:
            z->c = z->l - m2;
            {   int m_test = z->l - z->c; /* test, line 372 */
                z->ket = z->c; /* [, line 372 */
                {   int m11 = z->l - z->c; (void)m11; /* or, line 372 */
                    if (!(eq_s_b(z, 6, s_314))) goto lab78;
                    goto lab77;
                lab78:
                    z->c = z->l - m11;
                    if (!(eq_s_b(z, 6, s_315))) goto lab0;
                }
            lab77:
                {   int m_test = z->l - z->c; /* test, line 372 */
                    if (!(eq_s_b(z, 3, s_316))) goto lab0;
                    z->c = z->l - m_test;
                }
                z->bra = z->c; /* ], line 372 */
                {   int ret = slice_del(z); /* delete, line 372 */
                    if (ret < 0) return ret;
                }
                z->B[1] = 1; /* set found_a_match, line 373 */
                z->c = z->l - m_test;
            }
        }
    lab1:
    lab0:
        z->c = z->l - m1;
    }
    {   int m12 = z->l - z->c; (void)m12; /* do, line 376 */
        z->ket = z->c; /* [, line 376 */
        {   int m13 = z->l - z->c; (void)m13; /* or, line 376 */
            if (!(eq_s_b(z, 18, s_317))) goto lab81;
            goto lab80;
        lab81:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 21, s_318))) goto lab82;
            goto lab80;
        lab82:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 15, s_319))) goto lab83;
            goto lab80;
        lab83:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 18, s_320))) goto lab84;
            goto lab80;
        lab84:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 9, s_321))) goto lab85;
            goto lab80;
        lab85:
            z->c = z->l - m13;
            if (!(eq_s_b(z, 12, s_322))) goto lab79;
        }
    lab80:
        z->bra = z->c; /* ], line 381 */
        {   int ret = slice_del(z); /* delete, line 381 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set found_a_match, line 382 */
    lab79:
        z->c = z->l - m12;
    }
    z->c = z->lb;
    {   int c14 = z->c; /* do, line 385 */
        {   int ret = r_fix_endings(z);
            if (ret == 0) goto lab86; /* call fix_endings, line 385 */
            if (ret < 0) return ret;
        }
    lab86:
        z->c = c14;
    }
    return 1;
}

extern int tamil_UTF_8_stem(struct SN_env * z) {
    {   int c1 = z->c; /* do, line 389 */
        {   int ret = r_fix_ending(z);
            if (ret == 0) goto lab0; /* call fix_ending, line 389 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int ret = r_has_min_length(z);
        if (ret == 0) return 0; /* call has_min_length, line 390 */
        if (ret < 0) return ret;
    }
    {   int c2 = z->c; /* do, line 391 */
        {   int ret = r_remove_question_prefixes(z);
            if (ret == 0) goto lab1; /* call remove_question_prefixes, line 391 */
            if (ret < 0) return ret;
        }
    lab1:
        z->c = c2;
    }
    {   int c3 = z->c; /* do, line 392 */
        {   int ret = r_remove_pronoun_prefixes(z);
            if (ret == 0) goto lab2; /* call remove_pronoun_prefixes, line 392 */
            if (ret < 0) return ret;
        }
    lab2:
        z->c = c3;
    }
    {   int c4 = z->c; /* do, line 393 */
        {   int ret = r_remove_question_suffixes(z);
            if (ret == 0) goto lab3; /* call remove_question_suffixes, line 393 */
            if (ret < 0) return ret;
        }
    lab3:
        z->c = c4;
    }
    {   int c5 = z->c; /* do, line 394 */
        {   int ret = r_remove_um(z);
            if (ret == 0) goto lab4; /* call remove_um, line 394 */
            if (ret < 0) return ret;
        }
    lab4:
        z->c = c5;
    }
    {   int c6 = z->c; /* do, line 395 */
        {   int ret = r_remove_common_word_endings(z);
            if (ret == 0) goto lab5; /* call remove_common_word_endings, line 395 */
            if (ret < 0) return ret;
        }
    lab5:
        z->c = c6;
    }
    {   int c7 = z->c; /* do, line 396 */
        {   int ret = r_remove_vetrumai_urupukal(z);
            if (ret == 0) goto lab6; /* call remove_vetrumai_urupukal, line 396 */
            if (ret < 0) return ret;
        }
    lab6:
        z->c = c7;
    }
    {   int c8 = z->c; /* do, line 397 */
        {   int ret = r_remove_plural_suffix(z);
            if (ret == 0) goto lab7; /* call remove_plural_suffix, line 397 */
            if (ret < 0) return ret;
        }
    lab7:
        z->c = c8;
    }
    {   int c9 = z->c; /* do, line 398 */
        {   int ret = r_remove_command_suffixes(z);
            if (ret == 0) goto lab8; /* call remove_command_suffixes, line 398 */
            if (ret < 0) return ret;
        }
    lab8:
        z->c = c9;
    }
    {   int c10 = z->c; /* do, line 399 */
        {   int ret = r_remove_tense_suffixes(z);
            if (ret == 0) goto lab9; /* call remove_tense_suffixes, line 399 */
            if (ret < 0) return ret;
        }
    lab9:
        z->c = c10;
    }
    return 1;
}

extern struct SN_env * tamil_UTF_8_create_env(void) { return SN_create_env(0, 3, 5); }

extern void tamil_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 0); }

