#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_guid_t.start.hpp"
namespace win
{
    // [struct __s_GUID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_guid_t                       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 uint32_t               data1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data1
        _m01 uint16_t               data2;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Data2
        _m02 uint16_t               data3;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Data3
        _m03 sdk::array<uint8_t, 8> data4;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data4
                                          
        SDK_MAGIC_PROPERTIES( "__s_GUID.$", 0x10, true, 0x41cf50110e2ee65f );      
        SDK_FIXED_SIZE( s_guid_t, 0x10 );      
    };                                    
};
#include "magic/s_guid_t.end.hpp"
SDK_VERIFY( struct win::s_guid_t, 0x10 );
