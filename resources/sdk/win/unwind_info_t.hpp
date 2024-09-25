#pragma once
#include <sdkgen/support_library.hpp>
#include "unwind_code_t.hpp"

#include "magic/unwind_info_t.start.hpp"
namespace win
{
    // [struct _UNWIND_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unwind_info_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 uint3_t                                 version;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Version
        _m01 uint5_t                                 flags;           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Flags
        _m02 uint8_t                                 size_of_prolog;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SizeOfProlog
        _m03 uint8_t                                 count_of_codes;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CountOfCodes
        _m04 uint4_t                                 frame_register;  //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .FrameRegister
        _m05 uint4_t                                 frame_offset;    //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .FrameOffset
        _m06 sdk::array<union win::unwind_code_t, 1> unwind_code;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UnwindCode
                                                                    
        SDK_MAGIC_PROPERTIES( "_UNWIND_INFO.$", 0x6, true, 0xc1a19f34685d402e );               
        SDK_FIXED_SIZE( unwind_info_t, 0x6 );                       
    };                                                              
};
#include "magic/unwind_info_t.end.hpp"
SDK_VERIFY( struct win::unwind_info_t, 0x6 );
