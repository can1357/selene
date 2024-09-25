#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"

namespace nt { struct irp_t; }

#include "magic/hidclass_pingpong_t.start.hpp"
namespace hid
{
    struct fdo_extension_t;

    // [struct _HIDCLASS_PINGPONG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hidclass_pingpong_t                                 
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 uint32_t                     sig;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sig
        _m01 uint32_t                     read_interlock;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadInterlock
        _m02 struct nt::irp_t*            irp;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .irp
        _m03 uint8_t*                     report_buffer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .reportBuffer
        _m04 int32_t                      we_are_cancelling;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .weAreCancelling
        _m05 struct nt::kevent_t          sent_event;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .sentEvent
        _m06 struct nt::kevent_t          pump_done_event;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pumpDoneEvent
        _m07 struct hid::fdo_extension_t* my_fdo_ext;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .myFdoExt
        _m08 struct nt::ktimer_t          backoff_timer;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .backoffTimer
        _m09 struct nt::kdpc_t            backoff_timer_dpc;     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .backoffTimerDPC
        _m10 int64_t                      backoff_timer_period;  //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .backoffTimerPeriod
                                                               
        SDK_MAGIC_PROPERTIES( "_HIDCLASS_PINGPONG.$", 0xe0, true, 0x2423e0da75a9b9e4 );                     
        SDK_FIXED_SIZE( hidclass_pingpong_t, 0xe0 );                     
    };                                                         
};
#include "magic/hidclass_pingpong_t.end.hpp"
SDK_VERIFY( struct hid::hidclass_pingpong_t, 0xe0 );
