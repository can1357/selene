#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_hmetafilepict_t.start.hpp"
namespace tag
{
    // [struct tagRemHMETAFILEPICT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_hmetafilepict_t              
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 int32_t                mm;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mm
        _m01 int32_t                x_ext;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .xExt
        _m02 int32_t                y_ext;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .yExt
        _m03 uint32_t               cb_data;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbData
        _m04 sdk::array<uint8_t, 1> data;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .data
                                            
        SDK_MAGIC_PROPERTIES( "tagRemHMETAFILEPICT.$", 0x14, true, 0x8e05a94b6c2b9f5c );        
        SDK_FIXED_SIZE( rem_hmetafilepict_t, 0x14 );        
    };                                      
};
#include "magic/rem_hmetafilepict_t.end.hpp"
SDK_VERIFY( struct tag::rem_hmetafilepict_t, 0x14 );
