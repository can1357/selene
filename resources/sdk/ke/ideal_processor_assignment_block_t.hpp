#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kaffinity_ex_t.hpp"
#include "process_concurrency_count_t.hpp"
#include "ideal_processor_set_breakpoints_t.hpp"

#include "magic/ideal_processor_assignment_block_t.start.hpp"
namespace ke
{
    // [struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK]
    // => Windows 11
    //
    struct ideal_processor_assignment_block_t                                        
    {                                                                                
        union u0_assignment_flags_t                                                  
        {                                                                            
            // Windows 11                                                            
            //                                                                       
            _m02 uint1_t  concurrency_count_fixed;                                     //{ +0x0000@0  } | .ConcurrencyCountFixed
            _m03 uint32_t all_flags;                                                   //{ +0x0000    } | .AllFlags
                                                                                     
            SDK_MAGIC_PROPERTIES( "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.AssignmentFlags.$", 0x0, false, 0xa5b1ceb9111c2744 );                                                   
            SDK_FIXED_SIZE( u0_assignment_flags_t, 0x4 );                                                   
        };                                                                           
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m00 union ke::process_concurrency_count_t        expected_concurrency_count;  //{ +0x0000    } | .ExpectedConcurrencyCount
        _m01 struct ke::ideal_processor_set_breakpoints_t breakpoints;                 //{ +0x0004    } | .Breakpoints
        _m04 u0_assignment_flags_t                        assignment_flags;            //{ +0x000c    } | .AssignmentFlags
        _m05 struct nt::kaffinity_ex_t                    ideal_processor_sets;        //{ +0x0010    } | .IdealProcessorSets
                                                                                     
        SDK_MAGIC_PROPERTIES( "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.$", 0x0, false, 0x68e14027a81f69f2 );                           
        SDK_FIXED_SIZE( ideal_processor_assignment_block_t, 0x118 );                           
    };                                                                               
};
#include "magic/ideal_processor_assignment_block_t.end.hpp"
SDK_VERIFY( union ke::ideal_processor_assignment_block_t::u0_assignment_flags_t, 0x4 );
SDK_VERIFY( struct ke::ideal_processor_assignment_block_t, 0x118 );
