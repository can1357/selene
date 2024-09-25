#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kums_context_header_t.start.hpp"
namespace nt
{
    struct kthread_t;

    // [struct _KUMS_CONTEXT_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kums_context_header_t                   
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                         
        _m00 uint64_t              p1_home;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .P1Home
        _m01 uint64_t              p2_home;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .P2Home
        _m02 uint64_t              p3_home;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .P3Home
        _m03 uint64_t              p4_home;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .P4Home
        _m04 void*                 stack_top;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .StackTop
        _m05 uint64_t              stack_size;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .StackSize
        _m06 uint64_t              rsp_offset;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .RspOffset
        _m07 uint64_t              rip;              //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Rip
        _m08 nt::xsave_format*     flt_save;         //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .FltSave
        _m09 uint1_t               _volatile;        //{ +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  } | .Volatile
        _m10 uint64_t              flags;            //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Flags
        _m11 nt::trapframe*        trap_frame;       //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .TrapFrame
        _m12 nt::exframe*          exception_frame;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ExceptionFrame
        _m13 struct nt::kthread_t* source_thread;    //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .SourceThread
        _m14 uint64_t              _return;          //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Return
                                                   
        SDK_NONVOL_PROPERTIES( "_KUMS_CONTEXT_HEADER.$", 0x70, true, 0xcb11c9750cd3a842 );                
        SDK_FIXED_SIZE( kums_context_header_t, 0x70 );                
    };                                             
};
#include "magic/kums_context_header_t.end.hpp"
SDK_VERIFY( struct nt::kums_context_header_t, 0x70 );
