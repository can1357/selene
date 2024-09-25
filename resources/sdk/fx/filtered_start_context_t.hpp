#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }

#include "magic/filtered_start_context_t.start.hpp"
namespace fx
{
    class pkg_fdo_t;

    // [struct FxFilteredStartContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filtered_start_context_t                           
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 class fx::pkg_fdo_t*        pkg_fdo;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PkgFdo
        _m01 struct cm::resource_list_t* resources_raw;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourcesRaw
        _m02 struct cm::resource_list_t* resources_translated;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourcesTranslated
                                                              
        SDK_MAGIC_PROPERTIES( "FxFilteredStartContext.$", 0x18, true, 0xca8186e42e460cb8 );                     
        SDK_FIXED_SIZE( filtered_start_context_t, 0x18 );                     
    };                                                        
};
#include "magic/filtered_start_context_t.end.hpp"
SDK_VERIFY( struct fx::filtered_start_context_t, 0x18 );
