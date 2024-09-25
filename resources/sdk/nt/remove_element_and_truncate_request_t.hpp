#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remove_element_and_truncate_request_t.start.hpp"
namespace nt
{
    // [struct _REMOVE_ELEMENT_AND_TRUNCATE_REQUEST]
    // => WDK 10 (NV)
    //
    struct remove_element_and_truncate_request_t
    {                                           
        // WDK 10                        
        //                               
        _m00 uint32_t version;                    //{ +0x0000    } | .Version
        _m01 uint32_t size;                       //{ +0x0004    } | .Size
        _m02 uint64_t request_capacity;           //{ +0x0008    } | .RequestCapacity
        _m03 uint32_t element_identifier;         //{ +0x0010    } | .ElementIdentifier
                                                
        SDK_NONVOL_PROPERTIES( "_REMOVE_ELEMENT_AND_TRUNCATE_REQUEST.$", 0x0, false, 0x816fc835ace74472 );                   
        SDK_FIXED_SIZE( remove_element_and_truncate_request_t, 0x18 );                   
    };                                          
};
#include "magic/remove_element_and_truncate_request_t.end.hpp"
SDK_VERIFY( struct nt::remove_element_and_truncate_request_t, 0x18 );
