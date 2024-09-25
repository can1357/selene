#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_identification_description_header_v1_1_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_1]
    // => Windows 10 v1607
    //
    struct child_identification_description_header_v1_1_t
    {                                                    
        // Windows 10 v1607                                
        //                                            
        _m00 uint32_t identification_description_size;     //{ +0x0000    } | .IdentificationDescriptionSize
                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_1.$", 0x0, false, 0xf58257a0c2f1f7d0 );                                
        SDK_FIXED_SIZE( child_identification_description_header_v1_1_t, 0x4 );                                
    };                                                   
};
#include "magic/child_identification_description_header_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::child_identification_description_header_v1_1_t, 0x4 );
