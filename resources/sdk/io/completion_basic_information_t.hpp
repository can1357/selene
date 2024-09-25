#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/completion_basic_information_t.start.hpp"
namespace io
{
    // [struct _IO_COMPLETION_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_basic_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t depth;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Depth
                                         
        SDK_MAGIC_PROPERTIES( "_IO_COMPLETION_BASIC_INFORMATION.$", 0x4, true, 0xe938c41e973392b0 );      
        SDK_FIXED_SIZE( completion_basic_information_t, 0x4 );      
    };                                   
};
#include "magic/completion_basic_information_t.end.hpp"
SDK_VERIFY( struct io::completion_basic_information_t, 0x4 );
