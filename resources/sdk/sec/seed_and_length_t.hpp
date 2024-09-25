#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/seed_and_length_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_SEED_AND_LENGTH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct seed_and_length_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 uint8_t length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint8_t seed;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Seed
                            
        SDK_MAGIC_PROPERTIES( "_SECURITY_SEED_AND_LENGTH.$", 0x2, true, 0x474a35440939f81c );       
        SDK_FIXED_SIZE( seed_and_length_t, 0x2 );       
    };                      
};
#include "magic/seed_and_length_t.end.hpp"
SDK_VERIFY( struct sec::seed_and_length_t, 0x2 );
