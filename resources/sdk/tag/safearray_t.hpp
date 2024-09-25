#pragma once
#include <sdkgen/support_library.hpp>
#include "safearraybound_t.hpp"

#include "magic/safearray_t.start.hpp"
namespace tag
{
    // [struct tagSAFEARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct safearray_t                                               
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                           
        _m00 uint16_t                                    c_dims;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cDims
        _m01 uint16_t                                    f_features;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .fFeatures
        _m02 uint32_t                                    cb_elements;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbElements
        _m03 uint32_t                                    c_locks;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cLocks
        _m04 void*                                       pv_data;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvData
        _m05 sdk::array<struct tag::safearraybound_t, 1> rgsabound;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgsabound
                                                                     
        SDK_MAGIC_PROPERTIES( "tagSAFEARRAY.$", 0x20, true, 0x3bc4445e54901cd9 );            
        SDK_FIXED_SIZE( safearray_t, 0x20 );                         
    };                                                               
};
#include "magic/safearray_t.end.hpp"
SDK_VERIFY( struct tag::safearray_t, 0x20 );
