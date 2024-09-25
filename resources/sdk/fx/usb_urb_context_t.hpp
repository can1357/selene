#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/request_completion_params_t.hpp"
#include "../wdf/usb_request_completion_params_t.hpp"

namespace wdf { class i_fx_memory_t; }
namespace wdf { struct urb_t;        }

#include "magic/usb_urb_context_t.start.hpp"
namespace fx
{
    // [struct FxUsbUrbContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_urb_context_t                                                 
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 struct wdf::request_completion_params_t     m_completion_params;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CompletionParams
        _m01 class wdf::i_fx_memory_t*                   m_request_memory;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_RequestMemory
        _m02 uint8_t                                     m_request_type;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_RequestType
        _m03 struct wdf::usb_request_completion_params_t m_usb_parameters;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_UsbParameters
        _m04 struct wdf::urb_t*                          m_p_urb;              //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_pUrb
                                                                             
        SDK_MAGIC_PROPERTIES( "FxUsbUrbContext.$", 0x88, true, 0xc3d143c723c7a942 );                    
        SDK_FIXED_SIZE( usb_urb_context_t, 0x88 );                           
    };                                                                       
};
#include "magic/usb_urb_context_t.end.hpp"
SDK_VERIFY( struct fx::usb_urb_context_t, 0x88 );
