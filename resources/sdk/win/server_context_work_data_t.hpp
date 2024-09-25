#pragma once
#include <sdkgen/support_library.hpp>
#include "generic_stream_t.hpp"

#include "magic/server_context_work_data_t.start.hpp"
namespace win
{
    struct i_activation_properties_in_t;

    // [struct ServerContextWorkData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_context_work_data_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                            
        _m00 struct win::i_activation_properties_in_t* p_in_act_props;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pInActProps
        _m01 class win::generic_stream_t               xrpc_out_props;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .xrpcOutProps
                                                                      
        SDK_MAGIC_PROPERTIES( "ServerContextWorkData.$", 0x38, true, 0x360666db994ede4a );               
        SDK_FIXED_SIZE( server_context_work_data_t, 0x38 );               
    };                                                                
};
#include "magic/server_context_work_data_t.end.hpp"
SDK_VERIFY( struct win::server_context_work_data_t, 0x38 );
