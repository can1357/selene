#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_supported_pages_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_SUPPORTED_PAGES_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_supported_pages_page_t                  
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint5_t             device_type;            //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t             device_type_qualifier;  //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t             page_code;              //{ +0x0001    } | .PageCode
        _m03 uint8_t             page_length;            //{ +0x0003    } | .PageLength
        _m04 sdk::array<uint8_t> supported_page_list;    //{ +0x0004    } | .SupportedPageList
                                                       
        SDK_NONVOL_PROPERTIES( "_VPD_SUPPORTED_PAGES_PAGE.$", 0x0, false, 0x5d0b9af860705239 );                      
        SDK_FIXED_SIZE( vpd_supported_pages_page_t, 0x4 );                      
    };                                                 
};
#include "magic/vpd_supported_pages_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_supported_pages_page_t, 0x4 );
