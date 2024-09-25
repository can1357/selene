#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _URB_HCD_AREA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_hcd_area_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_URB_HCD_AREA.$", 0x40, true, 0xaa825ebf9f9965ae );
        SDK_FIXED_SIZE( urb_hcd_area_t, 0x40 );
    };                   
};
SDK_VERIFY( struct wdf::urb_hcd_area_t, 0x40 );
