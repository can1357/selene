#pragma once
#include <sdkgen/support_library.hpp>
#include "callconv_t.hpp"

#include "magic/methoddata_t.start.hpp"
namespace tag
{
    struct paramdata_t;

    // [struct tagMETHODDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct methoddata_t                         
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 wchar_t*                 sz_name;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .szName
        _m01 struct tag::paramdata_t* ppdata;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppdata
        _m02 int32_t                  dispid;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dispid
        _m03 uint32_t                 i_meth;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iMeth
        _m04 enum tag::callconv_t     cc;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cc
        _m05 uint32_t                 c_args;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cArgs
        _m06 uint16_t                 w_flags;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .wFlags
        _m07 uint16_t                 vt_return;  //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .vtReturn
                                                
        SDK_MAGIC_PROPERTIES( "tagMETHODDATA.$", 0x28, true, 0x7b86353369ac2712 );          
        SDK_FIXED_SIZE( methoddata_t, 0x28 );          
    };                                          
};
#include "magic/methoddata_t.end.hpp"
SDK_VERIFY( struct tag::methoddata_t, 0x28 );
