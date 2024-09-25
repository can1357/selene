#pragma once
#include <sdkgen/support_library.hpp>
#include "ioring_op_read_t.hpp"
#include "ioring_op_flush_t.hpp"
#include "ioring_op_write_t.hpp"
#include "ioring_op_cancel_t.hpp"
#include "ioring_sqe_flags_t.hpp"
#include "ioring_op_reserved_t.hpp"
#include "../nt/ioring_op_code_t.hpp"
#include "ioring_op_register_files_t.hpp"
#include "ioring_op_register_buffers_t.hpp"

#include "magic/ioring_sqe_t.start.hpp"
namespace os
{
    // [struct _NT_IORING_SQE]
    // => Windows 11
    //
    struct ioring_sqe_t                                                        
    {                                                                          
        // Windows 11                                                          
        //                                                                     
        _m00 enum nt::ioring_op_code_t               op_code;                    //{ +0x0000    } | .OpCode
        _m01 enum os::ioring_sqe_flags_t             flags;                      //{ +0x0004    } | .Flags
        _m02 uint64_t                                user_data;                  //{ +0x0008    } | .UserData
        _m03 uint64_t                                padding_user_data_for_wow;  //{ +0x0008    } | .PaddingUserDataForWow
        _m04 struct os::ioring_op_read_t             read;                       //{ +0x0010    } | .Read
        _m05 struct os::ioring_op_register_files_t   register_files;             //{ +0x0010    } | .RegisterFiles
        _m06 struct os::ioring_op_register_buffers_t register_buffers;           //{ +0x0010    } | .RegisterBuffers
        _m07 struct os::ioring_op_cancel_t           cancel;                     //{ +0x0010    } | .Cancel
        _m08 struct os::ioring_op_write_t            write;                      //{ +0x0010    } | .Write
        _m09 struct os::ioring_op_flush_t            flush;                      //{ +0x0010    } | .Flush
        _m10 struct os::ioring_op_reserved_t         reserved_max_size_padding;  //{ +0x0010    } | .ReservedMaxSizePadding
                                                                               
        SDK_MAGIC_PROPERTIES( "_NT_IORING_SQE.$", 0x0, false, 0x83e14a18b41442e7 );                          
        SDK_FIXED_SIZE( ioring_sqe_t, 0x40 );                                  
    };                                                                         
};
#include "magic/ioring_sqe_t.end.hpp"
SDK_VERIFY( struct os::ioring_sqe_t, 0x40 );
