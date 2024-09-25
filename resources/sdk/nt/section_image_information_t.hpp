#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/section_image_information_t.start.hpp"
namespace nt
{
    // [struct _SECTION_IMAGE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct section_image_information_t               
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 void*    transfer_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransferAddress
        _m01 uint32_t zero_bits;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ZeroBits
        _m02 uint64_t maximum_stack_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumStackSize
        _m03 uint64_t committed_stack_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CommittedStackSize
        _m04 uint32_t sub_system_type;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SubSystemType
        _m05 uint16_t sub_system_minor_version;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .SubSystemMinorVersion
        _m06 uint16_t sub_system_major_version;        //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .SubSystemMajorVersion
        _m07 uint32_t sub_system_version;              //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .SubSystemVersion
        _m08 uint16_t major_operating_system_version;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MajorOperatingSystemVersion
        _m09 uint16_t minor_operating_system_version;  //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .MinorOperatingSystemVersion
        _m10 uint32_t operating_system_version;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OperatingSystemVersion
        _m11 uint16_t image_characteristics;           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .ImageCharacteristics
        _m12 uint16_t dll_characteristics;             //{ +0x002e    +0x002e    +0x002e    +0x002e    +0x002e    } | .DllCharacteristics
        _m13 uint16_t machine;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Machine
        _m14 uint8_t  image_contains_code;             //{ +0x0032    +0x0032    +0x0032    +0x0032    +0x0032    } | .ImageContainsCode
        _m15 uint8_t  image_flags;                     //{ +0x0033    +0x0033    +0x0033    +0x0033    +0x0033    } | .ImageFlags
        _m16 uint1_t  com_plus_native_ready;           //{ +0x0033@0  +0x0033@0  +0x0033@0  +0x0033@0  +0x0033@0  } | .ComPlusNativeReady
        _m17 uint1_t  com_plus_il_only;                //{ +0x0033@1  +0x0033@1  +0x0033@1  +0x0033@1  +0x0033@1  } | .ComPlusILOnly
        _m18 uint1_t  image_dynamically_relocated;     //{ +0x0033@2  +0x0033@2  +0x0033@2  +0x0033@2  +0x0033@2  } | .ImageDynamicallyRelocated
        _m19 uint1_t  image_mapped_flat;               //{ +0x0033@3  +0x0033@3  +0x0033@3  +0x0033@3  +0x0033@3  } | .ImageMappedFlat
        _m20 uint1_t  base_below4gb;                   //{ +0x0033@4  +0x0033@4  +0x0033@4  +0x0033@4  +0x0033@4  } | .BaseBelow4gb
        _m21 uint1_t  com_plus_prefer32bit;            //{ +0x0033@5  +0x0033@5  +0x0033@5  +0x0033@5  +0x0033@5  } | .ComPlusPrefer32bit
        _m22 uint32_t loader_flags;                    //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .LoaderFlags
        _m23 uint32_t image_file_size;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ImageFileSize
        _m24 uint32_t check_sum;                       //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .CheckSum
                                                     
        SDK_NONVOL_PROPERTIES( "_SECTION_IMAGE_INFORMATION.$", 0x40, true, 0x3e57d7b51a221e81 );                               
        SDK_FIXED_SIZE( section_image_information_t, 0x40 );                               
    };                                               
};
#include "magic/section_image_information_t.end.hpp"
SDK_VERIFY( struct nt::section_image_information_t, 0x40 );
