#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_pagefile_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_PAGEFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_pagefile_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 nt::unicode_view page_file_name;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageFileName
        _m01 int64_t          minimum_size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumSize
        _m02 int64_t          maximum_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaximumSize
        _m03 uint32_t         flags;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
                                                  
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_PAGEFILE_INFORMATION.$", 0x28, true, 0x655d4fa438f4246f );               
        SDK_FIXED_SIZE( memory_partition_pagefile_information_t, 0x28 );               
    };                                            
};
#include "magic/memory_partition_pagefile_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_pagefile_information_t, 0x28 );
