#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/modemsettings_t.start.hpp"
namespace win
{
    // [struct _MODEMSETTINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct modemsettings_t                                      
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 uint32_t               dw_actual_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwActualSize
        _m01 uint32_t               dw_required_size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRequiredSize
        _m02 uint32_t               dw_dev_specific_offset;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDevSpecificOffset
        _m03 uint32_t               dw_dev_specific_size;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwDevSpecificSize
        _m04 uint32_t               dw_call_setup_fail_timer;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwCallSetupFailTimer
        _m05 uint32_t               dw_inactivity_timeout;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwInactivityTimeout
        _m06 uint32_t               dw_speaker_volume;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwSpeakerVolume
        _m07 uint32_t               dw_speaker_mode;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwSpeakerMode
        _m08 uint32_t               dw_preferred_modem_options;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwPreferredModemOptions
        _m09 uint32_t               dw_negotiated_modem_options;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwNegotiatedModemOptions
        _m10 uint32_t               dw_negotiated_dce_rate;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwNegotiatedDCERate
        _m11 sdk::array<uint8_t, 1> ab_variable_portion;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .abVariablePortion
                                                                
        SDK_MAGIC_PROPERTIES( "_MODEMSETTINGS.$", 0x30, true, 0xbf4b15a2975c99a0 );                            
        SDK_FIXED_SIZE( modemsettings_t, 0x30 );                            
    };                                                          
};
#include "magic/modemsettings_t.end.hpp"
SDK_VERIFY( struct win::modemsettings_t, 0x30 );
