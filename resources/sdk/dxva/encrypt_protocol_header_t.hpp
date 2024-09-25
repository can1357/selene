#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/encrypt_protocol_header_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_EncryptProtocolHeader]
    // => WDK 10 (NV)
    //
    struct encrypt_protocol_header_t                 
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint32_t          dw_function;            //{ +0x0000    } | .dwFunction
        _m01 struct nt::guid_t guid_encrypt_protocol;  //{ +0x0010    } | .guidEncryptProtocol
                                                     
        SDK_NONVOL_PROPERTIES( "_DXVA_EncryptProtocolHeader.$", 0x0, false, 0x5a16e0d4549a5a4 );                      
        SDK_FIXED_SIZE( encrypt_protocol_header_t, 0x20 );                      
    };                                               
};
#include "magic/encrypt_protocol_header_t.end.hpp"
SDK_VERIFY( struct dxva::encrypt_protocol_header_t, 0x20 );
