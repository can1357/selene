#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iinspectable_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _iinspectable_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iinspectable_midl_proc_format_string_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 121> format;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                                 
        SDK_MAGIC_PROPERTIES( "_iinspectable_MIDL_PROC_FORMAT_STRING.$", 0x7c, true, 0xd7b12565c2a349b7 );       
        SDK_FIXED_SIZE( iinspectable_midl_proc_format_string_t, 0x7c );       
    };                                           
};
#include "magic/iinspectable_midl_proc_format_string_t.end.hpp"
SDK_VERIFY( struct win::iinspectable_midl_proc_format_string_t, 0x7c );
