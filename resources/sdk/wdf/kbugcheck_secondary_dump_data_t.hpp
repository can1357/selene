#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kbugcheck_secondary_dump_data_t.start.hpp"
namespace wdf
{
    // [struct _KBUGCHECK_SECONDARY_DUMP_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_secondary_dump_data_t       
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 void*             in_buffer;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InBuffer
        _m01 uint32_t          in_buffer_length;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InBufferLength
        _m02 uint32_t          maximum_allowed;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MaximumAllowed
        _m03 struct nt::guid_t guid;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Guid
        _m04 void*             out_buffer;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OutBuffer
        _m05 uint32_t          out_buffer_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OutBufferLength
                                                 
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_SECONDARY_DUMP_DATA.$", 0x30, true, 0x910b4a5f368a0e41 );                  
        SDK_FIXED_SIZE( kbugcheck_secondary_dump_data_t, 0x30 );                  
    };                                           
};
#include "magic/kbugcheck_secondary_dump_data_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_secondary_dump_data_t, 0x30 );
