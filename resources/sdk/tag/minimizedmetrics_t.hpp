#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minimizedmetrics_t.start.hpp"
namespace tag
{
    // [struct tagMINIMIZEDMETRICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minimizedmetrics_t    
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  i_width;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iWidth
        _m02 int32_t  i_horz_gap;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iHorzGap
        _m03 int32_t  i_vert_gap;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iVertGap
        _m04 int32_t  i_arrange;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iArrange
                                 
        SDK_MAGIC_PROPERTIES( "tagMINIMIZEDMETRICS.$", 0x14, true, 0xab310a826fd0b73c );           
        SDK_FIXED_SIZE( minimizedmetrics_t, 0x14 );           
    };                           
};
#include "magic/minimizedmetrics_t.end.hpp"
SDK_VERIFY( struct tag::minimizedmetrics_t, 0x14 );
