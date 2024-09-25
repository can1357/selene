#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_header_padding_info_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_HEADER_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_header_padding_info_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t padding_amount;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PaddingAmount
                                       
        SDK_MAGIC_PROPERTIES( "_OBJECT_HEADER_PADDING_INFO.$", 0x4, true, 0xdc8b6efc773c860f );               
        SDK_FIXED_SIZE( object_header_padding_info_t, 0x4 );               
    };                                 
};
#include "magic/object_header_padding_info_t.end.hpp"
SDK_VERIFY( struct nt::object_header_padding_info_t, 0x4 );
