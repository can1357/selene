#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_address_description_header_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_11]
    // => Windows 10 v1607
    //
    struct child_address_description_header_v1_11_t
    {                                              
        // Windows 10 v1607                         
        //                                     
        _m00 uint32_t address_description_size;      //{ +0x0000    } | .AddressDescriptionSize
                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_11.$", 0x0, false, 0xe0fd77336f5b441b );                         
        SDK_FIXED_SIZE( child_address_description_header_v1_11_t, 0x4 );                         
    };                                             
};
#include "magic/child_address_description_header_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::child_address_description_header_v1_11_t, 0x4 );
