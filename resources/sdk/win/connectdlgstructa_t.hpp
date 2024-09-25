#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/connectdlgstructa_t.start.hpp"
namespace win
{
    struct hwnd_t;
    struct netresourcea_t;

    // [struct _CONNECTDLGSTRUCTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct connectdlgstructa_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint32_t                    cb_structure;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 struct win::hwnd_t*         hwnd_owner;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndOwner
        _m02 struct win::netresourcea_t* lp_conn_res;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpConnRes
        _m03 uint32_t                    dw_flags;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwFlags
        _m04 uint32_t                    dw_dev_num;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwDevNum
                                                      
        SDK_MAGIC_PROPERTIES( "_CONNECTDLGSTRUCTA.$", 0x20, true, 0x347fe2ba263b27cf );             
        SDK_FIXED_SIZE( connectdlgstructa_t, 0x20 );             
    };                                                
};
#include "magic/connectdlgstructa_t.end.hpp"
SDK_VERIFY( struct win::connectdlgstructa_t, 0x20 );
