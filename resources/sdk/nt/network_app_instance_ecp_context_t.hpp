#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/network_app_instance_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _NETWORK_APP_INSTANCE_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct network_app_instance_ecp_context_t  
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint16_t          size;             //{ +0x0000    } | .Size
        _m01 struct nt::guid_t app_instance_id;  //{ +0x0004    } | .AppInstanceID
                                               
        SDK_NONVOL_PROPERTIES( "_NETWORK_APP_INSTANCE_ECP_CONTEXT.$", 0x0, false, 0xa3db35b923bf0c2f );                
        SDK_FIXED_SIZE( network_app_instance_ecp_context_t, 0x14 );                
    };                                         
};
#include "magic/network_app_instance_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::network_app_instance_ecp_context_t, 0x14 );
