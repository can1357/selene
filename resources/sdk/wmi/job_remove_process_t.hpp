#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/job_remove_process_t.start.hpp"
namespace wmi
{
    // [struct _WMI_JOB_REMOVE_PROCESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_remove_process_t                  
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 struct nt::guid_t container_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContainerId
        _m01 uint32_t          job_id;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .JobId
        _m02 uint32_t          unique_process_id;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .UniqueProcessId
        _m03 uint32_t          removal_flags;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RemovalFlags
        _m04 int32_t           exit_status;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ExitStatus
                                                 
        SDK_MAGIC_PROPERTIES( "_WMI_JOB_REMOVE_PROCESS.$", 0x20, true, 0x918a4fb6ec72f50d );                  
        SDK_FIXED_SIZE( job_remove_process_t, 0x20 );                  
    };                                           
};
#include "magic/job_remove_process_t.end.hpp"
SDK_VERIFY( struct wmi::job_remove_process_t, 0x20 );
