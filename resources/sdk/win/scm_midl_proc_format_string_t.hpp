#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scm_midl_proc_format_string_t.start.hpp"
namespace win
{
    // [struct _scm_MIDL_PROC_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scm_midl_proc_format_string_t      
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 1357> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                              
        SDK_MAGIC_PROPERTIES( "_scm_MIDL_PROC_FORMAT_STRING.$", 0x62e, true, 0xc326bc0967f30b63 );       
        SDK_DYNAMIC_SIZE( scm_midl_proc_format_string_t );       
    };                                        
};
#include "magic/scm_midl_proc_format_string_t.end.hpp"
