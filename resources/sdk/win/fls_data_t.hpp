#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fls_data_t.start.hpp"
namespace win
{
    // [struct _FLS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fls_data_t                     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 nt::list_entry_t       entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 sdk::array<void*, 128> slots;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Slots
                                          
        SDK_MAGIC_PROPERTIES( "_FLS_DATA.$", 0x410, true, 0xdfcd7b3528f666b9 );      
        SDK_FIXED_SIZE( fls_data_t, 0x410 );      
    };                                    
};
#include "magic/fls_data_t.end.hpp"
SDK_VERIFY( struct win::fls_data_t, 0x410 );
