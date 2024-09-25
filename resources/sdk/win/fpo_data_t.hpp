#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpo_data_t.start.hpp"
namespace win
{
    // [struct _FPO_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpo_data_t              
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t ul_off_start;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulOffStart
        _m01 uint32_t cb_proc_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbProcSize
        _m02 uint32_t cdw_locals;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cdwLocals
        _m03 uint16_t cdw_params;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cdwParams
        _m04 uint8_t  cb_prolog;     //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .cbProlog
        _m05 uint3_t  cb_regs;       //{ +0x000e@8  +0x000e@8  +0x000e@8  +0x000e@8  } | .cbRegs
        _m06 uint1_t  f_has_seh;     //{ +0x000e@11 +0x000e@11 +0x000e@11 +0x000e@11 } | .fHasSEH
        _m07 uint1_t  f_use_bp;      //{ +0x000e@12 +0x000e@12 +0x000e@12 +0x000e@12 } | .fUseBP
        _m08 uint2_t  cb_frame;      //{ +0x000e@14 +0x000e@14 +0x000e@14 +0x000e@14 } | .cbFrame
                                   
        SDK_MAGIC_PROPERTIES( "_FPO_DATA.$", 0x10, true, 0x6d8cde2222bf64e9 );             
        SDK_FIXED_SIZE( fpo_data_t, 0x10 );             
    };                             
};
#include "magic/fpo_data_t.end.hpp"
SDK_VERIFY( struct win::fpo_data_t, 0x10 );
