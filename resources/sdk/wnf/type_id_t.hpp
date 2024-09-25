#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/type_id_t.start.hpp"
namespace wnf
{
    // [struct _WNF_TYPE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct type_id_t                   
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 struct nt::guid_t type_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeId
                                       
        SDK_NONVOL_PROPERTIES( "_WNF_TYPE_ID.$", 0x10, true, 0x9c972b6796ac0912 );        
        SDK_FIXED_SIZE( type_id_t, 0x10 );        
    };                                 
};
#include "magic/type_id_t.end.hpp"
SDK_VERIFY( struct wnf::type_id_t, 0x10 );
