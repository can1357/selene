#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_hdcp_key_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusHDCPKeyData]
    // => WDK 10 (NV)
    //
    struct copp_status_hdcp_key_data_t       
    {                                        
        // WDK 10                            
        //                                   
        _m00 struct nt::guid_t r_app;          //{ +0x0000    } | .rApp
        _m01 uint32_t          dw_flags;       //{ +0x0010    } | .dwFlags
        _m02 uint32_t          dw_hdcp_flags;  //{ +0x0014    } | .dwHDCPFlags
        _m03 struct nt::guid_t b_key;          //{ +0x0018    } | .BKey
                                             
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusHDCPKeyData.$", 0x0, false, 0x96144319ad1ffb7d );              
        SDK_FIXED_SIZE( copp_status_hdcp_key_data_t, 0x48 );              
    };                                       
};
#include "magic/copp_status_hdcp_key_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_hdcp_key_data_t, 0x48 );
