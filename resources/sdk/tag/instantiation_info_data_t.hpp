#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "comversion_t.hpp"

#include "magic/instantiation_info_data_t.start.hpp"
namespace tag
{
    // [struct tagInstantiationInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct instantiation_info_data_t                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 struct nt::guid_t        class_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .classId
        _m01 uint32_t                 class_ctx;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .classCtx
        _m02 uint32_t                 actvflags;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .actvflags
        _m03 int32_t                  f_is_surrogate;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fIsSurrogate
        _m04 uint32_t                 c_iid;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cIID
        _m05 uint32_t                 inst_flag;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .instFlag
        _m06 struct nt::guid_t*       p_iid;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pIID
        _m07 uint32_t                 this_size;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .thisSize
        _m08 struct tag::comversion_t client_com_version;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .clientCOMVersion
                                                         
        SDK_MAGIC_PROPERTIES( "tagInstantiationInfoData.$", 0x38, true, 0xe84cb833f1ac45fd );                   
        SDK_FIXED_SIZE( instantiation_info_data_t, 0x38 );                   
    };                                                   
};
#include "magic/instantiation_info_data_t.end.hpp"
SDK_VERIFY( struct tag::instantiation_info_data_t, 0x38 );
