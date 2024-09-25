#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_node_t.hpp"

#include "magic/flt_verifier_object_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_VERIFIER_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_verifier_object_t                  
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                        
        _m00 struct fltmgr::tree_node_t tree_link;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeLink
        _m01 uint32_t                   type;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Type
        _m02 void*                      object;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Object
        _m03 int32_t                    ref_count;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RefCount
                                                  
        SDK_MAGIC_PROPERTIES( "_FLT_VERIFIER_OBJECT.$", 0x50, true, 0x4a3676e4a1476520 );          
        SDK_FIXED_SIZE( flt_verifier_object_t, 0x50 );          
    };                                            
};
#include "magic/flt_verifier_object_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_verifier_object_t, 0x50 );
