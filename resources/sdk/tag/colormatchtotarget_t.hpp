#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/colormatchtotarget_t.start.hpp"
namespace tag
{
    // [struct tagCOLORMATCHTOTARGET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct colormatchtotarget_t               
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct tag::emr_t      emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t               dw_action;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwAction
        _m02 uint32_t               dw_flags;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
        _m03 uint32_t               cb_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cbName
        _m04 uint32_t               cb_data;    //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .cbData
        _m05 sdk::array<uint8_t, 1> data;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
                                              
        SDK_NONVOL_PROPERTIES( "tagCOLORMATCHTOTARGET.$", 0x1c, true, 0x57727dda1e468a3b );          
        SDK_FIXED_SIZE( colormatchtotarget_t, 0x1c );          
    };                                        
};
#include "magic/colormatchtotarget_t.end.hpp"
SDK_VERIFY( struct tag::colormatchtotarget_t, 0x1c );
