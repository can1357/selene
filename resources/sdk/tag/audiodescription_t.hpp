#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/audiodescription_t.start.hpp"
namespace tag
{
    // [struct tagAUDIODESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct audiodescription_t 
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cb_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  enabled;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Enabled
        _m02 uint32_t locale;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Locale
                              
        SDK_MAGIC_PROPERTIES( "tagAUDIODESCRIPTION.$", 0xc, true, 0x7b5a7f500def0f82 );        
        SDK_FIXED_SIZE( audiodescription_t, 0xc );        
    };                        
};
#include "magic/audiodescription_t.end.hpp"
SDK_VERIFY( struct tag::audiodescription_t, 0xc );
