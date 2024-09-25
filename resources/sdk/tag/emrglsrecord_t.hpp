#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrglsrecord_t.start.hpp"
namespace tag
{
    // [struct tagEMRGLSRECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrglsrecord_t                   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 struct tag::emr_t      emr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t               cb_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cbData
        _m02 sdk::array<uint8_t, 1> data;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRGLSRECORD.$", 0x10, true, 0x9f06be4837c65ce );        
        SDK_FIXED_SIZE( emrglsrecord_t, 0x10 );        
    };                                      
};
#include "magic/emrglsrecord_t.end.hpp"
SDK_VERIFY( struct tag::emrglsrecord_t, 0x10 );
