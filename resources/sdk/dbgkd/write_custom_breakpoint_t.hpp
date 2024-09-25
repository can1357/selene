#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_custom_breakpoint_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_WRITE_CUSTOM_BREAKPOINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_custom_breakpoint_t                    
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint64_t break_point_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakPointAddress
        _m01 uint64_t break_point_instruction;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BreakPointInstruction
        _m02 uint32_t break_point_handle;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BreakPointHandle
        _m03 uint8_t  break_point_instruction_size;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BreakPointInstructionSize
        _m04 uint8_t  break_point_instruction_alignment;  //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .BreakPointInstructionAlignment
                                                        
        SDK_MAGIC_PROPERTIES( "_DBGKD_WRITE_CUSTOM_BREAKPOINT.$", 0x18, true, 0x9ad7145e0fcb88e4 );                                  
        SDK_FIXED_SIZE( write_custom_breakpoint_t, 0x18 );                                  
    };                                                  
};
#include "magic/write_custom_breakpoint_t.end.hpp"
SDK_VERIFY( struct dbgkd::write_custom_breakpoint_t, 0x18 );
