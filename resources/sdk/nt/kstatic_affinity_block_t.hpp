#pragma once
#include <sdkgen/support_library.hpp>
#include "kaffinity_ex_t.hpp"

#include "magic/kstatic_affinity_block_t.start.hpp"
namespace nt
{
    // [struct _KSTATIC_AFFINITY_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kstatic_affinity_block_t                                   
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                            
        _m00 struct nt::kaffinity_ex_t ke_flush_tb_affinity;            //{ +0x0000    +0x0000    +0x0000    } | .KeFlushTbAffinity
        _m01 struct nt::kaffinity_ex_t ke_flush_wb_affinity;            //{ +0x0000    +0x0000    +0x0000    } | .KeFlushWbAffinity
        _m02 struct nt::kaffinity_ex_t ke_sync_context_affinity;        //{ +0x0000    +0x0000    +0x0000    } | .KeSyncContextAffinity
        _m03 struct nt::kaffinity_ex_t ke_flush_tb_deep_idle_affinity;  //{ +0x00a8    +0x0108    +0x00a8    } | .KeFlushTbDeepIdleAffinity
        _m04 struct nt::kaffinity_ex_t ke_ipi_send_affinity;            //{ +0x0150    +0x0210    +0x0150    } | .KeIpiSendAffinity
        _m05 struct nt::kaffinity_ex_t ke_ipi_send_ipi_set;             //{ +0x01f8    +0x0318    +0x01f8    } | .KeIpiSendIpiSet
                                                                      
        SDK_MAGIC_PROPERTIES( "_KSTATIC_AFFINITY_BLOCK.$", 0x2a0, true, 0x916cb18ac7f8bc02 );                               
        SDK_DYNAMIC_SIZE( kstatic_affinity_block_t );                               
    };                                                                
};
#include "magic/kstatic_affinity_block_t.end.hpp"
