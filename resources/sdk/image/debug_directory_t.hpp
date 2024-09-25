#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_directory_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DEBUG_DIRECTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_directory_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t characteristics;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Characteristics
        _m01 uint32_t time_date_stamp;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m02 uint16_t major_version;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MajorVersion
        _m03 uint16_t minor_version;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MinorVersion
        _m04 uint32_t type;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
        _m05 uint32_t size_of_data;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfData
        _m06 uint32_t address_of_raw_data;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AddressOfRawData
        _m07 uint32_t pointer_to_raw_data;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PointerToRawData
                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_DEBUG_DIRECTORY.$", 0x1c, true, 0x31628592930ce21e );                    
        SDK_FIXED_SIZE( debug_directory_t, 0x1c );                    
    };                                    
};
#include "magic/debug_directory_t.end.hpp"
SDK_VERIFY( struct image::debug_directory_t, 0x1c );
