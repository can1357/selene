#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/network_app_instance_version_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct network_app_instance_version_ecp_context_t
    {                                                
        // WDK 10                  
        //                         
        _m00 uint16_t size;                            //{ +0x0000    } | .Size
        _m01 uint64_t version_high;                    //{ +0x0008    } | .VersionHigh
        _m02 uint64_t version_low;                     //{ +0x0010    } | .VersionLow
                                                     
        SDK_NONVOL_PROPERTIES( "_NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT.$", 0x0, false, 0xa59cc07b83742c1d );             
        SDK_FIXED_SIZE( network_app_instance_version_ecp_context_t, 0x18 );             
    };                                               
};
#include "magic/network_app_instance_version_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::network_app_instance_version_ecp_context_t, 0x18 );
