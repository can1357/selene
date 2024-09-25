#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_bufferlength_swap_context_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [class POINTER_BUFFERLENGTH_SWAP_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pointer_bufferlength_swap_context_t             
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                
        _m00 struct win::midl_stub_message_t* p_stub_msg;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStubMsg
        _m01 uint32_t                         length_save;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LengthSave
        _m02 const bool                       do_swap;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DoSwap
                                                          
        SDK_MAGIC_PROPERTIES( "POINTER_BUFFERLENGTH_SWAP_CONTEXT.$", 0x10, true, 0xb744ffa7c9b34eb7 );            
        SDK_FIXED_SIZE( pointer_bufferlength_swap_context_t, 0x10 );            
    };                                                    
};
#include "magic/pointer_bufferlength_swap_context_t.end.hpp"
SDK_VERIFY( class win::pointer_bufferlength_swap_context_t, 0x10 );
