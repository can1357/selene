#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_namespace_info_t.start.hpp"
namespace win
{
    // [struct _CSV_NAMESPACE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_namespace_info_t       
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t device_number;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceNumber
        _m02 int64_t  starting_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StartingOffset
        _m03 uint32_t sector_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SectorSize
                                      
        SDK_NONVOL_PROPERTIES( "_CSV_NAMESPACE_INFO.$", 0x18, true, 0x6fc1112af5aab996 );                
        SDK_FIXED_SIZE( csv_namespace_info_t, 0x18 );                
    };                                
};
#include "magic/csv_namespace_info_t.end.hpp"
SDK_VERIFY( struct win::csv_namespace_info_t, 0x18 );
