#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/config_picture_decode_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ConfigPictureDecode]
    // => WDK 10 (NV)
    //
    struct config_picture_decode_t                                      
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                dw_function;                         //{ +0x0000    } | .dwFunction
        _m01 sdk::array<uint32_t, 3> dw_reserved_bits;                    //{ +0x0004    } | .dwReservedBits
        _m02 struct nt::guid_t       guid_config_bitstream_encryption;    //{ +0x0010    } | .guidConfigBitstreamEncryption
        _m03 struct nt::guid_t       guid_config_m_bcontrol_encryption;   //{ +0x0020    } | .guidConfigMBcontrolEncryption
        _m04 struct nt::guid_t       guid_config_resid_diff_encryption;   //{ +0x0030    } | .guidConfigResidDiffEncryption
        _m05 uint8_t                 b_config_bitstream_raw;              //{ +0x0040    } | .bConfigBitstreamRaw
        _m06 uint8_t                 b_config_m_bcontrol_raster_order;    //{ +0x0041    } | .bConfigMBcontrolRasterOrder
        _m07 uint8_t                 b_config_resid_diff_host;            //{ +0x0042    } | .bConfigResidDiffHost
        _m08 uint8_t                 b_config_spatial_resid8;             //{ +0x0043    } | .bConfigSpatialResid8
        _m09 uint8_t                 b_config_resid8_subtraction;         //{ +0x0044    } | .bConfigResid8Subtraction
        _m10 uint8_t                 b_config_spatial_host8or9_clipping;  //{ +0x0045    } | .bConfigSpatialHost8or9Clipping
        _m11 uint8_t                 b_config_spatial_resid_interleaved;  //{ +0x0046    } | .bConfigSpatialResidInterleaved
        _m12 uint8_t                 b_config_intra_resid_unsigned;       //{ +0x0047    } | .bConfigIntraResidUnsigned
        _m13 uint8_t                 b_config_resid_diff_accelerator;     //{ +0x0048    } | .bConfigResidDiffAccelerator
        _m14 uint8_t                 b_config_host_inverse_scan;          //{ +0x0049    } | .bConfigHostInverseScan
        _m15 uint8_t                 b_config_specific_idct;              //{ +0x004a    } | .bConfigSpecificIDCT
        _m16 uint8_t                 b_config4_grouped_coefs;             //{ +0x004b    } | .bConfig4GroupedCoefs
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_ConfigPictureDecode.$", 0x0, false, 0x147004659acf7121 );                                   
        SDK_FIXED_SIZE( config_picture_decode_t, 0x4c );                                   
    };                                                                  
};
#include "magic/config_picture_decode_t.end.hpp"
SDK_VERIFY( struct dxva::config_picture_decode_t, 0x4c );
