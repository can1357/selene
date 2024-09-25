#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct epartition_t; }

#include "magic/largepage_vad_info_t.start.hpp"
namespace mi
{
    // [struct _MI_LARGEPAGE_VAD_INFO]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct largepage_vad_info_t                              
    {                                                        
        // Windows 10 v2004, Windows 10 v20H2                       
        //                                                   
        _m00 uint8_t                  large_image_bias;        //{ +0x0000    +0x0000    } | .LargeImageBias
        _m01 uint64_t                 actual_image_view_size;  //{ +0x0008    +0x0008    } | .ActualImageViewSize
        _m02 struct nt::epartition_t* referenced_partition;    //{ +0x0010    +0x0010    } | .ReferencedPartition
                                                             
        SDK_MAGIC_PROPERTIES( "_MI_LARGEPAGE_VAD_INFO.$", 0x18, true, 0x9bde52e38d21204a );                       
        SDK_FIXED_SIZE( largepage_vad_info_t, 0x18 );                       
    };                                                       
};
#include "magic/largepage_vad_info_t.end.hpp"
SDK_VERIFY( struct mi::largepage_vad_info_t, 0x18 );
