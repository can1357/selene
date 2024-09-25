#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

namespace nt { struct teb_t; }

#include "magic/thread_basic_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_basic_information_t                
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 int32_t                exit_status;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExitStatus
        _m01 struct nt::teb_t*      teb_base_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TebBaseAddress
        _m02 struct nt::client_id_t client_id;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientId
        _m03 uint64_t               affinity_mask;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AffinityMask
        _m04 int32_t                priority;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Priority
        _m05 int32_t                base_priority;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BasePriority
                                                     
        SDK_MAGIC_PROPERTIES( "_THREAD_BASIC_INFORMATION.$", 0x30, true, 0x5e439062017535e3 );                 
        SDK_FIXED_SIZE( thread_basic_information_t, 0x30 );                 
    };                                               
};
#include "magic/thread_basic_information_t.end.hpp"
SDK_VERIFY( struct win::thread_basic_information_t, 0x30 );
