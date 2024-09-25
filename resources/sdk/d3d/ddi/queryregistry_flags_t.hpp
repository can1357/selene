#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryregistry_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_QUERYREGISTRY_FLAGS]
    // => WDK 10 (NV)
    //
    struct queryregistry_flags_t     
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t  translate_path;  //{ +0x0000@0  } | .TranslatePath
        _m01 uint1_t  mutable_value;   //{ +0x0000@1  } | .MutableValue
        _m02 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_NONVOL_PROPERTIES( "_D3DDDI_QUERYREGISTRY_FLAGS.$", 0x0, false, 0x51192b7d43afb857 );               
        SDK_FIXED_SIZE( queryregistry_flags_t, 0x4 );               
    };                               
};
#include "magic/queryregistry_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::queryregistry_flags_t, 0x4 );
