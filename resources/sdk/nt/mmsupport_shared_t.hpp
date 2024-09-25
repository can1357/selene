#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsupport_shared_t.start.hpp"
namespace nt
{
    // [struct _MMSUPPORT_SHARED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsupport_shared_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                  
        _m00 volatile int32_t  working_set_lock;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkingSetLock
        _m01 int32_t           good_citizen_waiting;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .GoodCitizenWaiting
        _m02 uint64_t          released_commit_debt;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReleasedCommitDebt
        _m03 uint64_t          reset_pages_repurposed_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResetPagesRepurposedCount
        _m04 void*             ws_swap_support;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WsSwapSupport
        _m05 void*             commit_release_context;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CommitReleaseContext
        _m06 void*             access_log;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AccessLog
        _m07 volatile uint64_t charged_wsle_pages;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ChargedWslePages
        _m08 uint64_t          actual_wsle_pages;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ActualWslePages
        _m09 void*             shadow_mapping;                //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .ShadowMapping
                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                  
        _m10 varint_t          working_set_core_lock;         //{ +0x0040    +0x0040    +0x0040    } | .WorkingSetCoreLock
                                                            
        // Windows 10 v1607                                 
        //                                                  
        _m11 uint64_t          working_set_size_overhead;     //{ +0x0048    } | .WorkingSetSizeOverhead
                                                            
        SDK_MAGIC_PROPERTIES( "_MMSUPPORT_SHARED.$", 0x80, true, 0xccba69a2a823f7a2 );                             
        SDK_DYNAMIC_SIZE( mmsupport_shared_t );                             
    };                                                      
};
#include "magic/mmsupport_shared_t.end.hpp"
