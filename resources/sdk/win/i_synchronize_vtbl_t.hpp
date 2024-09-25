#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_synchronize_vtbl_t.start.hpp"
namespace win
{
    struct i_synchronize_t;

    // [struct ISynchronizeVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_synchronize_vtbl_t                 
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_synchronize_t*, const struct nt::guid_t&, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_synchronize_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_synchronize_t*)>*;                
        using wait_t =            sdk::function<sdk::hresult(struct win::i_synchronize_t*, uint32_t, uint32_t)>*;                
        using signal_t =          sdk::function<sdk::hresult(struct win::i_synchronize_t*)>*;                
        using reset_t =           sdk::function<sdk::hresult(struct win::i_synchronize_t*)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 wait_t             wait;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Wait
        _m04 signal_t           signal;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Signal
        _m05 reset_t            reset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Reset
                                                
        SDK_MAGIC_PROPERTIES( "ISynchronizeVtbl.$", 0x30, true, 0x13ab864e8b376cad );                
        SDK_FIXED_SIZE( i_synchronize_vtbl_t, 0x30 );                
    };                                          
};
#include "magic/i_synchronize_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_synchronize_vtbl_t, 0x30 );
