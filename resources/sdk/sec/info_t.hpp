#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/security_info_data_t.hpp"

namespace win { struct i_serializable_parent_t; }

#include "magic/info_t.start.hpp"
namespace sec
{
    // [class SecurityInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class info_t                                                                
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                      
        _m00 struct win::i_serializable_parent_t* parent;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._parent
        _m01 int32_t                              un_serialized;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._unSerialized
        _m02 int32_t                              added;                          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._added
        _m03 struct tag::security_info_data_t     security_info_data;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._securityInfoData
        _m04 struct tag::security_info_data_t     security_info_data_fixed_up;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._securityInfoDataFixedUp
        _m05 uint32_t                             dw_fixup_server_info_buf_size;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._dwFixupServerInfoBufSize
                                                                                
        SDK_MAGIC_PROPERTIES( "SecurityInfo.$", 0x60, true, 0x3cb483f8773c2744 );                              
        SDK_FIXED_SIZE( info_t, 0x60 );                                         
    };                                                                          
};
#include "magic/info_t.end.hpp"
SDK_VERIFY( class sec::info_t, 0x60 );
