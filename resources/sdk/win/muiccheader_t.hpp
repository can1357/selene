#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muiccheader_t.start.hpp"
namespace win
{
    // [struct _MUICCHEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muiccheader_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t ul_max_strings_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulMaxStringsSize
        _m01 uint32_t ul_size_strings;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulSizeStrings
        _m02 uint32_t ul_max_num_installed_cultures;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulMaxNumInstalledCultures
        _m03 uint32_t ul_num_installed_cultures;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulNumInstalledCultures
        _m04 uint32_t ul_max_num_unverified_cultures;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulMaxNumUnverifiedCultures
        _m05 uint32_t ul_num_unverified_cultures;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulNumUnverifiedCultures
                                                     
        SDK_MAGIC_PROPERTIES( "_MUICCHEADER.$", 0x18, true, 0x75b7ec90305365aa );                               
        SDK_FIXED_SIZE( muiccheader_t, 0x18 );                               
    };                                               
};
#include "magic/muiccheader_t.end.hpp"
SDK_VERIFY( struct win::muiccheader_t, 0x18 );
