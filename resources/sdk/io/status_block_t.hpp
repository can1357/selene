#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/status_block_t.start.hpp"
namespace io
{
    // [struct _IO_STATUS_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct status_block_t         
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int32_t  status;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Status
        _m01 void*    pointer;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Pointer
        _m02 uint64_t information;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Information
                                  
        SDK_NONVOL_PROPERTIES( "_IO_STATUS_BLOCK.$", 0x10, true, 0xe3bd1ed5eec573d7 );            
        SDK_FIXED_SIZE( status_block_t, 0x10 );            
    };                            
};
#include "magic/status_block_t.end.hpp"
SDK_VERIFY( struct io::status_block_t, 0x10 );
