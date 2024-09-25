#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_identification_description_header_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_11]
    // => Windows 10 v1607
    //
    struct child_identification_description_header_v1_11_t
    {                                                     
        // Windows 10 v1607                                
        //                                            
        _m00 uint32_t identification_description_size;      //{ +0x0000    } | .IdentificationDescriptionSize
                                                          
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_11.$", 0x0, false, 0xab12e7f5207ddc5b );                                
        SDK_FIXED_SIZE( child_identification_description_header_v1_11_t, 0x4 );                                
    };                                                    
};
#include "magic/child_identification_description_header_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::child_identification_description_header_v1_11_t, 0x4 );
