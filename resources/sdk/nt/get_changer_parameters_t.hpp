#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _GET_CHANGER_PARAMETERS]
    // => WDK 10
    //
    struct get_changer_parameters_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_GET_CHANGER_PARAMETERS.$", 0x0, false, 0x8fafe14e84907cd2 );
        SDK_FIXED_SIZE( get_changer_parameters_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::get_changer_parameters_t, 0x0 );
