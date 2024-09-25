#pragma once
#include <sdkgen/support_library.hpp>
#include "inbv_mode_information_t.hpp"

#include "magic/inbv_display_context_t.start.hpp"
namespace nt
{
    struct inbv_offset_t;
    struct inbv_graphics_rectangle_t;

    // [struct _INBV_DISPLAY_CONTEXT]
    // => Windows 11
    //
    struct inbv_display_context_t                                   
    {                                                               
        union u0_video_memory_t                                     
        {                                                           
            using blt_routine_t = sdk::function<int32_t(struct nt::inbv_graphics_rectangle_t*, struct nt::inbv_offset_t*, uint8_t)>*;                                 
                                                                    
            // Windows 11                                           
            //                                                      
            _m05 void*          frame_buffer;                         //{ +0x0000    } | .FrameBuffer
            _m06 blt_routine_t  blt_routine;                          //{ +0x0000    } | .BltRoutine
                                                                    
            SDK_MAGIC_PROPERTIES( "_INBV_DISPLAY_CONTEXT.VideoMemory.$", 0x0, false, 0x369df7d3b551346d );                                 
            SDK_FIXED_SIZE( u0_video_memory_t, 0x8 );                                 
        };                                                          
                                                                    
        // Windows 11                                               
        //                                                          
        _m00 uint8_t                            frame_buffer_valid;   //{ +0x0000    } | .FrameBufferValid
        _m01 uint8_t                            frame_buffer_mapped;  //{ +0x0001    } | .FrameBufferMapped
        _m02 uint8_t                            display_rotation;     //{ +0x0002    } | .DisplayRotation
        _m03 struct nt::inbv_mode_information_t mode_information;     //{ +0x0004    } | .ModeInformation
        _m04 void*                              shadow_buffer;        //{ +0x0018    } | .ShadowBuffer
        _m07 u0_video_memory_t                  video_memory;         //{ +0x0020    } | .VideoMemory
                                                                    
        SDK_MAGIC_PROPERTIES( "_INBV_DISPLAY_CONTEXT.$", 0x0, false, 0x2c2ca47d329d8 );                    
        SDK_FIXED_SIZE( inbv_display_context_t, 0x28 );                    
    };                                                              
};
#include "magic/inbv_display_context_t.end.hpp"
SDK_VERIFY( union nt::inbv_display_context_t::u0_video_memory_t, 0x8 );
SDK_VERIFY( struct nt::inbv_display_context_t, 0x28 );
