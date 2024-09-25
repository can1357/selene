#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_path_response_t.start.hpp"
namespace nt
{
    // [struct _QUERY_PATH_RESPONSE]
    // => WDK 10 (NV)
    //
    struct query_path_response_t      
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t length_accepted;  //{ +0x0000    } | .LengthAccepted
                                      
        SDK_NONVOL_PROPERTIES( "_QUERY_PATH_RESPONSE.$", 0x0, false, 0x40df30d5bedabcf1 );                
        SDK_FIXED_SIZE( query_path_response_t, 0x4 );                
    };                                
};
#include "magic/query_path_response_t.end.hpp"
SDK_VERIFY( struct nt::query_path_response_t, 0x4 );
