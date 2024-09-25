#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_identification_description_header_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct child_identification_description_header_t  
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t identification_description_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IdentificationDescriptionSize
                                                      
        SDK_NONVOL_PROPERTIES( "_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER.$", 0x4, true, 0x6b3ec3a84e7f5ac );                                
        SDK_FIXED_SIZE( child_identification_description_header_t, 0x4 );                                
    };                                                
};
#include "magic/child_identification_description_header_t.end.hpp"
SDK_VERIFY( struct wdf::child_identification_description_header_t, 0x4 );
