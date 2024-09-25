#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/activation_properties_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_com_class_info_t;

    // [struct ACTIVATION_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct activation_properties_t                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                   
        //                                                      
        _m00 const struct nt::guid_t&        rclsid;              //{ +0x0000    +0x0000    +0x0000    } | ._rclsid
        _m01 struct nt::guid_t               partition;           //{ +0x0008    +0x0008    +0x0008    } | ._partition
        _m02 const struct nt::guid_t&        riid;                //{ +0x0018    +0x0018    +0x0018    } | ._riid
        _m03 uint32_t                        dw_flags;            //{ +0x0020    +0x0020    +0x0020    } | ._dwFlags
        _m04 uint32_t                        dw_actv_flags;       //{ +0x0024    +0x0024    +0x0024    } | ._dwActvFlags
        _m05 uint32_t                        dw_context;          //{ +0x0028    +0x0028    +0x0028    } | ._dwContext
        _m06 uint32_t                        dw_dll_server_type;  //{ +0x002c    +0x002c    +0x002c    } | ._dwDllServerType
        _m07 wchar_t*                        pwsz_dll_server;     //{ +0x0030    +0x0030    +0x0030    } | ._pwszDllServer
        _m08 struct win::i_unknown_t**       pp_unk;              //{ +0x0038    +0x0038    +0x0038    } | ._ppUnk
        _m09 struct win::i_com_class_info_t* p_ci;                //{ +0x0040    +0x0040    +0x0040    } | ._pCI
                                                                
        SDK_MAGIC_PROPERTIES( "ACTIVATION_PROPERTIES.$", 0x48, true, 0x65d9f8335356cb21 );                   
        SDK_FIXED_SIZE( activation_properties_t, 0x48 );                   
    };                                                          
};
#include "magic/activation_properties_t.end.hpp"
SDK_VERIFY( struct win::activation_properties_t, 0x48 );
