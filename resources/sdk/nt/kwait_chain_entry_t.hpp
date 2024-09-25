#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "single_list_entry_t.hpp"

#include "magic/kwait_chain_entry_t.start.hpp"
namespace nt
{
    struct kthread_t;

    // [struct _KWAIT_CHAIN_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kwait_chain_entry_t                    
    {                                             
        using list_entry_t = sdk::variant<struct nt::single_list_entry_t, nt::list_entry_t>;               
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                        
        _m00 list_entry_t          list_entry;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::kevent_t   event;           //{ +0x0008    +0x0018    +0x0018    +0x0018    } | .Event
                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                        
        _m02 struct nt::kthread_t* thread;          //{ +0x0010    +0x0010    +0x0010    } | .Thread
                                                  
        // Windows 11                             
        //                                        
        _m03 void*                 ab_lock_handle;  //{ +0x0030    } | .AbLockHandle
                                                  
        SDK_MAGIC_PROPERTIES( "_KWAIT_CHAIN_ENTRY.$", 0x30, true, 0xf524fe1a98130e8d );               
        SDK_DYNAMIC_SIZE( kwait_chain_entry_t );               
    };                                            
};
#include "magic/kwait_chain_entry_t.end.hpp"
