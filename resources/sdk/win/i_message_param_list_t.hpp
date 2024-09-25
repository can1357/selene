#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i_message_param_list_t.start.hpp"
namespace win
{
    class i_message_param_t;

    // [class IMessageParamList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_message_param_list_t                   
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 class win::i_message_param_t* p_first;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pFirst
        _m01 class win::i_message_param_t* p_last;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pLast
                                                   
        SDK_MAGIC_PROPERTIES( "IMessageParamList.$", 0x10, true, 0xb19e37a24d80d32c );        
        SDK_FIXED_SIZE( i_message_param_list_t, 0x10 );        
    };                                             
};
#include "magic/i_message_param_list_t.end.hpp"
SDK_VERIFY( class win::i_message_param_list_t, 0x10 );
