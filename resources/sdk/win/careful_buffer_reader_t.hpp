#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/careful_buffer_reader_t.start.hpp"
namespace win
{
    // [class CarefulBufferReader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class careful_buffer_reader_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t* p_buffer;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pBuffer
        _m01 uint64_t cb_buffer;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbBuffer
                                 
        SDK_MAGIC_PROPERTIES( "CarefulBufferReader.$", 0x10, true, 0x651b314a7c4da2e7 );          
        SDK_FIXED_SIZE( careful_buffer_reader_t, 0x10 );          
    };                           
};
#include "magic/careful_buffer_reader_t.end.hpp"
SDK_VERIFY( class win::careful_buffer_reader_t, 0x10 );
