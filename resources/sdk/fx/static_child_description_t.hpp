#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/child_identification_description_header_t.hpp"

#include "magic/static_child_description_t.start.hpp"
namespace fx
{
    class device_t;

    // [struct FxStaticChildDescription]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct static_child_description_t                              
    {                                                              
        using wdf_child_identification_description_header_t = struct wdf::child_identification_description_header_t;       
                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                         
        _m00 wdf_child_identification_description_header_t  header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 class fx::device_t*                            pdo;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pdo
                                                                   
        SDK_MAGIC_PROPERTIES( "FxStaticChildDescription.$", 0x10, true, 0x8e886dc7cb1305b );       
        SDK_FIXED_SIZE( static_child_description_t, 0x10 );        
    };                                                             
};
#include "magic/static_child_description_t.end.hpp"
SDK_VERIFY( struct fx::static_child_description_t, 0x10 );
