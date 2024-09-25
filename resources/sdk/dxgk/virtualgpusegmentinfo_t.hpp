#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualgpusegmentinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUSEGMENTINFO]
    // => WDK 10 (NV)
    //
    struct virtualgpusegmentinfo_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t driver_segment_id;    //{ +0x0000    } | .DriverSegmentId
        _m01 uint64_t size;                 //{ +0x0008    } | .Size
        _m02 uint32_t alignment;            //{ +0x0010    } | .Alignment
        _m03 uint64_t min_segment_offset;   //{ +0x0018    } | .MinSegmentOffset
        _m04 uint64_t max_segment_offset;   //{ +0x0020    } | .MaxSegmentOffset
        _m05 uint32_t private_driver_data;  //{ +0x0028    } | .PrivateDriverData
                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUSEGMENTINFO.$", 0x0, false, 0xb77ae40c770bbc45 );                    
        SDK_FIXED_SIZE( virtualgpusegmentinfo_t, 0x30 );                    
    };                                    
};
#include "magic/virtualgpusegmentinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpusegmentinfo_t, 0x30 );
