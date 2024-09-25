#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ioring_buffer_info_t.start.hpp"
namespace nt
{
    // [struct IORING_BUFFER_INFO]
    // => Windows 11
    //
    struct ioring_buffer_info_t
    {                          
        // Windows 11         
        //                    
        _m00 void*    address;   //{ +0x0000    } | .Address
        _m01 uint32_t length;    //{ +0x0008    } | .Length
                               
        SDK_MAGIC_PROPERTIES( "IORING_BUFFER_INFO.$", 0x0, false, 0x129106c71c240f5 );        
        SDK_FIXED_SIZE( ioring_buffer_info_t, 0x10 );        
    };                         
};
#include "magic/ioring_buffer_info_t.end.hpp"
SDK_VERIFY( struct nt::ioring_buffer_info_t, 0x10 );
