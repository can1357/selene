#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_designated_vendor_specific_nhi_attribute_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_NHI_ATTRIBUTE]
    // => Windows 11
    //
    union express_designated_vendor_specific_nhi_attribute_t
    {                                                       
        // Windows 11              
        //                         
        _m00 uint3_t  nhi_instance;                           //{ +0x0000@0  } | .NhiInstance
        _m01 uint29_t resevered;                              //{ +0x0000@3  } | .Resevered
        _m02 uint32_t as_ulong;                               //{ +0x0000    } | .AsULONG
                                                            
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_NHI_ATTRIBUTE.$", 0x0, false, 0x8ab31cee276ddb02 );             
        SDK_FIXED_SIZE( express_designated_vendor_specific_nhi_attribute_t, 0x4 );             
    };                                                      
};
#include "magic/express_designated_vendor_specific_nhi_attribute_t.end.hpp"
SDK_VERIFY( union pci::express_designated_vendor_specific_nhi_attribute_t, 0x4 );
