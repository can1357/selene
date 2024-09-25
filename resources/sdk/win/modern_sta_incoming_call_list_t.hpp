#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/modern_sta_incoming_call_list_t.start.hpp"
namespace win
{
    class i_message_param_t;

    // [class ModernSTAIncomingCallList]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class modern_sta_incoming_call_list_t          
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 class win::i_message_param_t* p_first;  //{ +0x0000    +0x0000    +0x0000    } | ._pFirst
        _m01 class win::i_message_param_t* p_last;   //{ +0x0008    +0x0008    +0x0008    } | ._pLast
                                                   
        SDK_MAGIC_PROPERTIES( "ModernSTAIncomingCallList.$", 0x10, true, 0x2b71af8dff548b3c );        
        SDK_FIXED_SIZE( modern_sta_incoming_call_list_t, 0x10 );        
    };                                             
};
#include "magic/modern_sta_incoming_call_list_t.end.hpp"
SDK_VERIFY( class win::modern_sta_incoming_call_list_t, 0x10 );
