#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/comversion_t.hpp"

#include "magic/c_dest_object_t.start.hpp"
namespace win
{
    // [class CDestObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_dest_object_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 uint32_t                 dw_dest_ctx;   //{ +0x000c    +0x0008    +0x0008    +0x0008    } | ._dwDestCtx
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m01 struct tag::comversion_t dcom_version;  //{ +0x000c    +0x000c    +0x000c    } | ._dcomVersion
                                                   
        // Windows 10 v1607                        
        //                                         
        _m02 struct tag::comversion_t comversion;    //{ +0x0008    } | ._comversion
                                                   
        SDK_MAGIC_PROPERTIES( "CDestObject.$", 0x28, true, 0xddc9fb5e07441ad9 );             
        SDK_DYNAMIC_SIZE( c_dest_object_t );             
    };                                             
};
#include "magic/c_dest_object_t.end.hpp"
