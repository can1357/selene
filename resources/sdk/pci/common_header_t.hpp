#pragma once
#include <sdkgen/support_library.hpp>
#include "header_type_0_t.hpp"
#include "header_type_1_t.hpp"
#include "header_type_2_t.hpp"

#include "magic/common_header_t.start.hpp"
namespace pci
{
    // [struct _PCI_COMMON_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct common_header_t                               
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 uint16_t                    vendor_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VendorID
        _m01 uint16_t                    device_id;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .DeviceID
        _m02 uint16_t                    command;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Command
        _m03 uint16_t                    status;           //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Status
        _m04 uint8_t                     revision_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RevisionID
        _m05 uint8_t                     prog_if;          //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .ProgIf
        _m06 uint8_t                     sub_class;        //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .SubClass
        _m07 uint8_t                     base_class;       //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .BaseClass
        _m08 uint8_t                     cache_line_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .CacheLineSize
        _m09 uint8_t                     latency_timer;    //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .LatencyTimer
        _m10 uint8_t                     header_type;      //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .HeaderType
        _m11 uint8_t                     bist;             //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .BIST
        _m12 struct pci::header_type_0_t type0;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .type0
        _m13 struct pci::header_type_1_t type1;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .type1
        _m14 struct pci::header_type_2_t type2;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .type2
                                                         
        SDK_NONVOL_PROPERTIES( "_PCI_COMMON_HEADER.$", 0x40, true, 0x3c639aa07653bc65 );                
        SDK_FIXED_SIZE( common_header_t, 0x40 );                
    };                                                   
};
#include "magic/common_header_t.end.hpp"
SDK_VERIFY( struct pci::common_header_t, 0x40 );
