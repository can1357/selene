#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irot_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _irot_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irot_midl_proc_format_string_t    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 817> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_irot_MIDL_PROC_FORMAT_STRING.$", 0x340, true, 0xd29c63f2aeeae2b3 );       
        SDK_DYNAMIC_SIZE( irot_midl_proc_format_string_t );       
    };                                       
};
#include "magic/irot_midl_proc_format_string_t.end.hpp"
