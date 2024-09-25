#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/correlation_vector_t.start.hpp"
namespace nt
{
    // [struct CORRELATION_VECTOR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct correlation_vector_t            
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                 
        _m00 char                  version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 sdk::array<char, 129> vector;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Vector
                                           
        SDK_NONVOL_PROPERTIES( "CORRELATION_VECTOR.$", 0x82, true, 0x880808aed358a4be );        
        SDK_FIXED_SIZE( correlation_vector_t, 0x82 );        
    };                                     
};
#include "magic/correlation_vector_t.end.hpp"
SDK_VERIFY( struct nt::correlation_vector_t, 0x82 );
