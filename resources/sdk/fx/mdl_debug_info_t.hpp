#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/mdl_debug_info_t.start.hpp"
namespace fx
{
    class object_t;

    // [struct FxMdlDebugInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mdl_debug_info_t             
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                              
        _m00 struct nt::mdl_t*   mdl;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mdl
        _m01 class fx::object_t* owner;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Owner
        _m02 void*               caller;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Caller
                                        
        SDK_MAGIC_PROPERTIES( "FxMdlDebugInfo.$", 0x18, true, 0x5f7eda80380653c6 );       
        SDK_FIXED_SIZE( mdl_debug_info_t, 0x18 );       
    };                                  
};
#include "magic/mdl_debug_info_t.end.hpp"
SDK_VERIFY( struct fx::mdl_debug_info_t, 0x18 );
