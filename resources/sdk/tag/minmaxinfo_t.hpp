#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/minmaxinfo_t.start.hpp"
namespace tag
{
    // [struct tagMINMAXINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minmaxinfo_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 struct tag::point_t pt_reserved;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ptReserved
        _m01 struct tag::point_t pt_max_size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ptMaxSize
        _m02 struct tag::point_t pt_max_position;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ptMaxPosition
        _m03 struct tag::point_t pt_min_track_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ptMinTrackSize
        _m04 struct tag::point_t pt_max_track_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ptMaxTrackSize
                                                   
        SDK_MAGIC_PROPERTIES( "tagMINMAXINFO.$", 0x28, true, 0x59326710803eed84 );                  
        SDK_FIXED_SIZE( minmaxinfo_t, 0x28 );                  
    };                                             
};
#include "magic/minmaxinfo_t.end.hpp"
SDK_VERIFY( struct tag::minmaxinfo_t, 0x28 );
