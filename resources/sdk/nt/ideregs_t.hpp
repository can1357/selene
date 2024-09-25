#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ideregs_t.start.hpp"
namespace nt
{
    // [struct _IDEREGS]
    // => WDK 10 (NV)
    //
    struct ideregs_t                     
    {                                    
        // WDK 10                        
        //                               
        _m00 uint8_t b_features_reg;       //{ +0x0000    } | .bFeaturesReg
        _m01 uint8_t b_sector_count_reg;   //{ +0x0001    } | .bSectorCountReg
        _m02 uint8_t b_sector_number_reg;  //{ +0x0002    } | .bSectorNumberReg
        _m03 uint8_t b_cyl_low_reg;        //{ +0x0003    } | .bCylLowReg
        _m04 uint8_t b_cyl_high_reg;       //{ +0x0004    } | .bCylHighReg
        _m05 uint8_t b_drive_head_reg;     //{ +0x0005    } | .bDriveHeadReg
        _m06 uint8_t b_command_reg;        //{ +0x0006    } | .bCommandReg
        _m07 uint8_t b_reserved;           //{ +0x0007    } | .bReserved
                                         
        SDK_NONVOL_PROPERTIES( "_IDEREGS.$", 0x0, false, 0x1f8b684143fc8d7e );                    
        SDK_FIXED_SIZE( ideregs_t, 0x8 );                    
    };                                   
};
#include "magic/ideregs_t.end.hpp"
SDK_VERIFY( struct nt::ideregs_t, 0x8 );
