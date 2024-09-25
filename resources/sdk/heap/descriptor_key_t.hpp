#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/descriptor_key_t.start.hpp"
namespace heap
{
    // [struct _HEAP_DESCRIPTOR_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct descriptor_key_t                         
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                          
        _m00 varuint_t key;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                          
        _m01 uint16_t  encoded_committed_page_count;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .EncodedCommittedPageCount
        _m02 uint8_t   large_page_cost;               //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .LargePageCost
        _m03 uint8_t   unit_count;                    //{ +0x0000@24 +0x0000@24 +0x0000@24 } | .UnitCount
                                                    
        // Windows 10 v1607                             
        //                                          
        _m04 uint8_t   encoded_commit_count;          //{ +0x0000    } | .EncodedCommitCount
        _m05 uint8_t   page_count;                    //{ +0x0001    } | .PageCount
                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_DESCRIPTOR_KEY.$", 0x4, true, 0x76bcce271c36f9b1 );                             
        SDK_DYNAMIC_SIZE( descriptor_key_t );                             
    };                                              
};
#include "magic/descriptor_key_t.end.hpp"
