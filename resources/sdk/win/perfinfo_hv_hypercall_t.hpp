#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_hv_hypercall_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_HV_HYPERCALL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_hv_hypercall_t
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t call_code;    //{ +0x0000    +0x0000    +0x0000    } | .CallCode
        _m01 uint8_t  is_fast;      //{ +0x0004    +0x0004    +0x0004    } | .IsFast
        _m02 uint8_t  is_nested;    //{ +0x0005    +0x0005    +0x0005    } | .IsNested
                                  
        SDK_MAGIC_PROPERTIES( "_PERFINFO_HV_HYPERCALL.$", 0x8, true, 0x809a5e00d57c153b );          
        SDK_FIXED_SIZE( perfinfo_hv_hypercall_t, 0x8 );          
    };                            
};
#include "magic/perfinfo_hv_hypercall_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_hv_hypercall_t, 0x8 );
