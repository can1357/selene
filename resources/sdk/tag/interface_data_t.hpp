#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interface_data_t.start.hpp"
namespace tag
{
    // [struct tagInterfaceData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interface_data_t                        
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 uint32_t                  ul_cnt_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulCntData
        _m01 sdk::array<uint8_t, 1024> ab_data;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .abData
                                                   
        SDK_MAGIC_PROPERTIES( "tagInterfaceData.$", 0x404, true, 0x87c2b2184714f89e );            
        SDK_FIXED_SIZE( interface_data_t, 0x404 );            
    };                                             
};
#include "magic/interface_data_t.end.hpp"
SDK_VERIFY( struct tag::interface_data_t, 0x404 );
