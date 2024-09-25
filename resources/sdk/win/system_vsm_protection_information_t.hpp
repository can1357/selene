#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_vsm_protection_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VSM_PROTECTION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_vsm_protection_information_t     
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                         
        _m00 uint8_t dma_protections_available;      //{ +0x0000    +0x0000    +0x0000    } | .DmaProtectionsAvailable
        _m01 uint8_t dma_protections_in_use;         //{ +0x0001    +0x0001    +0x0001    } | .DmaProtectionsInUse
        _m02 uint8_t hardware_mbec_available;        //{ +0x0002    +0x0002    +0x0002    } | .HardwareMbecAvailable
        _m03 uint8_t apic_virtualization_available;  //{ +0x0003    +0x0003    +0x0003    } | .ApicVirtualizationAvailable
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VSM_PROTECTION_INFORMATION.$", 0x4, true, 0xe15cd748fb343be8 );                              
        SDK_FIXED_SIZE( system_vsm_protection_information_t, 0x4 );                              
    };                                             
};
#include "magic/system_vsm_protection_information_t.end.hpp"
SDK_VERIFY( struct win::system_vsm_protection_information_t, 0x4 );
