#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/psfeature_output_t.start.hpp"
namespace win
{
    // [struct _PSFEATURE_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct psfeature_output_t           
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 int32_t b_page_independent;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bPageIndependent
        _m01 int32_t b_set_page_device;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .bSetPageDevice
                                        
        SDK_NONVOL_PROPERTIES( "_PSFEATURE_OUTPUT.$", 0x8, true, 0xe5f14c5fdc77ceaf );                   
        SDK_FIXED_SIZE( psfeature_output_t, 0x8 );                   
    };                                  
};
#include "magic/psfeature_output_t.end.hpp"
SDK_VERIFY( struct win::psfeature_output_t, 0x8 );
