#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/job_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_JOB_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_information_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 struct nt::guid_t container_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContainerId
        _m01 uint32_t          job_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .JobId
        _m02 uint32_t          flags;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m03 int32_t           status;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
                                            
        SDK_MAGIC_PROPERTIES( "_WMI_JOB_INFORMATION.$", 0x1c, true, 0xdd050ff6bbd20728 );             
        SDK_FIXED_SIZE( job_information_t, 0x1c );             
    };                                      
};
#include "magic/job_information_t.end.hpp"
SDK_VERIFY( struct wmi::job_information_t, 0x1c );
