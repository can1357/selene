#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ss_control_ops_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SS_CONTROL_OPS]
    // => Windows 10 v1607
    //
    struct ss_control_ops_t          
    {                                
        // Windows 10 v1607               
        //                           
        _m00 uint1_t  oid;             //{ +0x0000@0  } | .Oid
        _m01 uint1_t  pause;           //{ +0x0000@1  } | .Pause
        _m02 uint1_t  restart;         //{ +0x0000@2  } | .Restart
        _m03 uint1_t  reset;           //{ +0x0000@3  } | .Reset
        _m04 uint1_t  check_for_hang;  //{ +0x0000@4  } | .CheckForHang
        _m05 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_SS_CONTROL_OPS.$", 0x0, false, 0xbd1b8826b3bd71ab );               
        SDK_FIXED_SIZE( ss_control_ops_t, 0x4 );               
    };                               
};
#include "magic/ss_control_ops_t.end.hpp"
SDK_VERIFY( struct ndis::ss_control_ops_t, 0x4 );
