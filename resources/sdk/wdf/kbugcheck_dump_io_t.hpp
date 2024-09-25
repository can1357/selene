#pragma once
#include <sdkgen/support_library.hpp>
#include "kbugcheck_dump_io_type_t.hpp"

#include "magic/kbugcheck_dump_io_t.start.hpp"
namespace wdf
{
    // [struct _KBUGCHECK_DUMP_IO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_dump_io_t                                
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 uint64_t                           offset;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 void*                              buffer;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t                           buffer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferLength
        _m03 enum wdf::kbugcheck_dump_io_type_t type;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Type
                                                              
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_DUMP_IO.$", 0x18, true, 0xa5686f7cbae85b2d );              
        SDK_FIXED_SIZE( kbugcheck_dump_io_t, 0x18 );              
    };                                                        
};
#include "magic/kbugcheck_dump_io_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_dump_io_t, 0x18 );
