#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg
{
    // [struct _DXGKARG_ENDEXCLUSIVEACCESS]
    // => WDK 10 (NV)
    //
    struct endexclusiveaccess_t
    {                          
                               
        SDK_NONVOL_PROPERTIES( "_DXGKARG_ENDEXCLUSIVEACCESS.$", 0x0, false, 0x1f2d561d24beb807 );
        SDK_FIXED_SIZE( endexclusiveaccess_t, 0x4 );
    };                         
};
SDK_VERIFY( struct dxgk::arg::endexclusiveaccess_t, 0x4 );
