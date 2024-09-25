#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/count_string_t.start.hpp"
namespace wdf
{
    // [struct _count_string]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct count_string_t            
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t maximum_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MaximumLength
        _m02 char*    buffer;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                     
        SDK_MAGIC_PROPERTIES( "_count_string.$", 0x10, true, 0x1408a554da4afae1 );               
        SDK_FIXED_SIZE( count_string_t, 0x10 );               
    };                               
};
#include "magic/count_string_t.end.hpp"
SDK_VERIFY( struct wdf::count_string_t, 0x10 );
