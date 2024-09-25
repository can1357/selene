#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_callback_context_t.start.hpp"
namespace cc
{
    // [struct _CC_ERROR_CALLBACK_CONTEXT]
    // => WDK 10 (NV)
    //
    struct error_callback_context_t 
    {                               
        // WDK 10                   
        //                          
        _m00 int16_t node_byte_size;  //{ +0x0000    } | .NodeByteSize
        _m01 int32_t error_code;      //{ +0x0004    } | .ErrorCode
                                    
        SDK_NONVOL_PROPERTIES( "_CC_ERROR_CALLBACK_CONTEXT.$", 0x0, false, 0x992fdbe59bd5a438 );               
        SDK_FIXED_SIZE( error_callback_context_t, 0x8 );               
    };                              
};
#include "magic/error_callback_context_t.end.hpp"
SDK_VERIFY( struct cc::error_callback_context_t, 0x8 );
