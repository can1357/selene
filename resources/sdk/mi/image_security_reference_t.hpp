#pragma once
#include <sdkgen/support_library.hpp>
#include "prototype_ptes_node_t.hpp"
#include "../image/security_context_t.hpp"

#include "magic/image_security_reference_t.start.hpp"
namespace mi
{
    // [struct _MI_IMAGE_SECURITY_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_security_reference_t                                      
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m00 void*                            dynamic_relocations;           //{ +0x0000    +0x0020    +0x0020    +0x0020    } | .DynamicRelocations
        _m01 struct image::security_context_t security_context;              //{ +0x0008    +0x0028    +0x0028    +0x0028    } | .SecurityContext
        _m02 uint64_t                         strong_image_reference;        //{ +0x0010    +0x0038    +0x0038    +0x0038    } | .StrongImageReference
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m03 struct mi::prototype_ptes_node_t protos_node;                   //{ +0x0000    +0x0000    +0x0000    } | .ProtosNode
        _m04 void*                            image_file_extents;            //{ +0x0030    +0x0030    +0x0030    } | .ImageFileExtents
        _m05 uint64_t                         image_file_extents_ulong_ptr;  //{ +0x0030    +0x0030    +0x0030    } | .ImageFileExtentsUlongPtr
        _m06 uint1_t                          filesystem_wants_rva;          //{ +0x0030@0  +0x0030@0  +0x0030@0  } | .FilesystemWantsRva
                                                                           
        SDK_MAGIC_PROPERTIES( "_MI_IMAGE_SECURITY_REFERENCE.$", 0x40, true, 0x7a95be523d115691 );                             
        SDK_DYNAMIC_SIZE( image_security_reference_t );                             
    };                                                                     
};
#include "magic/image_security_reference_t.end.hpp"
