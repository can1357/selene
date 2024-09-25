#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/asta_incoming_call_list_t.start.hpp"
namespace win
{
    class i_message_param_t;

    // [class ASTAIncomingCallList]
    // => Windows 10 v1607
    //
    class asta_incoming_call_list_t                
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 class win::i_message_param_t* p_first;  //{ +0x0000    } | ._pFirst
        _m01 class win::i_message_param_t* p_last;   //{ +0x0008    } | ._pLast
                                                   
        SDK_MAGIC_PROPERTIES( "ASTAIncomingCallList.$", 0x0, false, 0x2d6b137e36f0898f );        
        SDK_FIXED_SIZE( asta_incoming_call_list_t, 0x10 );        
    };                                             
};
#include "magic/asta_incoming_call_list_t.end.hpp"
SDK_VERIFY( class win::asta_incoming_call_list_t, 0x10 );
