#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kcrm_protocol_blob_t.start.hpp"
namespace win
{
    // [struct _KCRM_PROTOCOL_BLOB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kcrm_protocol_blob_t                           
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m00 struct nt::guid_t protocol_id;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtocolId
        _m01 uint32_t          static_info_length;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .StaticInfoLength
        _m02 uint32_t          transaction_id_info_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TransactionIdInfoLength
                                                          
        SDK_NONVOL_PROPERTIES( "_KCRM_PROTOCOL_BLOB.$", 0x20, true, 0x51c628178f649162 );                           
        SDK_FIXED_SIZE( kcrm_protocol_blob_t, 0x20 );                           
    };                                                    
};
#include "magic/kcrm_protocol_blob_t.end.hpp"
SDK_VERIFY( struct win::kcrm_protocol_blob_t, 0x20 );
