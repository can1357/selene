#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_pointer_queue_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;
    struct ndr_pointer_queue_state_t;

    // [class NDR_POINTER_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_pointer_queue_t                                     
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                        
        _m00 struct win::midl_stub_message_t*       p_stub_msg;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubMsg
        _m01 struct win::ndr_pointer_queue_state_t* p_queue_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pQueueState
                                                                  
        SDK_MAGIC_PROPERTIES( "NDR_POINTER_QUEUE.$", 0x30, true, 0xfb8290710380d759 );              
        SDK_FIXED_SIZE( ndr_pointer_queue_t, 0x30 );              
    };                                                            
};
#include "magic/ndr_pointer_queue_t.end.hpp"
SDK_VERIFY( class win::ndr_pointer_queue_t, 0x30 );
