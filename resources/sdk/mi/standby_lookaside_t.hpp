#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/standby_lookaside_t.start.hpp"
namespace mi
{
    // [struct _MI_STANDBY_LOOKASIDE]
    // => Windows 11
    //
    struct standby_lookaside_t              
    {                                       
        // Windows 11                       
        //                                  
        _m00 sdk::array<uint64_t, 64> array;  //{ +0x0000    } | .Array
                                            
        SDK_MAGIC_PROPERTIES( "_MI_STANDBY_LOOKASIDE.$", 0x0, false, 0x6758c4bc7abe0fab );      
        SDK_FIXED_SIZE( standby_lookaside_t, 0x200 );      
    };                                      
};
#include "magic/standby_lookaside_t.end.hpp"
SDK_VERIFY( struct mi::standby_lookaside_t, 0x200 );
