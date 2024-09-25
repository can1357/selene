#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_mc_bank_flags_t.start.hpp"
namespace nt
{
    // [union _XPF_MC_BANK_FLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_mc_bank_flags_t                   
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                      
        _m00 uint1_t clear_on_initialization_rw;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ClearOnInitializationRW
        _m01 uint1_t control_data_rw;             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ControlDataRW
        _m02 uint8_t as_uchar;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                
        SDK_NONVOL_PROPERTIES( "_XPF_MC_BANK_FLAGS.$", 0x1, true, 0x9303bdcfaee563f3 );                           
        SDK_FIXED_SIZE( xpf_mc_bank_flags_t, 0x1 );                           
    };                                          
};
#include "magic/xpf_mc_bank_flags_t.end.hpp"
SDK_VERIFY( union nt::xpf_mc_bank_flags_t, 0x1 );
