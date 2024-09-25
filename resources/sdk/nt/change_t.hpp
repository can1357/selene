#pragma once
#include <sdkgen/support_library.hpp>
#include "../wil/details_service_reporting_kind_t.hpp"

#include "magic/change_t.start.hpp"
namespace nt
{
    // [struct Change]
    // => Windows 11
    //
    struct change_t                                           
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 enum wil::details_service_reporting_kind_t kind;   //{ +0x0000    } | .kind
        _m01 uint32_t                                   count;  //{ +0x0004    } | .count
                                                              
        SDK_MAGIC_PROPERTIES( "Change.$", 0x0, false, 0x924fc7c8be371b3c );      
        SDK_FIXED_SIZE( change_t, 0x8 );                      
    };                                                        
};
#include "magic/change_t.end.hpp"
SDK_VERIFY( struct nt::change_t, 0x8 );
