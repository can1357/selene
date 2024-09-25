#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_start_integrity_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_START_INTEGRITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wim_provider_start_integrity_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t data_source_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSourceId
                                         
        SDK_MAGIC_PROPERTIES( "_WIM_PROVIDER_START_INTEGRITY.$", 0x8, true, 0x6b085fde5fa1cccd );               
        SDK_FIXED_SIZE( wim_provider_start_integrity_t, 0x8 );               
    };                                   
};
#include "magic/wim_provider_start_integrity_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_start_integrity_t, 0x8 );
