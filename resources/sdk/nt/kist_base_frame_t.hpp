#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kist_base_frame_t.start.hpp"
namespace nt
{
    struct kpcr_t;
    struct kist_link_frame_t;

    // [struct _KIST_BASE_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kist_base_frame_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 struct nt::kpcr_t*            kernel_gs_base;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelGsBase
        _m01 struct nt::kist_link_frame_t* ist_stack;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IstStack
        _m02 uint64_t                      previous_gs_base;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PreviousGsBase
        _m03 uint64_t                      previous_cr3;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PreviousCr3
                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m04 uint64_t                      ist_pad;           //{ +0x0020    +0x0020    +0x0020    } | .IstPad
                                                            
        SDK_MAGIC_PROPERTIES( "_KIST_BASE_FRAME.$", 0x30, true, 0x183a63d7833290ac );                 
        SDK_DYNAMIC_SIZE( kist_base_frame_t );                 
    };                                                      
};
#include "magic/kist_base_frame_t.end.hpp"
