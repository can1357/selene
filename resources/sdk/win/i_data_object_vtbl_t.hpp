#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace tag { struct formatetc_t; }
namespace tag { struct stgmedium_t; }

#include "magic/i_data_object_vtbl_t.start.hpp"
namespace win
{
    struct i_advise_sink_t;
    struct i_data_object_t;
    struct i_enum_statdata_t;
    struct i_enum_formatetc_t;

    // [struct IDataObjectVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_data_object_vtbl_t                                   
    {                                                             
        using query_interface_t =          sdk::function<sdk::hresult(struct win::i_data_object_t*, const struct nt::guid_t*, void**)>*;                         
        using add_ref_t =                  sdk::function<uint32_t(struct win::i_data_object_t*)>*;                         
        using release_t =                  sdk::function<uint32_t(struct win::i_data_object_t*)>*;                         
        using get_data_t =                 sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*;                         
        using get_data_here_t =            sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*;                         
        using query_get_data_t =           sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*)>*;                         
        using get_canonical_format_etc_t = sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::formatetc_t*)>*;                         
        using set_data_t =                 sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*, int32_t)>*;                         
        using enum_format_etc_t =          sdk::function<sdk::hresult(struct win::i_data_object_t*, uint32_t, struct win::i_enum_formatetc_t**)>*;                         
        using d_advise_t =                 sdk::function<sdk::hresult(struct win::i_data_object_t*, struct tag::formatetc_t*, uint32_t, struct win::i_advise_sink_t*, uint32_t*)>*;                         
        using d_unadvise_t =               sdk::function<sdk::hresult(struct win::i_data_object_t*, uint32_t)>*;                         
        using enum_d_advise_t =            sdk::function<sdk::hresult(struct win::i_data_object_t*, struct win::i_enum_statdata_t**)>*;                         
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                        
        _m00 query_interface_t           query_interface;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                   add_ref;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                   release;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_data_t                  get_data;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetData
        _m04 get_data_here_t             get_data_here;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetDataHere
        _m05 query_get_data_t            query_get_data;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryGetData
        _m06 get_canonical_format_etc_t  get_canonical_format_etc;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetCanonicalFormatEtc
        _m07 set_data_t                  set_data;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SetData
        _m08 enum_format_etc_t           enum_format_etc;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EnumFormatEtc
        _m09 d_advise_t                  d_advise;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DAdvise
        _m10 d_unadvise_t                d_unadvise;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DUnadvise
        _m11 enum_d_advise_t             enum_d_advise;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EnumDAdvise
                                                                  
        SDK_MAGIC_PROPERTIES( "IDataObjectVtbl.$", 0x60, true, 0x3511dab3f37c4725 );                         
        SDK_FIXED_SIZE( i_data_object_vtbl_t, 0x60 );                         
    };                                                            
};
#include "magic/i_data_object_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_data_object_vtbl_t, 0x60 );
