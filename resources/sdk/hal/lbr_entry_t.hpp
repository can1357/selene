#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lbr_entry_t.start.hpp"
namespace hal
{
    // [struct _HAL_LBR_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lbr_entry_t          
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                      
        _m00 void* from_address;  //{ +0x0000    +0x0000    +0x0000    } | .FromAddress
        _m01 void* to_address;    //{ +0x0008    +0x0008    +0x0008    } | .ToAddress
                                
        SDK_MAGIC_PROPERTIES( "_HAL_LBR_ENTRY.$", 0x18, true, 0x2bf43e50e7c8796 );             
        SDK_FIXED_SIZE( lbr_entry_t, 0x18 );             
    };                          
};
#include "magic/lbr_entry_t.end.hpp"
SDK_VERIFY( struct hal::lbr_entry_t, 0x18 );
