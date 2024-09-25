#pragma once
#include <sdkgen/support_library.hpp>
#include "recovery_context_error_type_t.hpp"

#include "magic/recovery_context_t.start.hpp"
namespace whea
{
    // [struct _WHEA_RECOVERY_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct recovery_context_t                                      
    {                                                              
        struct u0_memory_error_t                                   
        {                                                          
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                     
            _m00 uint64_t address;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
            _m01 uint8_t  consumed;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Consumed
            _m02 uint16_t error_code;                                //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .ErrorCode
            _m03 uint8_t  error_ip_valid;                            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ErrorIpValid
            _m04 uint8_t  restart_ip_valid;                          //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .RestartIpValid
                                                                   
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                     
            _m05 uint8_t  clear_poison;                              //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ClearPoison
                                                                   
            SDK_NONVOL_PROPERTIES( "_WHEA_RECOVERY_CONTEXT.MemoryError.$", 0x10, true, 0x471e9373bbadb598 );                              
            SDK_FIXED_SIZE( u0_memory_error_t, 0x10 );                              
        };                                                         
                                                                   
        struct u5_pmem_error_t                                     
        {                                                          
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                     
            _m09 uint64_t pmem_err_info;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PmemErrInfo
                                                                   
            SDK_NONVOL_PROPERTIES( "_WHEA_RECOVERY_CONTEXT.PmemError.$", 0x8, true, 0x48bf9c33e0547f0d );                           
            SDK_FIXED_SIZE( u5_pmem_error_t, 0x8 );                           
        };                                                         
                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m06 u0_memory_error_t                        memory_error;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MemoryError
        _m07 uint64_t                                 partition_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PartitionId
        _m08 uint32_t                                 vp_index;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .VpIndex
                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m10 u5_pmem_error_t                          pmem_error;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PmemError
        _m11 enum whea::recovery_context_error_type_t error_type;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ErrorType
                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_RECOVERY_CONTEXT.$", 0x20, true, 0xf04b2c987420f0f7 );             
        SDK_FIXED_SIZE( recovery_context_t, 0x20 );                
    };                                                             
};
#include "magic/recovery_context_t.end.hpp"
SDK_VERIFY( struct whea::recovery_context_t::u0_memory_error_t, 0x10 );
SDK_VERIFY( struct whea::recovery_context_t::u5_pmem_error_t, 0x8 );
SDK_VERIFY( struct whea::recovery_context_t, 0x20 );
