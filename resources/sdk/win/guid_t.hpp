#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/guid_t.start.hpp"
namespace win
{
    // [struct Guid]
    // => Windows 11
    //
    struct guid_t                         
    {                                     
        // Windows 11                     
        //                                
        _m00 uint32_t               data1;  //{ +0x0000    } | .Data1
        _m01 uint16_t               data2;  //{ +0x0004    } | .Data2
        _m02 uint16_t               data3;  //{ +0x0006    } | .Data3
        _m03 sdk::array<uint8_t, 8> data4;  //{ +0x0008    } | .Data4
                                          
        SDK_MAGIC_PROPERTIES( "Guid.$", 0x0, false, 0xf167efbf0b777b05 );      
        SDK_FIXED_SIZE( guid_t, 0x10 );      
    };                                    
};
#include "magic/guid_t.end.hpp"
SDK_VERIFY( struct win::guid_t, 0x10 );
