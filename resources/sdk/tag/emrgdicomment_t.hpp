#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrgdicomment_t.start.hpp"
namespace tag
{
    // [struct tagEMRGDICOMMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrgdicomment_t                  
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 struct tag::emr_t      emr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t               cb_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cbData
        _m02 sdk::array<uint8_t, 1> data;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRGDICOMMENT.$", 0x10, true, 0x7c46444f494e49b6 );        
        SDK_FIXED_SIZE( emrgdicomment_t, 0x10 );        
    };                                      
};
#include "magic/emrgdicomment_t.end.hpp"
SDK_VERIFY( struct tag::emrgdicomment_t, 0x10 );
