#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/desckind_t.hpp"

namespace nt  { struct guid_t;   }
namespace tag { union bindptr_t; }

#include "magic/i_type_comp_vtbl_t.start.hpp"
namespace win
{
    struct i_type_comp_t;
    struct i_type_info_t;

    // [struct ITypeCompVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_comp_vtbl_t                   
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_type_comp_t*, const struct nt::guid_t&, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_type_comp_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_type_comp_t*)>*;                
        using bind_t =            sdk::function<sdk::hresult(struct win::i_type_comp_t*, wchar_t*, uint32_t, uint16_t, struct win::i_type_info_t**, enum tag::desckind_t*, union tag::bindptr_t*)>*;                
        using bind_type_t =       sdk::function<sdk::hresult(struct win::i_type_comp_t*, wchar_t*, uint32_t, struct win::i_type_info_t**, struct win::i_type_comp_t**)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 bind_t             bind;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Bind
        _m04 bind_type_t        bind_type;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BindType
                                                
        SDK_MAGIC_PROPERTIES( "ITypeCompVtbl.$", 0x28, true, 0x149dbcc367d326c1 );                
        SDK_FIXED_SIZE( i_type_comp_vtbl_t, 0x28 );                
    };                                          
};
#include "magic/i_type_comp_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_type_comp_vtbl_t, 0x28 );
