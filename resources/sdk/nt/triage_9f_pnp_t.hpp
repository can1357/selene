#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_9f_pnp_t.start.hpp"
namespace nt
{
    struct triage_ex_work_queue_t;
    struct triage_pnp_device_completion_queue_t;

    // [struct _TRIAGE_9F_PNP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_9f_pnp_t                                                          
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                          
        _m00 uint16_t                                         signature;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t                                         revision;               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 struct nt::triage_pnp_device_completion_queue_t* completion_queue;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionQueue
        _m03 struct nt::triage_ex_work_queue_t*               delayed_work_queue;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DelayedWorkQueue
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m04 struct nt::triage_ex_work_queue_t*               delayed_io_work_queue;  //{ +0x0018    +0x0018    +0x0018    } | .DelayedIoWorkQueue
                                                                                    
        SDK_MAGIC_PROPERTIES( "_TRIAGE_9F_PNP.$", 0x20, true, 0xd9d553a5eedbb71d );                      
        SDK_DYNAMIC_SIZE( triage_9f_pnp_t );                                        
    };                                                                              
};
#include "magic/triage_9f_pnp_t.end.hpp"
