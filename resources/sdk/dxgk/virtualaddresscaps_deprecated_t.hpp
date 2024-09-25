#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualaddresscaps_deprecated_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALADDRESSCAPS_DEPRECATED]
    // => WDK 10 (NV)
    //
    struct virtualaddresscaps_deprecated_t          
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint1_t  privileged_memory_supported;    //{ +0x0000@0  } | .PrivilegedMemorySupported
        _m01 uint1_t  read_only_memory_supported;     //{ +0x0000@1  } | .ReadOnlyMemorySupported
        _m02 uint32_t value;                          //{ +0x0000    } | .Value
        _m03 uint32_t virtual_address_bit_count;      //{ +0x0004    } | .VirtualAddressBitCount
        _m04 uint32_t page_table_coverage_bit_count;  //{ +0x0008    } | .PageTableCoverageBitCount
        _m05 uint32_t page_directory_entry_size;      //{ +0x000c    } | .PageDirectoryEntrySize
        _m06 uint32_t page_directory_segment;         //{ +0x0010    } | .PageDirectorySegment
        _m07 uint32_t page_table_segment;             //{ +0x0014    } | .PageTableSegment
        _m08 uint32_t ideal_gpu_page_size;            //{ +0x0018    } | .IdealGPUPageSize
                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.$", 0x0, false, 0xe4cb5487e3ab50ab );                              
        SDK_FIXED_SIZE( virtualaddresscaps_deprecated_t, 0x1c );                              
    };                                              
};
#include "magic/virtualaddresscaps_deprecated_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualaddresscaps_deprecated_t, 0x1c );
