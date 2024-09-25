#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cstruct_cobalt_modflag_t.start.hpp"
namespace sdb
{
    // [struct _SDB_CSTRUCT_COBALT_MODFLAG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cstruct_cobalt_modflag_t                                 
    {                                                               
        struct u0_specified_t                                       
        {                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                      
            _m09 uint64_t group1_as_uint64;                           //{ +0x0000    +0x0000    +0x0000    } | .Group1AsUINT64
            _m10 uint1_t  barriers_override;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .BarriersOverride
            _m11 uint1_t  internal_self_mod;                          //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .InternalSelfMod
            _m12 uint1_t  precise_exceptions;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .PreciseExceptions
            _m13 uint1_t  barriers;                                   //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .Barriers
            _m14 uint1_t  jit_cache;                                  //{ +0x0001@0  +0x0001@0  +0x0001@0  } | .JitCache
            _m15 uint1_t  always_lock;                                //{ +0x0001@1  +0x0001@1  +0x0001@1  } | .AlwaysLock
            _m16 uint1_t  merge_push_immed_pop;                       //{ +0x0001@2  +0x0001@2  +0x0001@2  } | .MergePushImmedPop
            _m17 uint1_t  strong_float;                               //{ +0x0001@3  +0x0001@3  +0x0001@3  } | .StrongFloat
            _m18 uint1_t  chpe;                                       //{ +0x0001@4  +0x0001@4  +0x0001@4  } | .CHPE
                                                                    
            // Windows 11                                           
            //                                                      
            _m19 uint1_t  volatile_metadata;                          //{ +0x0001@5  } | .VolatileMetadata
                                                                    
            SDK_MAGIC_PROPERTIES( "_SDB_CSTRUCT_COBALT_MODFLAG.Specified.$", 0x8, true, 0x6fdfefb5da9bf6e4 );                                          
            SDK_FIXED_SIZE( u0_specified_t, 0x8 );                                          
        };                                                          
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                          
        _m00 uint64_t                          barriers_override;     //{ +0x0000    +0x0000    +0x0000    } | .BarriersOverride
        _m01 uint32_t                          internal_self_mod;     //{ +0x0008    +0x0008    +0x0008    } | .InternalSelfMod
        _m02 uint32_t                          precise_exceptions;    //{ +0x000c    +0x000c    +0x000c    } | .PreciseExceptions
        _m03 uint4_t                           barriers;              //{ +0x0013@0  +0x0013@0  +0x0013@0  } | .Barriers
        _m04 uint1_t                           jit_cache;             //{ +0x0014@2  +0x0014@2  +0x0014@2  } | .JitCache
        _m05 uint1_t                           always_lock;           //{ +0x0014@3  +0x0014@3  +0x0014@3  } | .AlwaysLock
        _m06 uint1_t                           merge_push_immed_pop;  //{ +0x0014@4  +0x0014@4  +0x0014@4  } | .MergePushImmedPop
        _m07 uint1_t                           strong_float;          //{ +0x0014@5  +0x0014@5  +0x0014@5  } | .StrongFloat
        _m08 uint1_t                           chpe;                  //{ +0x0014@6  +0x0014@6  +0x0014@6  } | .CHPE
        _m20 u0_specified_t                    specified;             //{ +0x0018    +0x0018    +0x0018    } | .Specified
                                                                    
        // Windows 11                                               
        //                                                          
        _m21 uint1_t                           volatile_metadata;     //{ +0x0014@7  } | .VolatileMetadata
                                                                    
        SDK_MAGIC_PROPERTIES( "_SDB_CSTRUCT_COBALT_MODFLAG.$", 0x20, true, 0xe205c7e47ea156e8 );                     
        SDK_FIXED_SIZE( cstruct_cobalt_modflag_t, 0x20 );                     
    };                                                              
};
#include "magic/cstruct_cobalt_modflag_t.end.hpp"
SDK_VERIFY( struct sdb::cstruct_cobalt_modflag_t::u0_specified_t, 0x8 );
SDK_VERIFY( struct sdb::cstruct_cobalt_modflag_t, 0x20 );
