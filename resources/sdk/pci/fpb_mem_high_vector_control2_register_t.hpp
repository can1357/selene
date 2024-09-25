#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_mem_high_vector_control2_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fpb_mem_high_vector_control2_register_t
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t mem_high_vector_start_upper;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemHighVectorStartUpper
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER.$", 0x4, true, 0x65c3fd76a111c40b );                            
        SDK_FIXED_SIZE( fpb_mem_high_vector_control2_register_t, 0x4 );                            
    };                                            
};
#include "magic/fpb_mem_high_vector_control2_register_t.end.hpp"
SDK_VERIFY( struct pci::fpb_mem_high_vector_control2_register_t, 0x4 );
