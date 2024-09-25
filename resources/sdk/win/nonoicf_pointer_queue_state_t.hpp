#pragma once
#include <sdkgen/support_library.hpp>
#include "array_info_t.hpp"

#include "magic/nonoicf_pointer_queue_state_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_t;
    class ndr_pointer_queue_element_t;

    // [class NONOICF_POINTER_QUEUE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class nonoicf_pointer_queue_state_t                             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 class win::ndr_pointer_queue_t*         p_active_queue;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pActiveQueue
        _m01 struct win::array_info_t                array_info;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ArrayInfo
        _m02 class win::ndr_pointer_queue_element_t* p_free_list;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pFreeList
                                                                    
        SDK_MAGIC_PROPERTIES( "NONOICF_POINTER_QUEUE_STATE.$", 0x50, true, 0x7dda00d28ec1380a );               
        SDK_FIXED_SIZE( nonoicf_pointer_queue_state_t, 0x50 );               
    };                                                              
};
#include "magic/nonoicf_pointer_queue_state_t.end.hpp"
SDK_VERIFY( class win::nonoicf_pointer_queue_state_t, 0x50 );
