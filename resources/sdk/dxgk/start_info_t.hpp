#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/luid_t.hpp"

#include "magic/start_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_START_INFO]
    // => WDK 10 (NV)
    //
    struct start_info_t                                 
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t          required_dma_queue_entry;  //{ +0x0000    } | .RequiredDmaQueueEntry
        _m01 struct nt::guid_t adapter_guid;              //{ +0x0004    } | .AdapterGuid
        _m02 struct nt::luid_t adapter_luid;              //{ +0x0014    } | .AdapterLuid
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_START_INFO.$", 0x0, false, 0x829072b23bbb5d0d );                         
        SDK_FIXED_SIZE( start_info_t, 0x1c );                         
    };                                                  
};
#include "magic/start_info_t.end.hpp"
SDK_VERIFY( struct dxgk::start_info_t, 0x1c );
