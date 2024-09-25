#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_sas_slot_information_t.hpp"

#include "magic/ses_protocol_information_t.start.hpp"
namespace nt
{
    // [union _SES_PROTOCOL_INFORMATION]
    // => WDK 10 (NV)
    //
    union ses_protocol_information_t                        
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 struct nt::ses_sas_slot_information_t sas_slot;  //{ +0x0000    } | .SasSlot
                                                            
        SDK_NONVOL_PROPERTIES( "_SES_PROTOCOL_INFORMATION.$", 0x0, false, 0x4fc94ea496b8e952 );         
        SDK_FIXED_SIZE( ses_protocol_information_t, 0x20 );         
    };                                                      
};
#include "magic/ses_protocol_information_t.end.hpp"
SDK_VERIFY( union nt::ses_protocol_information_t, 0x20 );
