#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nmisource_t.start.hpp"
namespace io
{
    // [struct _IO_NMISOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nmisource_t                               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint8_t  type;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;                          //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint16_t flags;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint32_t global_system_interrupt_vector;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .GlobalSystemInterruptVector
                                                     
        SDK_MAGIC_PROPERTIES( "_IO_NMISOURCE.$", 0x8, true, 0x9f520d7e3ab5785d );                               
        SDK_FIXED_SIZE( nmisource_t, 0x8 );                               
    };                                               
};
#include "magic/nmisource_t.end.hpp"
SDK_VERIFY( struct io::nmisource_t, 0x8 );
