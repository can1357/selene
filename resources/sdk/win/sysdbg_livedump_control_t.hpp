#pragma once
#include <sdkgen/support_library.hpp>
#include "sysdbg_livedump_control_flags_t.hpp"
#include "sysdbg_livedump_control_addpages_t.hpp"

#include "magic/sysdbg_livedump_control_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_LIVEDUMP_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_livedump_control_t                                           
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                     
        _m00 uint32_t                                      version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                      bug_check_code;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BugCheckCode
        _m02 uint64_t                                      bug_check_param1;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BugCheckParam1
        _m03 uint64_t                                      bug_check_param2;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BugCheckParam2
        _m04 uint64_t                                      bug_check_param3;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BugCheckParam3
        _m05 uint64_t                                      bug_check_param4;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BugCheckParam4
        _m06 void*                                         dump_file_handle;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DumpFileHandle
        _m07 void*                                         cancel_event_handle;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CancelEventHandle
        _m08 union win::sysdbg_livedump_control_flags_t    flags;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m09 union win::sysdbg_livedump_control_addpages_t add_pages_control;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .AddPagesControl
                                                                               
        SDK_MAGIC_PROPERTIES( "_SYSDBG_LIVEDUMP_CONTROL.$", 0x40, true, 0x256289299558f727 );                    
        SDK_FIXED_SIZE( sysdbg_livedump_control_t, 0x40 );                     
    };                                                                         
};
#include "magic/sysdbg_livedump_control_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_livedump_control_t, 0x40 );
