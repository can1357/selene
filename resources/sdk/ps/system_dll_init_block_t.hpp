#pragma once
#include <sdkgen/support_library.hpp>
#include "mitigation_options_map_t.hpp"
#include "mitigation_audit_options_map_t.hpp"

#include "magic/system_dll_init_block_t.start.hpp"
namespace ps
{
    // [struct _PS_SYSTEM_DLL_INIT_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_dll_init_block_t                                                  
    {                                                                               
        using wow64_shared_information_t = sdk::variant<sdk::array<uint64_t, 16>, sdk::array<uint32_t, 16>>;                             
                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                          
        _m00 uint32_t                                  size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 varuint_t                                 system_dll_wow_relocation;     //{ +0x0008    +0x0004    +0x0008    +0x0008    +0x0008    } | .SystemDllWowRelocation
        _m02 uint64_t                                  system_dll_native_relocation;  //{ +0x0010    +0x0008    +0x0010    +0x0010    +0x0010    } | .SystemDllNativeRelocation
        _m03 wow64_shared_information_t                wow64_shared_information;      //{ +0x0018    +0x0010    +0x0018    +0x0018    +0x0018    } | .Wow64SharedInformation
        _m04 uint32_t                                  rng_data;                      //{ +0x0098    +0x0050    +0x0098    +0x0098    +0x0098    } | .RngData
        _m05 uint32_t                                  flags;                         //{ +0x009c    +0x0054    +0x009c    +0x009c    +0x009c    } | .Flags
        _m06 uint1_t                                   cfg_override;                  //{ +0x009c@0  +0x0054@0  +0x009c@0  +0x009c@0  +0x009c@0  } | .CfgOverride
        _m07 uint64_t                                  cfg_bit_map;                   //{ +0x00b0    +0x0060    +0x00b8    +0x00b8    +0x00b8    } | .CfgBitMap
        _m08 uint64_t                                  cfg_bit_map_size;              //{ +0x00b8    +0x0068    +0x00c0    +0x00c0    +0x00c0    } | .CfgBitMapSize
        _m09 uint64_t                                  wow64_cfg_bit_map;             //{ +0x00c0    +0x0070    +0x00c8    +0x00c8    +0x00c8    } | .Wow64CfgBitMap
        _m10 uint64_t                                  wow64_cfg_bit_map_size;        //{ +0x00c8    +0x0078    +0x00d0    +0x00d0    +0x00d0    } | .Wow64CfgBitMapSize
                                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                          
        _m11 struct ps::mitigation_options_map_t       mitigation_options_map;        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .MitigationOptionsMap
        _m12 struct ps::mitigation_audit_options_map_t mitigation_audit_options_map;  //{ +0x00d0    +0x00d8    +0x00d8    +0x00d8    } | .MitigationAuditOptionsMap
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m13 uint64_t                                  mitigation_options;            //{ +0x0058    } | .MitigationOptions
                                                                                    
        SDK_MAGIC_PROPERTIES( "_PS_SYSTEM_DLL_INIT_BLOCK.$", 0xf0, true, 0x554376a344cf9da6 );                             
        SDK_DYNAMIC_SIZE( system_dll_init_block_t );                                
    };                                                                              
};
#include "magic/system_dll_init_block_t.end.hpp"
