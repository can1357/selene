#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flags_t.start.hpp"
namespace nt
{
    // [struct _flags]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flags_t                          
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                       
        //                                  
        _m00 uint1_t removable;               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Removable
        _m01 uint1_t group_assigned;          //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .GroupAssigned
        _m02 uint1_t group_committed;         //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .GroupCommitted
        _m03 uint1_t group_assignment_fixed;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .GroupAssignmentFixed
                                            
        // Windows 11, Windows 10 v20H2                       
        //                                  
        _m04 uint1_t smt_sets_present;        //{ +0x0000@0  +0x0000@5  } | .SmtSetsPresent
                                            
        // Windows 10 v2004, Windows 10 v20H2                       
        //                                  
        _m05 uint1_t processor_only;          //{ +0x0000@4  +0x0000@4  } | .ProcessorOnly
                                            
        SDK_MAGIC_PROPERTIES( "_flags.$", 0x1, true, 0x4f56667c809d59ae );                       
        SDK_FIXED_SIZE( flags_t, 0x1 );                       
    };                                      
};
#include "magic/flags_t.end.hpp"
SDK_VERIFY( struct nt::flags_t, 0x1 );
