#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg
{
    // [struct _DXGKARG_BEGINEXCLUSIVEACCESS]
    // => WDK 10 (NV)
    //
    struct beginexclusiveaccess_t
    {                            
                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_BEGINEXCLUSIVEACCESS.$", 0x0, false, 0x1b7ff78d0135bb8d );
        SDK_FIXED_SIZE( beginexclusiveaccess_t, 0x4 );
    };                           
};
SDK_VERIFY( struct dxgk::arg::beginexclusiveaccess_t, 0x4 );
