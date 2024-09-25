#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/section_image_information32_t.start.hpp"
namespace win
{
    // [struct _SECTION_IMAGE_INFORMATION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_image_information32_t             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t transfer_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransferAddress
        _m01 uint32_t zero_bits;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ZeroBits
        _m02 uint32_t maximum_stack_size;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumStackSize
        _m03 uint32_t committed_stack_size;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CommittedStackSize
        _m04 uint32_t sub_system_type;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SubSystemType
        _m05 uint16_t sub_system_minor_version;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SubSystemMinorVersion
        _m06 uint16_t sub_system_major_version;        //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .SubSystemMajorVersion
        _m07 uint32_t sub_system_version;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SubSystemVersion
        _m08 uint16_t major_operating_system_version;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MajorOperatingSystemVersion
        _m09 uint16_t minor_operating_system_version;  //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .MinorOperatingSystemVersion
        _m10 uint32_t operating_system_version;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OperatingSystemVersion
        _m11 uint16_t image_characteristics;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ImageCharacteristics
        _m12 uint16_t dll_characteristics;             //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .DllCharacteristics
        _m13 uint16_t machine;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Machine
        _m14 uint8_t  image_contains_code;             //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .ImageContainsCode
        _m15 uint8_t  image_flags;                     //{ +0x0023    +0x0023    +0x0023    +0x0023    } | .ImageFlags
        _m16 uint1_t  com_plus;                        //{ +0x0023@0  +0x0023@0  +0x0023@0  +0x0023@0  } | .ComPlus
        _m17 uint1_t  image_dynamically_relocated;     //{ +0x0023@1  +0x0023@1  +0x0023@1  +0x0023@1  } | .ImageDynamicallyRelocated
        _m18 uint32_t loader_flags;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .LoaderFlags
        _m19 uint32_t image_file_size;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ImageFileSize
        _m20 uint32_t check_sum;                       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .CheckSum
                                                     
        SDK_MAGIC_PROPERTIES( "_SECTION_IMAGE_INFORMATION32.$", 0x30, true, 0xa302589bfaaf0508 );                               
        SDK_FIXED_SIZE( section_image_information32_t, 0x30 );                               
    };                                               
};
#include "magic/section_image_information32_t.end.hpp"
SDK_VERIFY( struct win::section_image_information32_t, 0x30 );
