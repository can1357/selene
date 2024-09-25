#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netio_net_buffer_context_t.start.hpp"
namespace ndis
{
    // [struct _NETIO_NET_BUFFER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netio_net_buffer_context_t                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                           
        _m00 uint32_t             original_data_offset;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OriginalDataOffset
        _m01 uint32_t             original_data_length;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OriginalDataLength
        _m02 uint32_t             truncated_length;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TruncatedLength
        _m03 uint32_t             flags;                               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 uint2_t              ecn_field;                           //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .EcnField
        _m05 uint1_t              converted;                           //{ +0x000c@3  +0x000c@3  +0x000c@2  +0x000c@3  } | .Converted
        _m06 uint1_t              restored;                            //{ +0x000c@4  +0x000c@4  +0x000c@3  +0x000c@4  } | .Restored
        _m07 uint1_t              ecn_force_not_ect;                   //{ +0x000c@5  +0x000c@5  +0x000c@4  +0x000c@5  } | .EcnForceNotEct
        _m08 uint1_t              nd_priority;                         //{ +0x000c@6  +0x000c@6  +0x000c@5  +0x000c@6  } | .NdPriority
        _m09 uint1_t              ipsnpi_forward_injection;            //{ +0x000c@7  +0x000c@7  +0x000c@6  +0x000c@7  } | .IpsnpiForwardInjection
        _m10 uint1_t              ipsnpi_forward_injection_copy;       //{ +0x000c@8  +0x000c@8  +0x000c@7  +0x000c@8  } | .IpsnpiForwardInjectionCopy
        _m11 sdk::array<void*, 2> scratch;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Scratch
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                   
        //                                                           
        _m12 uint1_t              esp_trailer_space_allocated;         //{ +0x000c@2  +0x000c@2  +0x000c@2  } | .EspTrailerSpaceAllocated
                                                                     
        // Windows 11                                                
        //                                                           
        _m13 uint1_t              second_mdl_allocated_by_transport;   //{ +0x000c@8  } | .SecondMdlAllocatedByTransport
        _m14 uint1_t              last_mdl_allocated_for_esp_trailer;  //{ +0x000c@9  } | .LastMdlAllocatedForEspTrailer
                                                                     
        SDK_MAGIC_PROPERTIES( "_NETIO_NET_BUFFER_CONTEXT.$", 0x20, true, 0x6ac932b29d6943bd );                                   
        SDK_FIXED_SIZE( netio_net_buffer_context_t, 0x20 );                                   
    };                                                               
};
#include "magic/netio_net_buffer_context_t.end.hpp"
SDK_VERIFY( struct ndis::netio_net_buffer_context_t, 0x20 );
