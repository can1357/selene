#pragma once
#include <sdkgen/support_library.hpp>
#include "sub_q_track_isrc_t.hpp"
#include "sub_q_current_position_t.hpp"
#include "sub_q_media_catalog_number_t.hpp"

#include "magic/sub_q_channel_data_t.start.hpp"
namespace nt
{
    // [union _SUB_Q_CHANNEL_DATA]
    // => WDK 10 (NV)
    //
    union sub_q_channel_data_t                                        
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct nt::sub_q_current_position_t     current_position;  //{ +0x0000    } | .CurrentPosition
        _m01 struct nt::sub_q_media_catalog_number_t media_catalog;     //{ +0x0000    } | .MediaCatalog
        _m02 struct nt::sub_q_track_isrc_t           track_isrc;        //{ +0x0000    } | .TrackIsrc
                                                                      
        SDK_NONVOL_PROPERTIES( "_SUB_Q_CHANNEL_DATA.$", 0x0, false, 0x32a3fcda1b8d8549 );                 
        SDK_FIXED_SIZE( sub_q_channel_data_t, 0x18 );                 
    };                                                                
};
#include "magic/sub_q_channel_data_t.end.hpp"
SDK_VERIFY( union nt::sub_q_channel_data_t, 0x18 );
