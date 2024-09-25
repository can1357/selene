#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_transport_data_t.start.hpp"
namespace nt
{
    // [struct _DEBUG_TRANSPORT_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_transport_data_t              
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t hw_context_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .HwContextSize
        _m01 uint8_t  use_serial_framing;        //{ +0x0004    +0x0004    +0x0004    +0x0008    +0x0004    } | .UseSerialFraming
                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m02 uint8_t  valid_usb_core_id;         //{ +0x0005    +0x0005    +0x0009    +0x0005    } | .ValidUSBCoreId
        _m03 uint8_t  usb_core_id;               //{ +0x0006    +0x0006    +0x000a    +0x0006    } | .USBCoreId
                                               
        // Windows 11                          
        //                                     
        _m04 uint32_t shared_visible_data_size;  //{ +0x0004    } | .SharedVisibleDataSize
                                               
        SDK_MAGIC_PROPERTIES( "_DEBUG_TRANSPORT_DATA.$", 0x8, true, 0xf3688084e3b7b69e );                         
        SDK_DYNAMIC_SIZE( debug_transport_data_t );                         
    };                                         
};
#include "magic/debug_transport_data_t.end.hpp"
