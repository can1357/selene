#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/input_mapping_element_t.start.hpp"
namespace nt
{
    // [struct _INPUT_MAPPING_ELEMENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct input_mapping_element_t     
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t input_mapping_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InputMappingId
                                       
        SDK_NONVOL_PROPERTIES( "_INPUT_MAPPING_ELEMENT.$", 0x4, true, 0x8e1fe3934bfd8288 );                 
        SDK_FIXED_SIZE( input_mapping_element_t, 0x4 );                 
    };                                 
};
#include "magic/input_mapping_element_t.end.hpp"
SDK_VERIFY( struct nt::input_mapping_element_t, 0x4 );
