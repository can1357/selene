#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_elam_certificate_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ELAM_CERTIFICATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_elam_certificate_information_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                          
        _m00 void* elam_driver_file;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ElamDriverFile
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ELAM_CERTIFICATE_INFORMATION.$", 0x8, true, 0x3601b0b286951608 );                 
        SDK_FIXED_SIZE( system_elam_certificate_information_t, 0x8 );                 
    };                                          
};
#include "magic/system_elam_certificate_information_t.end.hpp"
SDK_VERIFY( struct win::system_elam_certificate_information_t, 0x8 );
