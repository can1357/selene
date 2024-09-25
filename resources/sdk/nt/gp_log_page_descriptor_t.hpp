#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gp_log_page_descriptor_t.start.hpp"
namespace nt
{
    // [struct _GP_LOG_PAGE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct gp_log_page_descriptor_t
    {                              
        // WDK 10                 
        //                        
        _m00 uint16_t log_address;   //{ +0x0000    } | .LogAddress
        _m01 uint16_t log_sectors;   //{ +0x0002    } | .LogSectors
                                   
        SDK_NONVOL_PROPERTIES( "_GP_LOG_PAGE_DESCRIPTOR.$", 0x0, false, 0xd13432c03dc30e05 );            
        SDK_FIXED_SIZE( gp_log_page_descriptor_t, 0x4 );            
    };                             
};
#include "magic/gp_log_page_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::gp_log_page_descriptor_t, 0x4 );
