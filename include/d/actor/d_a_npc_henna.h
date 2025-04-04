#ifndef D_A_NPC_HENNA_H
#define D_A_NPC_HENNA_H

#include "f_op/f_op_actor.h"
#include "d/d_msg_flow.h"

#ifdef DEBUG
#include "f_op/f_op_actor_mng.h"
#endif


/**
 * @ingroup actors-npcs
 * @class npc_henna_class
 * @brief Hena
 *
 * @details
 *
 */
class npc_henna_class : public fopEn_enemy_c {
public:

    enum Joint {
        /* 0x00 */ JNT_CENTER,
        /* 0x01 */ JNT_BACKBONE_1,
        /* 0x02 */ JNT_BACKBONE_2,
        /* 0x03 */ JNT_NECK,
        /* 0x04 */ JNT_HEAD,
        /* 0x05 */ JNT_CHIN,
        /* 0x06 */ JNT_HAIR_L,
        /* 0x07 */ JNT_HAIR_R,
        /* 0x08 */ JNT_MAYU_L,
        /* 0x09 */ JNT_MAYU_R,
        /* 0x0A */ JNT_MOUTH,
        /* 0x0B */ JNT_PONY_1,
        /* 0x0C */ JNT_PONY_2,
        /* 0x0D */ JNT_SHOULDER_L,
        /* 0x0E */ JNT_ARM_L_1,
        /* 0x0F */ JNT_ARM_L_2,
        /* 0x10 */ JNT_HAND_L,
        /* 0x11 */ JNT_FINGER_L,
        /* 0x12 */ JNT_THUMB_L,
        /* 0x13 */ JNT_SHOULDER_R,
        /* 0x14 */ JNT_ARM_R_1,
        /* 0x15 */ JNT_ARM_R_2,
        /* 0x16 */ JNT_HAND_R,
        /* 0x17 */ JNT_FINGER_R,
        /* 0x18 */ JNT_THUMB_R,
        /* 0x19 */ JNT_WAIST,
        /* 0x1A */ JNT_LEG_L_1,
        /* 0x1B */ JNT_LEG_L_2,
        /* 0x1C */ JNT_FOOT_L,
        /* 0x1D */ JNT_LEG_R_1,
        /* 0x1E */ JNT_LEG_R_2,
        /* 0x1F */ JNT_FOOT_R
    };

    enum Animation {
        /* 0x06 */ ANIM_CANOE_ROWBL = 0x06,
        /* 0x07 */ ANIM_CANOE_ROWL,
        /* 0x08 */ ANIM_CANOE_SITWAIT_a,
        /* 0x09 */ ANIM_CLAP_A,
        /* 0x0A */ ANIM_CLAP_B,
        /* 0x0B */ ANIM_F_GLARE_TALK_A,
        /* 0x0C */ ANIM_F_GLARE_A,
        /* 0x0D */ ANIM_F_KAYUI_A,
        /* 0x0E */ ANIM_F_SMILETALK_A,
        /* 0x0F */ ANIM_F_SMILE_A,
        /* 0x10 */ ANIM_F_TALK_A,
        /* 0x11 */ ANIM_F_WAIT_A,
        /* 0x12 */ ANIM_GLARE_A,
        /* 0x13 */ ANIM_NECKWALK_A,
        /* 0x14 */ ANIM_NECK_A,
        /* 0x15 */ ANIM_PUTPADDLE,
        /* 0x16 */ ANIM_RUN_A,
        /* 0x17 */ ANIM_SENAKAWAIT_A,
        /* 0x18 */ ANIM_SENAKA_A,
        /* 0x19 */ ANIM_SITTALK_A,
        /* 0x1A */ ANIM_SITWALK_A,
        /* 0x1B */ ANIM_STANDUP_A,
        /* 0x1C */ ANIM_TALK_A,
        /* 0x1D */ ANIM_TALK_B,
        /* 0x1E */ ANIM_WAITCANOE_L, 
        /* 0x1F */ ANIM_WAITCANOE_L_TALK_A,
        /* 0x20 */ ANIM_WAIT_A,
        /* 0x21 */ ANIM_WALK_A 
    };

    enum Btk {
        /* 0x29 */ BTK_HENNA = 0x29,
        /* 0x2A */ BTK_HENNA_NECK_A,
        /* 0x2B */ BTK_HENNA_SENAKA_A,
    };

