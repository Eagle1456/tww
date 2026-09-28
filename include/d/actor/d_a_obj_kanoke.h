#ifndef D_A_OBJ_KANOKE_H
#define D_A_OBJ_KANOKE_H

#include "f_op/f_op_actor.h"
#include "d/d_bg_w.h"
#include "d/d_cc_d.h"
#include "d/d_particle.h"

class daObjKanoke_c : public fopAc_ac_c {
public:
    enum Prm_e {
        PRM_SCH_W = 0x5,
        PRM_SCH_S = 0x1,
        
        PRM_TYPE_W = 0x1,
        PRM_TYPE_S = 0x0,

        PRM_YURE_W = 0x1,
        PRM_YURE_S = 0x6,

        PRM_SW_W = 0x8,
        PRM_SW_S = 0x8,

        PRM_SW2_W = 0x8,
        PRM_SW2_S = 0x10,
    };
    
    daObjKanoke_c();
    cPhs_State _create();
    int createHeap();
    cPhs_State createInit();
    BOOL _delete();
    BOOL _draw();
    BOOL _execute();
    void executeNormal();
    void executeYureYoko();
    void executeOpenYoko();
    void executeEffectYoko();
    void executeYureTate();
    void executeOpenTate();
    void executeEffectTate();
    void executeWait();
    u8 getPrmType();
    u8 getPrmSearch();
    u8 getPrmYure();
    u8 getPrmSwNo();
    u8 getPrmSwNo2();
    void setMtx();
    void setMtxHontai();
    void setMtxHuta(cXyz*);

public:
    /* 0x290 */ request_of_phase_process_class field_0x290;
    /* 0x298 */ J3DModel* field_0x298;
    /* 0x29C */ J3DModel* field_0x29C;
    /* 0x2A0 */ dBgW* field_0x2A0;
    /* 0x2A4 */ dBgW* field_0x2A4;
    /* 0x2A8 */ Mtx field_0x2A8;
    /* 0x2D8 */ Mtx field_0x2D8;
    /* 0x308 */ dCcD_Stts field_0x308;
    /* 0x344 */ dCcD_Cps field_0x344;
    /* 0x47C */ dCcD_Cps field_0x47C[3];
    /* 0x824 */ JPABaseEmitter* field_0x824[2];
    /* 0x82C */ dPa_smokeEcallBack field_0x82C;
    /* 0x84C */ cXyz field_0x84C;
    /* 0x858 */ csXyz field_0x858;
    /* 0x85E */ u8 field_0x85E;
    /* 0x85F */ u8 field_0x85F;
    /* 0x860 */ cXyz field_0x860;
    /* 0x86C */ cXyz field_0x86C;
    /* 0x878 */ f32 field_0x878;
    /* 0x87C */ s16 field_0x87C;
    /* 0x87E */ s16 field_0x87E;
    /* 0x880 */ s16 field_0x880;
    /* 0x882 */ s16 field_0x882;
    /* 0x884 */ s16 field_0x884;
    /* 0x886 */ s16 field_0x886;
    /* 0x888 */ s16 field_0x888;
    /* 0x88A */ u8 field_0x88A;
    /* 0x88B */ u8 field_0x88B;
    /* 0x88C */ u8 field_0x88C;
    /* 0x88D */ u8 field_0x88D;
    /* 0x88E */ u8 field_0x88E;
    /* 0x88F */ u8 field_0x88F;
};  // Size: 0x890

#endif /* D_A_OBJ_KANOKE_H */
