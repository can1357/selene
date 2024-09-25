#pragma once
#include <sdkgen/support_library.hpp>
#include "minidump_memory_info_t.hpp"

#include "magic/minidump_callback_output_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_CALLBACK_OUTPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_callback_output_t                                   
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                              
        _m00 uint32_t                           module_write_flags;       //{ +0x0000    +0x0000    +0x0000    } | .ModuleWriteFlags
        _m01 uint32_t                           thread_write_flags;       //{ +0x0000    +0x0000    +0x0000    } | .ThreadWriteFlags
        _m02 uint32_t                           secondary_flags;          //{ +0x0000    +0x0000    +0x0000    } | .SecondaryFlags
        _m03 uint64_t                           memory_base;              //{ +0x0000    +0x0000    +0x0000    } | .MemoryBase
        _m04 uint32_t                           memory_size;              //{ +0x0008    +0x0008    +0x0008    } | .MemorySize
        _m05 int32_t                            check_cancel;             //{ +0x0000    +0x0000    +0x0000    } | .CheckCancel
        _m06 int32_t                            cancel;                   //{ +0x0004    +0x0004    +0x0004    } | .Cancel
        _m07 void*                              handle;                   //{ +0x0000    +0x0000    +0x0000    } | .Handle
        _m08 struct win::minidump_memory_info_t vm_region;                //{ +0x0000    +0x0000    +0x0000    } | .VmRegion
        _m09 int32_t                            _continue;                //{ +0x0030    +0x0030    +0x0030    } | .Continue
        _m10 sdk::hresult                       vm_query_status;          //{ +0x0000    +0x0000    +0x0000    } | .VmQueryStatus
        _m11 struct win::minidump_memory_info_t vm_query_result;          //{ +0x0004    +0x0004    +0x0004    } | .VmQueryResult
        _m12 sdk::hresult                       vm_read_status;           //{ +0x0000    +0x0000    +0x0000    } | .VmReadStatus
        _m13 uint32_t                           vm_read_bytes_completed;  //{ +0x0004    +0x0004    +0x0004    } | .VmReadBytesCompleted
        _m14 sdk::hresult                       status;                   //{ +0x0000    +0x0000    +0x0000    } | .Status
                                                                        
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_CALLBACK_OUTPUT.$", 0x34, true, 0xc7f40f101a7949f1 );                        
        SDK_FIXED_SIZE( minidump_callback_output_t, 0x34 );                        
    };                                                                  
};
#include "magic/minidump_callback_output_t.end.hpp"
SDK_VERIFY( struct win::minidump_callback_output_t, 0x34 );
