#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/heap_memory_limit_data_t.hpp"

namespace heap { struct failure_information_t; }

#include "magic/hp_heap_globals_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HP_HEAP_GLOBALS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_heap_globals_t                                        
    {                                                               
        struct u0_flags_bits_t                                      
        {                                                           
            // Windows 11                                           
            //                                                      
            _m05 uint1_t erms_supported;                              //{ +0x0000@0  } | .ErmsSupported
            _m06 uint1_t erms_checked;                                //{ +0x0000@1  } | .ErmsChecked
                                                                    
            SDK_MAGIC_PROPERTIES( "_RTLP_HP_HEAP_GLOBALS.FlagsBits.$", 0x0, false, 0xc32b7576ecefcbf6 );                                 
            SDK_FIXED_SIZE( u0_flags_bits_t, 0x4 );                                 
        };                                                          
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 uint64_t                             heap_key;           //{ +0x0000    +0x0000    +0x0000    } | .HeapKey
        _m01 uint64_t                             lfh_key;            //{ +0x0008    +0x0008    +0x0008    } | .LfhKey
        _m02 struct heap::failure_information_t*  failure_info;       //{ +0x0010    +0x0010    +0x0010    } | .FailureInfo
        _m03 struct rtl::heap_memory_limit_data_t commit_limit_data;  //{ +0x0018    +0x0018    +0x0018    } | .CommitLimitData
                                                                    
        // Windows 11                                               
        //                                                          
        _m04 uint32_t                             flags;              //{ +0x0038    } | .Flags
        _m07 u0_flags_bits_t                      flags_bits;         //{ +0x0038    } | .FlagsBits
                                                                    
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_HEAP_GLOBALS.$", 0x38, true, 0x585bdba671cb0606 );                  
        SDK_DYNAMIC_SIZE( hp_heap_globals_t );                      
    };                                                              
};
#include "magic/hp_heap_globals_t.end.hpp"
SDK_VERIFY( struct rtlp::hp_heap_globals_t::u0_flags_bits_t, 0x4 );
