#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loop_detector_t.start.hpp"
namespace win
{
    class c_list_element_t;

    // [class LoopDetector]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class loop_detector_t                        
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 class win::c_list_element_t* m_head;  //{ +0x0000    +0x0000    +0x0000    } | .m_head
        _m01 class win::c_list_element_t* m_slow;  //{ +0x0008    +0x0008    +0x0008    } | .m_slow
        _m02 class win::c_list_element_t* m_fast;  //{ +0x0010    +0x0010    +0x0010    } | .m_fast
                                                 
        SDK_MAGIC_PROPERTIES( "LoopDetector.$", 0x18, true, 0xb08ea330f4ee1400 );       
        SDK_FIXED_SIZE( loop_detector_t, 0x18 );       
    };                                           
};
#include "magic/loop_detector_t.end.hpp"
SDK_VERIFY( class win::loop_detector_t, 0x18 );
