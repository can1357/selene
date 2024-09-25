#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/keyboard_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_KEYBOARD_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct keyboard_device_data_t    
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t revision;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint8_t  type;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m03 uint8_t  subtype;         //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Subtype
        _m04 uint16_t keyboard_flags;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .KeyboardFlags
                                     
        SDK_NONVOL_PROPERTIES( "_CM_KEYBOARD_DEVICE_DATA.$", 0x8, true, 0x2f33a7660238a9d6 );               
        SDK_FIXED_SIZE( keyboard_device_data_t, 0x8 );               
    };                               
};
#include "magic/keyboard_device_data_t.end.hpp"
SDK_VERIFY( struct cm::keyboard_device_data_t, 0x8 );
