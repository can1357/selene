#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_line_binding_description_t.start.hpp"
namespace dma
{
    // [struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_line_binding_description_t
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t request_line;            //{ +0x0000    +0x0000    +0x0000    } | .RequestLine
        _m01 uint32_t channel_number;          //{ +0x0004    +0x0004    +0x0004    } | .ChannelNumber
                                             
        SDK_MAGIC_PROPERTIES( "_DMA_REQUEST_LINE_BINDING_DESCRIPTION.$", 0x8, true, 0xc95012203c267dd7 );               
        SDK_FIXED_SIZE( request_line_binding_description_t, 0x8 );               
    };                                       
};
#include "magic/request_line_binding_description_t.end.hpp"
SDK_VERIFY( struct dma::request_line_binding_description_t, 0x8 );
