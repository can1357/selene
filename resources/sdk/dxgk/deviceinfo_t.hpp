#pragma once
#include <sdkgen/support_library.hpp>
#include "deviceinfoflags_t.hpp"

#include "magic/deviceinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DEVICEINFO]
    // => WDK 10 (NV)
    //
    struct deviceinfo_t                                                  
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                       dma_buffer_size;               //{ +0x0000    } | .DmaBufferSize
        _m01 uint32_t                       dma_buffer_segment_set;        //{ +0x0004    } | .DmaBufferSegmentSet
        _m02 uint32_t                       dma_buffer_private_data_size;  //{ +0x0008    } | .DmaBufferPrivateDataSize
        _m03 uint32_t                       allocation_list_size;          //{ +0x000c    } | .AllocationListSize
        _m04 uint32_t                       patch_location_list_size;      //{ +0x0010    } | .PatchLocationListSize
        _m05 struct dxgk::deviceinfoflags_t flags;                         //{ +0x0014    } | .Flags
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_DEVICEINFO.$", 0x0, false, 0xeb90a7dee44675f0 );                             
        SDK_FIXED_SIZE( deviceinfo_t, 0x18 );                             
    };                                                                   
};
#include "magic/deviceinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::deviceinfo_t, 0x18 );
