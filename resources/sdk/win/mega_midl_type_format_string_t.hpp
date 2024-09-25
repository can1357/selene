#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mega_midl_type_format_string_t.start.hpp"
namespace win
{
    // [struct _mega_MIDL_TYPE_FORMAT_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mega_midl_type_format_string_t     
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                    
        _m00 sdk::array<uint8_t, 7407> format;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Format
                                              
        SDK_MAGIC_PROPERTIES( "_mega_MIDL_TYPE_FORMAT_STRING.$", 0x1df2, true, 0x78e629e77cc63d15 );       
        SDK_DYNAMIC_SIZE( mega_midl_type_format_string_t );       
    };                                        
};
#include "magic/mega_midl_type_format_string_t.end.hpp"
