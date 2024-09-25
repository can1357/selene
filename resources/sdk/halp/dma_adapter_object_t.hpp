#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/adapter_t.hpp"
#include "dma_translation_buffer_position_t.hpp"

namespace rtl { struct bitmap_t; }

#include "magic/dma_adapter_object_t.start.hpp"
namespace halp
{
    struct dma_translation_entry_t;
    struct dma_translation_buffer_t;

    // [struct _HALP_DMA_ADAPTER_OBJECT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_adapter_object_t                                                                                
    {                                                                                                          
        struct u0_crash_dump_t                                                                                 
        {                                                                                                      
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                                                 
            _m08 struct halp::dma_translation_buffer_position_t contiguous_hint;                                 //{ +0x0000    +0x0000    +0x0000    } | .ContiguousHint
            _m09 struct halp::dma_translation_buffer_position_t scatter_hint;                                    //{ +0x0010    +0x0010    +0x0010    } | .ScatterHint
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_HALP_DMA_ADAPTER_OBJECT.CrashDump.$", 0x20, true, 0x3dc5b6b46363f789 );                                               
            SDK_FIXED_SIZE( u0_crash_dump_t, 0x20 );                                                           
        };                                                                                                     
                                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                     
        _m00 struct dma::adapter_t                                              dma_header;                      //{ +0x0000    +0x0000    +0x0000    } | .DmaHeader
        _m01 struct rtl::bitmap_t*                                              contiguous_map_registers;        //{ +0x0010    +0x0018    +0x0010    } | .ContiguousMapRegisters
        _m02 struct halp::dma_translation_entry_t*                              scatter_buffer_list_head;        //{ +0x0018    +0x0020    +0x0018    } | .ScatterBufferListHead
        _m03 uint32_t                                                           number_of_free_scatter_buffers;  //{ +0x0020    +0x0028    +0x0020    } | .NumberOfFreeScatterBuffers
        _m04 struct halp::dma_translation_buffer_t*                             contiguous_translations;         //{ +0x0028    +0x0030    +0x0028    } | .ContiguousTranslations
        _m05 struct halp::dma_translation_buffer_t*                             scatter_translations;            //{ +0x0030    +0x0038    +0x0030    } | .ScatterTranslations
        _m06 struct halp::dma_translation_buffer_position_t                     contiguous_translation_end;      //{ +0x0038    +0x0040    +0x0038    } | .ContiguousTranslationEnd
        _m07 struct halp::dma_translation_buffer_position_t                     scatter_translation_end;         //{ +0x0048    +0x0050    +0x0048    } | .ScatterTranslationEnd
        _m10 u0_crash_dump_t                                                    crash_dump;                      //{ +0x0058    +0x0060    +0x0058    } | .CrashDump
        _m11 uint64_t                                                           spin_lock;                       //{ +0x0078    +0x0080    +0x0078    } | .SpinLock
        _m12 uint64_t                                                           grow_lock;                       //{ +0x0080    +0x0088    +0x0080    } | .GrowLock
        _m13 int64_t                                                            maximum_physical_address;        //{ +0x0088    +0x0090    +0x0088    } | .MaximumPhysicalAddress
        _m14 uint8_t                                                            is_master_adapter;               //{ +0x0090    +0x0098    +0x0090    } | .IsMasterAdapter
        _m15 uint8_t                                                            dma_can_cross64k;                //{ +0x0091    +0x0099    +0x0091    } | .DmaCanCross64K
        _m16 uint32_t                                                           library_version;                 //{ +0x0094    +0x009c    +0x0094    } | .LibraryVersion
                                                                                                               
        // Windows 11                                                                                          
        //                                                                                                     
        _m17 uint32_t                                                           signature;                       //{ +0x0010    } | .Signature
                                                                                                               
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_ADAPTER_OBJECT.$", 0x98, true, 0x1575834f8dda6fe6 );                               
        SDK_DYNAMIC_SIZE( dma_adapter_object_t );                                                              
    };                                                                                                         
};
#include "magic/dma_adapter_object_t.end.hpp"
SDK_VERIFY( struct halp::dma_adapter_object_t::u0_crash_dump_t, 0x20 );
