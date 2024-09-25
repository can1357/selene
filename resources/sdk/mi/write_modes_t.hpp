#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_modes_t.start.hpp"
namespace mi
{
    // [struct _MI_WRITE_MODES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_modes_t                        
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 sdk::array<uint64_t, 2> write_type;  //{ +0x0000    +0x0000    +0x0000    } | .WriteType
                                                
        SDK_MAGIC_PROPERTIES( "_MI_WRITE_MODES.$", 0x10, true, 0x1eaea2c1c56f9d12 );           
        SDK_FIXED_SIZE( write_modes_t, 0x10 );           
    };                                          
};
#include "magic/write_modes_t.end.hpp"
SDK_VERIFY( struct mi::write_modes_t, 0x10 );
