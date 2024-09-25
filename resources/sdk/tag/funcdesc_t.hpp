#pragma once
#include <sdkgen/support_library.hpp>
#include "callconv_t.hpp"
#include "elemdesc_t.hpp"
#include "funckind_t.hpp"
#include "invokekind_t.hpp"

#include "magic/funcdesc_t.start.hpp"
namespace tag
{
    // [struct tagFUNCDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct funcdesc_t                                   
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                              
        _m00 int32_t                 memid;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .memid
        _m01 int32_t*                lprgscode;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lprgscode
        _m02 struct tag::elemdesc_t* lprgelemdesc_param;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lprgelemdescParam
        _m03 enum tag::funckind_t    funckind;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .funckind
        _m04 enum tag::invokekind_t  invkind;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .invkind
        _m05 enum tag::callconv_t    callconv;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .callconv
        _m06 int16_t                 c_params;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .cParams
        _m07 int16_t                 c_params_opt;        //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .cParamsOpt
        _m08 int16_t                 o_vft;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .oVft
        _m09 int16_t                 c_scodes;            //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .cScodes
        _m10 struct tag::elemdesc_t  elemdesc_func;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .elemdescFunc
        _m11 uint16_t                w_func_flags;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .wFuncFlags
                                                        
        SDK_MAGIC_PROPERTIES( "tagFUNCDESC.$", 0x58, true, 0xc2ccf05f18c5f78b );                   
        SDK_FIXED_SIZE( funcdesc_t, 0x58 );                   
    };                                                  
};
#include "magic/funcdesc_t.end.hpp"
SDK_VERIFY( struct tag::funcdesc_t, 0x58 );
