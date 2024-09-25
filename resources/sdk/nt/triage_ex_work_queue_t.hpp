#pragma once
#include <sdkgen/support_library.hpp>
#include "kpriqueue_t.hpp"

#include "magic/triage_ex_work_queue_t.start.hpp"
namespace nt
{
    // [struct _TRIAGE_EX_WORK_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_ex_work_queue_t                  
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 struct nt::kpriqueue_t work_pri_queue;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkPriQueue
                                                   
        SDK_MAGIC_PROPERTIES( "_TRIAGE_EX_WORK_QUEUE.$", 0x2b0, true, 0x9390b5d651942473 );               
        SDK_FIXED_SIZE( triage_ex_work_queue_t, 0x2b0 );               
    };                                             
};
#include "magic/triage_ex_work_queue_t.end.hpp"
SDK_VERIFY( struct nt::triage_ex_work_queue_t, 0x2b0 );
