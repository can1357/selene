#pragma once
#include <sdkgen/support_library.hpp>
#include "write_flags_t.hpp"
#include "ioring_op_flags_t.hpp"
#include "ioring_bufferref_t.hpp"
#include "ioring_handleref_t.hpp"

#include "magic/ioring_op_write_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_OP_WRITE]
    // => Windows 11
    //
    struct ioring_op_write_t                              
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 enum os::ioring_op_flags_t   common_op_flags;  //{ +0x0000    } | .CommonOpFlags
        _m01 enum os::write_flags_t       flags;            //{ +0x0004    } | .Flags
        _m02 union os::ioring_handleref_t file;             //{ +0x0008    } | .File
        _m03 union os::ioring_bufferref_t buffer;           //{ +0x0010    } | .Buffer
        _m04 uint64_t                     offset;           //{ +0x0018    } | .Offset
        _m05 uint32_t                     length;           //{ +0x0020    } | .Length
        _m06 uint32_t                     key;              //{ +0x0024    } | .Key
                                                          
        SDK_MAGIC_PROPERTIES( "_NT_IORING_OP_WRITE.$", 0x0, false, 0xb23645c218a11974 );                
        SDK_FIXED_SIZE( ioring_op_write_t, 0x28 );                
    };                                                    
};
#include "magic/ioring_op_write_t.end.hpp"
SDK_VERIFY( struct os::ioring_op_write_t, 0x28 );
