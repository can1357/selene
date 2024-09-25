#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adt_claims_t.start.hpp"
namespace se
{
    // [struct _SE_ADT_CLAIMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adt_claims_t      
    {                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 void*    claims;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Claims
                             
        SDK_NONVOL_PROPERTIES( "_SE_ADT_CLAIMS.$", 0x10, true, 0x12192829ce9e788e );       
        SDK_FIXED_SIZE( adt_claims_t, 0x10 );       
    };                       
};
#include "magic/adt_claims_t.end.hpp"
SDK_VERIFY( struct se::adt_claims_t, 0x10 );
