#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offload_handle_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OFFLOAD_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_handle_t                                
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                 
        _m00 sdk::array<void*, 1> ndis_reserved;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdisReserved
        _m01 void*                miniport_offload_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportOffloadContext
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_HANDLE.$", 0x10, true, 0xa21e71acc7584fba );                         
        SDK_FIXED_SIZE( offload_handle_t, 0x10 );                         
    };                                                     
};
#include "magic/offload_handle_t.end.hpp"
SDK_VERIFY( struct ndis::offload_handle_t, 0x10 );
