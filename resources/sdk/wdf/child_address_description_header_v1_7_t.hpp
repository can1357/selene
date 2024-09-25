#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_address_description_header_v1_7_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_7]
    // => Windows 10 v1607
    //
    struct child_address_description_header_v1_7_t
    {                                             
        // Windows 10 v1607                         
        //                                     
        _m00 uint32_t address_description_size;     //{ +0x0000    } | .AddressDescriptionSize
                                                  
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_7.$", 0x0, false, 0x8d1c908c5f9a9019 );                         
        SDK_FIXED_SIZE( child_address_description_header_v1_7_t, 0x4 );                         
    };                                            
};
#include "magic/child_address_description_header_v1_7_t.end.hpp"
SDK_VERIFY( struct wdf::child_address_description_header_v1_7_t, 0x4 );
