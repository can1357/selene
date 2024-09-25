#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/provider_metadata_t.start.hpp"
namespace tlg
{
    // [struct _tlgProviderMetadata_t]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_metadata_t                
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint8_t           type;            //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::guid_t provider_id;     //{ +0x0001    +0x0001    +0x0001    } | .ProviderId
        _m02 uint16_t          remaining_size;  //{ +0x0011    +0x0011    +0x0011    } | .RemainingSize
                                              
        SDK_MAGIC_PROPERTIES( "_tlgProviderMetadata_t.$", 0x13, true, 0x3ec526511a21602d );               
        SDK_FIXED_SIZE( provider_metadata_t, 0x13 );               
    };                                        
};
#include "magic/provider_metadata_t.end.hpp"
SDK_VERIFY( struct tlg::provider_metadata_t, 0x13 );
