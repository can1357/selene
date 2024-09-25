#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/smart_threshold_t.start.hpp"
namespace stor::port
{
    // [struct _SMART_THRESHOLD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct smart_threshold_t
    {                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 uint8_t id;      //{ +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint8_t value;   //{ +0x0001    +0x0001    +0x0001    } | .Value
                            
        SDK_MAGIC_PROPERTIES( "_SMART_THRESHOLD.$", 0xc, true, 0x4f8f2acfea896f41 );      
        SDK_FIXED_SIZE( smart_threshold_t, 0xc );      
    };                      
};
#include "magic/smart_threshold_t.end.hpp"
SDK_VERIFY( struct stor::port::smart_threshold_t, 0xc );
