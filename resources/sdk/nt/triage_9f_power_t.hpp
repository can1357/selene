#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_9f_power_t.start.hpp"
namespace nt
{
    struct triage_ex_work_queue_t;

    // [struct _TRIAGE_9F_POWER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_9f_power_t                                          
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 uint16_t                           signature;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t                           revision;               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 nt::list_entry_t*                  irp_list;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IrpList
        _m03 nt::list_entry_t*                  thread_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThreadList
        _m04 struct nt::triage_ex_work_queue_t* delayed_work_queue;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DelayedWorkQueue
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m05 struct nt::triage_ex_work_queue_t* delayed_io_work_queue;  //{ +0x0020    +0x0020    +0x0020    } | .DelayedIoWorkQueue
                                                                      
        SDK_MAGIC_PROPERTIES( "_TRIAGE_9F_POWER.$", 0x28, true, 0x9c4280a2c3f53d87 );                      
        SDK_DYNAMIC_SIZE( triage_9f_power_t );                        
    };                                                                
};
#include "magic/triage_9f_power_t.end.hpp"
