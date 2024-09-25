#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/oxid_info_t.hpp"
#include "midl_i_local_object_exporter_0007_t.hpp"

namespace tag { struct dualstringarray_t; }

#include "magic/priv_resolver_info_t.start.hpp"
namespace win
{
    // [struct _PRIV_RESOLVER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_resolver_info_t                                  
    {                                                            
        using oxid_info_t = sdk::variant<struct tag::oxid_info_t, struct win::midl_i_local_object_exporter_0007_t>;                     
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 uint64_t                       oxid_server;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OxidServer
        _m01 struct tag::dualstringarray_t* p_server_or_bindings;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServerORBindings
        _m02 oxid_info_t                    oxid_info;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OxidInfo
        _m03 uint64_t                       local_mid_of_remote;   //{ +0x0050    +0x00a8    +0x00a8    +0x00a8    } | .LocalMidOfRemote
        _m04 int32_t                        found_in_rot;          //{ +0x0068    +0x00c0    +0x00b0    +0x00c0    } | .FoundInROT
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                     
        //                                                       
        _m05 uint32_t                       dll_server_model;      //{ +0x0058    +0x00b0    +0x00b0    } | .DllServerModel
        _m06 wchar_t*                       pwsz_dll_server;       //{ +0x0060    +0x00b8    +0x00b8    } | .pwszDllServer
                                                                 
        SDK_MAGIC_PROPERTIES( "_PRIV_RESOLVER_INFO.$", 0xc8, true, 0x2a8109edfb7f4798 );                     
        SDK_DYNAMIC_SIZE( priv_resolver_info_t );                     
    };                                                           
};
#include "magic/priv_resolver_info_t.end.hpp"
