#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PROCESSOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_info_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cpu_number;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CpuNumber
        _m01 uint32_t physical_package_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PhysicalPackageId
        _m02 uint32_t core_id;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CoreId
        _m03 uint32_t hyper_thread_id;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HyperThreadID
                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_PROCESSOR_INFO.$", 0x10, true, 0xd57d27b6ba9b9a42 );                    
        SDK_FIXED_SIZE( processor_info_t, 0x10 );                    
    };                                    
};
#include "magic/processor_info_t.end.hpp"
SDK_VERIFY( struct ndis::processor_info_t, 0x10 );
