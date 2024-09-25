#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentout_t.start.hpp"
namespace dxgk
{
    struct segmentdescriptor_t;

    // [struct _DXGK_QUERYSEGMENTOUT]
    // => WDK 10 (NV)
    //
    struct querysegmentout_t                                                   
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                          nb_segment;                       //{ +0x0000    } | .NbSegment
        _m01 struct dxgk::segmentdescriptor_t* p_segment_descriptor;             //{ +0x0008    } | .pSegmentDescriptor
        _m02 uint32_t                          paging_buffer_segment_id;         //{ +0x0010    } | .PagingBufferSegmentId
        _m03 uint32_t                          paging_buffer_size;               //{ +0x0014    } | .PagingBufferSize
        _m04 uint32_t                          paging_buffer_private_data_size;  //{ +0x0018    } | .PagingBufferPrivateDataSize
                                                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTOUT.$", 0x0, false, 0x689ab48f273a2fa4 );                                
        SDK_FIXED_SIZE( querysegmentout_t, 0x20 );                                
    };                                                                         
};
#include "magic/querysegmentout_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentout_t, 0x20 );
