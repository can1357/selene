#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ioring_registered_buffer_t.start.hpp"
namespace nt
{
    // [struct IORING_REGISTERED_BUFFER]
    // => Windows 11
    //
    struct ioring_registered_buffer_t
    {                                
        // Windows 11              
        //                         
        _m00 uint32_t buffer_index;    //{ +0x0000    } | .BufferIndex
        _m01 uint32_t offset;          //{ +0x0004    } | .Offset
                                     
        SDK_MAGIC_PROPERTIES( "IORING_REGISTERED_BUFFER.$", 0x0, false, 0x1ee52db72f141805 );             
        SDK_FIXED_SIZE( ioring_registered_buffer_t, 0x8 );             
    };                               
};
#include "magic/ioring_registered_buffer_t.end.hpp"
SDK_VERIFY( struct nt::ioring_registered_buffer_t, 0x8 );
