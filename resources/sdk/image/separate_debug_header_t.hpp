#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/separate_debug_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_SEPARATE_DEBUG_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct separate_debug_header_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t signature;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t flags;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint16_t machine;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Machine
        _m03 uint16_t characteristics;       //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Characteristics
        _m04 uint32_t time_date_stamp;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeDateStamp
        _m05 uint32_t check_sum;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CheckSum
        _m06 uint32_t image_base;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageBase
        _m07 uint32_t size_of_image;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SizeOfImage
        _m08 uint32_t number_of_sections;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfSections
        _m09 uint32_t exported_names_size;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ExportedNamesSize
        _m10 uint32_t debug_directory_size;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DebugDirectorySize
        _m11 uint32_t section_alignment;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SectionAlignment
                                           
        SDK_MAGIC_PROPERTIES( "_IMAGE_SEPARATE_DEBUG_HEADER.$", 0x30, true, 0x4c2523b215874e33 );                     
        SDK_FIXED_SIZE( separate_debug_header_t, 0x30 );                     
    };                                     
};
#include "magic/separate_debug_header_t.end.hpp"
SDK_VERIFY( struct image::separate_debug_header_t, 0x30 );
