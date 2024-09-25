#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chpe_metadata_x86_t.start.hpp"
namespace image
{
    // [struct _IMAGE_CHPE_METADATA_X86]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct chpe_metadata_x86_t                                            
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                
        _m00 uint32_t version;                                              //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t chpe_code_address_range_offset;                       //{ +0x0004    +0x0004    +0x0004    } | .CHPECodeAddressRangeOffset
        _m02 uint32_t chpe_code_address_range_count;                        //{ +0x0008    +0x0008    +0x0008    } | .CHPECodeAddressRangeCount
        _m03 uint32_t wow_a64_exception_handler_function_pointer;           //{ +0x000c    +0x000c    +0x000c    } | .WowA64ExceptionHandlerFunctionPointer
        _m04 uint32_t wow_a64_dispatch_call_function_pointer;               //{ +0x0010    +0x0010    +0x0010    } | .WowA64DispatchCallFunctionPointer
        _m05 uint32_t wow_a64_dispatch_indirect_call_function_pointer;      //{ +0x0014    +0x0014    +0x0014    } | .WowA64DispatchIndirectCallFunctionPointer
        _m06 uint32_t wow_a64_dispatch_indirect_call_cfg_function_pointer;  //{ +0x0018    +0x0018    +0x0018    } | .WowA64DispatchIndirectCallCfgFunctionPointer
        _m07 uint32_t wow_a64_dispatch_ret_function_pointer;                //{ +0x001c    +0x001c    +0x001c    } | .WowA64DispatchRetFunctionPointer
        _m08 uint32_t wow_a64_dispatch_ret_leaf_function_pointer;           //{ +0x0020    +0x0020    +0x0020    } | .WowA64DispatchRetLeafFunctionPointer
        _m09 uint32_t wow_a64_dispatch_jump_function_pointer;               //{ +0x0024    +0x0024    +0x0024    } | .WowA64DispatchJumpFunctionPointer
        _m10 uint32_t compiler_iat_pointer;                                 //{ +0x0028    +0x0028    +0x0028    } | .CompilerIATPointer
        _m11 uint32_t wow_a64_rdtsc_function_pointer;                       //{ +0x002c    +0x002c    +0x002c    } | .WowA64RdtscFunctionPointer
                                                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_CHPE_METADATA_X86.$", 0x30, true, 0xdbe534f61531b329 );                                                    
        SDK_FIXED_SIZE( chpe_metadata_x86_t, 0x30 );                                                    
    };                                                                    
};
#include "magic/chpe_metadata_x86_t.end.hpp"
SDK_VERIFY( struct image::chpe_metadata_x86_t, 0x30 );
