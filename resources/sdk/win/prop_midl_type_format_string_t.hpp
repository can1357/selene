#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prop_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _prop_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prop_midl_type_format_string_t     
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 3407> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                              
        SDK_MAGIC_PROPERTIES( "_prop_MIDL_TYPE_FORMAT_STRING.$", 0xd52, true, 0x205c4c67d4a9423a );       
        SDK_FIXED_SIZE( prop_midl_type_format_string_t, 0xd52 );       
    };                                        
};
#include "magic/prop_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::prop_midl_type_format_string_t, 0xd52 );
