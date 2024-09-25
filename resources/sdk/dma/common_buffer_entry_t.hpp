#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/common_buffer_entry_t.start.hpp"
namespace dma
{
    // [struct _DMA_COMMON_BUFFER_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct common_buffer_entry_t     
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 void*   virtual_address;  //{ +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 int64_t logical_address;  //{ +0x0008    +0x0008    +0x0008    } | .LogicalAddress
                                     
        SDK_MAGIC_PROPERTIES( "_DMA_COMMON_BUFFER_ENTRY.$", 0x10, true, 0xe2d71851c9ee1c39 );                
        SDK_FIXED_SIZE( common_buffer_entry_t, 0x10 );                
    };                               
};
#include "magic/common_buffer_entry_t.end.hpp"
SDK_VERIFY( struct dma::common_buffer_entry_t, 0x10 );
