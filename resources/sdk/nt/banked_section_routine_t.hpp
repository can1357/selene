#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _BANKED_SECTION_ROUTINE]
    // => WDK 10
    //
    struct banked_section_routine_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_BANKED_SECTION_ROUTINE.$", 0x0, false, 0x84daf0d120dcc387 );
        SDK_FIXED_SIZE( banked_section_routine_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::banked_section_routine_t, 0x0 );
