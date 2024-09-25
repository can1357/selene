#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_async_manager_vtbl_t.start.hpp"
namespace win
{
    struct i_async_manager_t;

    // [struct IAsyncManagerVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_manager_vtbl_t                 
    {                                             
        using query_interface_t =  sdk::function<sdk::hresult(struct win::i_async_manager_t*, const struct nt::guid_t&, void**)>*;                 
        using add_ref_t =          sdk::function<uint32_t(struct win::i_async_manager_t*)>*;                 
        using release_t =          sdk::function<uint32_t(struct win::i_async_manager_t*)>*;                 
        using complete_call_t =    sdk::function<sdk::hresult(struct win::i_async_manager_t*, sdk::hresult)>*;                 
        using get_call_context_t = sdk::function<sdk::hresult(struct win::i_async_manager_t*, const struct nt::guid_t&, void**)>*;                 
        using get_state_t =        sdk::function<sdk::hresult(struct win::i_async_manager_t*, uint32_t*)>*;                 
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                        
        _m00 query_interface_t   query_interface;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t           add_ref;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t           release;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 complete_call_t     complete_call;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompleteCall
        _m04 get_call_context_t  get_call_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetCallContext
        _m05 get_state_t         get_state;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetState
                                                  
        SDK_MAGIC_PROPERTIES( "IAsyncManagerVtbl.$", 0x30, true, 0x2c741c50db1f9bf7 );                 
        SDK_FIXED_SIZE( i_async_manager_vtbl_t, 0x30 );                 
    };                                            
};
#include "magic/i_async_manager_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_async_manager_vtbl_t, 0x30 );
