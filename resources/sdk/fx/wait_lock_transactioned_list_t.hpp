#pragma once
#include <sdkgen/support_library.hpp>
#include "wait_lock_internal_t.hpp"

namespace mx { class event_t; }

#include "magic/wait_lock_transactioned_list_t.start.hpp"
namespace fx
{
    // [class FxWaitLockTransactionedList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wait_lock_transactioned_list_t                                  
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 nt::list_entry_t               m_list_head;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_ListHead
        _m01 nt::list_entry_t               m_transaction_head;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_TransactionHead
        _m02 class mx::event_t*             m_deleting_done_event;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_DeletingDoneEvent
        _m03 uint32_t                       m_list_locked_recursion_count;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_ListLockedRecursionCount
        _m04 uint8_t                        m_delete_on_remove;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .m_DeleteOnRemove
        _m05 uint8_t                        m_deleting;                     //{ +0x0035    +0x0035    +0x0035    +0x0035    } | .m_Deleting
        _m06 uint8_t                        m_retries;                      //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .m_Retries
        _m07 class fx::wait_lock_internal_t m_state_change_list_lock;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_StateChangeListLock
                                                                          
        SDK_MAGIC_PROPERTIES( "FxWaitLockTransactionedList.$", 0x60, true, 0xb6a25034aa081c9f );                              
        SDK_FIXED_SIZE( wait_lock_transactioned_list_t, 0x60 );                              
    };                                                                    
};
#include "magic/wait_lock_transactioned_list_t.end.hpp"
SDK_VERIFY( class fx::wait_lock_transactioned_list_t, 0x60 );
