#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/export_directory_t.start.hpp"
namespace image
{
    // [struct _IMAGE_EXPORT_DIRECTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct export_directory_t                  
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t characteristics;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Characteristics
        _m01 uint32_t time_date_stamp;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m02 uint16_t major_version;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MajorVersion
        _m03 uint16_t minor_version;             //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MinorVersion
        _m04 uint32_t name;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Name
        _m05 uint32_t base;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Base
        _m06 uint32_t number_of_functions;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfFunctions
        _m07 uint32_t number_of_names;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfNames
        _m08 uint32_t address_of_functions;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AddressOfFunctions
        _m09 uint32_t address_of_names;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AddressOfNames
        _m10 uint32_t address_of_name_ordinals;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .AddressOfNameOrdinals
                                               
        SDK_MAGIC_PROPERTIES( "_IMAGE_EXPORT_DIRECTORY.$", 0x28, true, 0xd12dc9fcfd32c662 );                         
        SDK_FIXED_SIZE( export_directory_t, 0x28 );                         
    };                                         
};
#include "magic/export_directory_t.end.hpp"
SDK_VERIFY( struct image::export_directory_t, 0x28 );
