#pragma once
#include <sdkgen/support_library.hpp>
#include "bdcb_classification_t.hpp"

#include "magic/bdcb_image_information_t.start.hpp"
namespace nt
{
    // [struct _BDCB_IMAGE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bdcb_image_information_t                                       
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum nt::bdcb_classification_t classification;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Classification
        _m01 uint32_t                       image_flags;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageFlags
        _m02 nt::unicode_view               image_name;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageName
        _m03 nt::unicode_view               registry_path;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RegistryPath
        _m04 nt::unicode_view               certificate_publisher;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CertificatePublisher
        _m05 nt::unicode_view               certificate_issuer;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CertificateIssuer
        _m06 void*                          image_hash;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ImageHash
        _m07 void*                          certificate_thumbprint;         //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CertificateThumbprint
        _m08 uint32_t                       image_hash_algorithm;           //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ImageHashAlgorithm
        _m09 uint32_t                       thumbprint_hash_algorithm;      //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .ThumbprintHashAlgorithm
        _m10 uint32_t                       image_hash_length;              //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .ImageHashLength
        _m11 uint32_t                       certificate_thumbprint_length;  //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .CertificateThumbprintLength
                                                                          
        SDK_NONVOL_PROPERTIES( "_BDCB_IMAGE_INFORMATION.$", 0x68, true, 0x6ef17c3ca6ba1709 );                              
        SDK_FIXED_SIZE( bdcb_image_information_t, 0x68 );                              
    };                                                                    
};
#include "magic/bdcb_image_information_t.end.hpp"
SDK_VERIFY( struct nt::bdcb_image_information_t, 0x68 );
