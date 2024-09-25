#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scm_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _scm_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scm_midl_type_format_string_t     
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 561> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_scm_MIDL_TYPE_FORMAT_STRING.$", 0x2f2, true, 0x9443232b5b0b6464 );       
        SDK_DYNAMIC_SIZE( scm_midl_type_format_string_t );       
    };                                       
};
#include "magic/scm_midl_type_format_string_t.end.hpp"