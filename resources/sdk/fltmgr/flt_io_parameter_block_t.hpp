#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_parameters_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/flt_io_parameter_block_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;

    // [struct _FLT_IO_PARAMETER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_io_parameter_block_t                            
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint32_t                       irp_flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IrpFlags
        _m01 uint8_t                        major_function;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorFunction
        _m02 uint8_t                        minor_function;      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MinorFunction
        _m03 uint8_t                        operation_flags;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .OperationFlags
        _m04 struct nt::file_object_t*      target_file_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetFileObject
        _m05 struct fltmgr::flt_instance_t* target_instance;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetInstance
        _m06 union fltmgr::flt_parameters_t parameters;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                               
        SDK_MAGIC_PROPERTIES( "_FLT_IO_PARAMETER_BLOCK.$", 0x48, true, 0x8a58150582756f26 );                   
        SDK_FIXED_SIZE( flt_io_parameter_block_t, 0x48 );                   
    };                                                         
};
#include "magic/flt_io_parameter_block_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_io_parameter_block_t, 0x48 );
