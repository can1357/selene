#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_unknown_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct IUnknownVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_unknown_vtbl_t                     
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_unknown_t*, const struct nt::guid_t const*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_unknown_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_unknown_t*)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
                                                
        SDK_MAGIC_PROPERTIES( "IUnknownVtbl.$", 0x18, true, 0x8303cc8f9753aea6 );                
        SDK_FIXED_SIZE( i_unknown_vtbl_t, 0x18 );                
    };                                          
};
#include "magic/i_unknown_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_unknown_vtbl_t, 0x18 );
