#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "ipsec_offload_v2_operation_t.hpp"

#include "magic/ipsec_offload_v2_update_sa_t.start.hpp"
namespace ndis
{
    // [struct _IPSEC_OFFLOAD_V2_UPDATE_SA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_update_sa_t                                         
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                      
        _m00 struct ndis::object_header_t            header;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                                   offload_handle;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffloadHandle
        _m02 enum ndis::ipsec_offload_v2_operation_t operation;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Operation
        _m03 uint32_t                                spi;                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Spi
        _m04 uint32_t                                sequence_number_high_order;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SequenceNumberHighOrder
                                                                                
        SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_UPDATE_SA.$", 0x20, true, 0x4ef4506461bc490b );                           
        SDK_FIXED_SIZE( ipsec_offload_v2_update_sa_t, 0x20 );                           
    };                                                                          
};
#include "magic/ipsec_offload_v2_update_sa_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_update_sa_t, 0x20 );
