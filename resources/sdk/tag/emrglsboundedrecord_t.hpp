#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrglsboundedrecord_t.start.hpp"
namespace tag
{
    // [struct tagEMRGLSBOUNDEDRECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrglsboundedrecord_t               
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 struct tag::emr_t      emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t    rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t               cb_data;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cbData
        _m03 sdk::array<uint8_t, 1> data;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Data
                                               
        SDK_NONVOL_PROPERTIES( "tagEMRGLSBOUNDEDRECORD.$", 0x20, true, 0xe3128b7b45939852 );           
        SDK_FIXED_SIZE( emrglsboundedrecord_t, 0x20 );           
    };                                         
};
#include "magic/emrglsboundedrecord_t.end.hpp"
SDK_VERIFY( struct tag::emrglsboundedrecord_t, 0x20 );
