#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/arm_dbgkd_control_set_t.hpp"
#include "../nt/ppc_dbgkd_control_set_t.hpp"
#include "../nt/x86_dbgkd_control_set_t.hpp"
#include "../nt/ia64_dbgkd_control_set_t.hpp"
#include "../nt/amd64_dbgkd_control_set_t.hpp"
#include "../nt/arm64_dbgkd_control_set_t.hpp"
#include "../nt/armce_dbgkd_control_set_t.hpp"

#include "magic/any_control_set_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_ANY_CONTROL_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct any_control_set_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 struct nt::x86_dbgkd_control_set_t   x86_control_set;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .X86ControlSet
        _m01 uint32_t                             alpha_control_set;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AlphaControlSet
        _m02 struct nt::ia64_dbgkd_control_set_t  ia64_control_set;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IA64ControlSet
        _m03 struct nt::amd64_dbgkd_control_set_t amd64_control_set;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Amd64ControlSet
        _m04 struct nt::arm_dbgkd_control_set_t   arm_control_set;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ArmControlSet
        _m05 struct nt::arm64_dbgkd_control_set_t arm64_control_set;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Arm64ControlSet
        _m06 struct nt::armce_dbgkd_control_set_t arm_ce_control_set;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ArmCeControlSet
        _m07 struct nt::ppc_dbgkd_control_set_t   ppc_control_set;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PpcControlSet
                                                                     
        SDK_MAGIC_PROPERTIES( "_DBGKD_ANY_CONTROL_SET.$", 0x1c, true, 0x7849447e18088dc7 );                   
        SDK_FIXED_SIZE( any_control_set_t, 0x1c );                   
    };                                                               
};
#include "magic/any_control_set_t.end.hpp"
SDK_VERIFY( struct dbgkd::any_control_set_t, 0x1c );
