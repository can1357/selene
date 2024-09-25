#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct wil_FeatureTestState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_test_state_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "wil_FeatureTestState.$", 0x0, true, 0xd0ea8fa05853eac6 );
        SDK_FIXED_SIZE( feature_test_state_t, 0x0 );
    };                         
};
SDK_VERIFY( struct wil::feature_test_state_t, 0x0 );
