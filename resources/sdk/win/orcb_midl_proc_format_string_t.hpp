#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/orcb_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _orcb_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orcb_midl_proc_format_string_t    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 sdk::array<uint8_t, 259> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                             
        SDK_MAGIC_PROPERTIES( "_orcb_MIDL_PROC_FORMAT_STRING.$", 0x10c, true, 0xb77aa12f51b2d14f );       
        SDK_DYNAMIC_SIZE( orcb_midl_proc_format_string_t );       
    };                                       
};
#include "magic/orcb_midl_proc_format_string_t.end.hpp"
