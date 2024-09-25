#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/status_block_t.start.hpp"
namespace nt
{
    // [struct _STATUS_BLOCK]
    // => WDK 10 (NV)
    //
    struct status_block_t         
    {                             
        // WDK 10                 
        //                        
        _m00 int32_t  status;       //{ +0x0000    } | .Status
        _m01 void*    pointer;      //{ +0x0000    } | .Pointer
        _m02 uint64_t information;  //{ +0x0008    } | .Information
                                  
        SDK_NONVOL_PROPERTIES( "_STATUS_BLOCK.$", 0x0, false, 0x24121e6150d348f4 );            
        SDK_FIXED_SIZE( status_block_t, 0x10 );            
    };                            
};
#include "magic/status_block_t.end.hpp"
SDK_VERIFY( struct nt::status_block_t, 0x10 );
