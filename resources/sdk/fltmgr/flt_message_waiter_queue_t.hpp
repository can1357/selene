#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/csq_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ksemaphore_t.hpp"
#include "flt_mutex_list_head_t.hpp"

#include "magic/flt_message_waiter_queue_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_MESSAGE_WAITER_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_message_waiter_queue_t                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                              
        _m00 struct io::csq_t                     csq;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Csq
        _m01 struct fltmgr::flt_mutex_list_head_t waiter_q;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WaiterQ
        _m02 uint32_t                             minimum_waiter_length;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .MinimumWaiterLength
        _m03 struct nt::ksemaphore_t              semaphore;              //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Semaphore
        _m04 struct nt::kevent_t                  event;                  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Event
                                                                        
        SDK_MAGIC_PROPERTIES( "_FLT_MESSAGE_WAITER_QUEUE.$", 0xd0, true, 0xd9502bfd60073ed5 );                      
        SDK_FIXED_SIZE( flt_message_waiter_queue_t, 0xd0 );                      
    };                                                                  
};
#include "magic/flt_message_waiter_queue_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_message_waiter_queue_t, 0xd0 );
