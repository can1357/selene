#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct exception_registration_record_t; }

#include "magic/wx86tib_t.start.hpp"
namespace win
{
    // [struct _Wx86TIB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wx86tib_t                                                        
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 uint32_t                             size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                             initial_pc;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InitialPc
        _m02 void __ptr32*                        stack_base;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackBase
        _m03 void __ptr32*                        stack_limit;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .StackLimit
        _m04 void __ptr32*                        deallocation_stack;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeallocationStack
        _m05 uint32_t                             log_flags;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LogFlags
        _m06 uint32_t                             initial_sp;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InitialSp
        _m07 uint8_t                              simulation_count;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SimulationCount
        _m08 uint8_t                              in_cpu_simulation;          //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .InCpuSimulation
        _m09 uint8_t                              emulate_initial_pc;         //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .EmulateInitialPc
        _m10 uint8_t                              initialized;                //{ +0x001f    +0x001f    +0x001f    +0x001f    } | .Initialized
        _m11 sdk::unknown /* unhandled pointer */ exception_list;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExceptionList
        _m12 void __ptr32*                        cpu_context;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CpuContext
        _m13 sdk::unknown /* unhandled pointer */ initial_exception_context;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InitialExceptionContext
        _m14 void __ptr32*                        p_callers_riid;             //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .pCallersRIID
        _m15 void __ptr32*                        p_callers_unknown;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pCallersUnknown
        _m16 uint32_t                             flags;                      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
        _m17 void __ptr32*                        self_reg_dll_name;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SelfRegDllName
        _m18 void __ptr32*                        self_reg_dll_handle;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SelfRegDllHandle
                                                                            
        SDK_MAGIC_PROPERTIES( "_Wx86TIB.$", 0x40, true, 0x1226ec2944244b05 );                          
        SDK_FIXED_SIZE( wx86tib_t, 0x40 );                                  
    };                                                                      
};
#include "magic/wx86tib_t.end.hpp"
SDK_VERIFY( struct win::wx86tib_t, 0x40 );
