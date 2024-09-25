#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_object_header_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TRIAGE_OBJECT_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_object_header_t
    {                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint8_t  type;        //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  revision;    //{ +0x0001    +0x0001    +0x0001    } | .Revision
        _m02 uint16_t size;        //{ +0x0002    +0x0002    +0x0002    } | .Size
                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_TRIAGE_OBJECT_HEADER.$", 0x4, true, 0x42273d0ff4f361b );         
        SDK_FIXED_SIZE( triage_object_header_t, 0x4 );         
    };                           
};
#include "magic/triage_object_header_t.end.hpp"
SDK_VERIFY( struct ndis::triage_object_header_t, 0x4 );
