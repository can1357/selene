#pragma once
#include <sdkgen/support_library.hpp>
#include "resume_workitem_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"

namespace nt { struct ethread_t; }
namespace nt { struct mmpte_t;   }

#include "magic/shutdown_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SHUTDOWN_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shutdown_state_t                                                    
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m00 uint8_t                                crash_dump_initialized;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CrashDumpInitialized
        _m01 uint8_t                                connected_standby_active;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ConnectedStandbyActive
        _m02 uint32_t                               system_shutdown;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemShutdown
        _m03 int32_t                                shutdown_flush_in_progress;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ShutdownFlushInProgress
        _m04 uint32_t                               mirroring_active;            //{ +0x0050    +0x000c    +0x000c    +0x000c    } | .MirroringActive
        _m05 struct mi::resume_workitem_t           resume_item;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResumeItem
        _m06 struct nt::ethread_t*                  mirror_holds_pfn;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MirrorHoldsPfn
        _m07 sdk::array<struct rtl::bitmap_ex_t, 2> mirror_bit_maps;             //{ +0x0058    +0x0050    +0x0050    +0x0050    } | .MirrorBitMaps
        _m08 struct nt::mmpte_t*                    crash_dump_pte;              //{ +0x0078    +0x0070    +0x0070    +0x0070    } | .CrashDumpPte
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m09 uint8_t                                zero_page_file_at_shutdown;  //{ +0x0002    +0x0002    +0x0002    } | .ZeroPageFileAtShutdown
                                                                               
        SDK_MAGIC_PROPERTIES( "_MI_SHUTDOWN_STATE.$", 0x78, true, 0xa94342a4b1290899 );                           
        SDK_DYNAMIC_SIZE( shutdown_state_t );                                  
    };                                                                         
};
#include "magic/shutdown_state_t.end.hpp"