    enum Btp {
        /* 0x2E */ BTP_HENNA = 0x2E,
        /* 0x2F */ BTP_HENNA_CLAP_A,
        /* 0x30 */ BTP_HENNA_CLAP_B,
        /* 0x31 */ BTP_HENNA_F_GLARETALK_A,
        /* 0x32 */ BTP_HENNA_F_GLARE_A,
        /* 0x33 */ BTP_HENNA_F_KAYUI_A,
        /* 0x34 */ BTP_HENNA_F_SMILETALK_A,
        /* 0x35 */ BTP_HENNA_F_SMILE_A,
    };


    /* 0x5ac */ u8 field_0x5ac[0x5b4 - 0x5ac];
    /* 0x5b5 */ u8 field_0x5b4;
    /* 0x5b5 */ s8 field_0x5b5;
    /* 0x5B6 */ u8 field_0x5b6;
    union {
        f32 f_32;
        s16 flags[2];
    } /* 0x5B8 */ field_0x5b8; 
    /* 0x5BC */ s16 field_0x5bc;
    /* 0x5BE */ u16 field_0x5be;
    /* 0x5C0 */ dMsgFlow_c mMsgFlow;
    /* 0x60C */ u8 field_0x60C[0x618 - 0x60c];
    /* 0x618 */ s16 field_0x618;
    /* 0x61C */ f32 mDistanceToPlayer;
    /* 0x620 */ s16 mPlayerAngleY;
    /* 0x624 */ mDoExt_McaMorf* mpMorf;
    /* 0x628 */ mDoExt_btkAnm* mpBtkAnm[3];
    /* 0x634 */ mDoExt_btpAnm* mpBtpAnm[8];
    /* 0x654 */ int mBtkID;
    /* 0x658 */ int mBtpID;
    /* 0x65c */ int mAnmID;
    /* 0x660 */ s16 field_0x660;
    /* 0x662 */ s16 field_0x662;
    /* 0x664 */ u8 field_0x664[0x668 - 0x664];
    /* 0x668 */ mDoExt_baseAnm* mpBaseAnm1[4];
    /* 0x678 */ mDoExt_baseAnm* mpBaseAnm2[4];
    /* 0x688 */ int mBaseAnmID;
    /* 0x68C */ J3DModel* mpModel;
    /* 0x690 */ s16 field_0x690;
    /* 0x692 */ s8 field_0x692;
    /* 0x693 */ s8 field_0x693;
    /* 0x694 */ s8 field_0x694;
    /* 0x698 */ f32 field_0x698;
    /* 0x69C */ f32 field_0x69c;
    /* 0x6A0 */ s16 field_0x6a0;
    /* 0x6A2 */ s16 field_0x6a2;
    /* 0x6A4 */ s16 field_0x6a4;
    /* 0x6A6 */ u16 field_0x6a6;
    /* 0x6A8 */ u8 field_0x6a8[0x6ac - 0x6a8];
    /* 0x6AC */ f32 field_0x6ac;
    /* 0x6B0 */ s16 field_0x6b0;
    /* 0x6B2 */ u8 field_0x6b2[0x6B6 - 0x6b2];
    /* 0x6B6 */ s16 field_0x6b6;
    /* 0x6B8 */ u16 field_0x6b8;
    /* 0x6BA */ u16 field_0x6ba;
    /* 0x6BC */ s16 field_0x6bc;
    /* 0x6BE */ s16 field_0x6be;
    /* 0x6C0 */ s16 field_0x6c0;
    /* 0x6C2 */ s16 field_0x6c2;
    /* 0x6C4 */ s16 field_0x6c4;
    /* 0x6C6 */ u8 field_0x6c6[0x6f2 - 0x6C6];
    /* 0x6F2 */ s16 field_0x6f2;
    /* 0x6F4 */ u8 field_0x6f4[0x704 - 0x6f4];
    /* 0x704 */ s16 field_0x704;
    /* 0x706 */ s16 field_0x706;
    /* 0x708 */ u8 field_0x708;
    /* 0x709 */ u8 field_0x709;
    /* 0x70A */ u8 field_0x70a;
    /* 0x70B */ u8 field_0x70b;
    /* 0x70C */ s8 field_0x70c;
    /* 0x70D */ s8 field_0x70d;
    /* 0x70E */ u16 field_0x70e;
    /* 0x710 */ s16 field_0x710;
    /* 0x714 */ cXyz field_0x714;
    /* 0x720 */ cXyz field_0x720;
    /* 0x72C */ f32 field_0x72c;
    /* 0x730 */ f32 field_0x730;
    /* 0x734 */ u8 field_0x734;
    /* 0x738 */ f32 field_0x738;
    /* 0x73C */ s16 field_0x73c;
    /* 0x73E */ u8 field_0x73e[0x742 - 0x73e];
    /* 0x742 */ s16 field_0x742;
    /* 0x744 */ s16 field_0x744;
    /* 0x746 */ s16 field_0x746;
    /* 0x748 */ u32 field_0x748;
    /* 0x74C */ u32 field_0x74c;
    /* 0x750 */ s16 field_0x750;
    /* 0x752 */ s16 field_0x752;
    /* 0x754 */ s16 field_0x754;
    /* 0x756 */ u16 field_0x756;
    /* 0x757 */ u16 field_0x758;
    /* 0x75A */ u16 field_0x75a;
    /* 0x75C */ u16 field_0x75c;
    /* 0x760 */ cXyz field_0x760;
    /* 0x76C */ cXyz field_0x76c;
    /* 0x778 */ cXyz field_0x778;
    /* 0x784 */ cXyz field_0x784;
    /* 0x790 */ cXyz field_0x790;
    /* 0x79c */ cXyz field_0x79c;
    /* 0x7a8 */ cXyz field_0x7a8;
    /* 0x7B4 */ u8 field_0x7b4;
    /* 0x7B5 */ u8 field_0x7b5;
    /* 0x7B6 */ u8 field_0x7b6;
    /* 0x7B7 */ u8 field_0x7b7;
    /* 0x7B8 */ u8 field_0x7b8;
    /* 0x7B9 */ u8 field_0x7b9;
    /* 0x7BA */ u8 field_0x7ba;
    /* 0x7BC */ f32 field_0x7bc;
    /* 0x7C0 */ f32 field_0x7c0;
    /* 0x7C4 */ f32 field_0x7c4;
    /* 0x7C8 */ u8 field_0x7c8[0x7cc - 0x7c8];
    /* 0x7CC */ u32 field_0x7cc;
    /* 0x7D0 */ u8 field_0x7d0[0x7d4 - 0x7d0];
    /* 0x7D4 */ u8 field_0x7d4;
    /* 0x7D5 */ u8 field_0x7d5;
    /* 0x7D6 */ u8 field_0x7d6;
    /* 0x7D7 */ u8 field_0x7d7;
    /* 0x7D8 */ u8 field_0x7d8[0x7e1 - 0x7d8];
    /* 0x7E1 */ s8 field_0x7e1;
    /* 0x7E4 */ int canoeID;
    /* 0x7E8 */ u8 field_0x7e8[0x7f8 - 0x7e8];
    /* 0x7F8 */ u8 field_0x7f8;
};

