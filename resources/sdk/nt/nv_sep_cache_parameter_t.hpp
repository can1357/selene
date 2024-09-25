#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nv_sep_cache_parameter_t.start.hpp"
namespace nt
{
    // [struct _NV_SEP_CACHE_PARAMETER]
    // => WDK 10 (NV)
    //
    struct nv_sep_cache_parameter_t                                                                
    {                                                                                              
        union u0_flags_t                                                                           
        {                                                                                          
            struct u1_cache_flags_t                                                                
            {                                                                                      
                // WDK 10                                                                          
                //                                                                                 
                _m02 uint1_t write_cache_enabled;                                                    //{ +0x0000@0  } | .WriteCacheEnabled
                _m03 uint1_t write_cache_changeable;                                                 //{ +0x0000@1  } | .WriteCacheChangeable
                _m04 uint1_t write_through_io_supported;                                             //{ +0x0000@2  } | .WriteThroughIOSupported
                _m05 uint1_t flush_cache_supported;                                                  //{ +0x0000@3  } | .FlushCacheSupported
                                                                                                   
                SDK_NONVOL_PROPERTIES( "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags.$", 0x0, false, 0x6e616f64a6dd82cf );                                                                      
                SDK_FIXED_SIZE( u1_cache_flags_t, 0x1 );                                                                      
            };                                                                                     
                                                                                                   
            // WDK 10                                                                              
            //                                                                                     
            _m06 u1_cache_flags_t                       cache_flags;                                 //{ +0x0000    } | .CacheFlags
            _m07 uint8_t                                cache_flags_set;                             //{ +0x0000    } | .CacheFlagsSet
                                                                                                   
            SDK_NONVOL_PROPERTIES( "_NV_SEP_CACHE_PARAMETER.Flags.$", 0x0, false, 0x96fa60ce6ad9ddad );                                           
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                                     
        };                                                                                         
                                                                                                   
        // WDK 10                                                                                  
        //                                                                                         
        _m00 uint32_t                                                   version;                     //{ +0x0000    } | .Version
        _m01 uint32_t                                                   size;                        //{ +0x0004    } | .Size
        _m08 u0_flags_t                                                 flags;                       //{ +0x0008    } | .Flags
        _m09 uint8_t                                                    write_cache_type;            //{ +0x0009    } | .WriteCacheType
        _m10 uint8_t                                                    write_cache_type_effective;  //{ +0x000a    } | .WriteCacheTypeEffective
        _m11 sdk::array<uint8_t, 3>                                     parameter_reserve1;          //{ +0x000b    } | .ParameterReserve1
                                                                                                   
        SDK_NONVOL_PROPERTIES( "_NV_SEP_CACHE_PARAMETER.$", 0x0, false, 0x9f4cf50784a77b43 );                           
        SDK_FIXED_SIZE( nv_sep_cache_parameter_t, 0x10 );                                          
    };                                                                                             
};
#include "magic/nv_sep_cache_parameter_t.end.hpp"
SDK_VERIFY( struct nt::nv_sep_cache_parameter_t::u0_flags_t::u1_cache_flags_t, 0x1 );
SDK_VERIFY( union nt::nv_sep_cache_parameter_t::u0_flags_t, 0x1 );
SDK_VERIFY( struct nt::nv_sep_cache_parameter_t, 0x10 );
