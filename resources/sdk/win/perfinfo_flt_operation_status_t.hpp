#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_flt_operation_status_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_FLT_OPERATION_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_flt_operation_status_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 void*   routine_addr;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RoutineAddr
        _m01 void*   file_object;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m02 void*   fs_context;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FsContext
        _m03 void*   irp_ptr;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IrpPtr
        _m04 void*   cbd_ptr;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CbdPtr
        _m05 int32_t major_function;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MajorFunction
        _m06 int32_t status;                //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Status
                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_FLT_OPERATION_STATUS.$", 0x30, true, 0xd733a6f632a2aaef );               
        SDK_FIXED_SIZE( perfinfo_flt_operation_status_t, 0x30 );               
    };                                    
};
#include "magic/perfinfo_flt_operation_status_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_flt_operation_status_t, 0x30 );
