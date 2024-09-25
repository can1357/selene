#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_lookup_cdb_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_LOOKUP_CDB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_lookup_cdb_t    
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                         
        _m00 nt::unicode_view name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                   
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_LOOKUP_CDB.$", 0x10, true, 0x8455dd0f82b0add3 );     
        SDK_FIXED_SIZE( service_lookup_cdb_t, 0x10 );     
    };                             
};
#include "magic/service_lookup_cdb_t.end.hpp"
SDK_VERIFY( struct ahc::service_lookup_cdb_t, 0x10 );
