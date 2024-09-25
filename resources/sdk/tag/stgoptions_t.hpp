#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stgoptions_t.start.hpp"
namespace tag
{
    // [struct tagSTGOPTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stgoptions_t                        
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                     
        _m00 uint16_t       us_version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usVersion
        _m01 uint32_t       ul_sector_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulSectorSize
        _m02 const wchar_t* pwcs_template_file;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwcsTemplateFile
                                               
        SDK_MAGIC_PROPERTIES( "tagSTGOPTIONS.$", 0x10, true, 0x1bf7f21414c2c232 );                   
        SDK_FIXED_SIZE( stgoptions_t, 0x10 );                   
    };                                         
};
#include "magic/stgoptions_t.end.hpp"
SDK_VERIFY( struct tag::stgoptions_t, 0x10 );
