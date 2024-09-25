#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hiberfile_bucket_t.start.hpp"
namespace win
{
    // [struct _HIBERFILE_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hiberfile_bucket_t                                
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 uint64_t                max_physical_memory;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxPhysicalMemory
        _m01 sdk::array<uint32_t, 3> physical_memory_percent;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalMemoryPercent
                                                             
        SDK_MAGIC_PROPERTIES( "_HIBERFILE_BUCKET.$", 0x18, true, 0xcae5470d69674df8 );                        
        SDK_FIXED_SIZE( hiberfile_bucket_t, 0x18 );                        
    };                                                       
};
#include "magic/hiberfile_bucket_t.end.hpp"
SDK_VERIFY( struct win::hiberfile_bucket_t, 0x18 );
