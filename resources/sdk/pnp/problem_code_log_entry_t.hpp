#pragma once
#include <sdkgen/support_library.hpp>
#include "problem_code_log_operation_t.hpp"

#include "magic/problem_code_log_entry_t.start.hpp"
namespace pnp
{
    // [struct _PNP_PROBLEM_CODE_LOG_ENTRY]
    // => Windows 11
    //
    struct problem_code_log_entry_t                                
    {                                                              
        // Windows 11                                              
        //                                                         
        _m00 int64_t                                timestamp;       //{ +0x0000    } | .Timestamp
        _m01 enum pnp::problem_code_log_operation_t operation;       //{ +0x0008    } | .Operation
        _m02 uint32_t                               problem_code;    //{ +0x000c    } | .ProblemCode
        _m03 int32_t                                problem_status;  //{ +0x0010    } | .ProblemStatus
                                                                   
        SDK_MAGIC_PROPERTIES( "_PNP_PROBLEM_CODE_LOG_ENTRY.$", 0x0, false, 0xecea922a7290462 );               
        SDK_FIXED_SIZE( problem_code_log_entry_t, 0x18 );               
    };                                                             
};
#include "magic/problem_code_log_entry_t.end.hpp"
SDK_VERIFY( struct pnp::problem_code_log_entry_t, 0x18 );
