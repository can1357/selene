#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pnp_bios_installation_check_t.start.hpp"
namespace cm
{
    // [struct _CM_PNP_BIOS_INSTALLATION_CHECK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pnp_bios_installation_check_t                             
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                           
        _m00 sdk::array<uint8_t, 4> signature;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint8_t                revision;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Revision
        _m02 uint8_t                length;                            //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Length
        _m03 uint16_t               control_field;                     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .ControlField
        _m04 uint8_t                checksum;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Checksum
        _m05 uint32_t               event_flag_address;                //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .EventFlagAddress
        _m06 uint16_t               real_mode_entry_offset;            //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .RealModeEntryOffset
        _m07 uint16_t               real_mode_entry_segment;           //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .RealModeEntrySegment
        _m08 uint16_t               protected_mode_entry_offset;       //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .ProtectedModeEntryOffset
        _m09 uint32_t               protected_mode_code_base_address;  //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .ProtectedModeCodeBaseAddress
        _m10 uint32_t               oem_device_id;                     //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .OemDeviceId
        _m11 uint16_t               real_mode_data_base_address;       //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .RealModeDataBaseAddress
        _m12 uint32_t               protected_mode_data_base_address;  //{ +0x001d    +0x001d    +0x001d    +0x001d    +0x001d    } | .ProtectedModeDataBaseAddress
                                                                     
        SDK_NONVOL_PROPERTIES( "_CM_PNP_BIOS_INSTALLATION_CHECK.$", 0x21, true, 0xef73022941b71da8 );                                 
        SDK_FIXED_SIZE( pnp_bios_installation_check_t, 0x21 );                                 
    };                                                               
};
#include "magic/pnp_bios_installation_check_t.end.hpp"
SDK_VERIFY( struct cm::pnp_bios_installation_check_t, 0x21 );
