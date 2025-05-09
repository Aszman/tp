/**
 * @file d_a_obj_takaraDai.cpp
 * 
*/

#include "d/actor/d_a_obj_takaraDai.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__15daTkraDai_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daTkraDai_cFv();
extern "C" void CreateHeap__11daTkraDai_cFv();
extern "C" void create__11daTkraDai_cFv();
extern "C" void Execute__11daTkraDai_cFPPA3_A4_f();
extern "C" void procMain__11daTkraDai_cFv();
extern "C" void init_modeWait__11daTkraDai_cFv();
extern "C" void modeWait__11daTkraDai_cFv();
extern "C" void Draw__11daTkraDai_cFv();
extern "C" void Delete__11daTkraDai_cFv();
extern "C" static void daTkraDai_Draw__FP11daTkraDai_c();
extern "C" static void daTkraDai_Execute__FP11daTkraDai_c();
extern "C" static void daTkraDai_Delete__FP11daTkraDai_c();
extern "C" static void daTkraDai_Create__FP10fopAc_ac_c();
extern "C" void __dt__15daTkraDai_HIO_cFv();
extern "C" void __sinit_d_a_obj_takaraDai_cpp();
extern "C" extern char const* const d_a_obj_takaraDai__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D07808-80D0780C 000000 0004+00 3/3 0/0 0/0 .rodata          @3627 */
SECTION_RODATA static f32 const lit_3627 = 12.0f;
COMPILER_STRIP_GATE(0x80D07808, &lit_3627);

/* 80D0780C-80D07810 000004 0004+00 0/1 0/0 0/0 .rodata          @3628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3628 = 4.0f;
COMPILER_STRIP_GATE(0x80D0780C, &lit_3628);
#pragma pop

/* 80D07810-80D07814 000008 0004+00 0/1 0/0 0/0 .rodata          @3629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3629 = 3.0f;
COMPILER_STRIP_GATE(0x80D07810, &lit_3629);
#pragma pop

/* 80D07814-80D07818 00000C 0004+00 0/1 0/0 0/0 .rodata          @3630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3630 = 130.0f;
COMPILER_STRIP_GATE(0x80D07814, &lit_3630);
#pragma pop

/* 80D07818-80D0781C 000010 0004+00 0/1 0/0 0/0 .rodata          @3631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3631 = 3.0f / 50.0f;
COMPILER_STRIP_GATE(0x80D07818, &lit_3631);
#pragma pop

/* 80D0781C-80D07820 000014 0004+00 0/1 0/0 0/0 .rodata          @3632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3632 = 5.0f;
COMPILER_STRIP_GATE(0x80D0781C, &lit_3632);
#pragma pop

/* 80D07820-80D07824 000018 0004+00 0/1 0/0 0/0 .rodata          @3633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3633 = 1.0f;
COMPILER_STRIP_GATE(0x80D07820, &lit_3633);
#pragma pop

/* 80D07824-80D07828 00001C 0004+00 0/1 0/0 0/0 .rodata          @3634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3634 = 90.0f;
COMPILER_STRIP_GATE(0x80D07824, &lit_3634);
#pragma pop

/* 80D07828-80D0782C 000020 0004+00 0/2 0/0 0/0 .rodata          @3635 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3635 = 30.0f;
COMPILER_STRIP_GATE(0x80D07828, &lit_3635);
#pragma pop

/* 80D0782C-80D07830 000024 0004+00 0/1 0/0 0/0 .rodata          @3636 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3636 = 10.0f;
COMPILER_STRIP_GATE(0x80D0782C, &lit_3636);
#pragma pop

/* 80D07830-80D07834 000028 0004+00 0/1 0/0 0/0 .rodata          @3637 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3637 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80D07830, &lit_3637);
#pragma pop

/* 80D07834-80D07838 00002C 0004+00 0/1 0/0 0/0 .rodata          @3638 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3638 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D07834, &lit_3638);
#pragma pop

/* 80D07860-80D0786C -00001 000C+00 1/1 0/0 0/0 .data            @3799 */
SECTION_DATA static void* lit_3799[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__11daTkraDai_cFv,
};

/* 80D0786C-80D07878 00000C 000C+00 1/1 0/0 0/0 .data            mode_proc$3798 */
SECTION_DATA static u8 mode_proc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D07878-80D07898 -00001 0020+00 1/0 0/0 0/0 .data            l_daTkraDai_Method */
static actor_method_class l_daTkraDai_Method = {
    (process_method_func)daTkraDai_Create__FP10fopAc_ac_c,
    (process_method_func)daTkraDai_Delete__FP11daTkraDai_c,
    (process_method_func)daTkraDai_Execute__FP11daTkraDai_c,
    0,
    (process_method_func)daTkraDai_Draw__FP11daTkraDai_c,
};

/* 80D07898-80D078C8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_TakaraDai */
extern actor_process_profile_definition g_profile_Obj_TakaraDai = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_TakaraDai,     // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daTkraDai_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  654,                    // mPriority
  &l_daTkraDai_Method,    // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80D078C8-80D078F0 000068 0028+00 1/1 0/0 0/0 .data            __vt__11daTkraDai_c */
SECTION_DATA extern void* __vt__11daTkraDai_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daTkraDai_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__11daTkraDai_cFPPA3_A4_f,
    (void*)Draw__11daTkraDai_cFv,
    (void*)Delete__11daTkraDai_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D078F0-80D078FC 000090 000C+00 2/2 0/0 0/0 .data            __vt__15daTkraDai_HIO_c */
