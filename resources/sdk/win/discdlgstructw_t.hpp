#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/discdlgstructw_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct _DISCDLGSTRUCTW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct discdlgstructw_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            cb_structure;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 struct win::hwnd_t* hwnd_owner;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndOwner
        _m02 wchar_t*            lp_local_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpLocalName
        _m03 wchar_t*            lp_remote_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpRemoteName
        _m04 uint32_t            dw_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
                                                
        SDK_MAGIC_PROPERTIES( "_DISCDLGSTRUCTW.$", 0x28, true, 0x4e0facda6c201367 );               
        SDK_FIXED_SIZE( discdlgstructw_t, 0x28 );               
    };                                          
};
#include "magic/discdlgstructw_t.end.hpp"
SDK_VERIFY( struct win::discdlgstructw_t, 0x28 );
