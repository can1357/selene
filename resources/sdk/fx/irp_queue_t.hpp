#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct csq_irp_context_t; }
namespace nt { struct irp_t;             }

#include "magic/irp_queue_t.start.hpp"
namespace fx
{
    class irp_queue_t;
    class non_paged_object_t;

    // [class FxIrpQueue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class irp_queue_t                                        
    {                                                        
        using pfn_irp_queue_cancel_t = sdk::function<void(class fx::irp_queue_t*, struct nt::irp_t*, struct io::csq_irp_context_t*, uint8_t)>*;                  
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 nt::list_entry_t              m_queue;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Queue
        _m01 class fx::non_paged_object_t* m_lock_object;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_LockObject
        _m02 pfn_irp_queue_cancel_t        m_cancel_callback;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_CancelCallback
        _m03 int32_t                       m_request_count;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_RequestCount
                                                             
        SDK_MAGIC_PROPERTIES( "FxIrpQueue.$", 0x28, true, 0x34188a97539686d6 );                  
        SDK_FIXED_SIZE( irp_queue_t, 0x28 );                  
    };                                                       
};
#include "magic/irp_queue_t.end.hpp"
SDK_VERIFY( class fx::irp_queue_t, 0x28 );
