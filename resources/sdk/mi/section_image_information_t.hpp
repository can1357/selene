#pragma once
#include <sdkgen/support_library.hpp>
#include "extra_image_information_t.hpp"
#include "../nt/section_image_information_t.hpp"

#include "magic/section_image_information_t.start.hpp"
namespace mi
{
    // [struct _MI_SECTION_IMAGE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_image_information_t                                         
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m00 struct nt::section_image_information_t exported_image_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExportedImageInformation
        _m01 struct mi::extra_image_information_t   internal_image_information;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InternalImageInformation
                                                                               
        SDK_MAGIC_PROPERTIES( "_MI_SECTION_IMAGE_INFORMATION.$", 0x50, true, 0x29c21ff5463a5cf4 );                           
        SDK_DYNAMIC_SIZE( section_image_information_t );                           
    };                                                                         
};
#include "magic/section_image_information_t.end.hpp"
