#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_device_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_device_control_register_t            
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint1_t  correctable_error_enable;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CorrectableErrorEnable
        _m01 uint1_t  non_fatal_error_enable;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NonFatalErrorEnable
        _m02 uint1_t  fatal_error_enable;                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .FatalErrorEnable
        _m03 uint1_t  unsupported_request_error_enable;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .UnsupportedRequestErrorEnable
        _m04 uint1_t  enable_relaxed_order;              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .EnableRelaxedOrder
        _m05 uint3_t  max_payload_size;                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .MaxPayloadSize
        _m06 uint1_t  extended_tag_enable;               //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ExtendedTagEnable
        _m07 uint1_t  phantom_functions_enable;          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PhantomFunctionsEnable
        _m08 uint1_t  aux_power_enable;                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .AuxPowerEnable
        _m09 uint1_t  no_snoop_enable;                   //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .NoSnoopEnable
        _m10 uint3_t  max_read_request_size;             //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .MaxReadRequestSize
        _m11 uint1_t  bridge_config_retry_enable;        //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .BridgeConfigRetryEnable
        _m12 uint1_t  initiate_function_level_reset;     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .InitiateFunctionLevelReset
        _m13 uint16_t as_ushort;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DEVICE_CONTROL_REGISTER.$", 0x2, true, 0x7cda53ccfafc9694 );                                 
        SDK_FIXED_SIZE( express_device_control_register_t, 0x2 );                                 
    };                                                 
};
#include "magic/express_device_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_device_control_register_t, 0x2 );
