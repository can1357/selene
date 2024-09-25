#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _SLEEPSTUDY_BLOCKER_DATA]
    // => Windows 11
    //
    struct sleepstudy_blocker_data_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_BLOCKER_DATA.$", 0x0, false, 0x3462be7c1e144a97 );
        SDK_FIXED_SIZE( sleepstudy_blocker_data_t, 0x0 );
    };                              
};
SDK_VERIFY( struct wdf::sleepstudy_blocker_data_t, 0x0 );
