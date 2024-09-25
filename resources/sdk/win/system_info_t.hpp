#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_info_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t dw_oem_id;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOemId
        _m01 uint16_t w_processor_architecture;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wProcessorArchitecture
        _m02 uint16_t w_reserved;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wReserved
        _m03 uint32_t dw_page_size;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPageSize
        _m04 void*    lp_minimum_application_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpMinimumApplicationAddress
        _m05 void*    lp_maximum_application_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpMaximumApplicationAddress
        _m06 uint64_t dw_active_processor_mask;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwActiveProcessorMask
        _m07 uint32_t dw_number_of_processors;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwNumberOfProcessors
        _m08 uint32_t dw_processor_type;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwProcessorType
        _m09 uint32_t dw_allocation_granularity;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwAllocationGranularity
        _m10 uint16_t w_processor_level;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .wProcessorLevel
        _m11 uint16_t w_processor_revision;            //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .wProcessorRevision
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_INFO.$", 0x30, true, 0x6d0d30776c292e31 );                               
        SDK_FIXED_SIZE( system_info_t, 0x30 );                               
    };                                               
};
#include "magic/system_info_t.end.hpp"
SDK_VERIFY( struct win::system_info_t, 0x30 );
