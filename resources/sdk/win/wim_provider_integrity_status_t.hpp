#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_integrity_status_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_INTEGRITY_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wim_provider_integrity_status_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint8_t  integrity_complete;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IntegrityComplete
        _m01 uint8_t  integrity_running;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .IntegrityRunning
        _m02 uint64_t integrity_available;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IntegrityAvailable
        _m03 uint64_t integrity_required;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IntegrityRequired
                                          
        SDK_MAGIC_PROPERTIES( "_WIM_PROVIDER_INTEGRITY_STATUS.$", 0x18, true, 0xcaed145e93943180 );                    
        SDK_FIXED_SIZE( wim_provider_integrity_status_t, 0x18 );                    
    };                                    
};
#include "magic/wim_provider_integrity_status_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_integrity_status_t, 0x18 );
