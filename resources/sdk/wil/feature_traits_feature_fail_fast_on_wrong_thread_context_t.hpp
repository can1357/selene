#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_FailFastOnWrongThreadContext]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_fail_fast_on_wrong_thread_context_t
    {                                                                
                                                                     
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_FailFastOnWrongThreadContext.$", 0x1, true, 0x3b478e4289114efd );
        SDK_FIXED_SIZE( feature_traits_feature_fail_fast_on_wrong_thread_context_t, 0x1 );
    };                                                               
};
SDK_VERIFY( struct wil::feature_traits_feature_fail_fast_on_wrong_thread_context_t, 0x1 );
