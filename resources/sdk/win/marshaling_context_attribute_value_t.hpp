#pragma once
#include <sdkgen/support_library.hpp>
#include "co_marshaling_context_attributes_t.hpp"

#include "magic/marshaling_context_attribute_value_t.start.hpp"
namespace win
{
    // [struct MarshalingContextAttributeValue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct marshaling_context_attribute_value_t                     
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                          
        _m00 enum win::co_marshaling_context_attributes_t attribute;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .attribute
        _m01 uint64_t                                     value;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .value
                                                                    
        SDK_MAGIC_PROPERTIES( "MarshalingContextAttributeValue.$", 0x10, true, 0x331f6a746ea894b2 );          
        SDK_FIXED_SIZE( marshaling_context_attribute_value_t, 0x10 );          
    };                                                              
};
#include "magic/marshaling_context_attribute_value_t.end.hpp"
SDK_VERIFY( struct win::marshaling_context_attribute_value_t, 0x10 );
