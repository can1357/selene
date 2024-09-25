#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrseticmprofile_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETICMPROFILE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrseticmprofile_t                
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                   
        _m00 struct tag::emr_t      emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t               dw_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
        _m02 uint32_t               cb_name;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cbName
        _m03 uint32_t               cb_data;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cbData
        _m04 sdk::array<uint8_t, 1> data;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Data
                                             
        SDK_NONVOL_PROPERTIES( "tagEMRSETICMPROFILE.$", 0x18, true, 0x8de009bc7e25bb6e );         
        SDK_FIXED_SIZE( emrseticmprofile_t, 0x18 );         
    };                                       
};
#include "magic/emrseticmprofile_t.end.hpp"
SDK_VERIFY( struct tag::emrseticmprofile_t, 0x18 );
