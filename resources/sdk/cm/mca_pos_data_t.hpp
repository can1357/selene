#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mca_pos_data_t.start.hpp"
namespace cm
{
    // [struct _CM_MCA_POS_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mca_pos_data_t        
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint16_t adapter_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterId
        _m01 uint8_t  pos_data1;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PosData1
        _m02 uint8_t  pos_data2;   //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .PosData2
        _m03 uint8_t  pos_data3;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PosData3
        _m04 uint8_t  pos_data4;   //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .PosData4
                                 
        SDK_NONVOL_PROPERTIES( "_CM_MCA_POS_DATA.$", 0x6, true, 0xef912968f5967dfa );           
        SDK_FIXED_SIZE( mca_pos_data_t, 0x6 );           
    };                           
};
#include "magic/mca_pos_data_t.end.hpp"
SDK_VERIFY( struct cm::mca_pos_data_t, 0x6 );
