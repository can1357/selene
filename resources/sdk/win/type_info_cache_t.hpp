#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/type_info_cache_t.start.hpp"
namespace win
{
    struct type_info_vtbl_t;

    // [struct TypeInfoCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct type_info_cache_t                             
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                               
        _m00 struct nt::guid_t             iid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iid
        _m01 struct win::type_info_vtbl_t* p_vtbl;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pVtbl
        _m02 uint32_t                      dw_tick_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwTickCount
                                                         
        SDK_MAGIC_PROPERTIES( "TypeInfoCache.$", 0x20, true, 0x28257acea9169b12 );              
        SDK_FIXED_SIZE( type_info_cache_t, 0x20 );              
    };                                                   
};
#include "magic/type_info_cache_t.end.hpp"
SDK_VERIFY( struct win::type_info_cache_t, 0x20 );
