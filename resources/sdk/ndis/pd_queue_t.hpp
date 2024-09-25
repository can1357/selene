#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_queue_t.start.hpp"
namespace ndis
{
    struct pd_queue_dispatch_t;

    // [struct _NDIS_PD_QUEUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_queue_t                                                     
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 struct ndis::object_header_t            header;                //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                flags;                 //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 const struct ndis::pd_queue_dispatch_t* dispatch;              //{ +0x0008    +0x0008    +0x0008    } | .Dispatch
        _m03 sdk::array<void*, 2>                    pd_platform_reserved;  //{ +0x0010    +0x0010    +0x0010    } | .PDPlatformReserved
        _m04 sdk::array<void*, 2>                    pd_client_reserved;    //{ +0x0020    +0x0020    +0x0020    } | .PDClientReserved
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_QUEUE.$", 0x30, true, 0x3425fcb94f3b844f );                     
        SDK_FIXED_SIZE( pd_queue_t, 0x30 );                               
    };                                                                    
};
#include "magic/pd_queue_t.end.hpp"
SDK_VERIFY( struct ndis::pd_queue_t, 0x30 );
