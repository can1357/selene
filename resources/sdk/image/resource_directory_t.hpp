#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_directory_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RESOURCE_DIRECTORY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_directory_t               
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t characteristics;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Characteristics
        _m01 uint32_t time_date_stamp;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m02 uint16_t major_version;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MajorVersion
        _m03 uint16_t minor_version;            //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .MinorVersion
        _m04 uint16_t number_of_named_entries;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfNamedEntries
        _m05 uint16_t number_of_id_entries;     //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .NumberOfIdEntries
                                              
        SDK_NONVOL_PROPERTIES( "_IMAGE_RESOURCE_DIRECTORY.$", 0x10, true, 0x5f96942225543dbf );                        
        SDK_FIXED_SIZE( resource_directory_t, 0x10 );                        
    };                                        
};
#include "magic/resource_directory_t.end.hpp"
SDK_VERIFY( struct image::resource_directory_t, 0x10 );
