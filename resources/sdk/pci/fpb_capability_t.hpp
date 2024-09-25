#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_capability_header_t.hpp"
#include "fpb_capabilities_register_t.hpp"
#include "fpb_vector_access_data_register_t.hpp"
#include "fpb_rid_vector_control1_register_t.hpp"
#include "fpb_rid_vector_control2_register_t.hpp"
#include "fpb_vector_access_control_register_t.hpp"
#include "fpb_mem_low_vector_control_register_t.hpp"
#include "fpb_mem_high_vector_control1_register_t.hpp"
#include "fpb_mem_high_vector_control2_register_t.hpp"

#include "magic/fpb_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fpb_capability_t                                                                     
    {                                                                                           
        using mem_high_vector_control1_register_t = union pci::fpb_mem_high_vector_control1_register_t;                                  
        using mem_high_vector_control2_register_t = struct pci::fpb_mem_high_vector_control2_register_t;                                  
                                                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                      
        _m00 struct pci::fpb_capability_header_t              header;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::fpb_capabilities_register_t           capabilities_register;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CapabilitiesRegister
        _m02 union pci::fpb_rid_vector_control1_register_t    rid_vector_control1_register;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RidVectorControl1Register
        _m03 union pci::fpb_rid_vector_control2_register_t    rid_vector_control2_register;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RidVectorControl2Register
        _m04 union pci::fpb_mem_low_vector_control_register_t mem_low_vector_control_register;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MemLowVectorControlRegister
        _m05 mem_high_vector_control1_register_t              mem_high_vector_control1_register;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MemHighVectorControl1Register
        _m06 mem_high_vector_control2_register_t              mem_high_vector_control2_register;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MemHighVectorControl2Register
        _m07 union pci::fpb_vector_access_control_register_t  vector_access_control_register;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .VectorAccessControlRegister
        _m08 struct pci::fpb_vector_access_data_register_t    vector_access_data_register;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VectorAccessDataRegister
                                                                                                
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_CAPABILITY.$", 0x24, true, 0x8511af5b488444b2 );                                  
        SDK_FIXED_SIZE( fpb_capability_t, 0x24 );                                               
    };                                                                                          
};
#include "magic/fpb_capability_t.end.hpp"
SDK_VERIFY( struct pci::fpb_capability_t, 0x24 );
