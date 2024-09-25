#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_format_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_FORMAT_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_format_page_t                                         
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint6_t                page_code;                          //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                page_savable;                       //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t                page_length;                        //{ +0x0001    } | .PageLength
        _m03 sdk::array<uint8_t, 2> tracks_per_zone;                    //{ +0x0002    } | .TracksPerZone
        _m04 sdk::array<uint8_t, 2> alternate_sectors_per_zone;         //{ +0x0004    } | .AlternateSectorsPerZone
        _m05 sdk::array<uint8_t, 2> alternate_tracks_per_zone;          //{ +0x0006    } | .AlternateTracksPerZone
        _m06 sdk::array<uint8_t, 2> alternate_tracks_per_logical_unit;  //{ +0x0008    } | .AlternateTracksPerLogicalUnit
        _m07 sdk::array<uint8_t, 2> sectors_per_track;                  //{ +0x000a    } | .SectorsPerTrack
        _m08 sdk::array<uint8_t, 2> bytes_per_physical_sector;          //{ +0x000c    } | .BytesPerPhysicalSector
        _m09 sdk::array<uint8_t, 2> interleave;                         //{ +0x000e    } | .Interleave
        _m10 sdk::array<uint8_t, 2> track_skew_factor;                  //{ +0x0010    } | .TrackSkewFactor
        _m11 sdk::array<uint8_t, 2> cylinder_skew_factor;               //{ +0x0012    } | .CylinderSkewFactor
        _m12 uint1_t                surface_first;                      //{ +0x0014@4  } | .SurfaceFirst
        _m13 uint1_t                removable_media;                    //{ +0x0014@5  } | .RemovableMedia
        _m14 uint1_t                hard_sector_formating;              //{ +0x0014@6  } | .HardSectorFormating
        _m15 uint1_t                soft_sector_formating;              //{ +0x0014@7  } | .SoftSectorFormating
                                                                      
        SDK_NONVOL_PROPERTIES( "_MODE_FORMAT_PAGE.$", 0x0, false, 0xa3bb129dfbf376ca );                                  
        SDK_FIXED_SIZE( mode_format_page_t, 0x18 );                                  
    };                                                                
};
#include "magic/mode_format_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_format_page_t, 0x18 );
