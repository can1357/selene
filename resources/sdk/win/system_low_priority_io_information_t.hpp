#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_low_priority_io_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_LOW_PRIORITY_IO_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_low_priority_io_information_t             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                  
        _m00 uint32_t low_pri_read_operations;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPriReadOperations
        _m01 uint32_t low_pri_write_operations;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LowPriWriteOperations
        _m02 uint32_t kernel_bumped_to_normal_operations;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KernelBumpedToNormalOperations
        _m03 uint32_t low_pri_paging_read_operations;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LowPriPagingReadOperations
        _m04 uint32_t kernel_paging_reads_bumped_to_normal;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelPagingReadsBumpedToNormal
        _m05 uint32_t low_pri_paging_write_operations;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LowPriPagingWriteOperations
        _m06 uint32_t kernel_paging_writes_bumped_to_normal;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KernelPagingWritesBumpedToNormal
        _m07 uint32_t boosted_irp_count;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .BoostedIrpCount
        _m08 uint32_t boosted_paging_irp_count;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BoostedPagingIrpCount
        _m09 uint32_t blanket_boost_count;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .BlanketBoostCount
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.$", 0x28, true, 0x5c1a117bd8e496fd );                                      
        SDK_FIXED_SIZE( system_low_priority_io_information_t, 0x28 );                                      
    };                                                      
};
#include "magic/system_low_priority_io_information_t.end.hpp"
SDK_VERIFY( struct win::system_low_priority_io_information_t, 0x28 );
