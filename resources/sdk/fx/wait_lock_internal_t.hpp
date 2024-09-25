#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/event_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/wait_lock_internal_t.start.hpp"
namespace fx
{
    // [class FxWaitLockInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wait_lock_internal_t                     
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                         
        _m00 class mx::event_t     m_event;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Event
        _m01 struct nt::kthread_t* m_owning_thread;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_OwningThread
                                                   
        SDK_MAGIC_PROPERTIES( "FxWaitLockInternal.$", 0x28, true, 0x6b064b0533a5662 );                
        SDK_FIXED_SIZE( wait_lock_internal_t, 0x28 );                
    };                                             
};
#include "magic/wait_lock_internal_t.end.hpp"
SDK_VERIFY( class fx::wait_lock_internal_t, 0x28 );
