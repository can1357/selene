#pragma once
#include <sdkgen/support_library.hpp>
#include "hpx_type_0_t.hpp"
#include "hpx_type_2_t.hpp"

#include "magic/hpx_info_t.start.hpp"
namespace pci
{
    // [struct _PCI_HPX_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hpx_info_t                             
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 uint8_t                  valid_types;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidTypes
        _m01 struct pci::hpx_type_0_t type0;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .type0
        _m02 struct pci::hpx_type_2_t type2;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .type2
                                                  
        SDK_MAGIC_PROPERTIES( "_PCI_HPX_INFO.$", 0x48, true, 0xd3f44c87e844546e );            
        SDK_FIXED_SIZE( hpx_info_t, 0x48 );            
    };                                            
};
#include "magic/hpx_info_t.end.hpp"
SDK_VERIFY( struct pci::hpx_info_t, 0x48 );
