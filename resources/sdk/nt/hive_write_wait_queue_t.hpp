#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hive_write_wait_queue_t.start.hpp"
namespace nt
{
    struct ethread_t;
    struct hive_wait_packet_t;

    // [struct _HIVE_WRITE_WAIT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hive_write_wait_queue_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 struct nt::ethread_t*          active_thread;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveThread
        _m01 struct nt::hive_wait_packet_t* wait_list;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitList
                                                          
        // Windows 10 v1607                               
        //                                                
        _m02 volatile uint32_t              owner_boosted;  //{ +0x0010    } | .OwnerBoosted
                                                          
        SDK_MAGIC_PROPERTIES( "_HIVE_WRITE_WAIT_QUEUE.$", 0x10, true, 0x26fe19ee928266a4 );              
        SDK_DYNAMIC_SIZE( hive_write_wait_queue_t );              
    };                                                    
};
#include "magic/hive_write_wait_queue_t.end.hpp"
