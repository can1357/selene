#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_mrshl_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR64_MRSHL_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr64_mrshl_pointer_queue_element_t                      
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 class win::ndr_pointer_queue_element_t* p_next;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 int64_t const*                          p_buffer_mark;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pBufferMark
        _m02 uint8_t const*                          p_memory;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pMemory
        _m03 const uint8_t const*                    p_format;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pFormat
        _m04 uint8_t const*                          p_corr_memory;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pCorrMemory
        _m05 const uint8_t                           u_flags;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uFlags
                                                                   
        SDK_MAGIC_PROPERTIES( "NDR64_MRSHL_POINTER_QUEUE_ELEMENT.$", 0x38, true, 0x13ad0998caa6428f );              
        SDK_FIXED_SIZE( ndr64_mrshl_pointer_queue_element_t, 0x38 );              
    };                                                             
};
#include "magic/ndr64_mrshl_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr64_mrshl_pointer_queue_element_t, 0x38 );
