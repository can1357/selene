#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_pipe_type_t.hpp"

#include "magic/usb_pipe_information_t.start.hpp"
namespace wdf
{
    // [struct _WDF_USB_PIPE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_pipe_information_t                            
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m00 uint32_t                  size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                  maximum_packet_size;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumPacketSize
        _m02 uint8_t                   endpoint_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndpointAddress
        _m03 uint8_t                   interval;               //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .Interval
        _m04 uint8_t                   setting_index;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .SettingIndex
        _m05 enum wdf::usb_pipe_type_t pipe_type;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PipeType
        _m06 uint32_t                  maximum_transfer_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumTransferSize
                                                             
        SDK_MAGIC_PROPERTIES( "_WDF_USB_PIPE_INFORMATION.$", 0x14, true, 0xf8d8f8a58415fea1 );                      
        SDK_FIXED_SIZE( usb_pipe_information_t, 0x14 );                      
    };                                                       
};
#include "magic/usb_pipe_information_t.end.hpp"
SDK_VERIFY( struct wdf::usb_pipe_information_t, 0x14 );
