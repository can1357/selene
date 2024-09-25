#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_t.hpp"

namespace nt { struct work_queue_item_t; }

#include "magic/thread_interface_t.start.hpp"
namespace power
{
    // [struct _POWER_THREAD_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_interface_t                                 
    {                                                         
        using pfn_power_thread_enqueue_t = sdk::function<void(void*, struct nt::work_queue_item_t*)>*;                     
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct nt::interface_t      interface;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interface
        _m01 pfn_power_thread_enqueue_t  power_thread_enqueue;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PowerThreadEnqueue
                                                              
        SDK_MAGIC_PROPERTIES( "_POWER_THREAD_INTERFACE.$", 0x28, true, 0xb0e0660f7a132c23 );                     
        SDK_FIXED_SIZE( thread_interface_t, 0x28 );                     
    };                                                        
};
#include "magic/thread_interface_t.end.hpp"
SDK_VERIFY( struct power::thread_interface_t, 0x28 );
