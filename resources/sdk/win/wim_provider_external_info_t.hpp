#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_external_info_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_EXTERNAL_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wim_provider_external_info_t             
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t                 data_source_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSourceId
        _m03 sdk::array<uint8_t, 20> resource_hash;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceHash
                                                    
        SDK_NONVOL_PROPERTIES( "_WIM_PROVIDER_EXTERNAL_INFO.$", 0x28, true, 0xb5f2938ad261a4ba );               
        SDK_FIXED_SIZE( wim_provider_external_info_t, 0x28 );               
    };                                              
};
#include "magic/wim_provider_external_info_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_external_info_t, 0x28 );
