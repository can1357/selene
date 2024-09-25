#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dma_translation_buffer_position_t.start.hpp"
namespace halp
{
    struct dma_translation_buffer_t;

    // [struct _HALP_DMA_TRANSLATION_BUFFER_POSITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_translation_buffer_position_t               
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 struct halp::dma_translation_buffer_t* buffer;  //{ +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t                               offset;  //{ +0x0008    +0x0008    +0x0008    } | .Offset
                                                           
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_TRANSLATION_BUFFER_POSITION.$", 0x10, true, 0xa9054a32e5b95057 );       
        SDK_FIXED_SIZE( dma_translation_buffer_position_t, 0x10 );       
    };                                                     
};
#include "magic/dma_translation_buffer_position_t.end.hpp"
SDK_VERIFY( struct halp::dma_translation_buffer_position_t, 0x10 );
