#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ioring_registered_buffer_t.hpp"

#include "magic/ioring_bufferref_t.start.hpp"
namespace os
{
    // [union _NT_IORING_BUFFERREF]
    // => Windows 11
    //
    union ioring_bufferref_t                                    
    {                                                           
        // Windows 11                                           
        //                                                      
        _m00 void*                                 address;       //{ +0x0000    } | .Address
        _m01 struct nt::ioring_registered_buffer_t fixed_buffer;  //{ +0x0000    } | .FixedBuffer
                                                                
        SDK_MAGIC_PROPERTIES( "_NT_IORING_BUFFERREF.$", 0x0, false, 0x66621799c945e9bd );             
        SDK_FIXED_SIZE( ioring_bufferref_t, 0x8 );              
    };                                                          
};
#include "magic/ioring_bufferref_t.end.hpp"
SDK_VERIFY( union os::ioring_bufferref_t, 0x8 );
