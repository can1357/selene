#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ioring_op_reserved_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_RESERVED]
    // => Windows 11
    //
    struct ioring_op_reserved_t 
    {                           
        // Windows 11           
        //                      
        _m00 uint64_t argument1;  //{ +0x0000    } | .Argument1
        _m01 uint64_t argument2;  //{ +0x0008    } | .Argument2
        _m02 uint64_t argument3;  //{ +0x0010    } | .Argument3
        _m03 uint64_t argument4;  //{ +0x0018    } | .Argument4
        _m04 uint64_t argument5;  //{ +0x0020    } | .Argument5
        _m05 uint64_t argument6;  //{ +0x0028    } | .Argument6
                                
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_RESERVED.$", 0x0, false, 0x6b50a8d956c69168 );          
        SDK_FIXED_SIZE( ioring_op_reserved_t, 0x30 );          
    };                          
};
#include "magic/ioring_op_reserved_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_reserved_t, 0x30 );
