#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_proc_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_PROC_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_proc_format_t                    
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t flags;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t stack_size;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StackSize
        _m02 uint32_t constant_client_buffer_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConstantClientBufferSize
        _m03 uint32_t constant_server_buffer_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ConstantServerBufferSize
        _m04 uint16_t rpc_flags;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RpcFlags
        _m05 uint16_t float_double_mask;            //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .FloatDoubleMask
        _m06 uint16_t number_of_params;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfParams
        _m07 uint16_t extension_size;               //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .ExtensionSize
                                                  
        SDK_MAGIC_PROPERTIES( "_NDR64_PROC_FORMAT.$", 0x18, true, 0x6e585f4091aefaa3 );                            
        SDK_FIXED_SIZE( ndr64_proc_format_t, 0x18 );                            
    };                                            
};
#include "magic/ndr64_proc_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_proc_format_t, 0x18 );
