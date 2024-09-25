#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/actrl_alistw_t.start.hpp"
namespace win
{
    struct actrl_property_entryw_t;

    // [struct _ACTRL_ALISTW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct actrl_alistw_t                                                
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                               
        _m00 uint32_t                             c_entries;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cEntries
        _m01 struct win::actrl_property_entryw_t* p_property_access_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPropertyAccessList
                                                                         
        SDK_MAGIC_PROPERTIES( "_ACTRL_ALISTW.$", 0x10, true, 0x12c20ea9a6743565 );                       
        SDK_FIXED_SIZE( actrl_alistw_t, 0x10 );                          
    };                                                                   
};
#include "magic/actrl_alistw_t.end.hpp"
SDK_VERIFY( struct win::actrl_alistw_t, 0x10 );
