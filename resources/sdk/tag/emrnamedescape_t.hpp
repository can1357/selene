#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrnamedescape_t.start.hpp"
namespace tag
{
    // [struct tagEMRNAMEDESCAPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrnamedescape_t                     
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct tag::emr_t      emr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 int32_t                i_escape;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iEscape
        _m02 int32_t                cb_driver;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cbDriver
        _m03 int32_t                cb_esc_data;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cbEscData
        _m04 sdk::array<uint8_t, 1> esc_data;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .EscData
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRNAMEDESCAPE.$", 0x18, true, 0x8238f4689566a52d );            
        SDK_FIXED_SIZE( emrnamedescape_t, 0x18 );            
    };                                          
};
#include "magic/emrnamedescape_t.end.hpp"
SDK_VERIFY( struct tag::emrnamedescape_t, 0x18 );
