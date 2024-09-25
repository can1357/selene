#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_UpdatedPeopleSuggestions]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_updated_people_suggestions_t
    {                                                         
                                                              
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_UpdatedPeopleSuggestions.$", 0x1, true, 0xa1d0fe144fc05830 );
        SDK_FIXED_SIZE( feature_traits_feature_updated_people_suggestions_t, 0x1 );
    };                                                        
};
SDK_VERIFY( struct wil::feature_traits_feature_updated_people_suggestions_t, 0x1 );
