#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_ea_information_t.start.hpp"
namespace win
{
    // [struct _FILE_EA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_ea_information_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t ea_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EaSize
                                
        SDK_NONVOL_PROPERTIES( "_FILE_EA_INFORMATION.$", 0x4, true, 0xfe6672419a1c3ceb );        
        SDK_FIXED_SIZE( file_ea_information_t, 0x4 );        
    };                          
};
#include "magic/file_ea_information_t.end.hpp"
SDK_VERIFY( struct win::file_ea_information_t, 0x4 );
