#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _SLEEPSTUDY_LIBRARY]
    // => Windows 11
    //
    struct sleepstudy_library_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_LIBRARY.$", 0x0, false, 0xf04172f2c7a0aabd );
        SDK_FIXED_SIZE( sleepstudy_library_t, 0x0 );
    };                         
};
SDK_VERIFY( struct wdf::sleepstudy_library_t, 0x0 );
