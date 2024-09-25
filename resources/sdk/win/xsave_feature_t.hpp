#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xsave_feature_t.start.hpp"
namespace win
{
    struct xsave_vendors_t;

    // [struct _XSAVE_FEATURE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsave_feature_t                           
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 uint32_t                     feature_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 struct win::xsave_vendors_t* vendors;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Vendors
                                                     
        SDK_MAGIC_PROPERTIES( "_XSAVE_FEATURE.$", 0x10, true, 0xdba0c7f84df2ed1 );           
        SDK_FIXED_SIZE( xsave_feature_t, 0x10 );           
    };                                               
};
#include "magic/xsave_feature_t.end.hpp"
SDK_VERIFY( struct win::xsave_feature_t, 0x10 );
