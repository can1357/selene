#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_free_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR64_FREE_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr64_free_pointer_queue_element_t                       
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 class win::ndr_pointer_queue_element_t* p_next;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 uint8_t const*                          p_memory;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pMemory
        _m02 const uint8_t const*                    p_format;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pFormat
        _m03 uint8_t const*                          p_corr_memory;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pCorrMemory
        _m04 const uint8_t                           u_flags;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uFlags
                                                                   
        SDK_MAGIC_PROPERTIES( "NDR64_FREE_POINTER_QUEUE_ELEMENT.$", 0x30, true, 0xf9b24662d8fbcc2b );              
        SDK_FIXED_SIZE( ndr64_free_pointer_queue_element_t, 0x30 );              
    };                                                             
};
#include "magic/ndr64_free_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr64_free_pointer_queue_element_t, 0x30 );
