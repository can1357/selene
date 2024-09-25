#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/s_multi_guid_key_t.start.hpp"
namespace win
{
    // [struct SMultiGUIDKey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_multi_guid_key_t          
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                             
        _m00 int32_t            c_guid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cGUID
        _m01 struct nt::guid_t* a_guid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aGUID
                                       
        SDK_MAGIC_PROPERTIES( "SMultiGUIDKey.$", 0x10, true, 0xf9eb24a645355427 );       
        SDK_FIXED_SIZE( s_multi_guid_key_t, 0x10 );       
    };                                 
};
#include "magic/s_multi_guid_key_t.end.hpp"
SDK_VERIFY( struct win::s_multi_guid_key_t, 0x10 );
