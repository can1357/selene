#pragma once
#include <sdkgen/support_library.hpp>
#include "size_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/enhmetaheader_t.start.hpp"
namespace tag
{
    // [struct tagENHMETAHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enhmetaheader_t                        
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                        
        _m00 uint32_t            i_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .iType
        _m01 uint32_t            n_size;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .nSize
        _m02 struct win::rectl_t rcl_bounds;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m03 struct win::rectl_t rcl_frame;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .rclFrame
        _m04 uint32_t            d_signature;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .dSignature
        _m05 uint32_t            n_version;         //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .nVersion
        _m06 uint32_t            n_bytes;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .nBytes
        _m07 uint32_t            n_records;         //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .nRecords
        _m08 uint16_t            n_handles;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .nHandles
        _m09 uint16_t            s_reserved;        //{ +0x003a    +0x003a    +0x003a    +0x003a    +0x003a    } | .sReserved
        _m10 uint32_t            n_description;     //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .nDescription
        _m11 uint32_t            off_description;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .offDescription
        _m12 uint32_t            n_pal_entries;     //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .nPalEntries
        _m13 struct tag::size_t  szl_device;        //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .szlDevice
        _m14 struct tag::size_t  szl_millimeters;   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .szlMillimeters
        _m15 uint32_t            cb_pixel_format;   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .cbPixelFormat
        _m16 uint32_t            off_pixel_format;  //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .offPixelFormat
        _m17 uint32_t            b_open_gl;         //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .bOpenGL
        _m18 struct tag::size_t  szl_micrometers;   //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .szlMicrometers
                                                  
        SDK_NONVOL_PROPERTIES( "tagENHMETAHEADER.$", 0x6c, true, 0x3e3974ed5e11a381 );                 
        SDK_FIXED_SIZE( enhmetaheader_t, 0x6c );                 
    };                                            
};
#include "magic/enhmetaheader_t.end.hpp"
SDK_VERIFY( struct tag::enhmetaheader_t, 0x6c );
