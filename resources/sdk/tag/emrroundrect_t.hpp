#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "size_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrroundrect_t.start.hpp"
namespace tag
{
    // [struct tagEMRROUNDRECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrroundrect_t                   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 struct tag::emr_t   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_box;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBox
        _m02 struct tag::size_t  szl_corner;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .szlCorner
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRROUNDRECT.$", 0x20, true, 0xcfa9f605948d62ea );           
        SDK_FIXED_SIZE( emrroundrect_t, 0x20 );           
    };                                      
};
#include "magic/emrroundrect_t.end.hpp"
SDK_VERIFY( struct tag::emrroundrect_t, 0x20 );
