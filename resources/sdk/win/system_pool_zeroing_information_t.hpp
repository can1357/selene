#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_pool_zeroing_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_ZEROING_INFORMATION]
    // => Windows 11, Windows 10 v20H2
    //
    struct system_pool_zeroing_information_t      
    {                                             
        // Windows 11, Windows 10 v20H2                             
        //                                        
        _m00 uint8_t pool_zeroing_support_present;  //{ +0x0000    +0x0000    } | .PoolZeroingSupportPresent
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_ZEROING_INFORMATION.$", 0x1, true, 0x260caaeb53ad56ef );                             
        SDK_FIXED_SIZE( system_pool_zeroing_information_t, 0x1 );                             
    };                                            
};
#include "magic/system_pool_zeroing_information_t.end.hpp"
SDK_VERIFY( struct win::system_pool_zeroing_information_t, 0x1 );
