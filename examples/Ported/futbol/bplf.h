#ifndef POKEY_2013311221233
#define POKEY_2013311221233

#include "CM9_BC.h"


// Size Optimized with one servo ID array per processed motion file
// Motion file: bplf_bplf
prog_uint16_t bplf_bplf_id[] __FLASH__ = {12,7,8,9,10,11,12,13,14,15,16,17,18};



// Sequence: Init
prog_uint16_t bplf_Init_1[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:1.000

transition_t bplf_Init[] __FLASH__ = {{bplf_bplf_id,1},{bplf_Init_1,1000}};


// Sequence: Balance
prog_uint16_t bplf_Balance_1[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_Balance[] __FLASH__ = {{bplf_bplf_id,1},{bplf_Balance_1,96}};


// Sequence: F_R_S
prog_uint16_t bplf_F_R_S_1[] __FLASH__ = {12,358,666,507,516,291,732,160,863,687,336,457,486};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_R_S_2[] __FLASH__ = {12,358,666,487,526,271,722,60,843,737,326,477,496};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_R_S_3[] __FLASH__ = {12,358,666,507,516,271,712,160,863,672,306,507,516};	//wait:0.000	//move:0.096

transition_t bplf_F_R_S[] __FLASH__ = {{bplf_bplf_id,3},{bplf_F_R_S_1,72},{bplf_F_R_S_2,72},{bplf_F_R_S_3,96}};


// Sequence: F_L_S
prog_uint16_t bplf_F_L_S_1[] __FLASH__ = {12,358,666,507,516,301,722,160,863,687,336,537,566};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_L_S_2[] __FLASH__ = {12,357,665,497,536,301,752,160,963,687,286,527,546};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_L_S_3[] __FLASH__ = {12,358,666,507,516,311,752,160,863,717,351,507,516};	//wait:0.000	//move:0.096

transition_t bplf_F_L_S[] __FLASH__ = {{bplf_bplf_id,3},{bplf_F_L_S_1,72},{bplf_F_L_S_2,72},{bplf_F_L_S_3,96}};


// Sequence: ff_r_l
prog_uint16_t bplf_ff_r_l_1[] __FLASH__ = {12,357,665,507,516,261,682,160,863,647,296,527,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_r_l_2[] __FLASH__ = {12,357,665,497,536,301,802,160,983,687,296,527,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_r_l_3[] __FLASH__ = {12,358,666,507,516,331,752,160,863,717,366,507,516};	//wait:0.000	//move:0.072

transition_t bplf_ff_r_l[] __FLASH__ = {{bplf_bplf_id,3},{bplf_ff_r_l_1,72},{bplf_ff_r_l_2,72},{bplf_ff_r_l_3,72}};


// Sequence: ff_l_r
prog_uint16_t bplf_ff_l_r_1[] __FLASH__ = {12,358,666,507,516,341,762,160,863,727,376,487,496};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_l_r_2[] __FLASH__ = {12,358,666,487,526,241,722,80,863,707,336,487,496};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_l_r_3[] __FLASH__ = {12,358,666,507,516,271,692,160,863,657,306,507,516};	//wait:0.000	//move:0.072

transition_t bplf_ff_l_r[] __FLASH__ = {{bplf_bplf_id,3},{bplf_ff_l_r_1,72},{bplf_ff_l_r_2,72},{bplf_ff_l_r_3,72}};


// Sequence: F_R_E
prog_uint16_t bplf_F_R_E_1[] __FLASH__ = {12,358,666,507,516,271,692,160,863,657,306,547,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_R_E_2[] __FLASH__ = {12,357,665,497,536,301,732,160,963,707,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_R_E_3[] __FLASH__ = {12,358,666,507,516,301,722,160,863,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_F_R_E[] __FLASH__ = {{bplf_bplf_id,3},{bplf_F_R_E_1,96},{bplf_F_R_E_2,96},{bplf_F_R_E_3,96}};


// Sequence: F_L_E
prog_uint16_t bplf_F_L_E_1[] __FLASH__ = {12,358,666,507,516,331,752,160,863,717,366,447,476};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_L_E_2[] __FLASH__ = {12,358,666,487,526,271,722,60,863,737,326,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_L_E_3[] __FLASH__ = {12,358,666,507,516,301,722,160,863,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_F_L_E[] __FLASH__ = {{bplf_bplf_id,3},{bplf_F_L_E_1,96},{bplf_F_L_E_2,96},{bplf_F_L_E_3,96}};


// Sequence: ff_r_l
prog_uint16_t bplf_ff_r_l_1[] __FLASH__ = {12,357,665,507,516,261,682,160,863,647,296,527,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_r_l_2[] __FLASH__ = {12,357,665,497,536,301,802,160,983,687,296,527,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_r_l_3[] __FLASH__ = {12,358,666,507,516,331,752,160,863,717,366,507,516};	//wait:0.000	//move:0.072

transition_t bplf_ff_r_l[] __FLASH__ = {{bplf_bplf_id,3},{bplf_ff_r_l_1,72},{bplf_ff_r_l_2,72},{bplf_ff_r_l_3,72}};


// Sequence: ff_l_r
prog_uint16_t bplf_ff_l_r_1[] __FLASH__ = {12,358,666,507,516,341,762,160,863,727,376,487,496};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_l_r_2[] __FLASH__ = {12,358,666,487,526,241,722,80,863,707,336,487,496};	//wait:0.000	//move:0.072
prog_uint16_t bplf_ff_l_r_3[] __FLASH__ = {12,358,666,507,516,271,692,160,863,657,306,507,516};	//wait:0.000	//move:0.072

transition_t bplf_ff_l_r[] __FLASH__ = {{bplf_bplf_id,3},{bplf_ff_l_r_1,72},{bplf_ff_l_r_2,72},{bplf_ff_l_r_3,72}};


// Sequence: FRT_R_M
prog_uint16_t bplf_FRT_R_M_1[] __FLASH__ = {12,358,666,507,516,301,762,160,863,707,346,447,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FRT_R_M_2[] __FLASH__ = {12,358,666,487,526,251,742,60,843,737,326,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FRT_R_M_3[] __FLASH__ = {12,458,666,507,516,281,702,160,863,677,316,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FRT_R_M_4[] __FLASH__ = {12,358,566,507,516,261,702,160,863,667,306,537,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FRT_R_M_5[] __FLASH__ = {12,357,665,497,536,281,772,160,963,687,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FRT_R_M_6[] __FLASH__ = {12,358,666,507,516,311,752,160,863,707,346,507,516};	//wait:0.000	//move:0.096

transition_t bplf_FRT_R_M[] __FLASH__ = {{bplf_bplf_id,6},{bplf_FRT_R_M_1,96},{bplf_FRT_R_M_2,96},{bplf_FRT_R_M_3,96},{bplf_FRT_R_M_4,96},{bplf_FRT_R_M_5,96},{bplf_FRT_R_M_6,96}};


// Sequence: FLT_L_M
prog_uint16_t bplf_FLT_L_M_1[] __FLASH__ = {12,358,666,507,516,271,712,160,863,677,316,537,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FLT_L_M_2[] __FLASH__ = {12,357,665,497,536,281,772,160,963,697,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FLT_L_M_3[] __FLASH__ = {12,358,566,507,516,311,732,160,863,707,346,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FLT_L_M_4[] __FLASH__ = {12,458,666,507,516,331,752,160,863,727,346,447,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FLT_L_M_5[] __FLASH__ = {12,358,666,487,526,251,742,60,863,737,336,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_FLT_L_M_6[] __FLASH__ = {12,358,666,507,516,281,702,160,863,677,316,507,516};	//wait:0.000	//move:0.096

transition_t bplf_FLT_L_M[] __FLASH__ = {{bplf_bplf_id,6},{bplf_FLT_L_M_1,96},{bplf_FLT_L_M_2,96},{bplf_FLT_L_M_3,96},{bplf_FLT_L_M_4,96},{bplf_FLT_L_M_5,96},{bplf_FLT_L_M_6,96}};


// Sequence: B_R_S
prog_uint16_t bplf_B_R_S_1[] __FLASH__ = {12,358,666,507,516,311,712,160,863,687,336,457,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_S_2[] __FLASH__ = {12,358,666,487,526,281,712,60,863,737,336,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_S_3[] __FLASH__ = {12,358,666,508,515,341,722,160,863,697,366,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_R_S[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_R_S_1,96},{bplf_B_R_S_2,96},{bplf_B_R_S_3,96}};


// Sequence: B_L_S
prog_uint16_t bplf_B_L_S_1[] __FLASH__ = {12,358,666,507,516,331,692,160,863,687,336,537,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_S_2[] __FLASH__ = {12,357,665,497,536,311,742,160,963,687,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_S_3[] __FLASH__ = {12,358,666,507,516,301,682,160,863,667,316,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_L_S[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_L_S_1,96},{bplf_B_L_S_2,96},{bplf_B_L_S_3,96}};


// Sequence: B_R_M
prog_uint16_t bplf_B_R_M_1[] __FLASH__ = {12,358,666,507,516,341,742,170,863,707,376,547,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_M_2[] __FLASH__ = {12,357,665,497,536,301,742,160,993,687,266,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_M_3[] __FLASH__ = {12,358,666,507,516,281,672,160,863,657,306,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_R_M[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_R_M_1,96},{bplf_B_R_M_2,96},{bplf_B_R_M_3,96}};


// Sequence: B_L_M
prog_uint16_t bplf_B_L_M_1[] __FLASH__ = {12,358,666,507,516,281,682,160,853,657,306,477,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_M_2[] __FLASH__ = {12,358,666,487,526,271,722,60,863,737,336,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_M_3[] __FLASH__ = {12,358,666,507,516,341,742,160,863,717,366,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_L_M[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_L_M_1,96},{bplf_B_L_M_2,96},{bplf_B_L_M_3,96}};


// Sequence: B_R_E
prog_uint16_t bplf_B_R_E_1[] __FLASH__ = {12,358,666,507,516,341,722,160,863,707,356,537,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_E_2[] __FLASH__ = {12,357,665,497,536,301,782,160,963,687,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_R_E_3[] __FLASH__ = {12,358,666,507,516,301,722,160,863,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_R_E[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_R_E_1,96},{bplf_B_R_E_2,96},{bplf_B_R_E_3,96}};


// Sequence: B_L_E
prog_uint16_t bplf_B_L_E_1[] __FLASH__ = {12,358,666,507,516,291,692,160,863,667,316,447,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_E_2[] __FLASH__ = {12,358,666,487,526,241,722,60,863,737,336,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_L_E_3[] __FLASH__ = {12,358,666,507,516,301,722,160,863,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_B_L_E[] __FLASH__ = {{bplf_bplf_id,3},{bplf_B_L_E_1,96},{bplf_B_L_E_2,96},{bplf_B_L_E_3,96}};


// Sequence: RFT
prog_uint16_t bplf_RFT_1[] __FLASH__ = {12,338,686,457,566,271,722,110,853,717,336,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_RFT_2[] __FLASH__ = {12,338,686,477,546,301,722,170,853,687,336,487,516};	//wait:0.000	//move:0.072
prog_uint16_t bplf_RFT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_RFT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_RFT_1,96},{bplf_RFT_2,72},{bplf_RFT_3,96}};


// Sequence: LFT
prog_uint16_t bplf_LFT_1[] __FLASH__ = {12,337,685,457,566,301,752,170,913,687,306,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_LFT_2[] __FLASH__ = {12,337,685,477,546,301,722,170,853,687,336,507,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_LFT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_LFT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_LFT_1,96},{bplf_LFT_2,72},{bplf_LFT_3,96}};


// Sequence: RBT
prog_uint16_t bplf_RBT_1[] __FLASH__ = {12,398,626,457,566,271,722,110,853,717,336,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_RBT_2[] __FLASH__ = {12,398,626,477,546,301,722,160,863,687,336,487,516};	//wait:0.000	//move:0.072
prog_uint16_t bplf_RBT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_RBT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_RBT_1,96},{bplf_RBT_2,72},{bplf_RBT_3,96}};


// Sequence: LBT
prog_uint16_t bplf_LBT_1[] __FLASH__ = {12,397,625,457,566,301,752,170,913,687,306,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_LBT_2[] __FLASH__ = {12,397,625,477,546,301,722,160,863,687,336,507,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_LBT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_LBT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_LBT_1,96},{bplf_LBT_2,72},{bplf_LBT_3,96}};


// Sequence: R
prog_uint16_t bplf_R_1[] __FLASH__ = {12,358,666,457,566,271,722,120,853,717,336,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_R_2[] __FLASH__ = {12,358,666,477,546,301,722,170,853,687,336,487,516};	//wait:0.000	//move:0.072
prog_uint16_t bplf_R_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_R[] __FLASH__ = {{bplf_bplf_id,3},{bplf_R_1,96},{bplf_R_2,72},{bplf_R_3,96}};


// Sequence: L
prog_uint16_t bplf_L_1[] __FLASH__ = {12,357,665,457,566,301,752,170,903,687,306,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_L_2[] __FLASH__ = {12,357,665,477,546,301,722,170,853,687,336,507,536};	//wait:0.000	//move:0.072
prog_uint16_t bplf_L_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.096

transition_t bplf_L[] __FLASH__ = {{bplf_bplf_id,3},{bplf_L_1,96},{bplf_L_2,72},{bplf_L_3,96}};


// Sequence: Fst_R
prog_uint16_t bplf_Fst_R_1[] __FLASH__ = {12,358,666,447,596,271,722,110,853,717,336,507,516};	//wait:0.016	//move:0.096
prog_uint16_t bplf_Fst_R_2[] __FLASH__ = {12,358,666,447,576,301,722,170,853,687,336,487,516};	//wait:0.000	//move:0.104
prog_uint16_t bplf_Fst_R_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.024	//move:0.096

transition_t bplf_Fst_R[] __FLASH__ = {{bplf_bplf_id,3},{bplf_Fst_R_1,96},{bplf_Fst_R_2,104},{bplf_Fst_R_3,96}};


// Sequence: Fst_L
prog_uint16_t bplf_Fst_L_1[] __FLASH__ = {12,357,665,427,576,301,742,170,893,687,316,507,516};	//wait:0.016	//move:0.096
prog_uint16_t bplf_Fst_L_2[] __FLASH__ = {12,357,665,447,576,301,722,170,853,687,336,507,536};	//wait:0.000	//move:0.104
prog_uint16_t bplf_Fst_L_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.024	//move:0.096

transition_t bplf_Fst_L[] __FLASH__ = {{bplf_bplf_id,3},{bplf_Fst_L_1,96},{bplf_Fst_L_2,104},{bplf_Fst_L_3,96}};


// Sequence: RT
prog_uint16_t bplf_RT_1[] __FLASH__ = {12,438,566,507,516,271,722,110,853,717,336,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_RT_2[] __FLASH__ = {12,408,616,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.072
prog_uint16_t bplf_RT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.144

transition_t bplf_RT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_RT_1,96},{bplf_RT_2,72},{bplf_RT_3,144}};


// Sequence: LT
prog_uint16_t bplf_LT_1[] __FLASH__ = {12,457,585,507,516,301,752,170,913,687,306,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_LT_2[] __FLASH__ = {12,407,615,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.072
prog_uint16_t bplf_LT_3[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.144

transition_t bplf_LT[] __FLASH__ = {{bplf_bplf_id,3},{bplf_LT_1,96},{bplf_LT_2,72},{bplf_LT_3,144}};


// Sequence: Fgetup
prog_uint16_t bplf_Fgetup_1[] __FLASH__ = {12,353,670,508,515,346,677,282,741,617,406,508,515};	//wait:0.000	//move:0.072
prog_uint16_t bplf_Fgetup_2[] __FLASH__ = {12,353,670,508,515,346,677,282,741,617,406,508,515};	//wait:0.000	//move:0.072
prog_uint16_t bplf_Fgetup_3[] __FLASH__ = {12,353,670,498,525,55,968,121,902,835,188,504,519};	//wait:0.000	//move:0.200
prog_uint16_t bplf_Fgetup_4[] __FLASH__ = {12,354,669,512,511,80,943,38,985,705,318,512,511};	//wait:0.000	//move:0.600
prog_uint16_t bplf_Fgetup_5[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.800

transition_t bplf_Fgetup[] __FLASH__ = {{bplf_bplf_id,5},{bplf_Fgetup_1,72},{bplf_Fgetup_2,72},{bplf_Fgetup_3,200},{bplf_Fgetup_4,600},{bplf_Fgetup_5,800}};


// Sequence: Bgetup
prog_uint16_t bplf_Bgetup_1[] __FLASH__ = {12,353,670,508,515,599,424,191,832,539,484,508,515};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Bgetup_2[] __FLASH__ = {12,353,670,508,515,600,423,111,912,796,227,508,515};	//wait:0.000	//move:0.200
prog_uint16_t bplf_Bgetup_3[] __FLASH__ = {12,353,670,508,515,600,423,181,842,796,237,508,515};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Bgetup_4[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.800

transition_t bplf_Bgetup[] __FLASH__ = {{bplf_bplf_id,4},{bplf_Bgetup_1,400},{bplf_Bgetup_2,200},{bplf_Bgetup_3,400},{bplf_Bgetup_4,800}};


// Sequence: F_PShoot_R
prog_uint16_t bplf_F_PShoot_R_1[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,537,566};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_R_2[] __FLASH__ = {12,357,665,497,536,301,782,170,953,687,286,527,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_R_3[] __FLASH__ = {12,358,666,507,516,331,792,170,853,737,386,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_R_4[] __FLASH__ = {12,358,666,507,516,321,802,170,853,757,386,447,470};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_R_5[] __FLASH__ = {12,358,666,487,526,351,752,40,853,737,336,477,466};	//wait:0.000	//move:0.200

transition_t bplf_F_PShoot_R[] __FLASH__ = {{bplf_bplf_id,5},{bplf_F_PShoot_R_1,96},{bplf_F_PShoot_R_2,96},{bplf_F_PShoot_R_3,96},{bplf_F_PShoot_R_4,96},{bplf_F_PShoot_R_5,200}};


// Sequence: F_PShoot_L
prog_uint16_t bplf_F_PShoot_L_1[] __FLASH__ = {12,357,665,507,516,301,722,170,853,687,336,457,486};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_L_2[] __FLASH__ = {12,358,666,487,526,271,722,70,853,737,336,477,496};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_L_3[] __FLASH__ = {12,357,665,507,516,231,692,170,853,637,286,507,516};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_L_4[] __FLASH__ = {12,357,665,507,516,221,702,170,853,637,266,553,576};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_PShoot_L_5[] __FLASH__ = {12,357,665,497,536,271,672,170,983,687,286,557,546};	//wait:0.000	//move:0.096

transition_t bplf_F_PShoot_L[] __FLASH__ = {{bplf_bplf_id,5},{bplf_F_PShoot_L_1,96},{bplf_F_PShoot_L_2,96},{bplf_F_PShoot_L_3,96},{bplf_F_PShoot_L_4,96},{bplf_F_PShoot_L_5,96}};


// Sequence: F_Shoot_R
prog_uint16_t bplf_F_Shoot_R_1[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,476};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_Shoot_R_2[] __FLASH__ = {12,358,666,487,526,271,722,10,853,737,336,477,456};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_R_3[] __FLASH__ = {12,358,666,487,526,221,722,440,853,467,356,477,455};	//wait:0.296	//move:0.096
prog_uint16_t bplf_F_Shoot_R_4[] __FLASH__ = {12,358,666,487,526,221,722,290,853,467,356,477,456};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_R_5[] __FLASH__ = {12,358,666,487,526,271,722,10,853,737,336,477,456};	//wait:0.000	//move:0.400
prog_uint16_t bplf_F_Shoot_R_6[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,476};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_R_7[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_F_Shoot_R[] __FLASH__ = {{bplf_bplf_id,7},{bplf_F_Shoot_R_1,72},{bplf_F_Shoot_R_2,96},{bplf_F_Shoot_R_3,96},{bplf_F_Shoot_R_4,96},{bplf_F_Shoot_R_5,400},{bplf_F_Shoot_R_6,96},{bplf_F_Shoot_R_7,496}};


// Sequence: F_Shoot_L
prog_uint16_t bplf_F_Shoot_L_1[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.072
prog_uint16_t bplf_F_Shoot_L_2[] __FLASH__ = {12,357,665,497,536,301,752,170,1013,687,286,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_L_3[] __FLASH__ = {12,357,665,497,536,301,802,170,583,677,556,563,546};	//wait:0.296	//move:0.096
prog_uint16_t bplf_F_Shoot_L_4[] __FLASH__ = {12,357,665,497,536,301,802,170,733,677,556,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_L_5[] __FLASH__ = {12,357,665,497,536,301,752,170,1013,687,286,557,546};	//wait:0.000	//move:0.400
prog_uint16_t bplf_F_Shoot_L_6[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_F_Shoot_L_7[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_F_Shoot_L[] __FLASH__ = {{bplf_bplf_id,7},{bplf_F_Shoot_L_1,72},{bplf_F_Shoot_L_2,96},{bplf_F_Shoot_L_3,96},{bplf_F_Shoot_L_4,96},{bplf_F_Shoot_L_5,400},{bplf_F_Shoot_L_6,96},{bplf_F_Shoot_L_7,496}};


// Sequence: R_Shoot
prog_uint16_t bplf_R_Shoot_1[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,466};	//wait:0.000	//move:0.072
prog_uint16_t bplf_R_Shoot_2[] __FLASH__ = {12,358,666,487,526,271,722,10,853,737,336,477,456};	//wait:0.000	//move:0.096
prog_uint16_t bplf_R_Shoot_3[] __FLASH__ = {12,358,666,387,556,321,722,210,853,657,336,327,455};	//wait:0.200	//move:0.096
prog_uint16_t bplf_R_Shoot_4[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,466};	//wait:0.000	//move:0.096
prog_uint16_t bplf_R_Shoot_5[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_R_Shoot[] __FLASH__ = {{bplf_bplf_id,5},{bplf_R_Shoot_1,72},{bplf_R_Shoot_2,96},{bplf_R_Shoot_3,96},{bplf_R_Shoot_4,96},{bplf_R_Shoot_5,496}};


// Sequence: L_Shoot
prog_uint16_t bplf_L_Shoot_1[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.072
prog_uint16_t bplf_L_Shoot_2[] __FLASH__ = {12,357,665,497,536,301,752,170,1013,687,286,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_L_Shoot_3[] __FLASH__ = {12,357,665,467,636,301,702,170,813,697,366,563,696};	//wait:0.200	//move:0.096
prog_uint16_t bplf_L_Shoot_4[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_L_Shoot_5[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_L_Shoot[] __FLASH__ = {{bplf_bplf_id,5},{bplf_L_Shoot_1,72},{bplf_L_Shoot_2,96},{bplf_L_Shoot_3,96},{bplf_L_Shoot_4,96},{bplf_L_Shoot_5,496}};


// Sequence: Pass_R
prog_uint16_t bplf_Pass_R_1[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,466};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Pass_R_2[] __FLASH__ = {12,358,666,487,526,271,722,10,853,737,336,477,456};	//wait:0.000	//move:0.096
prog_uint16_t bplf_Pass_R_3[] __FLASH__ = {12,428,656,437,526,221,722,210,853,577,336,477,456};	//wait:0.096	//move:0.096
prog_uint16_t bplf_Pass_R_4[] __FLASH__ = {12,378,656,584,496,141,722,200,853,557,346,477,446};	//wait:0.000	//move:0.096
prog_uint16_t bplf_Pass_R_5[] __FLASH__ = {12,428,656,437,526,221,722,210,853,577,336,477,456};	//wait:0.000	//move:0.200
prog_uint16_t bplf_Pass_R_6[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_Pass_R[] __FLASH__ = {{bplf_bplf_id,6},{bplf_Pass_R_1,400},{bplf_Pass_R_2,96},{bplf_Pass_R_3,96},{bplf_Pass_R_4,96},{bplf_Pass_R_5,200},{bplf_Pass_R_6,496}};


// Sequence: Pass_L
prog_uint16_t bplf_Pass_L_1[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Pass_L_2[] __FLASH__ = {12,357,665,497,536,301,752,170,1013,687,286,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_Pass_L_3[] __FLASH__ = {12,367,595,497,586,301,802,170,813,687,446,567,546};	//wait:0.096	//move:0.096
prog_uint16_t bplf_Pass_L_4[] __FLASH__ = {12,367,645,527,439,301,882,170,823,677,466,577,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_Pass_L_5[] __FLASH__ = {12,367,595,497,586,301,802,170,813,687,446,567,546};	//wait:0.000	//move:0.200
prog_uint16_t bplf_Pass_L_6[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_Pass_L[] __FLASH__ = {{bplf_bplf_id,6},{bplf_Pass_L_1,400},{bplf_Pass_L_2,96},{bplf_Pass_L_3,96},{bplf_Pass_L_4,96},{bplf_Pass_L_5,200},{bplf_Pass_L_6,496}};


// Sequence: B_Shoot_R
prog_uint16_t bplf_B_Shoot_R_1[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,476};	//wait:0.000	//move:0.400
prog_uint16_t bplf_B_Shoot_R_2[] __FLASH__ = {12,358,666,487,526,221,722,10,853,737,336,477,466};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_R_3[] __FLASH__ = {12,358,666,487,526,545,772,240,853,866,336,477,460};	//wait:0.200	//move:0.096
prog_uint16_t bplf_B_Shoot_R_4[] __FLASH__ = {12,358,666,487,526,495,722,240,853,766,306,477,460};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_R_5[] __FLASH__ = {12,358,666,487,526,221,722,10,853,737,336,477,466};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_R_6[] __FLASH__ = {12,358,666,507,516,321,722,210,853,667,336,477,476};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_R_7[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_B_Shoot_R[] __FLASH__ = {{bplf_bplf_id,7},{bplf_B_Shoot_R_1,400},{bplf_B_Shoot_R_2,96},{bplf_B_Shoot_R_3,96},{bplf_B_Shoot_R_4,96},{bplf_B_Shoot_R_5,96},{bplf_B_Shoot_R_6,96},{bplf_B_Shoot_R_7,496}};


// Sequence: B_Shoot_L
prog_uint16_t bplf_B_Shoot_L_1[] __FLASH__ = {12,357,665,507,516,301,702,170,813,687,356,547,546};	//wait:0.000	//move:0.400
prog_uint16_t bplf_B_Shoot_L_2[] __FLASH__ = {12,357,665,497,536,301,802,170,1013,687,286,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_L_3[] __FLASH__ = {12,357,665,497,536,251,478,170,783,687,157,560,546};	//wait:0.200	//move:0.096
prog_uint16_t bplf_B_Shoot_L_4[] __FLASH__ = {12,357,665,497,536,301,528,170,783,717,257,553,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_L_5[] __FLASH__ = {12,357,665,497,536,301,802,170,1013,697,286,557,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_L_6[] __FLASH__ = {12,357,665,507,516,301,702,170,813,707,336,547,546};	//wait:0.000	//move:0.096
prog_uint16_t bplf_B_Shoot_L_7[] __FLASH__ = {12,358,666,507,516,301,722,170,853,687,336,507,516};	//wait:0.000	//move:0.496

transition_t bplf_B_Shoot_L[] __FLASH__ = {{bplf_bplf_id,7},{bplf_B_Shoot_L_1,400},{bplf_B_Shoot_L_2,96},{bplf_B_Shoot_L_3,96},{bplf_B_Shoot_L_4,96},{bplf_B_Shoot_L_5,96},{bplf_B_Shoot_L_6,96},{bplf_B_Shoot_L_7,496}};


// Sequence: D_Ready
prog_uint16_t bplf_D_Ready_1[] __FLASH__ = {12,358,665,437,586,311,712,180,843,677,346,437,586};	//wait:0.000	//move:0.400

transition_t bplf_D_Ready[] __FLASH__ = {{bplf_bplf_id,1},{bplf_D_Ready_1,400}};


// Sequence: D_Right
prog_uint16_t bplf_D_Right_1[] __FLASH__ = {12,358,665,437,586,270,649,28,763,762,379,499,651};	//wait:0.096	//move:0.072
prog_uint16_t bplf_D_Right_2[] __FLASH__ = {12,358,665,437,586,270,649,28,763,762,379,499,651};	//wait:0.200	//move:0.072
prog_uint16_t bplf_D_Right_3[] __FLASH__ = {12,358,665,437,586,270,649,28,763,762,379,499,651};	//wait:0.096	//move:0.072

transition_t bplf_D_Right[] __FLASH__ = {{bplf_bplf_id,3},{bplf_D_Right_1,72},{bplf_D_Right_2,72},{bplf_D_Right_3,72}};


// Sequence: D_Front
prog_uint16_t bplf_D_Front_1[] __FLASH__ = {12,358,665,437,586,233,771,47,969,746,271,437,586};	//wait:0.096	//move:0.072
prog_uint16_t bplf_D_Front_2[] __FLASH__ = {12,358,665,437,586,233,771,47,969,746,271,437,586};	//wait:0.200	//move:0.072
prog_uint16_t bplf_D_Front_3[] __FLASH__ = {12,358,665,437,586,233,771,47,969,746,271,437,586};	//wait:0.096	//move:0.072

transition_t bplf_D_Front[] __FLASH__ = {{bplf_bplf_id,3},{bplf_D_Front_1,72},{bplf_D_Front_2,72},{bplf_D_Front_3,72}};


// Sequence: D_Left
prog_uint16_t bplf_D_Left_1[] __FLASH__ = {12,358,665,437,586,374,753,260,995,644,261,372,524};	//wait:0.096	//move:0.072
prog_uint16_t bplf_D_Left_2[] __FLASH__ = {12,358,665,437,586,374,753,260,995,644,261,372,524};	//wait:0.200	//move:0.072
prog_uint16_t bplf_D_Left_3[] __FLASH__ = {12,358,665,437,586,374,753,260,995,644,261,372,524};	//wait:0.096	//move:0.072

transition_t bplf_D_Left[] __FLASH__ = {{bplf_bplf_id,3},{bplf_D_Left_1,72},{bplf_D_Left_2,72},{bplf_D_Left_3,72}};


// Sequence: Bravo
prog_uint16_t bplf_Bravo_1[] __FLASH__ = {12,353,670,508,515,457,566,212,811,717,306,508,515};	//wait:0.000	//move:2.000
prog_uint16_t bplf_Bravo_2[] __FLASH__ = {12,353,670,508,515,457,566,212,811,717,306,508,515};	//wait:0.000	//move:0.496
prog_uint16_t bplf_Bravo_3[] __FLASH__ = {12,353,670,508,515,457,566,212,811,717,306,508,515};	//wait:0.000	//move:0.496
prog_uint16_t bplf_Bravo_4[] __FLASH__ = {12,353,670,508,515,457,566,212,811,717,306,508,515};	//wait:0.000	//move:0.496
prog_uint16_t bplf_Bravo_5[] __FLASH__ = {12,353,670,508,515,457,566,212,811,717,306,508,515};	//wait:0.000	//move:0.496

transition_t bplf_Bravo[] __FLASH__ = {{bplf_bplf_id,5},{bplf_Bravo_1,2000},{bplf_Bravo_2,496},{bplf_Bravo_3,496},{bplf_Bravo_4,496},{bplf_Bravo_5,496}};


// Sequence: Rapchest
prog_uint16_t bplf_Rapchest_1[] __FLASH__ = {12,353,670,508,515,387,636,212,811,687,336,508,515};	//wait:0.000	//move:1.496
prog_uint16_t bplf_Rapchest_2[] __FLASH__ = {12,353,670,508,515,387,636,212,811,687,336,508,515};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Rapchest_3[] __FLASH__ = {12,353,670,508,515,387,636,212,811,687,336,508,515};	//wait:0.000	//move:0.200
prog_uint16_t bplf_Rapchest_4[] __FLASH__ = {12,353,670,508,515,387,636,212,811,687,336,508,515};	//wait:0.000	//move:0.400
prog_uint16_t bplf_Rapchest_5[] __FLASH__ = {12,353,670,508,515,387,636,212,811,687,336,508,515};	//wait:0.000	//move:0.200

transition_t bplf_Rapchest[] __FLASH__ = {{bplf_bplf_id,5},{bplf_Rapchest_1,1496},{bplf_Rapchest_2,400},{bplf_Rapchest_3,200},{bplf_Rapchest_4,400},{bplf_Rapchest_5,200}};


#endif
