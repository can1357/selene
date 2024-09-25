#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i_message_param_t.start.hpp"
namespace win
{
    class i_message_param_t;

    // [class IMessageParam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_message_param_t                               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 class win::i_message_param_t* p_next_message;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pNextMessage
                                                          
        SDK_MAGIC_PROPERTIES( "IMessageParam.$", 0x20, true, 0x960690cab36c4e7e );               
        SDK_FIXED_SIZE( i_message_param_t, 0x20 );               
    };                                                    
};
#include "magic/i_message_param_t.end.hpp"
SDK_VERIFY( class win::i_message_param_t, 0x20 );
