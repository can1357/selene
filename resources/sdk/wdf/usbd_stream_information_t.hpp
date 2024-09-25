#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usbd_stream_information_t.start.hpp"
namespace wdf
{
    // [struct _USBD_STREAM_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_stream_information_t        
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 void*    pipe_handle;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PipeHandle
        _m01 uint32_t stream_id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StreamID
        _m02 uint32_t maximum_transfer_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaximumTransferSize
        _m03 uint32_t pipe_flags;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PipeFlags
                                            
        SDK_MAGIC_PROPERTIES( "_USBD_STREAM_INFORMATION.$", 0x18, true, 0xf08ddef466a138b1 );                      
        SDK_FIXED_SIZE( usbd_stream_information_t, 0x18 );                      
    };                                      
};
#include "magic/usbd_stream_information_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_stream_information_t, 0x18 );
