#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_t.hpp"

#include "magic/filter_task_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_FILTER_TASK_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_task_offload_t                 
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 struct ndis::offload_t offload_caps;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffloadCaps
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_TASK_OFFLOAD.$", 0xd8, true, 0xab41c06fe8acb5e4 );             
        SDK_DYNAMIC_SIZE( filter_task_offload_t );             
    };                                           
};
#include "magic/filter_task_offload_t.end.hpp"
