#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iinspectablederived_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _iinspectablederived_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iinspectablederived_midl_proc_format_string_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 1303> format;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                                        
        SDK_MAGIC_PROPERTIES( "_iinspectablederived_MIDL_PROC_FORMAT_STRING.$", 0x500, true, 0x6fc6f5b4b9db8991 );       
        SDK_DYNAMIC_SIZE( iinspectablederived_midl_proc_format_string_t );       
    };                                                  
};
#include "magic/iinspectablederived_midl_proc_format_string_t.end.hpp"
