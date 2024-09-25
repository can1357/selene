#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_unmrshl_pointer_queue_element_t.start.hpp"
namespace win
{
    class ndr_pointer_queue_element_t;
    struct ndr_alloc_all_nodes_context_t;

    // [class NDR_UNMRSHL_POINTER_QUEUE_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ndr_unmrshl_pointer_queue_element_t                                           
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                              
        _m00 class win::ndr_pointer_queue_element_t*          p_next;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pNext
        _m01 uint8_t* const*                                  pp_memory;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ppMemory
        _m02 uint8_t const*                                   p_memory;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pMemory
        _m03 int32_t const*                                   p_buffer_pointer;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pBufferPointer
        _m04 const uint8_t const*                             p_format;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pFormat
        _m05 uint8_t const*                                   memory;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Memory
        _m06 const uint8_t                                    u_flags;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .uFlags
        _m07 const uint16_t                                   u_flags2;                   //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .uFlags2
        _m08 const int32_t                                    f_in_dont_free;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .fInDontFree
        _m09 uint8_t const*                                   p_corr_memory;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pCorrMemory
        _m10 struct win::ndr_alloc_all_nodes_context_t const* p_alloc_all_nodes_context;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pAllocAllNodesContext
                                                                                        
        SDK_MAGIC_PROPERTIES( "NDR_UNMRSHL_POINTER_QUEUE_ELEMENT.$", 0x50, true, 0x1fe7ac44a56e5f3a );                          
        SDK_FIXED_SIZE( ndr_unmrshl_pointer_queue_element_t, 0x50 );                          
    };                                                                                  
};
#include "magic/ndr_unmrshl_pointer_queue_element_t.end.hpp"
SDK_VERIFY( class win::ndr_unmrshl_pointer_queue_element_t, 0x50 );
