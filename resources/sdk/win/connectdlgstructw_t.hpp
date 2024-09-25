#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/connectdlgstructw_t.start.hpp"
namespace win
{
    struct hwnd_t;
    struct netresourcew_t;

    // [struct _CONNECTDLGSTRUCTW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct connectdlgstructw_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint32_t                    cb_structure;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 struct win::hwnd_t*         hwnd_owner;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndOwner
        _m02 struct win::netresourcew_t* lp_conn_res;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpConnRes
        _m03 uint32_t                    dw_flags;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwFlags
        _m04 uint32_t                    dw_dev_num;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwDevNum
                                                      
        SDK_MAGIC_PROPERTIES( "_CONNECTDLGSTRUCTW.$", 0x20, true, 0x51bfe22eb3e4b0f2 );             
        SDK_FIXED_SIZE( connectdlgstructw_t, 0x20 );             
    };                                                
};
#include "magic/connectdlgstructw_t.end.hpp"
SDK_VERIFY( struct win::connectdlgstructw_t, 0x20 );
