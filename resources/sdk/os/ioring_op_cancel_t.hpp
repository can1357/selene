#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_op_flags_t.hpp"
#include "ioring_handleref_t.hpp"

#include "magic/ioring_op_cancel_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_CANCEL]
    // => Windows 11
    //
    struct ioring_op_cancel_t                             
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 enum os::ioring_op_flags_t   common_op_flags;  //{ +0x0000    } | .CommonOpFlags
        _m01 union os::ioring_handleref_t file;             //{ +0x0008    } | .File
        _m02 uint64_t                     cancel_id;        //{ +0x0010    } | .CancelId
                                                          
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_CANCEL.$", 0x0, false, 0xbbe4616ef6d0886b );                
        SDK_FIXED_SIZE( ioring_op_cancel_t, 0x18 );                
    };                                                    
};
#include "magic/ioring_op_cancel_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_cancel_t, 0x18 );
