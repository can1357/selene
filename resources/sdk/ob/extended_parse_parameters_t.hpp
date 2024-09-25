#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ejob_t; }

#include "magic/extended_parse_parameters_t.start.hpp"
namespace ob
{
    // [struct _OB_EXTENDED_PARSE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_parse_parameters_t                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                             
        _m00 uint16_t           length;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t           restricted_access_mask;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RestrictedAccessMask
        _m02 struct nt::ejob_t* silo;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Silo
                                                       
        SDK_MAGIC_PROPERTIES( "_OB_EXTENDED_PARSE_PARAMETERS.$", 0x10, true, 0xf342be4c39a790e8 );                       
        SDK_FIXED_SIZE( extended_parse_parameters_t, 0x10 );                       
    };                                                 
};
#include "magic/extended_parse_parameters_t.end.hpp"
SDK_VERIFY( struct ob::extended_parse_parameters_t, 0x10 );
