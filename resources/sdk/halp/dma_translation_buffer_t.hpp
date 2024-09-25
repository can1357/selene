#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dma_translation_buffer_t.start.hpp"
namespace halp
{
    struct dma_translation_entry_t;
    struct dma_translation_buffer_t;

    // [struct _HALP_DMA_TRANSLATION_BUFFER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_translation_buffer_t                             
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                      
        _m00 struct halp::dma_translation_buffer_t* next;         //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                               entry_count;  //{ +0x0008    +0x0008    +0x0008    } | .EntryCount
        _m02 struct halp::dma_translation_entry_t*  entries;      //{ +0x0010    +0x0010    +0x0010    } | .Entries
                                                                
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_TRANSLATION_BUFFER.$", 0x18, true, 0x5803367cc2c93cbe );            
        SDK_FIXED_SIZE( dma_translation_buffer_t, 0x18 );            
    };                                                          
};
#include "magic/dma_translation_buffer_t.end.hpp"
SDK_VERIFY( struct halp::dma_translation_buffer_t, 0x18 );
