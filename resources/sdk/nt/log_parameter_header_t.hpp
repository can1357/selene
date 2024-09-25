#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/log_parameter_header_t.start.hpp"
namespace nt
{
    // [struct _LOG_PARAMETER_HEADER]
    // => WDK 10 (NV)
    //
    struct log_parameter_header_t                      
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 sdk::array<uint8_t, 2> parameter_code;      //{ +0x0000    } | .ParameterCode
        _m01 uint8_t                control_byte;        //{ +0x0002    } | .ControlByte
        _m02 uint2_t                format_and_linking;  //{ +0x0002@0  } | .FormatAndLinking
        _m03 uint2_t                tmc;                 //{ +0x0002@2  } | .TMC
        _m04 uint1_t                etc;                 //{ +0x0002@4  } | .ETC
        _m05 uint1_t                tsd;                 //{ +0x0002@5  } | .TSD
        _m06 uint1_t                obsolete;            //{ +0x0002@6  } | .Obsolete
        _m07 uint1_t                du;                  //{ +0x0002@7  } | .DU
        _m08 uint8_t                parameter_length;    //{ +0x0003    } | .ParameterLength
                                                       
        SDK_NONVOL_PROPERTIES( "_LOG_PARAMETER_HEADER.$", 0x0, false, 0x89235f04f8b28a94 );                   
        SDK_FIXED_SIZE( log_parameter_header_t, 0x4 );                   
    };                                                 
};
#include "magic/log_parameter_header_t.end.hpp"
SDK_VERIFY( struct nt::log_parameter_header_t, 0x4 );
