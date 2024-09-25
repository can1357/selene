#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/paged_lock_t.hpp"
#include "verifier_thread_table_entry_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/verifier_lock_t.start.hpp"
namespace fx
{
    class object_t;
    class verifier_lock_t;
    struct driver_globals_t;

    // [class FxVerifierLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class verifier_lock_t                                                  
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                 
        _m00 struct fx::driver_globals_t*             m_globals;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Globals
        _m01 uint16_t                                 m_type;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m02 uint16_t                                 m_size;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_Size
        _m03 class mx::lock_t                         m_lock;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Lock
        _m04 uint8_t                                  m_old_irql;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_OldIrql
        _m05 class mx::paged_lock_t                   m_mutex;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_Mutex
        _m06 class fx::object_t*                      m_parent_object;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_ParentObject
        _m07 struct nt::kthread_t*                    m_owning_thread;       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_OwningThread
        _m08 uint16_t                                 m_order;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_Order
        _m09 uint8_t                                  m_use_mutex;           //{ +0x007a    +0x007a    +0x007a    +0x007a    } | .m_UseMutex
        _m10 uint8_t                                  m_callback_lock;       //{ +0x007b    +0x007b    +0x007b    +0x007b    } | .m_CallbackLock
        _m11 class fx::verifier_lock_t*               m_owned_link;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_OwnedLink
        _m12 struct fx::verifier_thread_table_entry_t m_thread_table_entry;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_ThreadTableEntry
                                                                           
        SDK_MAGIC_PROPERTIES( "FxVerifierLock.$", 0xb0, true, 0x3622d6640ab24ea1 );                     
        SDK_FIXED_SIZE( verifier_lock_t, 0xb0 );                           
    };                                                                     
};
#include "magic/verifier_lock_t.end.hpp"
SDK_VERIFY( class fx::verifier_lock_t, 0xb0 );
