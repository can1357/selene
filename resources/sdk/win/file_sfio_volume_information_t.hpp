#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_sfio_volume_information_t.start.hpp"
namespace win
{
    // [struct _FILE_SFIO_VOLUME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_sfio_volume_information_t         
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t maximum_requests_per_period;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumRequestsPerPeriod
        _m01 uint32_t minimum_period;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MinimumPeriod
        _m02 uint32_t minimum_transfer_size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumTransferSize
                                                  
        SDK_NONVOL_PROPERTIES( "_FILE_SFIO_VOLUME_INFORMATION.$", 0xc, true, 0x1ce22ebb592b1fa );                            
        SDK_FIXED_SIZE( file_sfio_volume_information_t, 0xc );                            
    };                                            
};
#include "magic/file_sfio_volume_information_t.end.hpp"
SDK_VERIFY( struct win::file_sfio_volume_information_t, 0xc );
