#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_ext_set_parameters_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EXT_SET_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_ext_set_parameters_t    
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t version;            //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 int64_t  no_wake_tolerance;  //{ +0x0008    +0x0008    +0x0008    } | .NoWakeTolerance
                                        
        SDK_MAGIC_PROPERTIES( "_STOR_EXT_SET_PARAMETERS.$", 0x10, true, 0xaf04b0f30cbd486d );                  
        SDK_FIXED_SIZE( stor_ext_set_parameters_t, 0x10 );                  
    };                                  
};
#include "magic/stor_ext_set_parameters_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_ext_set_parameters_t, 0x10 );
