#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/repair_copies_output_t.start.hpp"
namespace win
{
    // [struct _REPAIR_COPIES_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct repair_copies_output_t        
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 int32_t  status;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
        _m02 int64_t  resume_file_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ResumeFileOffset
                                         
        SDK_NONVOL_PROPERTIES( "_REPAIR_COPIES_OUTPUT.$", 0x10, true, 0xc67c03c2d8af3e34 );                   
        SDK_FIXED_SIZE( repair_copies_output_t, 0x10 );                   
    };                                   
};
#include "magic/repair_copies_output_t.end.hpp"
SDK_VERIFY( struct win::repair_copies_output_t, 0x10 );
