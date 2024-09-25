#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/menuitemtemplateheader_t.start.hpp"
namespace win
{
    // [struct MENUITEMTEMPLATEHEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menuitemtemplateheader_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t version_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .versionNumber
        _m01 uint16_t offset;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .offset
                                     
        SDK_MAGIC_PROPERTIES( "MENUITEMTEMPLATEHEADER.$", 0x4, true, 0xb46c1452153b7848 );               
        SDK_FIXED_SIZE( menuitemtemplateheader_t, 0x4 );               
    };                               
};
#include "magic/menuitemtemplateheader_t.end.hpp"
SDK_VERIFY( struct win::menuitemtemplateheader_t, 0x4 );
