#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/modemdevcaps_t.start.hpp"
namespace win
{
    // [struct _MODEMDEVCAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct modemdevcaps_t                                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                       
        _m00 uint32_t               dw_actual_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwActualSize
        _m01 uint32_t               dw_required_size;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRequiredSize
        _m02 uint32_t               dw_dev_specific_offset;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDevSpecificOffset
        _m03 uint32_t               dw_dev_specific_size;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwDevSpecificSize
        _m04 uint32_t               dw_modem_provider_version;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwModemProviderVersion
        _m05 uint32_t               dw_modem_manufacturer_offset;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwModemManufacturerOffset
        _m06 uint32_t               dw_modem_manufacturer_size;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwModemManufacturerSize
        _m07 uint32_t               dw_modem_model_offset;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwModemModelOffset
        _m08 uint32_t               dw_modem_model_size;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwModemModelSize
        _m09 uint32_t               dw_modem_version_offset;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwModemVersionOffset
        _m10 uint32_t               dw_modem_version_size;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwModemVersionSize
        _m11 uint32_t               dw_dial_options;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwDialOptions
        _m12 uint32_t               dw_call_setup_fail_timer;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwCallSetupFailTimer
        _m13 uint32_t               dw_inactivity_timeout;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwInactivityTimeout
        _m14 uint32_t               dw_speaker_volume;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwSpeakerVolume
        _m15 uint32_t               dw_speaker_mode;               //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwSpeakerMode
        _m16 uint32_t               dw_modem_options;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwModemOptions
        _m17 uint32_t               dw_max_dte_rate;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwMaxDTERate
        _m18 uint32_t               dw_max_dce_rate;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwMaxDCERate
        _m19 sdk::array<uint8_t, 1> ab_variable_portion;           //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .abVariablePortion
                                                                 
        SDK_MAGIC_PROPERTIES( "_MODEMDEVCAPS.$", 0x50, true, 0x340cd11f8ba27484 );                             
        SDK_FIXED_SIZE( modemdevcaps_t, 0x50 );                             
    };                                                           
};
#include "magic/modemdevcaps_t.end.hpp"
SDK_VERIFY( struct win::modemdevcaps_t, 0x50 );
