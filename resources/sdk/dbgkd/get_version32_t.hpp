#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_version32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_GET_VERSION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_version32_t                        
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint16_t major_version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
        _m02 uint16_t protocol_version;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProtocolVersion
        _m03 uint16_t flags;                        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Flags
        _m04 uint32_t kern_base;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KernBase
        _m05 uint32_t ps_loaded_module_list;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PsLoadedModuleList
        _m06 uint16_t machine_type;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MachineType
        _m07 uint16_t th_callback_stack;            //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ThCallbackStack
        _m08 uint16_t next_callback;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NextCallback
        _m09 uint16_t frame_pointer;                //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .FramePointer
        _m10 uint32_t ki_call_user_mode;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KiCallUserMode
        _m11 uint32_t ke_user_callback_dispatcher;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .KeUserCallbackDispatcher
        _m12 uint32_t breakpoint_with_status;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BreakpointWithStatus
        _m13 uint32_t debugger_data_list;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DebuggerDataList
                                                  
        SDK_MAGIC_PROPERTIES( "_DBGKD_GET_VERSION32.$", 0x28, true, 0xb06df8d0a09f0e58 );                            
        SDK_FIXED_SIZE( get_version32_t, 0x28 );                            
    };                                            
};
#include "magic/get_version32_t.end.hpp"
SDK_VERIFY( struct dbgkd::get_version32_t, 0x28 );
