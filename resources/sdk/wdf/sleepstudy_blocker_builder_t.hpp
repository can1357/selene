#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _SLEEPSTUDY_BLOCKER_BUILDER]
    // => Windows 11
    //
    struct sleepstudy_blocker_builder_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_BLOCKER_BUILDER.$", 0x0, false, 0x8635819aea6cb648 );
        SDK_FIXED_SIZE( sleepstudy_blocker_builder_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct wdf::sleepstudy_blocker_builder_t, 0x0 );