SECTION_DATA extern void* __vt__15daTkraDai_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daTkraDai_HIO_cFv,
};

/* 80D078FC-80D07908 00009C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D06D8C-80D06E1C 0000EC 0090+00 1/1 0/0 0/0 .text            __ct__15daTkraDai_HIO_cFv */
daTkraDai_HIO_c::daTkraDai_HIO_c() {
    // NONMATCHING
}

/* 80D06E1C-80D06E64 00017C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D07838-80D0783C 000030 0004+00 1/2 0/0 0/0 .rodata          @3687 */
SECTION_RODATA static f32 const lit_3687 = -1235.0f;
COMPILER_STRIP_GATE(0x80D07838, &lit_3687);

/* 80D0783C-80D07840 000034 0004+00 1/2 0/0 0/0 .rodata          @3688 */
SECTION_RODATA static f32 const lit_3688 = 2050.0f;
COMPILER_STRIP_GATE(0x80D0783C, &lit_3688);

/* 80D06E64-80D06FFC 0001C4 0198+00 2/2 0/0 0/0 .text            setBaseMtx__11daTkraDai_cFv */
void daTkraDai_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D07854-80D07854 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D07854 = "M_TakaraD";
#pragma pop

/* 80D06FFC-80D07140 00035C 0144+00 1/0 0/0 0/0 .text            CreateHeap__11daTkraDai_cFv */
void daTkraDai_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D07840-80D07844 000038 0004+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 250.0f;
COMPILER_STRIP_GATE(0x80D07840, &lit_3776);
#pragma pop

/* 80D07844-80D07848 00003C 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 50.0f;
COMPILER_STRIP_GATE(0x80D07844, &lit_3777);
#pragma pop

/* 80D07848-80D0784C 000040 0004+00 0/1 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3778[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D07848, &lit_3778);
#pragma pop

/* 80D07140-80D07344 0004A0 0204+00 1/1 0/0 0/0 .text            create__11daTkraDai_cFv */
void daTkraDai_c::create() {
    // NONMATCHING
}

/* 80D07344-80D073A4 0006A4 0060+00 1/0 0/0 0/0 .text            Execute__11daTkraDai_cFPPA3_A4_f */
void daTkraDai_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0784C-80D07850 000044 0004+00 1/2 0/0 0/0 .rodata          @3816 */
SECTION_RODATA static u32 const lit_3816 = 0x43360B61;
COMPILER_STRIP_GATE(0x80D0784C, &lit_3816);

/* 80D07910-80D0791C 000008 000C+00 1/1 0/0 0/0 .bss             @3621 */
static u8 lit_3621[12];

/* 80D0791C-80D07958 000014 003C+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[60];

/* 80D07958-80D0795C 000050 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D07958[4];

/* 80D073A4-80D074D0 000704 012C+00 1/1 0/0 0/0 .text            procMain__11daTkraDai_cFv */
void daTkraDai_c::procMain() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D07850-80D07854 000048 0004+00 0/1 0/0 0/0 .rodata          @3828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3828 = 360.0f;
COMPILER_STRIP_GATE(0x80D07850, &lit_3828);
#pragma pop

/* 80D074D0-80D07528 000830 0058+00 1/1 0/0 0/0 .text            init_modeWait__11daTkraDai_cFv */
void daTkraDai_c::init_modeWait() {
    // NONMATCHING
}

/* 80D07528-80D075A4 000888 007C+00 1/0 0/0 0/0 .text            modeWait__11daTkraDai_cFv */
void daTkraDai_c::modeWait() {
    // NONMATCHING
}

/* 80D075A4-80D07668 000904 00C4+00 1/0 0/0 0/0 .text            Draw__11daTkraDai_cFv */
void daTkraDai_c::Draw() {
    // NONMATCHING
}

/* 80D07668-80D076D0 0009C8 0068+00 1/0 0/0 0/0 .text            Delete__11daTkraDai_cFv */
void daTkraDai_c::Delete() {
    // NONMATCHING
}

/* 80D076D0-80D076FC 000A30 002C+00 1/0 0/0 0/0 .text            daTkraDai_Draw__FP11daTkraDai_c */
static void daTkraDai_Draw(daTkraDai_c* param_0) {
    // NONMATCHING
}

/* 80D076FC-80D0771C 000A5C 0020+00 1/0 0/0 0/0 .text            daTkraDai_Execute__FP11daTkraDai_c
 */
static void daTkraDai_Execute(daTkraDai_c* param_0) {
    // NONMATCHING
}

/* 80D0771C-80D0773C 000A7C 0020+00 1/0 0/0 0/0 .text            daTkraDai_Delete__FP11daTkraDai_c
 */
static void daTkraDai_Delete(daTkraDai_c* param_0) {
    // NONMATCHING
}

/* 80D0773C-80D0775C 000A9C 0020+00 1/0 0/0 0/0 .text            daTkraDai_Create__FP10fopAc_ac_c */
static void daTkraDai_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D0775C-80D077B8 000ABC 005C+00 2/1 0/0 0/0 .text            __dt__15daTkraDai_HIO_cFv */
daTkraDai_HIO_c::~daTkraDai_HIO_c() {
    // NONMATCHING
}

/* 80D077B8-80D077F4 000B18 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_takaraDai_cpp */
void __sinit_d_a_obj_takaraDai_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D077B8, __sinit_d_a_obj_takaraDai_cpp);
#pragma pop

/* 80D07854-80D07854 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
