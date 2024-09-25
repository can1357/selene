#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iinspectable_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _iinspectable_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iinspectable_midl_type_format_string_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 99> format;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                                 
        SDK_MAGIC_PROPERTIES( "_iinspectable_MIDL_TYPE_FORMAT_STRING.$", 0x66, true, 0x1451629e483a2442 );       
        SDK_FIXED_SIZE( iinspectable_midl_type_format_string_t, 0x66 );       
    };                                           
};
#include "magic/iinspectable_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::iinspectable_midl_type_format_string_t, 0x66 );
