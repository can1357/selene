#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"

#include "magic/urb_open_static_streams_t.start.hpp"
namespace wdf
{
    struct usbd_stream_information_t;

    // [struct _URB_OPEN_STATIC_STREAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_open_static_streams_t                                    
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                              
        _m00 struct wdf::urb_header_t               hdr;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                                  pipe_handle;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PipeHandle
        _m02 uint32_t                               number_of_streams;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfStreams
        _m03 uint16_t                               stream_info_version;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .StreamInfoVersion
        _m04 uint16_t                               stream_info_size;     //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .StreamInfoSize
        _m05 struct wdf::usbd_stream_information_t* streams;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Streams
                                                                        
        SDK_MAGIC_PROPERTIES( "_URB_OPEN_STATIC_STREAMS.$", 0x30, true, 0xd0a23cb2dbfb8d49 );                    
        SDK_FIXED_SIZE( urb_open_static_streams_t, 0x30 );                    
    };                                                                  
};
#include "magic/urb_open_static_streams_t.end.hpp"
SDK_VERIFY( struct wdf::urb_open_static_streams_t, 0x30 );
