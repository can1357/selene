#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/std_disc_data_t.start.hpp"
namespace win
{
    class c_std_marshal_t;
    class c_object_context_t;

    // [struct StdDiscData]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct std_disc_data_t                                          
    {                                                               
        // Windows 10 v2004, Windows 10 v20H2                        
        //                                                          
        _m00 class win::c_std_marshal_t*    p_std_mshl;               //{ +0x0000    +0x0000    } | .pStdMshl
        _m01 uint32_t                       dw_type;                  //{ +0x0008    +0x0008    } | .dwType
        _m02 bool                           log_event_is_active;      //{ +0x000c    +0x000c    } | .logEventIsActive
        _m03 class win::c_object_context_t* explicit_server_context;  //{ +0x0010    +0x0010    } | .explicitServerContext
                                                                    
        SDK_MAGIC_PROPERTIES( "StdDiscData.$", 0x18, true, 0xc66247377cd2e879 );                        
        SDK_FIXED_SIZE( std_disc_data_t, 0x18 );                        
    };                                                              
};
#include "magic/std_disc_data_t.end.hpp"
SDK_VERIFY( struct win::std_disc_data_t, 0x18 );
