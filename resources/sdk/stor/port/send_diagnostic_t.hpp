#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_diagnostic_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_DIAGNOSTIC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_diagnostic_t                              
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                unit_offline;           //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .UnitOffline
        _m02 uint1_t                device_offline;         //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .DeviceOffline
        _m03 uint1_t                self_test;              //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .SelfTest
        _m04 uint1_t                page_format;            //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .PageFormat
        _m05 uint3_t                self_test_code;         //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .SelfTestCode
        _m06 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .ParameterListLength
        _m07 uint8_t                control;                //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_SEND_DIAGNOSTIC.$", 0x6, true, 0xab30bc71c46a40f );                      
        SDK_FIXED_SIZE( send_diagnostic_t, 0x6 );                      
    };                                                    
};
#include "magic/send_diagnostic_t.end.hpp"
SDK_VERIFY( struct stor::port::send_diagnostic_t, 0x6 );
