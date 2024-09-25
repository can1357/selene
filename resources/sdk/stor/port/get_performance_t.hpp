#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_performance_t.start.hpp"
namespace stor::port
{
    // [struct _GET_PERFORMANCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct get_performance_t                                      
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                        
        _m00 uint8_t                operation_code;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint2_t                except;                         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Except
        _m02 uint1_t                write;                          //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .Write
        _m03 uint2_t                tolerance;                      //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .Tolerance
        _m04 sdk::array<uint8_t, 4> starting_lba;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StartingLBA
        _m05 sdk::array<uint8_t, 2> maximum_number_of_descriptors;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumNumberOfDescriptors
        _m06 uint8_t                type;                           //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .Type
        _m07 uint8_t                control;                        //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                                  
        SDK_NONVOL_PROPERTIES( "_GET_PERFORMANCE.$", 0xc, true, 0x97329b011747a54f );                              
        SDK_FIXED_SIZE( get_performance_t, 0xc );                              
    };                                                            
};
#include "magic/get_performance_t.end.hpp"
SDK_VERIFY( struct stor::port::get_performance_t, 0xc );
