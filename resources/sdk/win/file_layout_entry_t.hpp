#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_layout_entry_t.start.hpp"
namespace win
{
    // [struct _FILE_LAYOUT_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_layout_entry_t              
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t next_file_offset;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NextFileOffset
        _m02 uint32_t flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t file_attributes;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FileAttributes
        _m04 uint64_t file_reference_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileReferenceNumber
        _m05 uint32_t first_name_offset;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstNameOffset
        _m06 uint32_t first_stream_offset;    //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .FirstStreamOffset
        _m07 uint32_t extra_info_offset;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtraInfoOffset
                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m08 uint32_t extra_info_length;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ExtraInfoLength
                                            
        SDK_NONVOL_PROPERTIES( "_FILE_LAYOUT_ENTRY.$", 0x28, true, 0xa3f7936b1f397030 );                      
        SDK_FIXED_SIZE( file_layout_entry_t, 0x28 );                      
    };                                      
};
#include "magic/file_layout_entry_t.end.hpp"
SDK_VERIFY( struct win::file_layout_entry_t, 0x28 );
