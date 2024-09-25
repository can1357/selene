#pragma once
#include <sdkgen/support_library.hpp>
#include "activation_context_stack_frame_t.hpp"

#include "magic/caller_allocated_activation_context_stack_frame_extended_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caller_allocated_activation_context_stack_frame_extended_t
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                       
        _m00 uint64_t                                     size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                                     format;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Format
        _m02 struct rtl::activation_context_stack_frame_t frame;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Frame
        _m03 void*                                        extra1;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Extra1
        _m04 void*                                        extra2;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Extra2
        _m05 void*                                        extra3;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Extra3
        _m06 void*                                        extra4;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Extra4
                                                                     
        SDK_MAGIC_PROPERTIES( "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.$", 0x48, true, 0xd38235631c0ec804 );       
        SDK_FIXED_SIZE( caller_allocated_activation_context_stack_frame_extended_t, 0x48 );       
    };                                                               
};
#include "magic/caller_allocated_activation_context_stack_frame_extended_t.end.hpp"
SDK_VERIFY( struct rtl::caller_allocated_activation_context_stack_frame_extended_t, 0x48 );
