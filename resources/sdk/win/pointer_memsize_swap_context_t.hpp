#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_memsize_swap_context_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [class POINTER_MEMSIZE_SWAP_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pointer_memsize_swap_context_t                    
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 struct win::midl_stub_message_t* p_stub_msg;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubMsg
        _m01 uint32_t                         memory_save;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MemorySave
        _m02 uint8_t*                         p_buffer_save;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pBufferSave
        _m03 const bool                       do_swap;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DoSwap
                                                            
        SDK_MAGIC_PROPERTIES( "POINTER_MEMSIZE_SWAP_CONTEXT.$", 0x20, true, 0xef4ba02c02527995 );              
        SDK_FIXED_SIZE( pointer_memsize_swap_context_t, 0x20 );              
    };                                                      
};
#include "magic/pointer_memsize_swap_context_t.end.hpp"
SDK_VERIFY( class win::pointer_memsize_swap_context_t, 0x20 );
