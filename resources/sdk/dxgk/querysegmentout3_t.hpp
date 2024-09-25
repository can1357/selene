#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentout3_t.start.hpp"
namespace dxgk
{
    struct segmentdescriptor3_t;

    // [struct _DXGK_QUERYSEGMENTOUT3]
    // => WDK 10 (NV)
    //
    struct querysegmentout3_t                                                   
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                           nb_segment;                       //{ +0x0000    } | .NbSegment
        _m01 struct dxgk::segmentdescriptor3_t* p_segment_descriptor;             //{ +0x0008    } | .pSegmentDescriptor
        _m02 uint32_t                           paging_buffer_segment_id;         //{ +0x0010    } | .PagingBufferSegmentId
        _m03 uint32_t                           paging_buffer_size;               //{ +0x0014    } | .PagingBufferSize
        _m04 uint32_t                           paging_buffer_private_data_size;  //{ +0x0018    } | .PagingBufferPrivateDataSize
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTOUT3.$", 0x0, false, 0x2f8a804e2fbc40fd );                                
        SDK_FIXED_SIZE( querysegmentout3_t, 0x20 );                                
    };                                                                          
};
#include "magic/querysegmentout3_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentout3_t, 0x20 );
