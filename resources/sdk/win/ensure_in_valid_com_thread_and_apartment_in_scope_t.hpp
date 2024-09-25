#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ensure_in_valid_com_thread_and_apartment_in_scope_t.start.hpp"
namespace win
{
    class c_object_context_t;

    // [class EnsureInValidComThreadAndApartmentInScope]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ensure_in_valid_com_thread_and_apartment_in_scope_t            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m00 bool                           is_ole_tls_initialized;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._isOleTlsInitialized
        _m01 bool                           is_com_initialized_on_thread;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | ._isComInitializedOnThread
        _m02 bool                           is_dispatch_thread;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | ._isDispatchThread
        _m03 bool                           is_thread_in_nta;              //{ +0x0003    +0x0003    +0x0003    +0x0003    } | ._isThreadInNTA
        _m04 class win::c_object_context_t* p_saved_ctx;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pSavedCtx
                                                                         
        SDK_MAGIC_PROPERTIES( "EnsureInValidComThreadAndApartmentInScope.$", 0x10, true, 0x40166c56da924914 );                             
        SDK_FIXED_SIZE( ensure_in_valid_com_thread_and_apartment_in_scope_t, 0x10 );                             
    };                                                                   
};
#include "magic/ensure_in_valid_com_thread_and_apartment_in_scope_t.end.hpp"
SDK_VERIFY( class win::ensure_in_valid_com_thread_and_apartment_in_scope_t, 0x10 );
