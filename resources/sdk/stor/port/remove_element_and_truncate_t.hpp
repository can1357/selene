#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remove_element_and_truncate_t.start.hpp"
namespace stor::port
{
    // [struct _REMOVE_ELEMENT_AND_TRUNCATE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remove_element_and_truncate_t               
    {                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint8_t                operation_code;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;      //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 8> requested_capacity;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RequestedCapacity
        _m03 sdk::array<uint8_t, 4> element_identifier;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ElementIdentifier
        _m04 uint8_t                control;             //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                       
        SDK_NONVOL_PROPERTIES( "_REMOVE_ELEMENT_AND_TRUNCATE.$", 0x10, true, 0x3c2674cceda7f15d );                   
        SDK_FIXED_SIZE( remove_element_and_truncate_t, 0x10 );                   
    };                                                 
};
#include "magic/remove_element_and_truncate_t.end.hpp"
SDK_VERIFY( struct stor::port::remove_element_and_truncate_t, 0x10 );
