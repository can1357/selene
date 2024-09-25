#pragma once
#include <sdkgen/support_library.hpp>
#include "c_array_f_value_t.hpp"

#include "magic/unused_cached_factories_t.start.hpp"
namespace win
{
    struct i_per_interface_ps_factory_t;

    // [class UnusedCachedFactories]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class unused_cached_factories_t                            
    {                                                          
        using ap_fixed_size_buffer_t = sdk::array<struct win::i_per_interface_ps_factory_t*, 32>;                     
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 ap_fixed_size_buffer_t       ap_fixed_size_buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._apFixedSizeBuffer
        _m01 uint32_t                     end_index;             //{ +0x0100    +0x0100    +0x0100    +0x0100    } | ._endIndex
        _m02 class win::c_array_f_value_t overflow_buffer;       //{ +0x0108    +0x0108    +0x0108    +0x0108    } | ._overflowBuffer
        _m03 sdk::hresult                 hr;                    //{ +0x0120    +0x0120    +0x0120    +0x0120    } | ._hr
                                                               
        SDK_MAGIC_PROPERTIES( "UnusedCachedFactories.$", 0x128, true, 0x652cc3c41853dfef );                     
        SDK_FIXED_SIZE( unused_cached_factories_t, 0x128 );                     
    };                                                         
};
#include "magic/unused_cached_factories_t.end.hpp"
SDK_VERIFY( class win::unused_cached_factories_t, 0x128 );
