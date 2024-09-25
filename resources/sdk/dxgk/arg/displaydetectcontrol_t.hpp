#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displaydetectcontrol_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DISPLAYDETECTCONTROL]
    // => WDK 10 (NV)
    //
    struct displaydetectcontrol_t          
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint24_t target_id;             //{ +0x0000@0  } | .TargetId
        _m01 uint4_t  type;                  //{ +0x0000@24 } | .Type
        _m02 uint1_t  non_destructive_only;  //{ +0x0000@28 } | .NonDestructiveOnly
                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DISPLAYDETECTCONTROL.$", 0x0, false, 0x24df1d8233ecdfc2 );                     
        SDK_FIXED_SIZE( displaydetectcontrol_t, 0x4 );                     
    };                                     
};
#include "magic/displaydetectcontrol_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::displaydetectcontrol_t, 0x4 );
