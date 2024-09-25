#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_stack_information_t.start.hpp"
namespace tp
{
    // [struct _TP_POOL_STACK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pool_stack_information_t 
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t stack_reserve;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StackReserve
        _m01 uint64_t stack_commit;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StackCommit
                                    
        SDK_NONVOL_PROPERTIES( "_TP_POOL_STACK_INFORMATION.$", 0x10, true, 0xc121328d08678980 );              
        SDK_FIXED_SIZE( pool_stack_information_t, 0x10 );              
    };                              
};
#include "magic/pool_stack_information_t.end.hpp"
SDK_VERIFY( struct tp::pool_stack_information_t, 0x10 );
