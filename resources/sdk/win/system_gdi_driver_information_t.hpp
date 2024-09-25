#pragma once
#include <sdkgen/support_library.hpp>

namespace image { struct export_directory_t; }

#include "magic/system_gdi_driver_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_GDI_DRIVER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_gdi_driver_information_t                            
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 nt::unicode_view                  driver_name;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverName
        _m01 void*                             image_address;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageAddress
        _m02 void*                             section_pointer;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionPointer
        _m03 void*                             entry_point;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EntryPoint
        _m04 struct image::export_directory_t* export_section_pointer;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExportSectionPointer
        _m05 uint32_t                          image_length;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ImageLength
                                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_GDI_DRIVER_INFORMATION.$", 0x38, true, 0x4f41906764b571e );                       
        SDK_FIXED_SIZE( system_gdi_driver_information_t, 0x38 );                       
    };                                                                
};
#include "magic/system_gdi_driver_information_t.end.hpp"
SDK_VERIFY( struct win::system_gdi_driver_information_t, 0x38 );
