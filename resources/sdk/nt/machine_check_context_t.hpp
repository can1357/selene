#pragma once
#include <sdkgen/support_library.hpp>
#include "machine_frame_t.hpp"

#include "magic/machine_check_context_t.start.hpp"
namespace nt
{
    // [struct _MACHINE_CHECK_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct machine_check_context_t                    
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 struct nt::machine_frame_t machine_frame;  //{ +0x0000    +0x0000    +0x0000    } | .MachineFrame
        _m01 uint64_t                   rax;            //{ +0x0028    +0x0028    +0x0028    } | .Rax
        _m02 uint64_t                   rcx;            //{ +0x0030    +0x0030    +0x0030    } | .Rcx
        _m03 uint64_t                   rdx;            //{ +0x0038    +0x0038    +0x0038    } | .Rdx
        _m04 uint64_t                   gs_base;        //{ +0x0040    +0x0040    +0x0040    } | .GsBase
        _m05 uint64_t                   cr3;            //{ +0x0048    +0x0048    +0x0048    } | .Cr3
                                                      
        SDK_MAGIC_PROPERTIES( "_MACHINE_CHECK_CONTEXT.$", 0x50, true, 0xc6396fd3ccf6d38b );              
        SDK_FIXED_SIZE( machine_check_context_t, 0x50 );              
    };                                                
};
#include "magic/machine_check_context_t.end.hpp"
SDK_VERIFY( struct nt::machine_check_context_t, 0x50 );
