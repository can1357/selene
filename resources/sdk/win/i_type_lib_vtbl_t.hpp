#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/typekind_t.hpp"

namespace nt  { struct guid_t;     }
namespace tag { struct tlibattr_t; }

#include "magic/i_type_lib_vtbl_t.start.hpp"
namespace win
{
    struct i_type_lib_t;
    struct i_type_comp_t;
    struct i_type_info_t;

    // [struct ITypeLibVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_vtbl_t                                
    {                                                       
        using query_interface_t =       sdk::function<sdk::hresult(struct win::i_type_lib_t*, const struct nt::guid_t&, void**)>*;                      
        using add_ref_t =               sdk::function<uint32_t(struct win::i_type_lib_t*)>*;                      
        using release_t =               sdk::function<uint32_t(struct win::i_type_lib_t*)>*;                      
        using get_type_info_count_t =   sdk::function<uint32_t(struct win::i_type_lib_t*)>*;                      
        using get_type_info_t =         sdk::function<sdk::hresult(struct win::i_type_lib_t*, uint32_t, struct win::i_type_info_t**)>*;                      
        using get_type_info_type_t =    sdk::function<sdk::hresult(struct win::i_type_lib_t*, uint32_t, enum tag::typekind_t*)>*;                      
        using get_type_info_of_guid_t = sdk::function<sdk::hresult(struct win::i_type_lib_t*, const struct nt::guid_t&, struct win::i_type_info_t**)>*;                      
        using get_lib_attr_t =          sdk::function<sdk::hresult(struct win::i_type_lib_t*, struct tag::tlibattr_t**)>*;                      
        using get_type_comp_t =         sdk::function<sdk::hresult(struct win::i_type_lib_t*, struct win::i_type_comp_t**)>*;                      
        using get_documentation_t =     sdk::function<sdk::hresult(struct win::i_type_lib_t*, int32_t, wchar_t**, wchar_t**, uint32_t*, wchar_t**)>*;                      
        using is_name_t =               sdk::function<sdk::hresult(struct win::i_type_lib_t*, wchar_t*, uint32_t, int32_t*)>*;                      
        using find_name_t =             sdk::function<sdk::hresult(struct win::i_type_lib_t*, wchar_t*, uint32_t, struct win::i_type_info_t**, int32_t*, uint16_t*)>*;                      
        using release_t_lib_attr_t =    sdk::function<void(struct win::i_type_lib_t*, struct tag::tlibattr_t*)>*;                      
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 query_interface_t        query_interface;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                add_ref;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                release;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_type_info_count_t    get_type_info_count;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetTypeInfoCount
        _m04 get_type_info_t          get_type_info;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetTypeInfo
        _m05 get_type_info_type_t     get_type_info_type;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetTypeInfoType
        _m06 get_type_info_of_guid_t  get_type_info_of_guid;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetTypeInfoOfGuid
        _m07 get_lib_attr_t           get_lib_attr;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GetLibAttr
        _m08 get_type_comp_t          get_type_comp;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetTypeComp
        _m09 get_documentation_t      get_documentation;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GetDocumentation
        _m10 is_name_t                is_name;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IsName
        _m11 find_name_t              find_name;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FindName
        _m12 release_t_lib_attr_t     release_t_lib_attr;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ReleaseTLibAttr
                                                            
        SDK_MAGIC_PROPERTIES( "ITypeLibVtbl.$", 0x68, true, 0x5664737d115924dc );                      
        SDK_FIXED_SIZE( i_type_lib_vtbl_t, 0x68 );                      
    };                                                      
};
#include "magic/i_type_lib_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_type_lib_vtbl_t, 0x68 );
