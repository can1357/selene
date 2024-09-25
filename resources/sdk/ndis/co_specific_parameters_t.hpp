#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_specific_parameters_t.start.hpp"
namespace ndis
{
    // [struct _CO_SPECIFIC_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_specific_parameters_t            
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint32_t               param_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParamType
        _m01 uint32_t               length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 sdk::array<uint8_t, 1> parameters;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
                                               
        SDK_MAGIC_PROPERTIES( "_CO_SPECIFIC_PARAMETERS.$", 0xc, true, 0xf99c7acd39960f8c );           
        SDK_FIXED_SIZE( co_specific_parameters_t, 0xc );           
    };                                         
};
#include "magic/co_specific_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::co_specific_parameters_t, 0xc );
