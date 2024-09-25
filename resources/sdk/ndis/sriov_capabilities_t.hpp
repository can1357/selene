#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/sriov_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SRIOV_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sriov_capabilities_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct ndis::object_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     sriov_capabilities;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SriovCapabilities
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_SRIOV_CAPABILITIES.$", 0xc, true, 0xb09486cb66dbd6f3 );                   
        SDK_FIXED_SIZE( sriov_capabilities_t, 0xc );                   
    };                                                       
};
#include "magic/sriov_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::sriov_capabilities_t, 0xc );
