#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/io_forward_progress_action_t.hpp"

namespace nt  { struct irp_t;      }
namespace wdf { struct wdfqueue_t; }

#include "magic/io_queue_forward_progress_examine_irp_t.start.hpp"
namespace fx
{
    // [class FxIoQueueForwardProgressExamineIrp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_queue_forward_progress_examine_irp_t              
    {                                                          
        using pfn_wdf_io_wdm_irp_for_forward_progress_t = sdk::function<enum wdf::io_forward_progress_action_t(struct wdf::wdfqueue_t*, struct nt::irp_t*)>*;       
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                     
        _m00 pfn_wdf_io_wdm_irp_for_forward_progress_t  method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                               
        SDK_MAGIC_PROPERTIES( "FxIoQueueForwardProgressExamineIrp.$", 0x8, true, 0xe8fa34fbb5c8f0e9 );       
        SDK_FIXED_SIZE( io_queue_forward_progress_examine_irp_t, 0x8 );       
    };                                                         
};
#include "magic/io_queue_forward_progress_examine_irp_t.end.hpp"
SDK_VERIFY( class fx::io_queue_forward_progress_examine_irp_t, 0x8 );
