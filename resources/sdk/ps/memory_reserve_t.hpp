#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_reserve_t.start.hpp"
namespace ps
{
    // [struct _PS_MEMORY_RESERVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_reserve_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    reserve_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveAddress
        _m01 uint64_t reserve_size;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReserveSize
                                      
        SDK_MAGIC_PROPERTIES( "_PS_MEMORY_RESERVE.$", 0x10, true, 0x3d4ff7f71d424c11 );                
        SDK_FIXED_SIZE( memory_reserve_t, 0x10 );                
    };                                
};
#include "magic/memory_reserve_t.end.hpp"
SDK_VERIFY( struct ps::memory_reserve_t, 0x10 );
