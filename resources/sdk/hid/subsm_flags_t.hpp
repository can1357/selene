#pragma once
#include <sdkgen/support_library.hpp>
#include "hidsm_subsm_flags_t.hpp"

#include "magic/subsm_flags_t.start.hpp"
namespace hid
{
    // [union _SUBSM_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union subsm_flags_t                                          
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                       
        _m00 uint32_t                      sub_sm_flags_as_ulong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubSmFlagsAsUlong
        _m01 enum hid::hidsm_subsm_flags_t hidsm_sub_sm_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HidsmSubSmFlags
                                                                 
        SDK_MAGIC_PROPERTIES( "_SUBSM_FLAGS.$", 0x4, true, 0xad929c761ec9f2d6 );                      
        SDK_FIXED_SIZE( subsm_flags_t, 0x4 );                      
    };                                                           
};
#include "magic/subsm_flags_t.end.hpp"
SDK_VERIFY( union hid::subsm_flags_t, 0x4 );
