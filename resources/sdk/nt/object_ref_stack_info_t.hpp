#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_ref_stack_info_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_REF_STACK_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_ref_stack_info_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t sequence;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sequence
        _m01 uint16_t index;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Index
        _m02 uint16_t num_traces;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumTraces
        _m03 uint32_t tag;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
                                  
        SDK_MAGIC_PROPERTIES( "_OBJECT_REF_STACK_INFO.$", 0xc, true, 0x27045bbc63009e22 );           
        SDK_FIXED_SIZE( object_ref_stack_info_t, 0xc );           
    };                            
};
#include "magic/object_ref_stack_info_t.end.hpp"
SDK_VERIFY( struct nt::object_ref_stack_info_t, 0xc );
