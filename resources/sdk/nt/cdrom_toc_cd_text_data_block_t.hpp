#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_toc_cd_text_data_block_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC_CD_TEXT_DATA_BLOCK]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_cd_text_data_block_t               
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint8_t                 pack_type;           //{ +0x0000    } | .PackType
        _m01 uint7_t                 track_number;        //{ +0x0001@0  } | .TrackNumber
        _m02 uint1_t                 extension_flag;      //{ +0x0001@7  } | .ExtensionFlag
        _m03 uint8_t                 sequence_number;     //{ +0x0002    } | .SequenceNumber
        _m04 uint4_t                 character_position;  //{ +0x0003@0  } | .CharacterPosition
        _m05 uint3_t                 block_number;        //{ +0x0003@4  } | .BlockNumber
        _m06 uint1_t                 unicode;             //{ +0x0003@7  } | .Unicode
        _m07 sdk::array<uint8_t, 12> text;                //{ +0x0004    } | .Text
        _m08 sdk::array<wchar_t, 6>  w_text;              //{ +0x0004    } | .WText
        _m09 sdk::array<uint8_t, 2>  crc;                 //{ +0x0010    } | .CRC
                                                        
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC_CD_TEXT_DATA_BLOCK.$", 0x0, false, 0xc2d36e980e17ef35 );                   
        SDK_FIXED_SIZE( cdrom_toc_cd_text_data_block_t, 0x12 );                   
    };                                                  
};
#include "magic/cdrom_toc_cd_text_data_block_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_cd_text_data_block_t, 0x12 );
