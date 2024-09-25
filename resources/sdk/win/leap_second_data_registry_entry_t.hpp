#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/leap_second_data_registry_entry_t.start.hpp"
namespace win
{
    // [struct _LEAP_SECOND_DATA_REGISTRY_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct leap_second_data_registry_entry_t
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int16_t year;                    //{ +0x0000    +0x0000    +0x0000    } | .Year
        _m01 int16_t month;                   //{ +0x0002    +0x0002    +0x0002    } | .Month
        _m02 int16_t day;                     //{ +0x0004    +0x0004    +0x0004    } | .Day
        _m03 int16_t hour;                    //{ +0x0006    +0x0006    +0x0006    } | .Hour
        _m04 int16_t flags;                   //{ +0x0008    +0x0008    +0x0008    } | .Flags
                                            
        SDK_MAGIC_PROPERTIES( "_LEAP_SECOND_DATA_REGISTRY_ENTRY.$", 0xc, true, 0xbb7a083a497bddf5 );      
        SDK_FIXED_SIZE( leap_second_data_registry_entry_t, 0xc );      
    };                                      
};
#include "magic/leap_second_data_registry_entry_t.end.hpp"
SDK_VERIFY( struct win::leap_second_data_registry_entry_t, 0xc );
