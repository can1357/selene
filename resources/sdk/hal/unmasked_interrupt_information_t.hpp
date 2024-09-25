#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kinterrupt_mode_t.hpp"
#include "unmasked_interrupt_flags_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

#include "magic/unmasked_interrupt_information_t.start.hpp"
namespace hal
{
    // [struct _HAL_UNMASKED_INTERRUPT_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unmasked_interrupt_information_t                      
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 uint16_t                              version;        //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                              size;           //{ +0x0002    +0x0002    +0x0002    } | .Size
        _m02 union hal::unmasked_interrupt_flags_t flags;          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 enum nt::kinterrupt_mode_t            mode;           //{ +0x0008    +0x0008    +0x0008    } | .Mode
        _m04 enum nt::kinterrupt_polarity_t        polarity;       //{ +0x000c    +0x000c    +0x000c    } | .Polarity
        _m05 uint32_t                              gsiv;           //{ +0x0010    +0x0010    +0x0010    } | .Gsiv
        _m06 uint16_t                              pin_number;     //{ +0x0014    +0x0014    +0x0014    } | .PinNumber
        _m07 void*                                 device_handle;  //{ +0x0018    +0x0018    +0x0018    } | .DeviceHandle
                                                                 
        SDK_MAGIC_PROPERTIES( "_HAL_UNMASKED_INTERRUPT_INFORMATION.$", 0x20, true, 0xd4cb1ebf6dfc0cef );              
        SDK_FIXED_SIZE( unmasked_interrupt_information_t, 0x20 );              
    };                                                           
};
#include "magic/unmasked_interrupt_information_t.end.hpp"
SDK_VERIFY( struct hal::unmasked_interrupt_information_t, 0x20 );
