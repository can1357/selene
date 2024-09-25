#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrextescape_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTESCAPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrextescape_t                       
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 struct tag::emr_t      emr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 int32_t                i_escape;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iEscape
        _m02 int32_t                cb_esc_data;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cbEscData
        _m03 sdk::array<uint8_t, 1> esc_data;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EscData
                                                
        SDK_NONVOL_PROPERTIES( "tagEMREXTESCAPE.$", 0x14, true, 0x61ab6c09062c3e0e );            
        SDK_FIXED_SIZE( emrextescape_t, 0x14 );            
    };                                          
};
#include "magic/emrextescape_t.end.hpp"
SDK_VERIFY( struct tag::emrextescape_t, 0x14 );
