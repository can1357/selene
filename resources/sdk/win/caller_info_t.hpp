#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caller_info_t.start.hpp"
namespace win
{
    // [struct CallerInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caller_info_t          
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* return_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReturnAddress
                                  
        SDK_MAGIC_PROPERTIES( "CallerInfo.$", 0x8, true, 0x82fad67876315ffd );               
        SDK_FIXED_SIZE( caller_info_t, 0x8 );               
    };                            
};
#include "magic/caller_info_t.end.hpp"
SDK_VERIFY( struct win::caller_info_t, 0x8 );
