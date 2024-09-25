#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"

#include "magic/harderror_msg_t.start.hpp"
namespace win
{
    // [struct _HARDERROR_MSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct harderror_msg_t                                           
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 struct nt::port_message_t h;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .h
        _m01 int32_t                   status;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Status
        _m02 int64_t                   error_time;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ErrorTime
        _m03 uint32_t                  valid_response_options;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ValidResponseOptions
        _m04 uint32_t                  response;                       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .Response
        _m05 uint32_t                  number_of_parameters;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NumberOfParameters
        _m06 uint32_t                  unicode_string_parameter_mask;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .UnicodeStringParameterMask
        _m07 sdk::array<uint64_t, 5>   parameters;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Parameters
                                                                     
        SDK_MAGIC_PROPERTIES( "_HARDERROR_MSG.$", 0x70, true, 0xfdb9487ab917e79f );                              
        SDK_FIXED_SIZE( harderror_msg_t, 0x70 );                              
    };                                                               
};
#include "magic/harderror_msg_t.end.hpp"
SDK_VERIFY( struct win::harderror_msg_t, 0x70 );
