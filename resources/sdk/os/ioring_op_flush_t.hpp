#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_op_flags_t.hpp"
#include "ioring_handleref_t.hpp"

#include "magic/ioring_op_flush_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_FLUSH]
    // => Windows 11
    //
    struct ioring_op_flush_t                              
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 enum os::ioring_op_flags_t   common_op_flags;  //{ +0x0000    } | .CommonOpFlags
        _m01 uint32_t                     flags;            //{ +0x0004    } | .Flags
        _m02 union os::ioring_handleref_t file;             //{ +0x0008    } | .File
                                                          
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_FLUSH.$", 0x0, false, 0x6ef8c136f5bed25d );                
        SDK_FIXED_SIZE( ioring_op_flush_t, 0x10 );                
    };                                                    
};
#include "magic/ioring_op_flush_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_flush_t, 0x10 );
