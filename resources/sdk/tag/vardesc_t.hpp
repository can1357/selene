#pragma once
#include <sdkgen/support_library.hpp>
#include "varkind_t.hpp"
#include "elemdesc_t.hpp"

#include "magic/vardesc_t.start.hpp"
namespace tag
{
    struct variant_t;

    // [struct tagVARDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vardesc_t                             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 int32_t                memid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .memid
        _m01 wchar_t*               lpstr_schema;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpstrSchema
        _m02 uint32_t               o_inst;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .oInst
        _m03 struct tag::variant_t* lpvar_value;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpvarValue
        _m04 struct tag::elemdesc_t elemdesc_var;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .elemdescVar
        _m05 uint16_t               w_var_flags;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .wVarFlags
        _m06 enum tag::varkind_t    varkind;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .varkind
                                                 
        SDK_MAGIC_PROPERTIES( "tagVARDESC.$", 0x40, true, 0xacaeee09a1b84932 );             
        SDK_FIXED_SIZE( vardesc_t, 0x40 );             
    };                                           
};
#include "magic/vardesc_t.end.hpp"
SDK_VERIFY( struct tag::vardesc_t, 0x40 );
