#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nonopaque_oplock_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct guid_t;
    struct ethread_t;
    struct eprocess_t;
    struct fast_mutex_t;
    struct file_object_t;

    // [struct _NONOPAQUE_OPLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nonopaque_oplock_t                                        
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 struct nt::irp_t*         irp_exclusive_oplock;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IrpExclusiveOplock
        _m01 struct nt::file_object_t* file_object;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 struct nt::eprocess_t*    exclusive_oplock_owner;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExclusiveOplockOwner
        _m03 struct nt::ethread_t*     exclusive_oplock_owner_thread;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ExclusiveOplockOwnerThread
        _m04 uint8_t                   waiter_priority;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WaiterPriority
        _m05 nt::list_entry_t          irp_oplocks_r;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IrpOplocksR
        _m06 nt::list_entry_t          irp_oplocks_rh;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IrpOplocksRH
        _m07 nt::list_entry_t          rh_break_queue;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RHBreakQueue
        _m08 nt::list_entry_t          waiting_irps;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WaitingIrps
        _m09 nt::list_entry_t          delay_ack_file_object_queue;    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DelayAckFileObjectQueue
        _m10 nt::list_entry_t          atomic_queue;                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .AtomicQueue
        _m11 struct nt::guid_t*        deleter_parent_key;             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DeleterParentKey
        _m12 uint32_t                  oplock_state;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .OplockState
        _m13 struct nt::fast_mutex_t*  fast_mutex;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .FastMutex
                                                                     
        SDK_MAGIC_PROPERTIES( "_NONOPAQUE_OPLOCK.$", 0xa0, true, 0xeac3aa2247addaee );                              
        SDK_FIXED_SIZE( nonopaque_oplock_t, 0xa0 );                              
    };                                                               
};
#include "magic/nonopaque_oplock_t.end.hpp"
SDK_VERIFY( struct nt::nonopaque_oplock_t, 0xa0 );
