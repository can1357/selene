#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_output_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusOutput]
    // => WDK 10 (NV)
    //
    struct copp_status_output_t                     
    {                                               
        // WDK 10                                   
        //                                          
        _m00 struct nt::guid_t         mac_kdi;       //{ +0x0000    } | .macKDI
        _m01 uint32_t                  cb_size_data;  //{ +0x0010    } | .cbSizeData
        _m02 sdk::array<uint8_t, 4076> copp_status;   //{ +0x0014    } | .COPPStatus
                                                    
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusOutput.$", 0x0, false, 0x5e560e41001a9f );             
        SDK_FIXED_SIZE( copp_status_output_t, 0x1000 );             
    };                                              
};
#include "magic/copp_status_output_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_output_t, 0x1000 );
