#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_resource_descriptor_t.hpp"

#include "magic/fpb_pdo_resource_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_PDO_RESOURCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fpb_pdo_resource_t                                           
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 struct pci::fpb_resource_descriptor_t bus_numbers_decoding;  //{ +0x0000    +0x0000    +0x0000    } | .BusNumbersDecoding
        _m01 struct pci::fpb_resource_descriptor_t memory_low_decoding;   //{ +0x0038    +0x0038    +0x0038    } | .MemoryLowDecoding
        _m02 struct pci::fpb_resource_descriptor_t memory_high_decoding;  //{ +0x0070    +0x0070    +0x0070    } | .MemoryHighDecoding
                                                                        
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_PDO_RESOURCE.$", 0xa8, true, 0x153209ce5241c607 );                     
        SDK_FIXED_SIZE( fpb_pdo_resource_t, 0xa8 );                     
    };                                                                  
};
#include "magic/fpb_pdo_resource_t.end.hpp"
SDK_VERIFY( struct pci::fpb_pdo_resource_t, 0xa8 );
