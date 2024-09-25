#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hardware_state_header_t.start.hpp"
namespace video
{
    // [struct _VIDEO_HARDWARE_STATE_HEADER]
    // => WDK 10 (NV)
    //
    struct hardware_state_header_t                                    
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m000 uint32_t                length;                           //{ +0x0000    } | .Length
        _m001 sdk::array<uint8_t, 48> port_value;                       //{ +0x0004    } | .PortValue
        _m002 uint32_t                attrib_index_data_state;          //{ +0x0034    } | .AttribIndexDataState
        _m003 uint32_t                basic_sequencer_offset;           //{ +0x0038    } | .BasicSequencerOffset
        _m004 uint32_t                basic_crt_cont_offset;            //{ +0x003c    } | .BasicCrtContOffset
        _m005 uint32_t                basic_graph_cont_offset;          //{ +0x0040    } | .BasicGraphContOffset
        _m006 uint32_t                basic_attrib_cont_offset;         //{ +0x0044    } | .BasicAttribContOffset
        _m007 uint32_t                basic_dac_offset;                 //{ +0x0048    } | .BasicDacOffset
        _m008 uint32_t                basic_latches_offset;             //{ +0x004c    } | .BasicLatchesOffset
        _m009 uint32_t                extended_sequencer_offset;        //{ +0x0050    } | .ExtendedSequencerOffset
        _m010 uint32_t                extended_crt_cont_offset;         //{ +0x0054    } | .ExtendedCrtContOffset
        _m011 uint32_t                extended_graph_cont_offset;       //{ +0x0058    } | .ExtendedGraphContOffset
        _m012 uint32_t                extended_attrib_cont_offset;      //{ +0x005c    } | .ExtendedAttribContOffset
        _m013 uint32_t                extended_dac_offset;              //{ +0x0060    } | .ExtendedDacOffset
        _m014 uint32_t                extended_validator_state_offset;  //{ +0x0064    } | .ExtendedValidatorStateOffset
        _m015 uint32_t                extended_misc_data_offset;        //{ +0x0068    } | .ExtendedMiscDataOffset
        _m016 uint32_t                plane_length;                     //{ +0x006c    } | .PlaneLength
        _m017 uint32_t                plane1_offset;                    //{ +0x0070    } | .Plane1Offset
        _m018 uint32_t                plane2_offset;                    //{ +0x0074    } | .Plane2Offset
        _m019 uint32_t                plane3_offset;                    //{ +0x0078    } | .Plane3Offset
        _m020 uint32_t                plane4_offset;                    //{ +0x007c    } | .Plane4Offset
        _m021 uint32_t                vga_state_flags;                  //{ +0x0080    } | .VGAStateFlags
        _m022 uint32_t                dib_offset;                       //{ +0x0084    } | .DIBOffset
        _m023 uint32_t                dib_bits_per_pixel;               //{ +0x0088    } | .DIBBitsPerPixel
        _m024 uint32_t                dibx_resolution;                  //{ +0x008c    } | .DIBXResolution
        _m025 uint32_t                diby_resolution;                  //{ +0x0090    } | .DIBYResolution
        _m026 uint32_t                dib_xlat_offset;                  //{ +0x0094    } | .DIBXlatOffset
        _m027 uint32_t                dib_xlat_length;                  //{ +0x0098    } | .DIBXlatLength
        _m028 uint32_t                vesa_info_offset;                 //{ +0x009c    } | .VesaInfoOffset
        _m029 void*                   frame_buffer_data;                //{ +0x00a0    } | .FrameBufferData
                                                                      
        SDK_NONVOL_PROPERTIES( "_VIDEO_HARDWARE_STATE_HEADER.$", 0x0, false, 0xf72108f872dc3bf9 );                                
        SDK_FIXED_SIZE( hardware_state_header_t, 0xa8 );                                
    };                                                                
};
#include "magic/hardware_state_header_t.end.hpp"
SDK_VERIFY( struct video::hardware_state_header_t, 0xa8 );
