#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/global_appcompat_flags_t.start.hpp"
namespace heap
{
    // [struct _HEAP_GLOBAL_APPCOMPAT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct global_appcompat_flags_t         
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint1_t safe_input_validation;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SafeInputValidation
        _m01 uint1_t commit_lfh_subsegments;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CommitLFHSubsegments
                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m02 uint1_t allocate_heap_from_env;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .AllocateHeapFromEnv
                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_GLOBAL_APPCOMPAT_FLAGS.$", 0x4, true, 0x3f8ec77f41004545 );                       
        SDK_FIXED_SIZE( global_appcompat_flags_t, 0x4 );                       
    };                                      
};
#include "magic/global_appcompat_flags_t.end.hpp"
SDK_VERIFY( struct heap::global_appcompat_flags_t, 0x4 );
