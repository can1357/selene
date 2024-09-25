#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/access_range_t.start.hpp"
namespace video
{
    // [struct _VIDEO_ACCESS_RANGE]
    // => WDK 10 (NV)
    //
    struct access_range_t               
    {                                   
        // WDK 10                       
        //                              
        _m00 int64_t  range_start;        //{ +0x0000    } | .RangeStart
        _m01 uint32_t range_length;       //{ +0x0008    } | .RangeLength
        _m02 uint8_t  range_in_io_space;  //{ +0x000c    } | .RangeInIoSpace
        _m03 uint8_t  range_visible;      //{ +0x000d    } | .RangeVisible
        _m04 uint8_t  range_shareable;    //{ +0x000e    } | .RangeShareable
        _m05 uint8_t  range_passive;      //{ +0x000f    } | .RangePassive
                                        
        SDK_NONVOL_PROPERTIES( "_VIDEO_ACCESS_RANGE.$", 0x0, false, 0xe91f93a19c7cc504 );                  
        SDK_FIXED_SIZE( access_range_t, 0x10 );                  
    };                                  
};
#include "magic/access_range_t.end.hpp"
SDK_VERIFY( struct video::access_range_t, 0x10 );
