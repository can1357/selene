#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/duplicate_extents_data_ex32_t.start.hpp"
namespace win
{
    // [struct _DUPLICATE_EXTENTS_DATA_EX32]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct duplicate_extents_data_ex32_t 
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t file_handle;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FileHandle
        _m02 int64_t  source_file_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceFileOffset
        _m03 int64_t  target_file_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetFileOffset
        _m04 int64_t  byte_count;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ByteCount
        _m05 uint32_t flags;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
                                         
        SDK_NONVOL_PROPERTIES( "_DUPLICATE_EXTENTS_DATA_EX32.$", 0x28, true, 0x1017b9a239218d33 );                   
        SDK_FIXED_SIZE( duplicate_extents_data_ex32_t, 0x28 );                   
    };                                   
};
#include "magic/duplicate_extents_data_ex32_t.end.hpp"
SDK_VERIFY( struct win::duplicate_extents_data_ex32_t, 0x28 );
