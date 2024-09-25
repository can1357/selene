#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace tag { struct arraydesc_t; }
namespace tag { struct typeattr_t;  }

#include "magic/paraminfo_t.start.hpp"
namespace win
{
    struct i_type_info_t;

    // [class PARAMINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class paraminfo_t                                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 uint32_t                   w_idl_flags;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wIDLFlags
        _m01 uint16_t                   vt;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .vt
        _m02 struct win::i_type_info_t* p_type_info;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTypeInfo
        _m03 struct tag::typeattr_t*    p_type_attr;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pTypeAttr
        _m04 uint16_t                   cb_alignment;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbAlignment
        _m05 int32_t                    l_level_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .lLevelCount
        _m06 uint16_t                   realvt;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .realvt
        _m07 struct nt::guid_t          iid;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .iid
        _m08 struct tag::arraydesc_t*   p_array;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pArray
                                                      
        SDK_MAGIC_PROPERTIES( "PARAMINFO.$", 0x38, true, 0x7a5e9e3b9c4a989f );              
        SDK_FIXED_SIZE( paraminfo_t, 0x38 );              
    };                                                
};
#include "magic/paraminfo_t.end.hpp"
SDK_VERIFY( class win::paraminfo_t, 0x38 );
