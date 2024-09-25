#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custmact_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _custmact_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custmact_midl_type_format_string_t 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 1097> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                              
        SDK_MAGIC_PROPERTIES( "_custmact_MIDL_TYPE_FORMAT_STRING.$", 0x54c, true, 0xf8882b49cf020939 );       
        SDK_DYNAMIC_SIZE( custmact_midl_type_format_string_t );       
    };                                        
};
#include "magic/custmact_midl_type_format_string_t.end.hpp"
