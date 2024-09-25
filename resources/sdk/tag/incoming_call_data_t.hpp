#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/incoming_call_data_t.start.hpp"
namespace tag
{
    // [struct tagIncomingCallData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct incoming_call_data_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t dw_client_pid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwClientPID
                                    
        SDK_MAGIC_PROPERTIES( "tagIncomingCallData.$", 0x4, true, 0x230e989a3f39b1d7 );              
        SDK_FIXED_SIZE( incoming_call_data_t, 0x4 );              
    };                              
};
#include "magic/incoming_call_data_t.end.hpp"
SDK_VERIFY( struct tag::incoming_call_data_t, 0x4 );
