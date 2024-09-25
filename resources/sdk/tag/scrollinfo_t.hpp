#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scrollinfo_t.start.hpp"
namespace tag
{
    // [struct tagSCROLLINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrollinfo_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t f_mask;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fMask
        _m02 int32_t  n_min;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .nMin
        _m03 int32_t  n_max;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .nMax
        _m04 uint32_t n_page;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .nPage
        _m05 int32_t  n_pos;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .nPos
        _m06 int32_t  n_track_pos;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .nTrackPos
                                  
        SDK_MAGIC_PROPERTIES( "tagSCROLLINFO.$", 0x1c, true, 0x48713fa6e9204040 );            
        SDK_FIXED_SIZE( scrollinfo_t, 0x1c );            
    };                            
};
#include "magic/scrollinfo_t.end.hpp"
SDK_VERIFY( struct tag::scrollinfo_t, 0x1c );
