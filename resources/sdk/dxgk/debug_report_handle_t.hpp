#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [struct DXGK_DEBUG_REPORT_HANDLE__]
    // => WDK 10 (NV)
    //
    struct debug_report_handle_t
    {                           
                                
        SDK_NONVOL_PROPERTIES( "DXGK_DEBUG_REPORT_HANDLE__.$", 0x0, false, 0x58024e71a0bd3d84 );
        SDK_FIXED_SIZE( debug_report_handle_t, 0x4 );
    };                          
};
SDK_VERIFY( struct dxgk::debug_report_handle_t, 0x4 );
