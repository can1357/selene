#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { struct i_unknown_t; }

#include "magic/interfaceinfo_t.start.hpp"
namespace tag
{
    // [struct tagINTERFACEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interfaceinfo_t                     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 struct win::i_unknown_t* p_unk;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pUnk
        _m01 struct nt::guid_t        iid;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iid
        _m02 uint16_t                 w_method;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .wMethod
                                               
        SDK_MAGIC_PROPERTIES( "tagINTERFACEINFO.$", 0x20, true, 0x441b273e5fdf1720 );         
        SDK_FIXED_SIZE( interfaceinfo_t, 0x20 );         
    };                                         
};
#include "magic/interfaceinfo_t.end.hpp"
SDK_VERIFY( struct tag::interfaceinfo_t, 0x20 );
