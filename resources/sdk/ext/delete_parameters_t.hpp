#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delete_parameters_t.start.hpp"
namespace ext
{
    // [struct _EXT_DELETE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct delete_parameters_t                           
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 uint32_t                    version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 sdk::function<void(void*)>* delete_callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeleteCallback
        _m02 void*                       delete_context;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeleteContext
                                                         
        SDK_NONVOL_PROPERTIES( "_EXT_DELETE_PARAMETERS.$", 0x18, true, 0xc12fcb0f59fdd608 );                
        SDK_FIXED_SIZE( delete_parameters_t, 0x18 );                
    };                                                   
};
#include "magic/delete_parameters_t.end.hpp"
SDK_VERIFY( struct ext::delete_parameters_t, 0x18 );
