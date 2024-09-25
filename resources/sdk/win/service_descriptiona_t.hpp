#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_descriptiona_t.start.hpp"
namespace win
{
    // [struct _SERVICE_DESCRIPTIONA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_descriptiona_t 
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 char* lp_description;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpDescription
                                  
        SDK_MAGIC_PROPERTIES( "_SERVICE_DESCRIPTIONA.$", 0x8, true, 0x711269498bd39d91 );               
        SDK_FIXED_SIZE( service_descriptiona_t, 0x8 );               
    };                            
};
#include "magic/service_descriptiona_t.end.hpp"
SDK_VERIFY( struct win::service_descriptiona_t, 0x8 );
