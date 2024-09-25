#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irot_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _irot_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irot_midl_type_format_string_t    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 321> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_irot_MIDL_TYPE_FORMAT_STRING.$", 0x144, true, 0x319dcf1686faa567 );       
        SDK_FIXED_SIZE( irot_midl_type_format_string_t, 0x144 );       
    };                                       
};
#include "magic/irot_midl_type_format_string_t.end.hpp"
SDK_VERIFY( struct win::irot_midl_type_format_string_t, 0x144 );
