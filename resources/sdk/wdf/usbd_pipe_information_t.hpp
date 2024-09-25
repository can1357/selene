#pragma once
#include <sdkgen/support_library.hpp>
#include "usbd_pipe_type_t.hpp"

#include "magic/usbd_pipe_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_PIPE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_pipe_information_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                    
        _m00 uint16_t                   maximum_packet_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumPacketSize
        _m01 uint8_t                    endpoint_address;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .EndpointAddress
        _m02 uint8_t                    interval;               //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Interval
        _m03 enum wdf::usbd_pipe_type_t pipe_type;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PipeType
        _m04 void*                      pipe_handle;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PipeHandle
        _m05 uint32_t                   maximum_transfer_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumTransferSize
        _m06 uint32_t                   pipe_flags;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PipeFlags
                                                              
        SDK_MAGIC_PROPERTIES( "_USBD_PIPE_INFORMATION.$", 0x18, true, 0xae49ad2eed9366bf );                      
        SDK_FIXED_SIZE( usbd_pipe_information_t, 0x18 );                      
    };                                                        
};
#include "magic/usbd_pipe_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_pipe_information_t, 0x18 );
