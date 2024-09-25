#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpi_record_t.start.hpp"
namespace wmi
{
    // [struct _WMI_DPI_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dpi_record_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t machine_dpi;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MachineDPI
        _m01 uint32_t user_dpi;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UserDPI
                                  
        SDK_MAGIC_PROPERTIES( "_WMI_DPI_RECORD.$", 0x8, true, 0xa5fc01a684d13900 );            
        SDK_FIXED_SIZE( dpi_record_t, 0x8 );            
    };                            
};
#include "magic/dpi_record_t.end.hpp"
SDK_VERIFY( struct wmi::dpi_record_t, 0x8 );
