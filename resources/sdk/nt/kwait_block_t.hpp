#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kwait_block_t.start.hpp"
namespace nt
{
    struct kdpc_t;
    struct kqueue_t;
    struct kthread_t;

    // [struct _KWAIT_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kwait_block_t                              
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 nt::list_entry_t      wait_list_entry;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WaitListEntry
        _m01 uint8_t               wait_type;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .WaitType
        _m02 volatile uint8_t      block_state;         //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .BlockState
        _m03 uint16_t              wait_key;            //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .WaitKey
        _m04 struct nt::kthread_t* thread;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Thread
        _m05 struct nt::kqueue_t*  notification_queue;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NotificationQueue
        _m06 void*                 object;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Object
                                                      
        // Windows 11                                 
        //                                            
        _m07 struct nt::kdpc_t*    dpc;                 //{ +0x0018    } | .Dpc
                                                      
        SDK_NONVOL_PROPERTIES( "_KWAIT_BLOCK.$", 0x30, true, 0xaed389cac5acf3b0 );                   
        SDK_FIXED_SIZE( kwait_block_t, 0x30 );                   
    };                                                
};
#include "magic/kwait_block_t.end.hpp"
SDK_VERIFY( struct nt::kwait_block_t, 0x30 );
