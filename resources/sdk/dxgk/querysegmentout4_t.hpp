#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentout4_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYSEGMENTOUT4]
    // => WDK 10 (NV)
    //
    struct querysegmentout4_t                         
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t nb_segment;                       //{ +0x0000    } | .NbSegment
        _m01 uint8_t* p_segment_descriptor;             //{ +0x0008    } | .pSegmentDescriptor
        _m02 uint32_t paging_buffer_segment_id;         //{ +0x0010    } | .PagingBufferSegmentId
        _m03 uint32_t paging_buffer_size;               //{ +0x0014    } | .PagingBufferSize
        _m04 uint32_t paging_buffer_private_data_size;  //{ +0x0018    } | .PagingBufferPrivateDataSize
        _m05 uint64_t segment_descriptor_stride;        //{ +0x0020    } | .SegmentDescriptorStride
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTOUT4.$", 0x0, false, 0x661ffef70ed83527 );                                
        SDK_FIXED_SIZE( querysegmentout4_t, 0x28 );                                
    };                                                
};
#include "magic/querysegmentout4_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentout4_t, 0x28 );
