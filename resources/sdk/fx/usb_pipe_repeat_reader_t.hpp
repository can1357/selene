#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../mx/event_t.hpp"

namespace nt { struct irp_t; }

#include "magic/usb_pipe_repeat_reader_t.start.hpp"
namespace fx
{
    class request_t;
    struct usb_pipe_continuous_reader_t;

    // [struct FxUsbPipeRepeatReader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_pipe_repeat_reader_t                                        
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                 
        _m00 class fx::request_t*                     request;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Request
        _m01 struct nt::irp_t*                        request_irp;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RequestIrp
        _m02 struct fx::usb_pipe_continuous_reader_t* parent;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parent
        _m03 struct nt::kdpc_t                        dpc;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Dpc
        _m04 class mx::event_t                        read_completed_event;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ReadCompletedEvent
                                                                           
        SDK_MAGIC_PROPERTIES( "FxUsbPipeRepeatReader.$", 0x78, true, 0xb15ad351e2b44ebf );                     
        SDK_FIXED_SIZE( usb_pipe_repeat_reader_t, 0x78 );                     
    };                                                                     
};
#include "magic/usb_pipe_repeat_reader_t.end.hpp"
SDK_VERIFY( struct fx::usb_pipe_repeat_reader_t, 0x78 );
