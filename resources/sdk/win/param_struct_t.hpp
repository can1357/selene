#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct dvtargetdevice_t; }

#include "magic/param_struct_t.start.hpp"
namespace win
{
    struct hdc_t;
    struct rectl_t;
    struct i_continue_t;
    struct i_view_object_t;

    // [struct _PARAM_STRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct param_struct_t                                 
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 struct win::i_view_object_t*  _this;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .This
        _m01 uint32_t                      dw_draw_aspect;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwDrawAspect
        _m02 int32_t                       lindex;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lindex
        _m03 uint64_t                      pv_aspect;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvAspect
        _m04 struct tag::dvtargetdevice_t* ptd;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ptd
        _m05 struct win::hdc_t*            hdc_target_dev;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hdcTargetDev
        _m06 struct win::hdc_t*            hdc_draw;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hdcDraw
        _m07 const struct win::rectl_t*    lprc_bounds;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lprcBounds
        _m08 const struct win::rectl_t*    lprc_w_bounds;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lprcWBounds
        _m09 struct win::i_continue_t*     p_continue;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pContinue
        _m10 sdk::hresult                  ret_val;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._RetVal
                                                          
        SDK_MAGIC_PROPERTIES( "_PARAM_STRUCT.$", 0x58, true, 0x51f010615abf37e7 );               
        SDK_FIXED_SIZE( param_struct_t, 0x58 );               
    };                                                    
};
#include "magic/param_struct_t.end.hpp"
SDK_VERIFY( struct win::param_struct_t, 0x58 );
