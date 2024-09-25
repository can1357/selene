#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_triage_dump_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_TRIAGE_DUMP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_triage_dump_t        
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t bug_check_code;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BugCheckCode
        _m02 uint64_t bug_check_param1;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BugCheckParam1
        _m03 uint64_t bug_check_param2;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BugCheckParam2
        _m04 uint64_t bug_check_param3;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BugCheckParam3
        _m05 uint64_t bug_check_param4;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BugCheckParam4
        _m06 uint32_t process_handles;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessHandles
        _m07 uint32_t thread_handles;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ThreadHandles
        _m08 void**   handles;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Handles
                                       
        SDK_MAGIC_PROPERTIES( "_SYSDBG_TRIAGE_DUMP.$", 0x38, true, 0x4726cad8d46442f1 );                 
        SDK_FIXED_SIZE( sysdbg_triage_dump_t, 0x38 );                 
    };                                 
};
#include "magic/sysdbg_triage_dump_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_triage_dump_t, 0x38 );
