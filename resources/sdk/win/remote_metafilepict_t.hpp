#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remote_metafilepict_t.start.hpp"
namespace win
{
    struct user_hmetafile_t;

    // [struct _remoteMETAFILEPICT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remote_metafilepict_t                 
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                       
        _m00 int32_t                       mm;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mm
        _m01 int32_t                       x_ext;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .xExt
        _m02 int32_t                       y_ext;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .yExt
        _m03 struct win::user_hmetafile_t* h_mf;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hMF
                                                 
        SDK_MAGIC_PROPERTIES( "_remoteMETAFILEPICT.$", 0x18, true, 0x9652d7c34c666846 );      
        SDK_FIXED_SIZE( remote_metafilepict_t, 0x18 );      
    };                                           
};
#include "magic/remote_metafilepict_t.end.hpp"
SDK_VERIFY( struct win::remote_metafilepict_t, 0x18 );
