#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_get_log_page_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_GET_LOG_PAGE]
    // => Windows 11
    //
    union nvme_cdw11_get_log_page_t           
    {                                         
        // Windows 11                         
        //                                    
        _m00 uint16_t numdu;                    //{ +0x0000@0  } | .NUMDU
        _m01 uint16_t log_specific_identifier;  //{ +0x0000@16 } | .LogSpecificIdentifier
        _m02 uint32_t as_ulong;                 //{ +0x0000    } | .AsUlong
                                              
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_GET_LOG_PAGE.$", 0x0, false, 0x7ce9178df9305417 );                        
        SDK_FIXED_SIZE( nvme_cdw11_get_log_page_t, 0x4 );                        
    };                                        
};
#include "magic/nvme_cdw11_get_log_page_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_get_log_page_t, 0x4 );
