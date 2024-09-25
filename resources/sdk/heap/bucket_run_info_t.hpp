#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bucket_run_info_t.start.hpp"
namespace heap
{
    // [union _HEAP_BUCKET_RUN_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union bucket_run_info_t       
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t bucket;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bucket
        _m01 uint32_t run_length;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RunLength
        _m02 int64_t  aggregate64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Aggregate64
                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_BUCKET_RUN_INFO.$", 0x8, true, 0x5dfa1f420c766365 );            
        SDK_FIXED_SIZE( bucket_run_info_t, 0x8 );            
    };                            
};
#include "magic/bucket_run_info_t.end.hpp"
SDK_VERIFY( union heap::bucket_run_info_t, 0x8 );
