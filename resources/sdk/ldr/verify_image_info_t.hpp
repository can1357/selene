#pragma once
#include <sdkgen/support_library.hpp>
#include "section_info_t.hpp"
#include "import_callback_info_t.hpp"

#include "magic/verify_image_info_t.start.hpp"
namespace ldr
{
    // [struct _LDR_VERIFY_IMAGE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct verify_image_info_t                                        
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 uint32_t                           size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                           flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct ldr::import_callback_info_t callback_info;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CallbackInfo
        _m03 struct ldr::section_info_t         section_info;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionInfo
        _m04 uint16_t                           image_characteristics;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ImageCharacteristics
                                                                      
        SDK_NONVOL_PROPERTIES( "_LDR_VERIFY_IMAGE_INFO.$", 0x40, true, 0x3bf4589e04416864 );                      
        SDK_FIXED_SIZE( verify_image_info_t, 0x40 );                      
    };                                                                
};
#include "magic/verify_image_info_t.end.hpp"
SDK_VERIFY( struct ldr::verify_image_info_t, 0x40 );
