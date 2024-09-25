#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_ImageAspectRatio_EN300294]
    //  WDK 10
    //
    enum class copp_image_aspect_ratio_en300294_t : int32_t       
    {                                                             
        en300294_full_format4by3 =                  0x0,            // WDK 10
        en300294_box14by9_center =                  0x1,            // WDK 10
        en300294_box14by9_top =                     0x2,            // WDK 10
        en300294_box16by9_center =                  0x3,            // WDK 10
        en300294_box16by9_top =                     0x4,            // WDK 10
        en300294_box_gt16by9_center =               0x5,            // WDK 10
        en300294_full_format4by3_protected_center = 0x6,            // WDK 10
        en300294_full_format16by9_anamorphic =      0x7,            // WDK 10
        force_dword =                               0x7fffffff,     // WDK 10
    };                                                            
};
