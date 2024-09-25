#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_aperture_page_size_t.start.hpp"
namespace pci
{
    // [struct _PCI_AGP_APERTURE_PAGE_SIZE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_aperture_page_size_t    
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint11_t page_size_mask;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PageSizeMask
        _m01 uint1_t  rsvd1;             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Rsvd1
        _m02 uint4_t  page_size_select;  //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PageSizeSelect
                                       
        SDK_NONVOL_PROPERTIES( "_PCI_AGP_APERTURE_PAGE_SIZE.$", 0x2, true, 0x7b5ce7899a9eb20b );                 
        SDK_FIXED_SIZE( agp_aperture_page_size_t, 0x2 );                 
    };                                 
};
#include "magic/agp_aperture_page_size_t.end.hpp"
SDK_VERIFY( struct pci::agp_aperture_page_size_t, 0x2 );
