#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/push_logical_thread_id_t.start.hpp"
namespace win
{
    class push_logical_thread_id_t;

    // [class PushLogicalThreadId]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class push_logical_thread_id_t                                                    
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                            
        _m00 struct nt::guid_t                    guid_saved_logical_thread_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._guidSavedLogicalThreadId
        _m01 bool                                 b_call_chain_in_doubt;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._bCallChainInDoubt
        _m02 class win::push_logical_thread_id_t* p_previous_pushed_logical_thread_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pPreviousPushedLogicalThreadId
                                                                                      
        SDK_MAGIC_PROPERTIES( "PushLogicalThreadId.$", 0x20, true, 0xb24269525f48d035 );                                    
        SDK_FIXED_SIZE( push_logical_thread_id_t, 0x20 );                                    
    };                                                                                
};
#include "magic/push_logical_thread_id_t.end.hpp"
SDK_VERIFY( class win::push_logical_thread_id_t, 0x20 );
