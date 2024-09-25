#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/srgtprot_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _srgtprot_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct srgtprot_midl_type_format_string_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 47> format;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_srgtprot_MIDL_TYPE_FORMAT_STRING.$", 0x32, true, 0xf8579ac92703fc07 );       
        SDK_FIXED_SIZE( srgtprot_midl_type_format_string_t, 0x32 );       
    };                                       
};
#include "magic/srgtprot_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::srgtprot_midl_type_format_string_t, 0x32 );
