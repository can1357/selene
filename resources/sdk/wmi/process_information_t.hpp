#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_information_t           
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t unique_process_key;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcessKey
        _m01 uint32_t process_id;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m02 uint32_t parent_id;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ParentId
        _m03 uint32_t session_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SessionId
        _m04 int32_t  exit_status;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ExitStatus
        _m05 uint64_t directory_table_base;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DirectoryTableBase
        _m06 uint32_t flags;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m07 uint32_t sid;                   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Sid
                                           
        SDK_MAGIC_PROPERTIES( "_WMI_PROCESS_INFORMATION.$", 0x28, true, 0x2520ec985a504b03 );                     
        SDK_FIXED_SIZE( process_information_t, 0x28 );                     
    };                                     
};
#include "magic/process_information_t.end.hpp"
SDK_VERIFY( struct wmi::process_information_t, 0x28 );
