#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/slot_table_information_t.start.hpp"
namespace nt
{
    // [struct _SLOT_TABLE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct slot_table_information_t
    {                              
        // WDK 10                 
        //                        
        _m00 uint1_t disc_changed;   //{ +0x0000@0  } | .DiscChanged
        _m01 uint1_t disc_present;   //{ +0x0000@7  } | .DiscPresent
                                   
        SDK_NONVOL_PROPERTIES( "_SLOT_TABLE_INFORMATION.$", 0x0, false, 0x9cd1d22cf6729d2 );             
        SDK_FIXED_SIZE( slot_table_information_t, 0x4 );             
    };                             
};
#include "magic/slot_table_information_t.end.hpp"
SDK_VERIFY( struct nt::slot_table_information_t, 0x4 );
