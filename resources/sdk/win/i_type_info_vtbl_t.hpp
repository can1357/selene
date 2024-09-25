#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/invokekind_t.hpp"

namespace nt  { struct guid_t;       }
namespace tag { struct dispparams_t; }
namespace tag { struct excepinfo_t;  }
namespace tag { struct funcdesc_t;   }
namespace tag { struct typeattr_t;   }
namespace tag { struct vardesc_t;    }
namespace tag { struct variant_t;    }

#include "magic/i_type_info_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_type_lib_t;
    struct i_type_comp_t;
    struct i_type_info_t;

    // [struct ITypeInfoVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_info_vtbl_t                                       
    {                                                               
        using query_interface_t =           sdk::function<sdk::hresult(struct win::i_type_info_t*, const struct nt::guid_t&, void**)>*;                          
        using add_ref_t =                   sdk::function<uint32_t(struct win::i_type_info_t*)>*;                          
        using release_t =                   sdk::function<uint32_t(struct win::i_type_info_t*)>*;                          
        using get_type_attr_t =             sdk::function<sdk::hresult(struct win::i_type_info_t*, struct tag::typeattr_t**)>*;                          
        using get_type_comp_t =             sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_type_comp_t**)>*;                          
        using get_func_desc_t =             sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct tag::funcdesc_t**)>*;                          
        using get_var_desc_t =              sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct tag::vardesc_t**)>*;                          
        using get_names_t =                 sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**, uint32_t, uint32_t*)>*;                          
        using get_ref_type_of_impl_type_t = sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, uint32_t*)>*;                          
        using get_impl_type_flags_t =       sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, int32_t*)>*;                          
        using get_i_ds_of_names_t =         sdk::function<sdk::hresult(struct win::i_type_info_t*, wchar_t**, uint32_t, int32_t*)>*;                          
        using invoke_t =                    sdk::function<sdk::hresult(struct win::i_type_info_t*, void*, int32_t, uint16_t, struct tag::dispparams_t*, struct tag::variant_t*, struct tag::excepinfo_t*, uint32_t*)>*;                          
        using get_documentation_t =         sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**, wchar_t**, uint32_t*, wchar_t**)>*;                          
        using get_dll_entry_t =             sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, enum tag::invokekind_t, wchar_t**, wchar_t**, uint16_t*)>*;                          
        using get_ref_type_info_t =         sdk::function<sdk::hresult(struct win::i_type_info_t*, uint32_t, struct win::i_type_info_t**)>*;                          
        using address_of_member_t =         sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, enum tag::invokekind_t, void**)>*;                          
        using create_instance_t =           sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_unknown_t*, const struct nt::guid_t&, void**)>*;                          
        using get_mops_t =                  sdk::function<sdk::hresult(struct win::i_type_info_t*, int32_t, wchar_t**)>*;                          
        using get_containing_type_lib_t =   sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_type_lib_t**, uint32_t*)>*;                          
        using release_type_attr_t =         sdk::function<void(struct win::i_type_info_t*, struct tag::typeattr_t*)>*;                          
        using release_func_desc_t =         sdk::function<void(struct win::i_type_info_t*, struct tag::funcdesc_t*)>*;                          
        using release_var_desc_t =          sdk::function<void(struct win::i_type_info_t*, struct tag::vardesc_t*)>*;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 query_interface_t            query_interface;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                    add_ref;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                    release;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_type_attr_t              get_type_attr;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetTypeAttr
        _m04 get_type_comp_t              get_type_comp;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetTypeComp
        _m05 get_func_desc_t              get_func_desc;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetFuncDesc
        _m06 get_var_desc_t               get_var_desc;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetVarDesc
        _m07 get_names_t                  get_names;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GetNames
        _m08 get_ref_type_of_impl_type_t  get_ref_type_of_impl_type;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetRefTypeOfImplType
        _m09 get_impl_type_flags_t        get_impl_type_flags;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GetImplTypeFlags
        _m10 get_i_ds_of_names_t          get_i_ds_of_names;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GetIDsOfNames
        _m11 invoke_t                     invoke;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Invoke
        _m12 get_documentation_t          get_documentation;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .GetDocumentation
        _m13 get_dll_entry_t              get_dll_entry;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .GetDllEntry
        _m14 get_ref_type_info_t          get_ref_type_info;          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .GetRefTypeInfo
        _m15 address_of_member_t          address_of_member;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .AddressOfMember
        _m16 create_instance_t            create_instance;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CreateInstance
        _m17 get_mops_t                   get_mops;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .GetMops
        _m18 get_containing_type_lib_t    get_containing_type_lib;    //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .GetContainingTypeLib
        _m19 release_type_attr_t          release_type_attr;          //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ReleaseTypeAttr
        _m20 release_func_desc_t          release_func_desc;          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ReleaseFuncDesc
        _m21 release_var_desc_t           release_var_desc;           //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ReleaseVarDesc
                                                                    
        SDK_MAGIC_PROPERTIES( "ITypeInfoVtbl.$", 0xb0, true, 0x715c652de65c71da );                          
        SDK_FIXED_SIZE( i_type_info_vtbl_t, 0xb0 );                          
    };                                                              
};
#include "magic/i_type_info_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_type_info_vtbl_t, 0xb0 );
