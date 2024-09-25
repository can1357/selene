#pragma once
#include <sdkgen/support_library.hpp>
#include "wire_safearray_union_t.hpp"
#include "../tag/safearraybound_t.hpp"

#include "magic/wire_safearray_t.start.hpp"
namespace win
{
    // [struct _wireSAFEARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearray_t                                              
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                               
        _m00 uint16_t                                    c_dims;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cDims
        _m01 uint16_t                                    f_features;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .fFeatures
        _m02 uint32_t                                    cb_elements;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbElements
        _m03 uint32_t                                    c_locks;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cLocks
        _m04 struct win::wire_safearray_union_t          u_array_structs;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uArrayStructs
        _m05 sdk::array<struct tag::safearraybound_t, 1> rgsabound;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgsabound
                                                                         
        SDK_MAGIC_PROPERTIES( "_wireSAFEARRAY.$", 0x40, true, 0xad0bd8657237d90d );                
        SDK_FIXED_SIZE( wire_safearray_t, 0x40 );                        
    };                                                                   
};
#include "magic/wire_safearray_t.end.hpp"
SDK_VERIFY( struct win::wire_safearray_t, 0x40 );
