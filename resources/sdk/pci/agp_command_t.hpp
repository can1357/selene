#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_command_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_COMMAND]
    // => WDK 10 (NV)
    //
    struct agp_command_t                 
    {                                    
        // WDK 10                        
        //                               
        _m00 uint3_t rate;                 //{ +0x0000@0  } | .Rate
        _m01 uint1_t rsvd1;                //{ +0x0000@3  } | .Rsvd1
        _m02 uint1_t fast_write_enable;    //{ +0x0000@4  } | .FastWriteEnable
        _m03 uint1_t four_gb_enable;       //{ +0x0000@5  } | .FourGBEnable
        _m04 uint1_t rsvd2;                //{ +0x0000@6  } | .Rsvd2
        _m05 uint1_t gart64;               //{ +0x0000@7  } | .Gart64
        _m06 uint1_t agp_enable;           //{ +0x0000@8  } | .AGPEnable
        _m07 uint1_t sba_enable;           //{ +0x0000@9  } | .SBAEnable
        _m08 uint3_t calibration_cycle;    //{ +0x0000@10 } | .CalibrationCycle
        _m09 uint3_t async_req_size;       //{ +0x0000@13 } | .AsyncReqSize
        _m10 uint8_t rsvd3;                //{ +0x0000@16 } | .Rsvd3
        _m11 uint8_t request_queue_depth;  //{ +0x0000@24 } | .RequestQueueDepth
                                         
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_COMMAND.$", 0x0, false, 0xe5dd0a44bc84b98 );                    
        SDK_FIXED_SIZE( agp_command_t, 0x4 );                    
    };                                   
};
#include "magic/agp_command_t.end.hpp"
SDK_VERIFY( struct pci::agp_command_t, 0x4 );
