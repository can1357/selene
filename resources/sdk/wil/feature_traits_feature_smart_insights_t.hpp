#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SmartInsights]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_smart_insights_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SmartInsights.$", 0x1, true, 0x94926dbc0528cde8 );
        SDK_FIXED_SIZE( feature_traits_feature_smart_insights_t, 0x1 );
    };                                            
};
SDK_VERIFY( struct wil::feature_traits_feature_smart_insights_t, 0x1 );
