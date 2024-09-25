#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kbugcheck_secondary_dump_data_ex_t.start.hpp"
namespace wdf
{
    // [struct _KBUGCHECK_SECONDARY_DUMP_DATA_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kbugcheck_secondary_dump_data_ex_t       
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 void*             in_buffer;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InBuffer
        _m01 uint32_t          in_buffer_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InBufferLength
        _m02 uint32_t          maximum_allowed;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MaximumAllowed
        _m03 struct nt::guid_t guid;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Guid
        _m04 void*             out_buffer;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OutBuffer
        _m05 uint32_t          out_buffer_length;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OutBufferLength
        _m06 void*             context;               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Context
        _m07 uint32_t          flags;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m08 uint32_t          dump_type;             //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .DumpType
        _m09 uint32_t          bug_check_code;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .BugCheckCode
        _m10 uint64_t          bug_check_parameter1;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .BugCheckParameter1
        _m11 uint64_t          bug_check_parameter2;  //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .BugCheckParameter2
        _m12 uint64_t          bug_check_parameter3;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .BugCheckParameter3
        _m13 uint64_t          bug_check_parameter4;  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .BugCheckParameter4
                                                    
        SDK_NONVOL_PROPERTIES( "_KBUGCHECK_SECONDARY_DUMP_DATA_EX.$", 0x68, true, 0x2579fc79310fd0f1 );                     
        SDK_FIXED_SIZE( kbugcheck_secondary_dump_data_ex_t, 0x68 );                     
    };                                              
};
#include "magic/kbugcheck_secondary_dump_data_ex_t.end.hpp"
SDK_VERIFY( struct wdf::kbugcheck_secondary_dump_data_ex_t, 0x68 );
