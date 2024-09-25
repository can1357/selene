#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buffer_context_t.start.hpp"
namespace etw
{
    // [struct _ETW_BUFFER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct buffer_context_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint8_t  processor_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorNumber
        _m01 uint8_t  alignment;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 uint16_t processor_index;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorIndex
        _m03 uint16_t logger_id;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .LoggerId
                                       
        SDK_MAGIC_PROPERTIES( "_ETW_BUFFER_CONTEXT.$", 0x4, true, 0x8503378669181c1e );                 
        SDK_FIXED_SIZE( buffer_context_t, 0x4 );                 
    };                                 
};
#include "magic/buffer_context_t.end.hpp"
SDK_VERIFY( struct etw::buffer_context_t, 0x4 );
