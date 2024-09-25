#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/urb_pipe_request_t.hpp"
#include "../wdf/request_completion_params_t.hpp"
#include "../wdf/usb_request_completion_params_t.hpp"

namespace wdf { class i_fx_memory_t;  }
namespace wdf { struct usbd_handle_t; }

#include "magic/usb_pipe_request_context_t.start.hpp"
namespace fx
{
    // [struct FxUsbPipeRequestContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_pipe_request_context_t                                        
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 struct wdf::request_completion_params_t     m_completion_params;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CompletionParams
        _m01 class wdf::i_fx_memory_t*                   m_request_memory;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_RequestMemory
        _m02 uint8_t                                     m_request_type;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_RequestType
        _m03 struct wdf::usb_request_completion_params_t m_usb_parameters;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_UsbParameters
        _m04 struct wdf::usbd_handle_t*                  m_usbd_handle;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_USBDHandle
        _m05 struct wdf::urb_pipe_request_t              m_urb_legacy;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_UrbLegacy
        _m06 struct wdf::urb_pipe_request_t*             m_urb;                //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_Urb
                                                                             
        SDK_MAGIC_PROPERTIES( "FxUsbPipeRequestContext.$", 0xb8, true, 0x2998b63192f8454b );                    
        SDK_FIXED_SIZE( usb_pipe_request_context_t, 0xb8 );                    
    };                                                                       
};
#include "magic/usb_pipe_request_context_t.end.hpp"
SDK_VERIFY( struct fx::usb_pipe_request_context_t, 0xb8 );
