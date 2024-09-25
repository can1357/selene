#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/supported_security_protocols_parameter_data_t.start.hpp"
namespace nt
{
    // [struct _SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA]
    // => WDK 10 (NV)
    //
    struct supported_security_protocols_parameter_data_t           
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::array<uint8_t, 2> supported_security_list_length;  //{ +0x0006    } | .SupportedSecurityListLength
        _m01 sdk::array<uint8_t>    supported_security_protocol;     //{ +0x0008    } | .SupportedSecurityProtocol
                                                                   
        SDK_NONVOL_PROPERTIES( "_SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA.$", 0x0, false, 0x93549c6a652398e8 );                               
        SDK_FIXED_SIZE( supported_security_protocols_parameter_data_t, 0x8 );                               
    };                                                             
};
#include "magic/supported_security_protocols_parameter_data_t.end.hpp"
SDK_VERIFY( struct nt::supported_security_protocols_parameter_data_t, 0x8 );
