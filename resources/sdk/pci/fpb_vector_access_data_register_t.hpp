#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_vector_access_data_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fpb_vector_access_data_register_t
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t vector_access_data;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VectorAccessData
                                            
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_VECTOR_ACCESS_DATA_REGISTER.$", 0x4, true, 0x9955a6988fe9bae7 );                   
        SDK_FIXED_SIZE( fpb_vector_access_data_register_t, 0x4 );                   
    };                                      
};
#include "magic/fpb_vector_access_data_register_t.end.hpp"
SDK_VERIFY( struct pci::fpb_vector_access_data_register_t, 0x4 );
