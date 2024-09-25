#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debughookinfo_t.start.hpp"
namespace tag
{
    // [struct tagDEBUGHOOKINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debughookinfo_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t id_thread;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .idThread
        _m01 uint32_t id_thread_installer;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .idThreadInstaller
        _m02 int64_t  l_param;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lParam
        _m03 uint64_t w_param;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wParam
        _m04 int32_t  code;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .code
                                          
        SDK_MAGIC_PROPERTIES( "tagDEBUGHOOKINFO.$", 0x20, true, 0xa0e25a371698668b );                    
        SDK_FIXED_SIZE( debughookinfo_t, 0x20 );                    
    };                                    
};
#include "magic/debughookinfo_t.end.hpp"
SDK_VERIFY( struct tag::debughookinfo_t, 0x20 );
