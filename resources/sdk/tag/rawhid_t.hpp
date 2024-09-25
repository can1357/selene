#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rawhid_t.start.hpp"
namespace tag
{
    // [struct tagRAWHID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawhid_t                             
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               dw_size_hid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeHid
        _m01 uint32_t               dw_count;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwCount
        _m02 sdk::array<uint8_t, 1> b_raw_data;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bRawData
                                                
        SDK_MAGIC_PROPERTIES( "tagRAWHID.$", 0xc, true, 0x6329b8a8d8422ac4 );            
        SDK_FIXED_SIZE( rawhid_t, 0xc );            
    };                                          
};
#include "magic/rawhid_t.end.hpp"
SDK_VERIFY( struct tag::rawhid_t, 0xc );
