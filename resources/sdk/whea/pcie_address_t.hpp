#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcie_address_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIE_ADDRESS]
    // => Windows 11
    //
    struct pcie_address_t      
    {                          
        // Windows 11          
        //                     
        _m00 uint32_t segment;   //{ +0x0000    } | .Segment
        _m01 uint32_t bus;       //{ +0x0004    } | .Bus
        _m02 uint32_t device;    //{ +0x0008    } | .Device
        _m03 uint32_t function;  //{ +0x000c    } | .Function
                               
        SDK_MAGIC_PROPERTIES( "_WHEA_PCIE_ADDRESS.$", 0x0, false, 0x44579a3508402459 );         
        SDK_FIXED_SIZE( pcie_address_t, 0x10 );         
    };                         
};
#include "magic/pcie_address_t.end.hpp"
SDK_VERIFY( struct whea::pcie_address_t, 0x10 );
