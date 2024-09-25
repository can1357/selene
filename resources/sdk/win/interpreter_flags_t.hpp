#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interpreter_flags_t.start.hpp"
namespace win
{
    // [struct INTERPRETER_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interpreter_flags_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                   
        _m00 uint1_t full_ptr_used;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FullPtrUsed
        _m01 uint1_t rpc_ss_alloc_used;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RpcSsAllocUsed
        _m02 uint1_t object_proc;              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ObjectProc
        _m03 uint1_t has_rpc_flags;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .HasRpcFlags
        _m04 uint1_t ignore_object_exception;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IgnoreObjectException
        _m05 uint1_t has_comm_or_fault;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HasCommOrFault
        _m06 uint1_t use_new_init_routines;    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .UseNewInitRoutines
                                             
        SDK_MAGIC_PROPERTIES( "INTERPRETER_FLAGS.$", 0x1, true, 0x11202bc4e19ae6ad );                        
        SDK_FIXED_SIZE( interpreter_flags_t, 0x1 );                        
    };                                       
};
#include "magic/interpreter_flags_t.end.hpp"
SDK_VERIFY( struct win::interpreter_flags_t, 0x1 );
