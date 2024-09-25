#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OBJECT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint8_t  type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  revision;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Revision
        _m02 uint16_t size;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
                               
        SDK_MAGIC_PROPERTIES( "_NDIS_OBJECT_HEADER.$", 0x4, true, 0xe5122de2c8f0f52c );         
        SDK_FIXED_SIZE( object_header_t, 0x4 );         
    };                         
};
#include "magic/object_header_t.end.hpp"
SDK_VERIFY( struct ndis::object_header_t, 0x4 );
