#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ecp_open_parameters_t.start.hpp"
namespace nt
{
    // [struct _ECP_OPEN_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct ecp_open_parameters_t
    {                           
        // WDK 10           
        //                  
        _m00 uint16_t size;       //{ +0x0000    } | .Size
        _m01 uint32_t flags;      //{ +0x0004    } | .Flags
                                
        SDK_NONVOL_PROPERTIES( "_ECP_OPEN_PARAMETERS.$", 0x0, false, 0x874f538db5fbe335 );      
        SDK_FIXED_SIZE( ecp_open_parameters_t, 0x8 );      
    };                          
};
#include "magic/ecp_open_parameters_t.end.hpp"
SDK_VERIFY( struct nt::ecp_open_parameters_t, 0x8 );
