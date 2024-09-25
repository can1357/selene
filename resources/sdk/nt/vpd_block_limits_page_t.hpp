#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_block_limits_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_BLOCK_LIMITS_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_block_limits_page_t                                                
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 uint5_t                device_type;                                    //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                device_type_qualifier;                          //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                page_code;                                      //{ +0x0001    } | .PageCode
        _m03 sdk::array<uint8_t, 2> page_length;                                    //{ +0x0002    } | .PageLength
        _m04 uint8_t                maximum_compare_and_write_length;               //{ +0x0005    } | .MaximumCompareAndWriteLength
        _m05 sdk::array<uint8_t, 2> optimal_transfer_length_granularity;            //{ +0x0006    } | .OptimalTransferLengthGranularity
        _m06 sdk::array<uint8_t, 4> maximum_transfer_length;                        //{ +0x0008    } | .MaximumTransferLength
        _m07 sdk::array<uint8_t, 4> optimal_transfer_length;                        //{ +0x000c    } | .OptimalTransferLength
        _m08 sdk::array<uint8_t, 4> max_prefetch_xd_read_xd_write_transfer_length;  //{ +0x0010    } | .MaxPrefetchXDReadXDWriteTransferLength
        _m09 sdk::array<uint8_t, 4> maximum_unmap_lba_count;                        //{ +0x0014    } | .MaximumUnmapLBACount
        _m10 sdk::array<uint8_t, 4> maximum_unmap_block_descriptor_count;           //{ +0x0018    } | .MaximumUnmapBlockDescriptorCount
        _m11 sdk::array<uint8_t, 4> optimal_unmap_granularity;                      //{ +0x001c    } | .OptimalUnmapGranularity
        _m12 uint7_t                unmap_granularity_alignment_byte3;              //{ +0x0020@0  } | .UnmapGranularityAlignmentByte3
        _m13 uint1_t                uga_valid;                                      //{ +0x0020@7  } | .UGAValid
        _m14 uint8_t                unmap_granularity_alignment_byte2;              //{ +0x0021    } | .UnmapGranularityAlignmentByte2
        _m15 uint8_t                unmap_granularity_alignment_byte1;              //{ +0x0022    } | .UnmapGranularityAlignmentByte1
        _m16 uint8_t                unmap_granularity_alignment_byte0;              //{ +0x0023    } | .UnmapGranularityAlignmentByte0
        _m17 sdk::array<uint8_t, 4> unmap_granularity_alignment;                    //{ +0x0020    } | .UnmapGranularityAlignment
        _m18 sdk::array<uint8_t>    descriptors;                                    //{ +0x0004    } | .Descriptors
                                                                                  
        SDK_NONVOL_PROPERTIES( "_VPD_BLOCK_LIMITS_PAGE.$", 0x0, false, 0x14da013c5bb8d97f );                                              
        SDK_FIXED_SIZE( vpd_block_limits_page_t, 0x40 );                                              
    };                                                                            
};
#include "magic/vpd_block_limits_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_block_limits_page_t, 0x40 );
