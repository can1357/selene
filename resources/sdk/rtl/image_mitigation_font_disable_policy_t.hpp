#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_font_disable_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_FONT_DISABLE_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_font_disable_policy_t                          
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                 
        _m00 union rtl::image_mitigation_policy_t disable_non_system_fonts;  //{ +0x0000    +0x0000    +0x0000    } | .DisableNonSystemFonts
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_FONT_DISABLE_POLICY.$", 0x8, true, 0xb1a14265146cd111 );                         
        SDK_FIXED_SIZE( image_mitigation_font_disable_policy_t, 0x8 );                         
    };                                                                     
};
#include "magic/image_mitigation_font_disable_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_font_disable_policy_t, 0x8 );
