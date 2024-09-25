#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v2_algorithm_info_t.start.hpp"
namespace ndis
{
    // [struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_algorithm_info_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t identifier;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Identifier
        _m01 uint32_t key_length;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .KeyLength
        _m02 uint32_t key_offset_bytes;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyOffsetBytes
        _m03 uint32_t additional_info;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AdditionalInfo
                                            
        SDK_MAGIC_PROPERTIES( "_IPSEC_OFFLOAD_V2_ALGORITHM_INFO.$", 0x10, true, 0x3a62440e21004b0a );                 
        SDK_FIXED_SIZE( ipsec_offload_v2_algorithm_info_t, 0x10 );                 
    };                                      
};
#include "magic/ipsec_offload_v2_algorithm_info_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_algorithm_info_t, 0x10 );
