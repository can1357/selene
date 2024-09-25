#pragma once
#include <sdkgen/support_library.hpp>
#include "array_info_t.hpp"

#include "magic/oicf_pointer_queue_state_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_t;
    struct ndr_proc_context_t;

    // [class OICF_POINTER_QUEUE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class oicf_pointer_queue_state_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                        
        _m00 class win::ndr_pointer_queue_t*       p_active_queue;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pActiveQueue
        _m01 struct win::array_info_t              array_info;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ArrayInfo
        _m02 struct win::ndr_proc_context_t const* p_proc_context;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pProcContext
                                                                  
        SDK_MAGIC_PROPERTIES( "OICF_POINTER_QUEUE_STATE.$", 0x48, true, 0x32f2dfb97480d156 );               
        SDK_FIXED_SIZE( oicf_pointer_queue_state_t, 0x48 );               
    };                                                            
};
#include "magic/oicf_pointer_queue_state_t.end.hpp"
SDK_VERIFY( class win::oicf_pointer_queue_state_t, 0x48 );
