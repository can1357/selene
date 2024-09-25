#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/finalize_ktimer2_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_FINALIZE_KTIMER2_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct finalize_ktimer2_event_t       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t timer_key;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimerKey
        _m01 uint64_t disable_callback;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DisableCallback
        _m02 uint64_t disable_context_key;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DisableContextKey
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_FINALIZE_KTIMER2_EVENT.$", 0x18, true, 0xbd7706bd15b107d7 );                    
        SDK_FIXED_SIZE( finalize_ktimer2_event_t, 0x18 );                    
    };                                    
};
#include "magic/finalize_ktimer2_event_t.end.hpp"
SDK_VERIFY( struct etw::finalize_ktimer2_event_t, 0x18 );
