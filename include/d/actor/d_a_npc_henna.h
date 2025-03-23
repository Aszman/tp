#ifndef D_A_NPC_HENNA_H
#define D_A_NPC_HENNA_H

#include "f_op/f_op_actor.h"
#include "f_op/f_op_actor_mng.h"

/**
 * @ingroup actors-npcs
 * @class npc_henna_class
 * @brief Hena
 *
 * @details
 *
 */
class npc_henna_class : public fopAc_ac_c {
public:
    /* 0x568 */ u8 field_0x568[0x752 - 0x568];
    /* 0x752 */ u16 field_0x752;
    /* 0x754 */ u16 field_0x754;
    /* 0x756 */ u8 field_0x756[0x7b5 - 0x756];
    /* 0x7B5 */ u8 field_0x7b5;
    /* 0x7B6 */ u8 field_0x7b6[0x7b9 - 0x7b6];
    /* 0x7B9 */ u8 field_0x7b9;
    /* 0x7BA */ u8 field_0x7ba[0x7fc - 0x7ba];
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
