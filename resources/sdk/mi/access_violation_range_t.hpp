#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/access_violation_range_t.start.hpp"
namespace mi
{
    // [struct _MI_ACCESS_VIOLATION_RANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct access_violation_range_t                       
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                
        _m00 struct rtl::balanced_node_t node;              //{ +0x0000    +0x0000    +0x0000    } | .Node
        _m01 void*                       va;                //{ +0x0018    +0x0018    +0x0018    } | .Va
        _m02 void*                       end_va_inclusive;  //{ +0x0020    +0x0020    +0x0020    } | .EndVaInclusive
                                                          
        SDK_MAGIC_PROPERTIES( "_MI_ACCESS_VIOLATION_RANGE.$", 0x28, true, 0xe94d6528531c3c9 );                 
        SDK_FIXED_SIZE( access_violation_range_t, 0x28 );                 
    };                                                    
};
#include "magic/access_violation_range_t.end.hpp"
SDK_VERIFY( struct mi::access_violation_range_t, 0x28 );
