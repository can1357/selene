#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_position_information_t.start.hpp"
namespace win
{
    // [struct _FILE_POSITION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_position_information_t   
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 int64_t current_byte_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentByteOffset
                                         
        SDK_NONVOL_PROPERTIES( "_FILE_POSITION_INFORMATION.$", 0x8, true, 0x8048f8b75291bdc9 );                    
        SDK_FIXED_SIZE( file_position_information_t, 0x8 );                    
    };                                   
};
#include "magic/file_position_information_t.end.hpp"
SDK_VERIFY( struct win::file_position_information_t, 0x8 );
