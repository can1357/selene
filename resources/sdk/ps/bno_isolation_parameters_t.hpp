#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bno_isolation_parameters_t.start.hpp"
namespace ps
{
    // [struct _PS_BNO_ISOLATION_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bno_isolation_parameters_t           
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 nt::unicode_view isolation_prefix;   //{ +0x0000    +0x0000    +0x0000    } | .IsolationPrefix
        _m01 uint32_t         handle_count;       //{ +0x0010    +0x0010    +0x0010    } | .HandleCount
        _m02 void**           handles;            //{ +0x0018    +0x0018    +0x0018    } | .Handles
        _m03 uint8_t          isolation_enabled;  //{ +0x0020    +0x0020    +0x0020    } | .IsolationEnabled
                                                
        SDK_MAGIC_PROPERTIES( "_PS_BNO_ISOLATION_PARAMETERS.$", 0x28, true, 0x4629617dbbc47e73 );                  
        SDK_FIXED_SIZE( bno_isolation_parameters_t, 0x28 );                  
    };                                          
};
#include "magic/bno_isolation_parameters_t.end.hpp"
SDK_VERIFY( struct ps::bno_isolation_parameters_t, 0x28 );
