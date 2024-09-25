#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/proxy_file_info_t.start.hpp"
namespace tag
{
    struct c_interface_stub_vtbl_t;
    struct c_interface_proxy_vtbl_t;

    // [struct tagProxyFileInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proxy_file_info_t                                                 
    {                                                                        
        using p_iid_lookup_rtn_t = sdk::function<int32_t(const struct nt::guid_t*, int32_t*)> const*;                   
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                   
        _m00 struct tag::c_interface_proxy_vtbl_t const** p_proxy_vtbl_list;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pProxyVtblList
        _m01 struct tag::c_interface_stub_vtbl_t const**  p_stub_vtbl_list;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStubVtblList
        _m02 const char const**                           p_names_array;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pNamesArray
        _m03 const struct nt::guid_t**                    p_delegated_ii_ds;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pDelegatedIIDs
        _m04 p_iid_lookup_rtn_t                           p_iid_lookup_rtn;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pIIDLookupRtn
        _m05 uint16_t                                     table_size;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TableSize
        _m06 uint16_t                                     table_version;       //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .TableVersion
        _m07 const struct nt::guid_t**                    p_async_iid_lookup;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pAsyncIIDLookup
        _m08 int64_t                                      filler2;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Filler2
        _m09 int64_t                                      filler3;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Filler3
        _m10 int64_t                                      filler4;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Filler4
                                                                             
        SDK_MAGIC_PROPERTIES( "tagProxyFileInfo.$", 0x50, true, 0x572c7acadd821880 );                   
        SDK_FIXED_SIZE( proxy_file_info_t, 0x50 );                           
    };                                                                       
};
#include "magic/proxy_file_info_t.end.hpp"
SDK_VERIFY( struct tag::proxy_file_info_t, 0x50 );
