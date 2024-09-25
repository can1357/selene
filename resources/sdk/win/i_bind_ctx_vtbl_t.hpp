#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace tag { struct bind_opts_t; }

#include "magic/i_bind_ctx_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_bind_ctx_t;
    struct i_enum_string_t;
    struct i_running_object_table_t;

    // [struct IBindCtxVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_ctx_vtbl_t                                      
    {                                                             
        using query_interface_t =          sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, const struct nt::guid_t*, void**)>*;                         
        using add_ref_t =                  sdk::function<uint32_t(struct win::i_bind_ctx_t*)>*;                         
        using release_t =                  sdk::function<uint32_t(struct win::i_bind_ctx_t*)>*;                         
        using register_object_bound_t =    sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_unknown_t*)>*;                         
        using revoke_object_bound_t =      sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_unknown_t*)>*;                         
        using release_bound_objects_t =    sdk::function<sdk::hresult(struct win::i_bind_ctx_t*)>*;                         
        using set_bind_options_t =         sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct tag::bind_opts_t*)>*;                         
        using get_bind_options_t =         sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct tag::bind_opts_t*)>*;                         
        using get_running_object_table_t = sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_running_object_table_t**)>*;                         
        using register_object_param_t =    sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*, struct win::i_unknown_t*)>*;                         
        using get_object_param_t =         sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*, struct win::i_unknown_t**)>*;                         
        using enum_object_param_t =        sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_enum_string_t**)>*;                         
        using revoke_object_param_t =      sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*)>*;                         
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                        
        _m00 query_interface_t           query_interface;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                   add_ref;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                   release;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 register_object_bound_t     register_object_bound;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegisterObjectBound
        _m04 revoke_object_bound_t       revoke_object_bound;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RevokeObjectBound
        _m05 release_bound_objects_t     release_bound_objects;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReleaseBoundObjects
        _m06 set_bind_options_t          set_bind_options;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetBindOptions
        _m07 get_bind_options_t          get_bind_options;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GetBindOptions
        _m08 get_running_object_table_t  get_running_object_table;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetRunningObjectTable
        _m09 register_object_param_t     register_object_param;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RegisterObjectParam
        _m10 get_object_param_t          get_object_param;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GetObjectParam
        _m11 enum_object_param_t         enum_object_param;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EnumObjectParam
        _m12 revoke_object_param_t       revoke_object_param;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RevokeObjectParam
                                                                  
        SDK_MAGIC_PROPERTIES( "IBindCtxVtbl.$", 0x68, true, 0xfd825f72805e0b27 );                         
        SDK_FIXED_SIZE( i_bind_ctx_vtbl_t, 0x68 );                         
    };                                                            
};
#include "magic/i_bind_ctx_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_bind_ctx_vtbl_t, 0x68 );
