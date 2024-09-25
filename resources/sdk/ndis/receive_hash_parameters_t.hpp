#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/receive_hash_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_HASH_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_hash_parameters_t                             
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     hash_information;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashInformation
        _m03 uint16_t                     hash_secret_key_size;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HashSecretKeySize
        _m04 uint32_t                     hash_secret_key_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashSecretKeyOffset
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_HASH_PARAMETERS.$", 0x14, true, 0xd0da560b7a3fb335 );                       
        SDK_FIXED_SIZE( receive_hash_parameters_t, 0x14 );                       
    };                                                           
};
#include "magic/receive_hash_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_hash_parameters_t, 0x14 );
