#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hybrid_metadata_x86_t.start.hpp"
namespace image
{
    // [struct _IMAGE_HYBRID_METADATA_X86]
    // => Windows 10 v1607
    //
    struct hybrid_metadata_x86_t                                      
    {                                                                 
        // Windows 10 v1607                                                
        //                                                            
        _m00 uint32_t version;                                          //{ +0x0000    } | .Version
        _m01 uint32_t wow_a64_exception_handler_function_pointer;       //{ +0x0004    } | .WowA64ExceptionHandlerFunctionPointer
        _m02 uint32_t wow_a64_dispatch_call_function_pointer;           //{ +0x0008    } | .WowA64DispatchCallFunctionPointer
        _m03 uint32_t wow_a64_dispatch_indirect_call_function_pointer;  //{ +0x000c    } | .WowA64DispatchIndirectCallFunctionPointer
        _m04 uint32_t hybrid_code_address_range_offset;                 //{ +0x0010    } | .HybridCodeAddressRangeOffset
        _m05 uint32_t hybrid_code_address_range_count;                  //{ +0x0014    } | .HybridCodeAddressRangeCount
                                                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_HYBRID_METADATA_X86.$", 0x0, false, 0xe3963a6b8dd81c05 );                                                
        SDK_FIXED_SIZE( hybrid_metadata_x86_t, 0x18 );                                                
    };                                                                
};
#include "magic/hybrid_metadata_x86_t.end.hpp"
SDK_VERIFY( struct image::hybrid_metadata_x86_t, 0x18 );