STATIC_ASSERT(sizeof(npc_henna_class) == 0x7fc);

class daNpc_Henna_HIO_c 
#ifdef DEBUG
: public JORReflexible
#endif
{
public:
    /* 80542F0C */ daNpc_Henna_HIO_c();
    /* 80549E40 */ virtual ~daNpc_Henna_HIO_c();

#ifdef DEBUG
    void genMessage(JORMContext*);
#endif

    /* 0x04 */ s8 field_0x04;
    /* 0x08 */ f32 field_0x08;
    /* 0x0C */ s16 field_0x0c;
    /* 0x0E */ u16 field_0x0e;
    /* 0x10 */ u16 field_0x10;
    /* 0x12 */ s16 field_0x12;
    /* 0x14 */ u16 field_0x14;
    /* 0x16 */ u16 field_0x16;
    /* 0x18 */ u16 field_0x18;
    /* 0x1A */ u16 field_0x1a;
    /* 0x1C */ u16 field_0x1c;
    /* 0x1E */ u16 field_0x1e;
    /* 0x20 */ f32 field_0x20;
    /* 0x24 */ s16 field_0x24;
    /* 0x28 */ f32 field_0x28;
    /* 0x2C */ s16 field_0x2c;
    /* 0x30 */ f32 field_0x30;
    /* 0x34 */ s16 field_0x34;
};


#endif /* D_A_NPC_HENNA_H */
