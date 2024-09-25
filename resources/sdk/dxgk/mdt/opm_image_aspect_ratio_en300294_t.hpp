#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_IMAGE_ASPECT_RATIO_EN300294]
    //  WDK 10
    //
    enum class opm_image_aspect_ratio_en300294_t : int32_t           
    {                                                                
        en300294_full_format_4_by_3 =                  0x0,            // WDK 10
        en300294_box_14_by_9_center =                  0x1,            // WDK 10
        en300294_box_14_by_9_top =                     0x2,            // WDK 10
        en300294_box_16_by_9_center =                  0x3,            // WDK 10
        en300294_box_16_by_9_top =                     0x4,            // WDK 10
        en300294_box_gt_16_by_9_center =               0x5,            // WDK 10
        en300294_full_format_4_by_3_protected_center = 0x6,            // WDK 10
        en300294_full_format_16_by_9_anamorphic =      0x7,            // WDK 10
        force_ulong =                                  0x7fffffff,     // WDK 10
    };                                                               
};
