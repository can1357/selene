#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "mp_storage_diagnostic_level_t.hpp"
#include "mp_storage_diagnostic_target_type_t.hpp"

#include "magic/storage_diagnostic_mp_request_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DIAGNOSTIC_MP_REQUEST]
    // => WDK 10 (NV)
    //
    struct storage_diagnostic_mp_request_t                            
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                                     version;      //{ +0x0000    } | .Version
        _m01 uint32_t                                     size;         //{ +0x0004    } | .Size
        _m02 enum nt::mp_storage_diagnostic_target_type_t target_type;  //{ +0x0008    } | .TargetType
        _m03 enum nt::mp_storage_diagnostic_level_t       level;        //{ +0x000c    } | .Level
        _m04 struct nt::guid_t                            provider_id;  //{ +0x0010    } | .ProviderId
        _m05 uint32_t                                     buffer_size;  //{ +0x0020    } | .BufferSize
        _m06 sdk::array<uint8_t, 1>                       data_buffer;  //{ +0x0028    } | .DataBuffer
                                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_DIAGNOSTIC_MP_REQUEST.$", 0x0, false, 0xc4c230ba29751b2f );            
        SDK_FIXED_SIZE( storage_diagnostic_mp_request_t, 0x2c );            
    };                                                                
};
#include "magic/storage_diagnostic_mp_request_t.end.hpp"
SDK_VERIFY( struct nt::storage_diagnostic_mp_request_t, 0x2c );
