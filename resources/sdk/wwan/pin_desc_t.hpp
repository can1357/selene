#pragma once
#include <sdkgen/support_library.hpp>
#include "pin_mode_t.hpp"
#include "pin_format_t.hpp"

#include "magic/pin_desc_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_PIN_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pin_desc_t                               
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 enum wwan::pin_mode_t   pin_mode;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PinMode
        _m01 enum wwan::pin_format_t pin_format;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PinFormat
        _m02 uint32_t                pin_length_min;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PinLengthMin
        _m03 uint32_t                pin_length_max;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PinLengthMax
                                                    
        SDK_MAGIC_PROPERTIES( "_WWAN_PIN_DESC.$", 0x10, true, 0xf0fbdd58cf012efb );               
        SDK_FIXED_SIZE( pin_desc_t, 0x10 );               
    };                                              
};
#include "magic/pin_desc_t.end.hpp"
SDK_VERIFY( struct wwan::pin_desc_t, 0x10 );
