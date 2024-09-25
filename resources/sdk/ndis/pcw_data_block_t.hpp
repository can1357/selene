#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_data_block_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;
    struct pcw_data_block_t;

    // [struct _NDIS_PCW_DATA_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcw_data_block_t                                           
    {                                                                 
        // Windows 10 v1607                                           
        //                                                            
        _m00 sdk::array<uint32_t, 26>       datapath_event_references;  //{ +0x0000    } | .DatapathEventReferences
        _m01 sdk::array<uint32_t, 13>       datapath_cycle_references;  //{ +0x0068    } | .DatapathCycleReferences
        _m02 struct ndis::pcw_data_block_t* next;                       //{ +0x00a0    } | .Next
        _m03 uint32_t                       reference_count;            //{ +0x00a8    } | .ReferenceCount
        _m04 struct ndis::miniport_block_t* miniport;                   //{ +0x00b0    } | .Miniport
        _m05 uint32_t                       total_instance_id;          //{ +0x00b8    } | .TotalInstanceId
        _m06 nt::unicode_view               total_instance_name;        //{ +0x00c0    } | .TotalInstanceName
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PCW_DATA_BLOCK.$", 0x0, true, 0x1cdce4b2586863e2 );                          
        SDK_DYNAMIC_SIZE( pcw_data_block_t );                          
    };                                                                
};
#include "magic/pcw_data_block_t.end.hpp"
