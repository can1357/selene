#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kshared_ready_queue_hetero_statistics_t.start.hpp"
namespace nt
{
    // [struct _KSHARED_READY_QUEUE_HETERO_STATISTICS]
    // => Windows 11
    //
    struct kshared_ready_queue_hetero_statistics_t                  
    {                                                               
        using expected_runtime_by_class_t = sdk::array<sdk::array<sdk::array<uint64_t, 8>, 2>, 7>;                          
                                                                    
        // Windows 11                                               
        //                                                          
        _m00 expected_runtime_by_class_t  expected_runtime_by_class;  //{ +0x0000    } | .ExpectedRuntimeByClass
                                                                    
        SDK_MAGIC_PROPERTIES( "_KSHARED_READY_QUEUE_HETERO_STATISTICS.$", 0x0, false, 0x19ea70832d19049a );                          
        SDK_FIXED_SIZE( kshared_ready_queue_hetero_statistics_t, 0x380 );                          
    };                                                              
};
#include "magic/kshared_ready_queue_hetero_statistics_t.end.hpp"
SDK_VERIFY( struct nt::kshared_ready_queue_hetero_statistics_t, 0x380 );
