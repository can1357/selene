#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_status_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_STATUS]
    // => WDK 10 (NV)
    //
    struct agp_status_t                          
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint3_t rate;                         //{ +0x0000@0  } | .Rate
        _m01 uint1_t agp3_mode;                    //{ +0x0000@3  } | .Agp3Mode
        _m02 uint1_t fast_write;                   //{ +0x0000@4  } | .FastWrite
        _m03 uint1_t four_gb;                      //{ +0x0000@5  } | .FourGB
        _m04 uint1_t host_trans_disable;           //{ +0x0000@6  } | .HostTransDisable
        _m05 uint1_t gart64;                       //{ +0x0000@7  } | .Gart64
        _m06 uint1_t ita_coherent;                 //{ +0x0000@8  } | .ITA_Coherent
        _m07 uint1_t side_band_addressing;         //{ +0x0000@9  } | .SideBandAddressing
        _m08 uint3_t calibration_cycle;            //{ +0x0000@10 } | .CalibrationCycle
        _m09 uint3_t async_request_size;           //{ +0x0000@13 } | .AsyncRequestSize
        _m10 uint1_t rsvd1;                        //{ +0x0000@16 } | .Rsvd1
        _m11 uint1_t isoch;                        //{ +0x0000@17 } | .Isoch
        _m12 uint6_t rsvd2;                        //{ +0x0000@18 } | .Rsvd2
        _m13 uint8_t request_queue_depth_maximum;  //{ +0x0000@24 } | .RequestQueueDepthMaximum
                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_STATUS.$", 0x0, false, 0x1eb24791ca456afa );                            
        SDK_FIXED_SIZE( agp_status_t, 0x4 );                            
    };                                           
};
#include "magic/agp_status_t.end.hpp"
SDK_VERIFY( struct pci::agp_status_t, 0x4 );
