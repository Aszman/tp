#ifndef D_A_NPC_HENNA_H
#define D_A_NPC_HENNA_H

#include "f_op/f_op_actor.h"

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


    /* 0x5ac */ u8 field_0x5ac[0x5b8 - 0x5ac];
    /* 0x5B8 */ f32 field_0x5b8;
    /* 0x5BC */ u8 field_0x5bc[0x61c - 0x5bc];
    /* 0x61C */ f32 field_0x61c;
    /* 0x620 */ s16 field_0x620;
    /* 0x620 */ u16 field_0x622;
    /* 0x624 */ mDoExt_McaMorf* mpMorf;
    /* 0x628 */ mDoExt_btkAnm* mpBtkAnm[3];
    /* 0x634 */ mDoExt_btpAnm* mpBtpAnm[3];
    /* 0x640 */ u8 field_0x640[0x654 - 0x640];
    /* 0x654 */ int mBtkID;
    /* 0x658 */ int mBtpID;
    /* 0x65c */ int mAnmID;
    /* 0x660 */ u8 field_0x660[0x68C - 0x660];
    /* 0x68C */ J3DModel* mpModel;
    /* 0x690 */ u8 field_0x690[0x693 - 0x690];
    /* 0x693 */ s8 field_0x693;
    /* 0x694 */ s8 field_0x694;
    /* 0x695 */ s8 field_0x695[0x6ac - 0x695];
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
    /* 0x6C6 */ u8 field_0x6c6[0x704 - 0x6C6];
    /* 0x704 */ s16 field_0x704;
    /* 0x706 */ s16 field_0x706;
    /* 0x708 */ u8 field_0x708[0x734 - 0x708];
    /* 0x734 */ u8 field_0x734;
    /* 0x735 */ u8 field_0x735[0x750 - 0x735];
    /* 0x750 */ s16 field_0x750;
    /* 0x752 */ s16 field_0x752;
    /* 0x754 */ u16 field_0x754;
    /* 0x756 */ u8 field_0x756[0x7b5 - 0x756];
    /* 0x7B5 */ u8 field_0x7b5;
    /* 0x7B6 */ u8 field_0x7b6[0x7b9 - 0x7b6];
    /* 0x7B9 */ u8 field_0x7b9;
    /* 0x7BA */ u8 field_0x7ba[0x7d5 - 0x7ba];
    /* 0x7D5 */ u8 field_0x7d5;
    /* 0x7D6 */ u8 field_0x7d6[0x7e1 - 0x7d6];
    /* 0x7E1 */ s8 field_0x7e1;
    /* 0x7E2 */ u8 field_0x7e2[0x7fc - 0x7e2];
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
    /* 0x0C */ u16 field_0x0c;
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
