#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_sizes_t.start.hpp"
namespace cc
{
    // [struct _CC_FILE_SIZES]
    // => WDK 10, Windows 11 (NV)
    //
    struct file_sizes_t                
    {                                  
        // WDK 10, Windows 11                  
        //                             
        _m00 int64_t allocation_size;    //{ +0x0000    +0x0000    } | .AllocationSize
        _m01 int64_t file_size;          //{ +0x0008    +0x0008    } | .FileSize
        _m02 int64_t valid_data_length;  //{ +0x0010    +0x0010    } | .ValidDataLength
                                       
        SDK_NONVOL_PROPERTIES( "_CC_FILE_SIZES.$", 0x0, false, 0x3c57fdae3867102 );                  
        SDK_FIXED_SIZE( file_sizes_t, 0x18 );                  
    };                                 
};
#include "magic/file_sizes_t.end.hpp"
SDK_VERIFY( struct cc::file_sizes_t, 0x18 );
