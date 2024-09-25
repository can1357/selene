#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_identification_description_header_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_9]
    // => Windows 10 v1607
    //
    struct child_identification_description_header_v1_9_t
    {                                                    
        // Windows 10 v1607                                
        //                                            
        _m00 uint32_t identification_description_size;     //{ +0x0000    } | .IdentificationDescriptionSize
                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_9.$", 0x0, false, 0x7a28a90f007a3b20 );                                
        SDK_FIXED_SIZE( child_identification_description_header_v1_9_t, 0x4 );                                
    };                                                   
};
#include "magic/child_identification_description_header_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::child_identification_description_header_v1_9_t, 0x4 );
