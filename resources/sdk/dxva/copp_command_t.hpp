#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_command_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPCommand]
    // => WDK 10 (NV)
    //
    struct copp_command_t                              
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 struct nt::guid_t         mac_kdi;          //{ +0x0000    } | .macKDI
        _m01 struct nt::guid_t         guid_command_id;  //{ +0x0010    } | .guidCommandID
        _m02 uint32_t                  dw_sequence;      //{ +0x0020    } | .dwSequence
        _m03 uint32_t                  cb_size_data;     //{ +0x0024    } | .cbSizeData
        _m04 sdk::array<uint8_t, 4056> command_data;     //{ +0x0028    } | .CommandData
                                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPCommand.$", 0x0, false, 0x788c06648698462a );                
        SDK_FIXED_SIZE( copp_command_t, 0x1000 );                
    };                                                 
};
#include "magic/copp_command_t.end.hpp"
SDK_VERIFY( struct dxva::copp_command_t, 0x1000 );
