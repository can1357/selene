#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acpickl_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _acpickl_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpickl_midl_type_format_string_t 
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 115> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_acpickl_MIDL_TYPE_FORMAT_STRING.$", 0x76, true, 0x3ca081697d93b488 );       
        SDK_FIXED_SIZE( acpickl_midl_type_format_string_t, 0x76 );       
    };                                       
};
#include "magic/acpickl_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::acpickl_midl_type_format_string_t, 0x76 );
