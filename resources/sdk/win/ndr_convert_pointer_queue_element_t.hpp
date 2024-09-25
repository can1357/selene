#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_convert_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR_CONVERT_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_convert_pointer_queue_element_t                      
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 class win::ndr_pointer_queue_element_t* p_next;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 const uint8_t const*                    p_format;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pFormat
        _m02 uint8_t const*                          p_buffer_mark;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pBufferMark
        _m03 const uint8_t                           u_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uFlags
                                                                   
        SDK_MAGIC_PROPERTIES( "NDR_CONVERT_POINTER_QUEUE_ELEMENT.$", 0x28, true, 0x8fd8c86ee530fcad );              
        SDK_FIXED_SIZE( ndr_convert_pointer_queue_element_t, 0x28 );              
    };                                                             
};
#include "magic/ndr_convert_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr_convert_pointer_queue_element_t, 0x28 );
