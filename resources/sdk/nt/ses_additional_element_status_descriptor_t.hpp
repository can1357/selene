#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_protocol_information_t.hpp"

#include "magic/ses_additional_element_status_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_additional_element_status_descriptor_t                 
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint4_t                              protocol_identifier;  //{ +0x0000@0  } | .ProtocolIdentifier
        _m01 uint1_t                              eip;                  //{ +0x0000@4  } | .EIP
        _m02 uint1_t                              invalid;              //{ +0x0000@7  } | .Invalid
        _m03 uint8_t                              length;               //{ +0x0001    } | .Length
        _m04 uint8_t                              element_index;        //{ +0x0003    } | .ElementIndex
        _m05 union nt::ses_protocol_information_t protocol_info;        //{ +0x0004    } | .ProtocolInfo
                                                                      
        SDK_NONVOL_PROPERTIES( "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.$", 0x0, false, 0xeda46755e540f951 );                    
        SDK_FIXED_SIZE( ses_additional_element_status_descriptor_t, 0x24 );                    
    };                                                                
};
#include "magic/ses_additional_element_status_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_additional_element_status_descriptor_t, 0x24 );
