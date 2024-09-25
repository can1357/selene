#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/entry_t.start.hpp"
namespace win
{
    // [struct ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_t                           
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 const wchar_t*           sz;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sz
        _m01 const struct nt::guid_t* pclsid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pclsid
                                             
        SDK_MAGIC_PROPERTIES( "ENTRY.$", 0x10, true, 0x8d20265f2962b225 );       
        SDK_FIXED_SIZE( entry_t, 0x10 );       
    };                                       
};
#include "magic/entry_t.end.hpp"
SDK_VERIFY( struct win::entry_t, 0x10 );
