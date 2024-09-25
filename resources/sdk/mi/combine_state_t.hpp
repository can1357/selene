#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"
#include "page_combining_support_t.hpp"

#include "magic/combine_state_t.start.hpp"
namespace mi
{
    // [struct _MI_COMBINE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct combine_state_t                                                      
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                      
        _m00 volatile int32_t                    active_spin_lock;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveSpinLock
        _m01 uint32_t                            combining_thread_count;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CombiningThreadCount
        _m02 struct rtl::avl_tree_t              active_thread_tree;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActiveThreadTree
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                      
        _m03 uint64_t                            common_page_combine_domain;      //{ +0x0010    +0x0010    +0x0010    } | .CommonPageCombineDomain
        _m04 uint32_t                            common_combine_domain_assigned;  //{ +0x0018    +0x0018    +0x0018    } | .CommonCombineDomainAssigned
                                                                                
        // Windows 11                                                           
        //                                                                      
        _m05 volatile int32_t                    combine_sequence;                //{ +0x001c    } | .CombineSequence
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m06 uint64_t                            zero_page_hash_value;            //{ +0x0010    } | .ZeroPageHashValue
        _m07 struct mi::page_combining_support_t cross_partition;                 //{ +0x0018    } | .CrossPartition
                                                                                
        SDK_MAGIC_PROPERTIES( "_MI_COMBINE_STATE.$", 0x20, true, 0xc8b4db76fe441242 );                               
        SDK_DYNAMIC_SIZE( combine_state_t );                                    
    };                                                                          
};
#include "magic/combine_state_t.end.hpp"
