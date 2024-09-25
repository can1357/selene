#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_pfnfree_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR_PFNFREE_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_pfnfree_pointer_queue_element_t                 
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                    
        _m00 class win::ndr_pointer_queue_element_t* p_next;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 sdk::function<void(void*)>*             pfn_free;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFree
        _m02 uint8_t*                                p_memory;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pMemory
                                                              
        SDK_MAGIC_PROPERTIES( "NDR_PFNFREE_POINTER_QUEUE_ELEMENT.$", 0x20, true, 0xfac97713d65db25b );         
        SDK_FIXED_SIZE( ndr_pfnfree_pointer_queue_element_t, 0x20 );         
    };                                                        
};
#include "magic/ndr_pfnfree_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr_pfnfree_pointer_queue_element_t, 0x20 );
