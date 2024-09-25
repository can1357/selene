#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/repair_copies_input_t.start.hpp"
namespace win
{
    // [struct _REPAIR_COPIES_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct repair_copies_input_t                             
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 uint32_t                size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                flags;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t                 file_offset;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileOffset
        _m03 uint32_t                length;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m04 uint32_t                source_copy;              //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SourceCopy
        _m05 uint32_t                number_of_repair_copies;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfRepairCopies
        _m06 sdk::array<uint32_t, 1> repair_copies;            //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .RepairCopies
                                                             
        SDK_NONVOL_PROPERTIES( "_REPAIR_COPIES_INPUT.$", 0x20, true, 0xbca2e525c9ca4304 );                        
        SDK_FIXED_SIZE( repair_copies_input_t, 0x20 );                        
    };                                                       
};
#include "magic/repair_copies_input_t.end.hpp"
SDK_VERIFY( struct win::repair_copies_input_t, 0x20 );
