#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_init_process_data_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_INIT_PROCESS_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_init_process_data_t
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    process_handle;   //{ +0x0000    +0x0000    +0x0000    } | .ProcessHandle
        _m01 void*    data;             //{ +0x0008    +0x0008    +0x0008    } | .Data
        _m02 uint32_t data_size;        //{ +0x0010    +0x0010    +0x0010    } | .DataSize
                                      
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_INIT_PROCESS_DATA.$", 0x18, true, 0x56a3df5129fd45a0 );               
        SDK_FIXED_SIZE( service_init_process_data_t, 0x18 );               
    };                                
};
#include "magic/service_init_process_data_t.end.hpp"
SDK_VERIFY( struct ahc::service_init_process_data_t, 0x18 );
