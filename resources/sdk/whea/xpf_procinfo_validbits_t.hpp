#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xpf_procinfo_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_XPF_PROCINFO_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union xpf_procinfo_validbits_t        
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint1_t  check_info;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CheckInfo
        _m01 uint1_t  target_id;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TargetId
        _m02 uint1_t  requester_id;         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RequesterId
        _m03 uint1_t  responder_id;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ResponderId
        _m04 uint1_t  instruction_pointer;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .InstructionPointer
        _m05 uint64_t valid_bits;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_PROCINFO_VALIDBITS.$", 0x8, true, 0xf9c494f07a14dba7 );                    
        SDK_FIXED_SIZE( xpf_procinfo_validbits_t, 0x8 );                    
    };                                    
};
#include "magic/xpf_procinfo_validbits_t.end.hpp"
SDK_VERIFY( union whea::xpf_procinfo_validbits_t, 0x8 );
