#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/info_t.start.hpp"
namespace image
{
    // [struct _IMAGE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct info_t                              
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t properties;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Properties
        _m01 uint8_t  image_addressing_mode;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ImageAddressingMode
        _m02 uint1_t  system_mode_image;         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .SystemModeImage
        _m03 uint1_t  image_mapped_to_all_pids;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .ImageMappedToAllPids
        _m04 uint1_t  extended_info_present;     //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .ExtendedInfoPresent
        _m05 uint1_t  machine_type_mismatch;     //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .MachineTypeMismatch
        _m06 uint4_t  image_signature_level;     //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .ImageSignatureLevel
        _m07 uint3_t  image_signature_type;      //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ImageSignatureType
        _m08 uint1_t  image_partial_map;         //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .ImagePartialMap
        _m09 void*    image_base;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageBase
        _m10 uint32_t image_selector;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageSelector
        _m11 uint64_t image_size;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ImageSize
        _m12 uint32_t image_section_number;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ImageSectionNumber
                                               
        SDK_NONVOL_PROPERTIES( "_IMAGE_INFO.$", 0x28, true, 0xef7cf5ab35902721 );                         
        SDK_FIXED_SIZE( info_t, 0x28 );                         
    };                                         
};
#include "magic/info_t.end.hpp"
SDK_VERIFY( struct image::info_t, 0x28 );
