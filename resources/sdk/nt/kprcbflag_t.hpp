#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kprcbflag_t.start.hpp"
namespace nt
{
    // [union _KPRCBFLAG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kprcbflag_t                                 
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                            
        _m00 volatile int32_t prcb_flags;               //{ +0x0000    +0x0000    +0x0000    } | .PrcbFlags
        _m01 volatile uint8_t bam_qos_level;            //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .BamQosLevel
        _m02 volatile uint2_t pending_qos_update;       //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .PendingQosUpdate
        _m03 volatile uint1_t cache_isolation_enabled;  //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .CacheIsolationEnabled
        _m04 volatile uint1_t tracepoint_active;        //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .TracepointActive
        _m05 varuint_t        prcb_flags_reserved;      //{ +0x0000@12 +0x0000@13 +0x0000@12 } | .PrcbFlagsReserved
                                                      
        // Windows 11                                 
        //                                            
        _m06 volatile uint1_t long_dpc_running;         //{ +0x0000@12 } | .LongDpcRunning
                                                      
        SDK_MAGIC_PROPERTIES( "_KPRCBFLAG.$", 0x4, true, 0x7aa25da48c9123a3 );                        
        SDK_FIXED_SIZE( kprcbflag_t, 0x4 );                        
    };                                                
};
#include "magic/kprcbflag_t.end.hpp"
SDK_VERIFY( union nt::kprcbflag_t, 0x4 );
