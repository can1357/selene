#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/status_block32_t.start.hpp"
namespace io
{
    // [struct _IO_STATUS_BLOCK32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct status_block32_t       
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int32_t  status;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 uint32_t information;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Information
                                  
        SDK_NONVOL_PROPERTIES( "_IO_STATUS_BLOCK32.$", 0x8, true, 0x7881a8ab937f24fd );            
        SDK_FIXED_SIZE( status_block32_t, 0x8 );            
    };                            
};
#include "magic/status_block32_t.end.hpp"
SDK_VERIFY( struct io::status_block32_t, 0x8 );
