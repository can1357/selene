#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_handle_t.hpp"

#include "magic/offload_handle_private_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OFFLOAD_HANDLE_PRIVATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_handle_private_t                                 
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                          
        _m00 struct ndis::offload_handle_t handle;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 void*                         protocol_binding_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProtocolBindingContext
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_HANDLE_PRIVATE.$", 0x18, true, 0x23fcea8e72f90569 );                         
        SDK_FIXED_SIZE( offload_handle_private_t, 0x18 );                         
    };                                                              
};
#include "magic/offload_handle_private_t.end.hpp"
SDK_VERIFY( struct ndis::offload_handle_private_t, 0x18 );
