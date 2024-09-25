#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/drive_letter_curdir_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DRIVE_LETTER_CURDIR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct drive_letter_curdir_t       
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 uint16_t       flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint16_t       length;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Length
        _m02 uint32_t       time_stamp;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeStamp
        _m03 nt::ascii_view dos_path;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DosPath
                                       
        SDK_NONVOL_PROPERTIES( "_RTL_DRIVE_LETTER_CURDIR.$", 0x18, true, 0x805824126d5b7434 );           
        SDK_FIXED_SIZE( drive_letter_curdir_t, 0x18 );           
    };                                 
};
#include "magic/drive_letter_curdir_t.end.hpp"
SDK_VERIFY( struct rtl::drive_letter_curdir_t, 0x18 );
