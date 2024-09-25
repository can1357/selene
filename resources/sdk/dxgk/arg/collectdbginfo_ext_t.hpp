#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collectdbginfo_ext_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_COLLECTDBGINFO_EXT]
    // => WDK 10 (NV)
    //
    struct collectdbginfo_ext_t                 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t bucketing_key;              //{ +0x0000    } | .BucketingKey
        _m01 uint32_t current_dma_buffer_offset;  //{ +0x0004    } | .CurrentDmaBufferOffset
                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_COLLECTDBGINFO_EXT.$", 0x0, false, 0xf70dea2eb3ab648c );                          
        SDK_FIXED_SIZE( collectdbginfo_ext_t, 0x20 );                          
    };                                          
};
#include "magic/collectdbginfo_ext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::collectdbginfo_ext_t, 0x20 );
