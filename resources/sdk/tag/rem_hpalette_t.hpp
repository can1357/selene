#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_hpalette_t.start.hpp"
namespace tag
{
    // [struct tagRemHPALETTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_hpalette_t                   
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               cb_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbData
        _m01 sdk::array<uint8_t, 1> data;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .data
                                            
        SDK_MAGIC_PROPERTIES( "tagRemHPALETTE.$", 0x8, true, 0xea83bc3daf2817e );        
        SDK_FIXED_SIZE( rem_hpalette_t, 0x8 );        
    };                                      
};
#include "magic/rem_hpalette_t.end.hpp"
SDK_VERIFY( struct tag::rem_hpalette_t, 0x8 );
