#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/emr_t.start.hpp"
namespace tag
{
    // [struct tagEMR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emr_t             
    {                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t i_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .iType
        _m01 uint32_t n_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .nSize
                             
        SDK_NONVOL_PROPERTIES( "tagEMR.$", 0x8, true, 0x74a3096d0439f4e3 );       
        SDK_FIXED_SIZE( emr_t, 0x8 );       
    };                       
};
#include "magic/emr_t.end.hpp"
SDK_VERIFY( struct tag::emr_t, 0x8 );
