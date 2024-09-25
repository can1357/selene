#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/oid_cache_entry_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OID_CACHE_ENTRY]
    // => Windows 10 v1607
    //
    struct oid_cache_entry_t             
    {                                    
        // Windows 10 v1607                   
        //                               
        _m00 uint32_t oid;                 //{ +0x0000    } | .Oid
        _m01 uint32_t info_buffer_length;  //{ +0x0004    } | .InfoBufferLength
        _m02 void*    info_buffer;         //{ +0x0008    } | .InfoBuffer
        _m03 int32_t  last_status;         //{ +0x0010    } | .LastStatus
        _m04 uint8_t  value_valid;         //{ +0x0014    } | .ValueValid
                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_OID_CACHE_ENTRY.$", 0x0, false, 0x306e02755b1347d );                   
        SDK_FIXED_SIZE( oid_cache_entry_t, 0x18 );                   
    };                                   
};
#include "magic/oid_cache_entry_t.end.hpp"
SDK_VERIFY( struct ndis::oid_cache_entry_t, 0x18 );
