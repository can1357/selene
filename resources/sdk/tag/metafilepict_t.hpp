#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hmetafile_t; }

#include "magic/metafilepict_t.start.hpp"
namespace tag
{
    // [struct tagMETAFILEPICT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct metafilepict_t                   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                  
        _m00 int32_t                  mm;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .mm
        _m01 int32_t                  x_ext;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .xExt
        _m02 int32_t                  y_ext;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .yExt
        _m03 struct win::hmetafile_t* h_mf;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .hMF
                                            
        SDK_NONVOL_PROPERTIES( "tagMETAFILEPICT.$", 0x18, true, 0xab4e2edbfacb1af3 );      
        SDK_FIXED_SIZE( metafilepict_t, 0x18 );      
    };                                      
};
#include "magic/metafilepict_t.end.hpp"
SDK_VERIFY( struct tag::metafilepict_t, 0x18 );
