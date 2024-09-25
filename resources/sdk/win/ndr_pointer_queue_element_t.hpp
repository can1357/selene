#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_pointer_queue_element_t                       
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                  
        _m00 class win::ndr_pointer_queue_element_t* p_next;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
                                                            
        SDK_MAGIC_PROPERTIES( "NDR_POINTER_QUEUE_ELEMENT.$", 0x10, true, 0x5fa4b6bad8565883 );       
        SDK_FIXED_SIZE( ndr_pointer_queue_element_t, 0x10 );       
    };                                                      
};
#include "magic/ndr_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr_pointer_queue_element_t, 0x10 );
