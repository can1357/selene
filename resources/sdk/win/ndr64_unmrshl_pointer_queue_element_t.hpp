#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_unmrshl_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;
    struct ndr_alloc_all_nodes_context_t;

    // [class NDR64_UNMRSHL_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr64_unmrshl_pointer_queue_element_t                                   
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                        
        _m00 class win::ndr_pointer_queue_element_t*    p_next;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 int64_t                                    wire_ptr;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WirePtr
        _m02 uint8_t**                                  pp_memory;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ppMemory
        _m03 uint8_t*                                   p_memory;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pMemory
        _m04 const uint8_t*                             p_format;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pFormat
        _m05 uint8_t*                                   p_corr_memory;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pCorrMemory
        _m06 struct win::ndr_alloc_all_nodes_context_t* p_alloc_all_nodes_context;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pAllocAllNodesContext
        _m07 int32_t                                    f_in_dont_free;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .fInDontFree
        _m08 uint8_t                                    u_flags;                    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .uFlags
                                                                                  
        SDK_MAGIC_PROPERTIES( "NDR64_UNMRSHL_POINTER_QUEUE_ELEMENT.$", 0x48, true, 0x255fe3be010d62 );                          
        SDK_FIXED_SIZE( ndr64_unmrshl_pointer_queue_element_t, 0x48 );                          
    };                                                                            
};
#include "magic/ndr64_unmrshl_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr64_unmrshl_pointer_queue_element_t, 0x48 );
