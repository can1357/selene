#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/discdlgstructa_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct _DISCDLGSTRUCTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct discdlgstructa_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            cb_structure;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 struct win::hwnd_t* hwnd_owner;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndOwner
        _m02 char*               lp_local_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpLocalName
        _m03 char*               lp_remote_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpRemoteName
        _m04 uint32_t            dw_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
                                                
        SDK_MAGIC_PROPERTIES( "_DISCDLGSTRUCTA.$", 0x28, true, 0x2ad6b307478618d3 );               
        SDK_FIXED_SIZE( discdlgstructa_t, 0x28 );               
    };                                          
};
#include "magic/discdlgstructa_t.end.hpp"
SDK_VERIFY( struct win::discdlgstructa_t, 0x28 );
