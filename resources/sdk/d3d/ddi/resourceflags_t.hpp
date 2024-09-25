#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resourceflags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_RESOURCEFLAGS]
    // => WDK 10 (NV)
    //
    struct resourceflags_t                         
    {                                              
        // WDK 10                                  
        //                                         
        _m000 uint1_t  render_target;                //{ +0x0000@0  } | .RenderTarget
        _m001 uint1_t  z_buffer;                     //{ +0x0000@1  } | .ZBuffer
        _m002 uint1_t  dynamic;                      //{ +0x0000@2  } | .Dynamic
        _m003 uint1_t  hint_static;                  //{ +0x0000@3  } | .HintStatic
        _m004 uint1_t  autogen_mipmap;               //{ +0x0000@4  } | .AutogenMipmap
        _m005 uint1_t  d_map;                        //{ +0x0000@5  } | .DMap
        _m006 uint1_t  write_only;                   //{ +0x0000@6  } | .WriteOnly
        _m007 uint1_t  not_lockable;                 //{ +0x0000@7  } | .NotLockable
        _m008 uint1_t  points;                       //{ +0x0000@8  } | .Points
        _m009 uint1_t  rt_patches;                   //{ +0x0000@9  } | .RtPatches
        _m010 uint1_t  n_patches;                    //{ +0x0000@10 } | .NPatches
        _m011 uint1_t  shared_resource;              //{ +0x0000@11 } | .SharedResource
        _m012 uint1_t  discard_render_target;        //{ +0x0000@12 } | .DiscardRenderTarget
        _m013 uint1_t  video;                        //{ +0x0000@13 } | .Video
        _m014 uint1_t  capture_buffer;               //{ +0x0000@14 } | .CaptureBuffer
        _m015 uint1_t  primary;                      //{ +0x0000@15 } | .Primary
        _m016 uint1_t  texture;                      //{ +0x0000@16 } | .Texture
        _m017 uint1_t  cube_map;                     //{ +0x0000@17 } | .CubeMap
        _m018 uint1_t  volume;                       //{ +0x0000@18 } | .Volume
        _m019 uint1_t  vertex_buffer;                //{ +0x0000@19 } | .VertexBuffer
        _m020 uint1_t  index_buffer;                 //{ +0x0000@20 } | .IndexBuffer
        _m021 uint1_t  decode_render_target;         //{ +0x0000@21 } | .DecodeRenderTarget
        _m022 uint1_t  decode_compressed_buffer;     //{ +0x0000@22 } | .DecodeCompressedBuffer
        _m023 uint1_t  video_process_render_target;  //{ +0x0000@23 } | .VideoProcessRenderTarget
        _m024 uint1_t  cpu_optimized;                //{ +0x0000@24 } | .CpuOptimized
        _m025 uint1_t  might_draw_from_locked;       //{ +0x0000@25 } | .MightDrawFromLocked
        _m026 uint1_t  overlay;                      //{ +0x0000@26 } | .Overlay
        _m027 uint1_t  match_gdi_primary;            //{ +0x0000@27 } | .MatchGdiPrimary
        _m028 uint1_t  interlaced_refresh;           //{ +0x0000@28 } | .InterlacedRefresh
        _m029 uint1_t  text_api;                     //{ +0x0000@29 } | .TextApi
        _m030 uint1_t  restricted_content;           //{ +0x0000@30 } | .RestrictedContent
        _m031 uint1_t  restrict_shared_access;       //{ +0x0000@31 } | .RestrictSharedAccess
        _m032 uint32_t value;                        //{ +0x0000    } | .Value
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DDDI_RESOURCEFLAGS.$", 0x0, false, 0x4c5a35a743c4afe4 );                            
        SDK_FIXED_SIZE( resourceflags_t, 0x4 );                            
    };                                             
};
#include "magic/resourceflags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::resourceflags_t, 0x4 );
