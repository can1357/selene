#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_ai_reqfi_t.hpp"
#include "_802_11_ai_resfi_t.hpp"

#include "magic/_802_11_association_information_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_ASSOCIATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_association_information_t                               
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                 
        _m00 uint32_t                        length;                         //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t                        available_request_fixed_i_es;   //{ +0x0004    +0x0004    +0x0004    } | .AvailableRequestFixedIEs
        _m02 struct ndis::_802_11_ai_reqfi_t request_fixed_i_es;             //{ +0x0006    +0x0006    +0x0006    } | .RequestFixedIEs
        _m03 uint32_t                        request_ie_length;              //{ +0x0010    +0x0010    +0x0010    } | .RequestIELength
        _m04 uint32_t                        offset_request_i_es;            //{ +0x0014    +0x0014    +0x0014    } | .OffsetRequestIEs
        _m05 uint16_t                        available_response_fixed_i_es;  //{ +0x0018    +0x0018    +0x0018    } | .AvailableResponseFixedIEs
        _m06 struct ndis::_802_11_ai_resfi_t response_fixed_i_es;            //{ +0x001a    +0x001a    +0x001a    } | .ResponseFixedIEs
        _m07 uint32_t                        response_ie_length;             //{ +0x0020    +0x0020    +0x0020    } | .ResponseIELength
        _m08 uint32_t                        offset_response_i_es;           //{ +0x0024    +0x0024    +0x0024    } | .OffsetResponseIEs
                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_ASSOCIATION_INFORMATION.$", 0x28, true, 0x53bb747d48cb28ce );                              
        SDK_FIXED_SIZE( _802_11_association_information_t, 0x28 );                              
    };                                                                     
};
#include "magic/_802_11_association_information_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_association_information_t, 0x28 );
