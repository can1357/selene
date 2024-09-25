#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_pagefile_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PAGEFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pagefile_information_t        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 uint32_t         next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t         total_size;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalSize
        _m02 uint32_t         total_in_use;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalInUse
        _m03 uint32_t         peak_usage;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PeakUsage
        _m04 nt::unicode_view page_file_name;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PageFileName
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PAGEFILE_INFORMATION.$", 0x20, true, 0x2dc3ef22101aff93 );                  
        SDK_FIXED_SIZE( system_pagefile_information_t, 0x20 );                  
    };                                          
};
#include "magic/system_pagefile_information_t.end.hpp"
SDK_VERIFY( struct win::system_pagefile_information_t, 0x20 );
