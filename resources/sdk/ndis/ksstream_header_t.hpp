#pragma once
#include <sdkgen/support_library.hpp>
#include "kstime_t.hpp"

#include "magic/ksstream_header_t.start.hpp"
namespace ndis
{
    // [struct KSSTREAM_HEADER]
    // => Windows 10 v1607
    //
    struct ksstream_header_t                           
    {                                                  
        // Windows 10 v1607                            
        //                                             
        _m00 uint32_t              size;                 //{ +0x0000    } | .Size
        _m01 uint32_t              type_specific_flags;  //{ +0x0004    } | .TypeSpecificFlags
        _m02 struct ndis::kstime_t presentation_time;    //{ +0x0008    } | .PresentationTime
        _m03 int64_t               duration;             //{ +0x0018    } | .Duration
        _m04 uint32_t              frame_extent;         //{ +0x0020    } | .FrameExtent
        _m05 uint32_t              data_used;            //{ +0x0024    } | .DataUsed
        _m06 void*                 data;                 //{ +0x0028    } | .Data
        _m07 uint32_t              options_flags;        //{ +0x0030    } | .OptionsFlags
                                                       
        SDK_MAGIC_PROPERTIES( "KSSTREAM_HEADER.$", 0x0, false, 0x23cfe4c835f8011d );                    
        SDK_FIXED_SIZE( ksstream_header_t, 0x38 );                    
    };                                                 
};
#include "magic/ksstream_header_t.end.hpp"
SDK_VERIFY( struct ndis::ksstream_header_t, 0x38 );
