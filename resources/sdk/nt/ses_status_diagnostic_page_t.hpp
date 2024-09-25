#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_status_descriptor_t.hpp"

#include "magic/ses_status_diagnostic_page_t.start.hpp"
namespace nt
{
    // [struct _SES_STATUS_DIAGNOSTIC_PAGE]
    // => WDK 10 (NV)
    //
    struct ses_status_diagnostic_page_t               
    {                                                 
        using descriptors_t = sdk::array<struct nt::ses_status_descriptor_t, 1>;                  
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint8_t                page_code;          //{ +0x0000    } | .PageCode
        _m01 uint1_t                unrecoverable;      //{ +0x0001@0  } | .Unrecoverable
        _m02 uint1_t                critical;           //{ +0x0001@1  } | .Critical
        _m03 uint1_t                non_critical;       //{ +0x0001@2  } | .NonCritical
        _m04 uint1_t                informational;      //{ +0x0001@3  } | .Informational
        _m05 uint1_t                invalid_operation;  //{ +0x0001@4  } | .InvalidOperation
        _m06 sdk::array<uint8_t, 2> page_length;        //{ +0x0002    } | .PageLength
        _m07 sdk::array<uint8_t, 4> generation_code;    //{ +0x0004    } | .GenerationCode
        _m08 descriptors_t          descriptors;        //{ +0x0008    } | .Descriptors
                                                      
        SDK_NONVOL_PROPERTIES( "_SES_STATUS_DIAGNOSTIC_PAGE.$", 0x0, false, 0x229af3a0aee90ca3 );                  
        SDK_FIXED_SIZE( ses_status_diagnostic_page_t, 0xc );                  
    };                                                
};
#include "magic/ses_status_diagnostic_page_t.end.hpp"
SDK_VERIFY( struct nt::ses_status_diagnostic_page_t, 0xc );
