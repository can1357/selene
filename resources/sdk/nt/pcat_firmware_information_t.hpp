#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcat_firmware_information_t.start.hpp"
namespace nt
{
    // [struct _PCAT_FIRMWARE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcat_firmware_information_t
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t place_holder;     //{ +0x0000    +0x0000    +0x0000    } | .PlaceHolder
                                      
        SDK_MAGIC_PROPERTIES( "_PCAT_FIRMWARE_INFORMATION.$", 0x4, true, 0x8cf59bb9ca1d7340 );             
        SDK_FIXED_SIZE( pcat_firmware_information_t, 0x4 );             
    };                                
};
#include "magic/pcat_firmware_information_t.end.hpp"
SDK_VERIFY( struct nt::pcat_firmware_information_t, 0x4 );
