#pragma once
#include <sdkgen/support_library.hpp>
#include "information_level_internal_t.hpp"

#include "magic/information_internal_header_t.start.hpp"
namespace power
{
    // [struct _POWER_INFORMATION_INTERNAL_HEADER]
    // => Windows 11
    //
    struct information_internal_header_t                            
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 enum power::information_level_internal_t internal_type;  //{ +0x0000    } | .InternalType
        _m01 uint32_t                                 version;        //{ +0x0004    } | .Version
                                                                    
        SDK_MAGIC_PROPERTIES( "_POWER_INFORMATION_INTERNAL_HEADER.$", 0x0, false, 0xdeedfafe8f019b5a );              
        SDK_FIXED_SIZE( information_internal_header_t, 0x8 );              
    };                                                              
};
#include "magic/information_internal_header_t.end.hpp"
SDK_VERIFY( struct power::information_internal_header_t, 0x8 );
