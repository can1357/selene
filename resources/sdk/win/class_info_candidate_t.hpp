#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_info_candidate_t.start.hpp"
namespace win
{
    // [struct ClassInfoCandidate]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct class_info_candidate_t           
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                  
        _m00 bool is_tentatively_acceptable;  //{ +0x0008    +0x0008    +0x0008    } | .IsTentativelyAcceptable
                                            
        SDK_MAGIC_PROPERTIES( "ClassInfoCandidate.$", 0x10, true, 0xed46e8fa68b49c05 );                          
        SDK_FIXED_SIZE( class_info_candidate_t, 0x10 );                          
    };                                      
};
#include "magic/class_info_candidate_t.end.hpp"
SDK_VERIFY( struct win::class_info_candidate_t, 0x10 );
