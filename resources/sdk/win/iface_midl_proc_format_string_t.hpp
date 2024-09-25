#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iface_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _iface_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iface_midl_proc_format_string_t 
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 sdk::array<uint8_t, 1> format;  //{ +0x0002    +0x0002    +0x0002    } | .Format
                                           
        SDK_MAGIC_PROPERTIES( "_iface_MIDL_PROC_FORMAT_STRING.$", 0x4, true, 0xbbad3fddfef7910f );       
        SDK_FIXED_SIZE( iface_midl_proc_format_string_t, 0x4 );       
    };                                     
};
#include "magic/iface_midl_proc_format_string_t.end.hpp"
SDK_VERIFY( struct win::iface_midl_proc_format_string_t, 0x4 );
