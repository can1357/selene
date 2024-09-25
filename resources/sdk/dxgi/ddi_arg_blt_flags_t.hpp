#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_blt_flags_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_BLT_FLAGS]
    // => WDK 10 (NV)
    //
    struct ddi_arg_blt_flags_t
    {                         
        // WDK 10             
        //                    
        _m00 uint1_t  resolve;  //{ +0x0000@0  } | .Resolve
        _m01 uint1_t  convert;  //{ +0x0000@1  } | .Convert
        _m02 uint1_t  stretch;  //{ +0x0000@2  } | .Stretch
        _m03 uint1_t  present;  //{ +0x0000@3  } | .Present
        _m04 uint32_t value;    //{ +0x0000    } | .Value
                              
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_BLT_FLAGS.$", 0x0, false, 0xed4c8769e8f03dc0 );        
        SDK_FIXED_SIZE( ddi_arg_blt_flags_t, 0x4 );        
    };                        
};
#include "magic/ddi_arg_blt_flags_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_blt_flags_t, 0x4 );
