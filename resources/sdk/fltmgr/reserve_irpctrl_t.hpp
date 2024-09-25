#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ksemaphore_t.hpp"
#include "backpocket_thread_entry_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/reserve_irpctrl_t.start.hpp"
namespace fltmgr
{
    struct irp_ctrl_t;

    // [struct _RESERVE_IRPCTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reserve_irpctrl_t                                                 
    {                                                                        
        using entries_t = sdk::array<struct fltmgr::backpocket_thread_entry_t, 3>;                     
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 sdk::array<struct fltmgr::irp_ctrl_t*, 10> static_irp_ctrl;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StaticIrpCtrl
        _m01 sdk::array<struct nt::kthread_t*, 10>      static_owning_thread;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StaticOwningThread
        _m02 sdk::array<struct nt::ksemaphore_t, 10>    static_lock;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .StaticLock
        _m03 struct nt::ksemaphore_t                    entries_lock;          //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .EntriesLock
        _m04 entries_t                                  entries;               //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .Entries
                                                                             
        SDK_MAGIC_PROPERTIES( "_RESERVE_IRPCTRL.$", 0x248, true, 0xc1f43ee1dcab77fa );                     
        SDK_FIXED_SIZE( reserve_irpctrl_t, 0x248 );                          
    };                                                                       
};
#include "magic/reserve_irpctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::reserve_irpctrl_t, 0x248 );
