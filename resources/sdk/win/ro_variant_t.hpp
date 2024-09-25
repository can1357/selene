#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ro_variant_t.start.hpp"
namespace win
{
    struct i_inspectable_t;

    // [class RoVariant]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ro_variant_t                             
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct win::i_inspectable_t* p_i;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pI
        _m01 sdk::hresult                 hr_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._hrState
                                                   
        SDK_MAGIC_PROPERTIES( "RoVariant.$", 0x10, true, 0x24fafa0d41055f54 );         
        SDK_FIXED_SIZE( ro_variant_t, 0x10 );         
    };                                             
};
#include "magic/ro_variant_t.end.hpp"
SDK_VERIFY( class win::ro_variant_t, 0x10 );
