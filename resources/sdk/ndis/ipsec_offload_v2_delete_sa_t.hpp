#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/ipsec_offload_v2_delete_sa_t.start.hpp"
namespace ndis
{
    struct ipsec_offload_v2_delete_sa_t;

    // [struct _IPSEC_OFFLOAD_V2_DELETE_SA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_delete_sa_t                                
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                             
        _m00 struct ndis::object_header_t               header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::ipsec_offload_v2_delete_sa_t* next;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Next
        _m02 void*                                      offload_handle;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OffloadHandle
                                                                       
        SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_DELETE_SA.$", 0x18, true, 0x493dc9da083bc482 );               
        SDK_FIXED_SIZE( ipsec_offload_v2_delete_sa_t, 0x18 );               
    };                                                                 
};
#include "magic/ipsec_offload_v2_delete_sa_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_delete_sa_t, 0x18 );
