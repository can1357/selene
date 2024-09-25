#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_allocated_range_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_ALLOCATED_RANGE_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_allocated_range_buffer_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t file_offset;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t length;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                        
        SDK_NONVOL_PROPERTIES( "_FILE_ALLOCATED_RANGE_BUFFER.$", 0x10, true, 0x4b3e0cced8bdc0da );            
        SDK_FIXED_SIZE( file_allocated_range_buffer_t, 0x10 );            
    };                                  
};
#include "magic/file_allocated_range_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_allocated_range_buffer_t, 0x10 );
