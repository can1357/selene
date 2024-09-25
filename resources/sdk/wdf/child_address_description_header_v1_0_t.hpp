#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_address_description_header_v1_0_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_0]
    // => Windows 10 v1607
    //
    struct child_address_description_header_v1_0_t
    {                                             
        // Windows 10 v1607                         
        //                                     
        _m00 uint32_t address_description_size;     //{ +0x0000    } | .AddressDescriptionSize
                                                  
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_0.$", 0x0, false, 0xa7f29b410852a6a );                         
        SDK_FIXED_SIZE( child_address_description_header_v1_0_t, 0x4 );                         
    };                                            
};
#include "magic/child_address_description_header_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::child_address_description_header_v1_0_t, 0x4 );
