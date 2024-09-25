#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_context_t.start.hpp"
namespace ndis
{
    struct pcw_data_block_t;

    // [struct NDIS_PCW_CONTEXT]
    // => Windows 10 v1607
    //
    struct pcw_context_t                                         
    {                                                            
        // Windows 10 v1607                                      
        //                                                       
        _m00 struct ndis::pcw_data_block_t* pcw_block;             //{ +0x0000    } | .PcwBlock
        _m01 uint32_t                       datapath_events_mask;  //{ +0x0008    } | .DatapathEventsMask
        _m02 uint32_t                       datapath_cycles_mask;  //{ +0x000c    } | .DatapathCyclesMask
        _m03 uint32_t                       current_cpu;           //{ +0x0010    } | .CurrentCpu
                                                                 
        SDK_MAGIC_PROPERTIES( "NDIS_PCW_CONTEXT.$", 0x0, false, 0x9c1a0c4128255153 );                     
        SDK_FIXED_SIZE( pcw_context_t, 0x18 );                     
    };                                                           
};
#include "magic/pcw_context_t.end.hpp"
SDK_VERIFY( struct ndis::pcw_context_t, 0x18 );
