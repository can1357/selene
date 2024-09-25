#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "midl_stub_desc_t.hpp"
#include "midl_server_info_t.hpp"
#include "midl_stubless_proxy_info_t.hpp"
#include "../tag/c_interface_stub_vtbl_t.hpp"
#include "../tag/c_interface_proxy_vtbl_t.hpp"

#include "magic/type_info_vtbl_t.start.hpp"
namespace win
{
    // [struct TypeInfoVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct type_info_vtbl_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                     
        _m00 int32_t                                c_refs;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cRefs
        _m01 struct nt::guid_t                      iid;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iid
        _m02 int32_t                                f_is_dual;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .fIsDual
        _m03 struct win::midl_stub_desc_t           stub_desc;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .stubDesc
        _m04 struct win::midl_server_info_t         stub_info;   //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .stubInfo
        _m05 struct tag::c_interface_stub_vtbl_t    stub_vtbl;   //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .stubVtbl
        _m06 struct win::midl_stubless_proxy_info_t proxy_info;  //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .proxyInfo
        _m07 struct tag::c_interface_proxy_vtbl_t   proxy_vtbl;  //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .proxyVtbl
                                                               
        SDK_MAGIC_PROPERTIES( "TypeInfoVtbl.$", 0x1a0, true, 0x1fe3cab516cf02c6 );           
        SDK_FIXED_SIZE( type_info_vtbl_t, 0x1a0 );             
    };                                                         
};
#include "magic/type_info_vtbl_t.end.hpp"
SDK_VERIFY( struct win::type_info_vtbl_t, 0x1a0 );
