#pragma once
#include <sdkgen/support_library.hpp>
#include "pm_wake_up_capabilities_t.hpp"

#include "magic/pnp_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PNP_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pnp_capabilities_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 uint32_t                               flags;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct ndis::pm_wake_up_capabilities_t wake_up_capabilities;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WakeUpCapabilities
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_PNP_CAPABILITIES.$", 0x10, true, 0xf2019704cb26c712 );                     
        SDK_FIXED_SIZE( pnp_capabilities_t, 0x10 );                      
    };                                                                   
};
#include "magic/pnp_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::pnp_capabilities_t, 0x10 );
