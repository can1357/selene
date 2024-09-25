#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/smart_attribute_t.start.hpp"
namespace stor::port
{
    // [struct _SMART_ATTRIBUTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct smart_attribute_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint8_t                id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint8_t                low_status;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .LowStatus
        _m02 uint8_t                high_status;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HighStatus
        _m03 uint8_t                value;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Value
        _m04 uint8_t                worst;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Worst
        _m05 sdk::array<uint8_t, 6> raw;          //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Raw
                                                
        SDK_MAGIC_PROPERTIES( "_SMART_ATTRIBUTE.$", 0xc, true, 0x1c29051a1d22210a );            
        SDK_FIXED_SIZE( smart_attribute_t, 0xc );            
    };                                          
};
#include "magic/smart_attribute_t.end.hpp"
SDK_VERIFY( struct stor::port::smart_attribute_t, 0xc );
