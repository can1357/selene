#pragma once
#include <sdkgen/support_library.hpp>
#include "array_info_t.hpp"

#include "magic/ndr_pointer_queue_state_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_t;

    // [struct NDR_POINTER_QUEUE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_pointer_queue_state_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 class win::ndr_pointer_queue_t* p_active_queue;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pActiveQueue
        _m01 struct win::array_info_t        array_info;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ArrayInfo
                                                            
        SDK_MAGIC_PROPERTIES( "NDR_POINTER_QUEUE_STATE.$", 0x40, true, 0x5e526d91ccbac3b3 );               
        SDK_FIXED_SIZE( ndr_pointer_queue_state_t, 0x40 );               
    };                                                      
};
#include "magic/ndr_pointer_queue_state_t.end.hpp"
SDK_VERIFY( struct win::ndr_pointer_queue_state_t, 0x40 );
