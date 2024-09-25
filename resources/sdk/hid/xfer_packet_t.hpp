#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [struct _HID_XFER_PACKET]
    // => WDK 10
    //
    struct xfer_packet_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_HID_XFER_PACKET.$", 0x0, false, 0xd9d5cbb98eb4232a );
        SDK_FIXED_SIZE( xfer_packet_t, 0x0 );
    };                  
};
SDK_VERIFY( struct hid::xfer_packet_t, 0x0 );
