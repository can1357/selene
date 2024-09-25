#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_OneLineClock]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_one_line_clock_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_OneLineClock.$", 0x1, true, 0xd4b373afdb07796b );
        SDK_FIXED_SIZE( feature_traits_feature_one_line_clock_t, 0x1 );
    };                                            
};
SDK_VERIFY( struct wil::feature_traits_feature_one_line_clock_t, 0x1 );
