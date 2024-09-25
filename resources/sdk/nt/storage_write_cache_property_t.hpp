#pragma once
#include <sdkgen/support_library.hpp>
#include "write_through_t.hpp"
#include "write_cache_type_t.hpp"
#include "write_cache_change_t.hpp"
#include "write_cache_enable_t.hpp"

#include "magic/storage_write_cache_property_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_WRITE_CACHE_PROPERTY]
    // => WDK 10 (NV)
    //
    struct storage_write_cache_property_t                                
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                      version;                        //{ +0x0000    } | .Version
        _m01 uint32_t                      size;                           //{ +0x0004    } | .Size
        _m02 enum nt::write_cache_type_t   write_cache_type;               //{ +0x0008    } | .WriteCacheType
        _m03 enum nt::write_cache_enable_t write_cache_enabled;            //{ +0x000c    } | .WriteCacheEnabled
        _m04 enum nt::write_cache_change_t write_cache_changeable;         //{ +0x0010    } | .WriteCacheChangeable
        _m05 enum nt::write_through_t      write_through_supported;        //{ +0x0014    } | .WriteThroughSupported
        _m06 uint8_t                       flush_cache_supported;          //{ +0x0018    } | .FlushCacheSupported
        _m07 uint8_t                       user_defined_power_protection;  //{ +0x0019    } | .UserDefinedPowerProtection
        _m08 uint8_t                       nv_cache_enabled;               //{ +0x001a    } | .NVCacheEnabled
                                                                         
        SDK_NONVOL_PROPERTIES( "_STORAGE_WRITE_CACHE_PROPERTY.$", 0x0, false, 0xcb031e8f11777d0a );                              
        SDK_FIXED_SIZE( storage_write_cache_property_t, 0x1c );                              
    };                                                                   
};
#include "magic/storage_write_cache_property_t.end.hpp"
SDK_VERIFY( struct nt::storage_write_cache_property_t, 0x1c );
