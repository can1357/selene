#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/duplicate_extents_data_t.start.hpp"
namespace win
{
    // [struct _DUPLICATE_EXTENTS_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct duplicate_extents_data_t     
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 void*   file_handle;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHandle
        _m01 int64_t source_file_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceFileOffset
        _m02 int64_t target_file_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetFileOffset
        _m03 int64_t byte_count;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ByteCount
                                        
        SDK_NONVOL_PROPERTIES( "_DUPLICATE_EXTENTS_DATA.$", 0x20, true, 0xc8db326dae935498 );                   
        SDK_FIXED_SIZE( duplicate_extents_data_t, 0x20 );                   
    };                                  
};
#include "magic/duplicate_extents_data_t.end.hpp"
SDK_VERIFY( struct win::duplicate_extents_data_t, 0x20 );
