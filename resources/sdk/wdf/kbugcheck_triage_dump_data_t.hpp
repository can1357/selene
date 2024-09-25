#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kbugcheck_triage_dump_data_t.start.hpp"
namespace wdf
{
    struct ktriage_dump_data_array_t;

    // [struct _KBUGCHECK_TRIAGE_DUMP_DATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_triage_dump_data_t                                  
    {                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 struct wdf::ktriage_dump_data_array_t* data_array;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataArray
        _m01 uint32_t                               flags;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t                               max_virt_mem_size;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxVirtMemSize
        _m03 uint32_t                               bug_check_code;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BugCheckCode
        _m04 uint64_t                               bug_check_parameter1;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BugCheckParameter1
        _m05 uint64_t                               bug_check_parameter2;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BugCheckParameter2
        _m06 uint64_t                               bug_check_parameter3;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BugCheckParameter3
        _m07 uint64_t                               bug_check_parameter4;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BugCheckParameter4
                                                                         
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_TRIAGE_DUMP_DATA.$", 0x38, true, 0xd971b7cfbe85a27f );                     
        SDK_FIXED_SIZE( kbugcheck_triage_dump_data_t, 0x38 );                     
    };                                                                   
};
#include "magic/kbugcheck_triage_dump_data_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_triage_dump_data_t, 0x38 );
