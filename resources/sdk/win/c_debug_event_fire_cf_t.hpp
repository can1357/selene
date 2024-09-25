#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CDebugEventFireCF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_debug_event_fire_cf_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "CDebugEventFireCF.$", 0x8, true, 0xe4c8d301f56674d4 );
        SDK_FIXED_SIZE( c_debug_event_fire_cf_t, 0x8 );
    };                           
};
SDK_VERIFY( class win::c_debug_event_fire_cf_t, 0x8 );
