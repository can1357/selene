#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_input_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusInput]
    // => WDK 10 (NV)
    //
    struct copp_status_input_t                                
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct nt::guid_t         r_app;                   //{ +0x0000    } | .rApp
        _m01 struct nt::guid_t         guid_status_request_id;  //{ +0x0010    } | .guidStatusRequestID
        _m02 uint32_t                  dw_sequence;             //{ +0x0020    } | .dwSequence
        _m03 uint32_t                  cb_size_data;            //{ +0x0024    } | .cbSizeData
        _m04 sdk::array<uint8_t, 4056> status_data;             //{ +0x0028    } | .StatusData
                                                              
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusInput.$", 0x0, false, 0xe1c857ad8047d4c8 );                       
        SDK_FIXED_SIZE( copp_status_input_t, 0x1000 );                       
    };                                                        
};
#include "magic/copp_status_input_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_input_t, 0x1000 );
