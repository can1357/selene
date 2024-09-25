#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_usr_mrshl_mrshl_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;

    // [class NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr64_usr_mrshl_mrshl_pointer_queue_element_t                
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                             
        _m00 class win::ndr_pointer_queue_element_t* p_next;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 uint8_t const*                          p_memory;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pMemory
        _m02 const uint8_t const*                    p_format;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pFormat
        _m03 int64_t const*                          p_wire_marker_ptr;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pWireMarkerPtr
                                                                       
        SDK_MAGIC_PROPERTIES( "NDR64_USR_MRSHL_MRSHL_POINTER_QUEUE_ELEMENT.$", 0x28, true, 0xa49885c918235c9a );                  
        SDK_FIXED_SIZE( ndr64_usr_mrshl_mrshl_pointer_queue_element_t, 0x28 );                  
    };                                                                 
};
#include "magic/ndr64_usr_mrshl_mrshl_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr64_usr_mrshl_mrshl_pointer_queue_element_t, 0x28 );
