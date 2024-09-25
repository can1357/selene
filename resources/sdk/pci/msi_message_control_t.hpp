#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msi_message_control_t.start.hpp"
namespace pci
{
    // [union _PCI_MSI_MESSAGE_CONTROL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union msi_message_control_t                
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  msi_enable;                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .MSIEnable
        _m01 uint3_t  multiple_message_capable;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .MultipleMessageCapable
        _m02 uint3_t  multiple_message_enable;   //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .MultipleMessageEnable
        _m03 uint1_t  capable_of64_bits;         //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .CapableOf64Bits
        _m04 uint1_t  per_vector_mask_capable;   //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .PerVectorMaskCapable
        _m05 uint16_t as_ushort;                 //{ +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                               
        SDK_MAGIC_PROPERTIES( "_PCI_MSI_MESSAGE_CONTROL.$", 0x2, true, 0x4f537a1371370b7f );                         
        SDK_FIXED_SIZE( msi_message_control_t, 0x2 );                         
    };                                         
};
#include "magic/msi_message_control_t.end.hpp"
SDK_VERIFY( union pci::msi_message_control_t, 0x2 );
