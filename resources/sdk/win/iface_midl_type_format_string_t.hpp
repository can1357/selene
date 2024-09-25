#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iface_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _iface_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iface_midl_type_format_string_t   
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 431> format;  //{ +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_iface_MIDL_TYPE_FORMAT_STRING.$", 0x1b2, true, 0xf6a3dc83b19a99f );       
        SDK_FIXED_SIZE( iface_midl_type_format_string_t, 0x1b2 );       
    };                                       
};
#include "magic/iface_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::iface_midl_type_format_string_t, 0x1b2 );
