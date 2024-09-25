#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_internal_information_t.start.hpp"
namespace win
{
    // [struct _FILE_INTERNAL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_internal_information_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int64_t index_number;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IndexNumber
                                      
        SDK_NONVOL_PROPERTIES( "_FILE_INTERNAL_INFORMATION.$", 0x8, true, 0xc419ce6eb8d2603f );             
        SDK_FIXED_SIZE( file_internal_information_t, 0x8 );             
    };                                
};
#include "magic/file_internal_information_t.end.hpp"
SDK_VERIFY( struct win::file_internal_information_t, 0x8 );
