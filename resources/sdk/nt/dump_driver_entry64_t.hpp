#pragma once
#include <sdkgen/support_library.hpp>
#include "../ldr/km/data_table_entry_t.hpp"

#include "magic/dump_driver_entry64_t.start.hpp"
namespace nt
{
    // [struct _DUMP_DRIVER_ENTRY64]
    // => WDK 10 (NV)
    //
    struct dump_driver_entry64_t                                   
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                           driver_name_offset;  //{ +0x0000    } | .DriverNameOffset
        _m01 uint32_t                           alignment;           //{ +0x0004    } | .__alignment
        _m02 struct ldr::km::data_table_entry_t ldr_entry;           //{ +0x0008    } | .LdrEntry
                                                                   
        SDK_NONVOL_PROPERTIES( "_DUMP_DRIVER_ENTRY64.$", 0x0, false, 0x1d1d659b7b15b25d );                   
        SDK_FIXED_SIZE( dump_driver_entry64_t, 0xa8 );                   
    };                                                             
};
#include "magic/dump_driver_entry64_t.end.hpp"
SDK_VERIFY( struct nt::dump_driver_entry64_t, 0xa8 );
