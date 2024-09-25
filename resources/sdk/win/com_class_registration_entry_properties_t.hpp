#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_property_store_t.hpp"

#include "magic/com_class_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComClassRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_class_registration_entry_properties_t                       
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m00 struct win::entry_property_store_t verbs;                       //{ +0x00c8    +0x00c0    +0x00c0    +0x00c0    } | .Verbs
        _m01 struct win::entry_property_store_t misc_status_aspects;         //{ +0x00e0    +0x00d8    +0x00d8    +0x00d8    } | .MiscStatusAspects
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                           
        //                                                                 
        _m02 uint32_t                           server_id;                   //{ +0x0000    +0x0000    +0x0000    } | .ServerId
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m03 struct win::entry_property_store_t implemented_categories;      //{ +0x0050    +0x0050    +0x0050    } | .ImplementedCategories
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m04 struct win::entry_property_store_t custom_attributes;           //{ +0x01a0    } | .CustomAttributes
                                                                           
        // Windows 10 v1607                                                
        //                                                                 
        _m05 bool                               enable_ole_default_handler;  //{ +0x0048    } | .EnableOleDefaultHandler
                                                                           
        SDK_MAGIC_PROPERTIES( "ComClassRegistrationEntryProperties.$", 0x110, true, 0x6f567f3dca25516f );                           
        SDK_DYNAMIC_SIZE( com_class_registration_entry_properties_t );                           
    };                                                                     
};
#include "magic/com_class_registration_entry_properties_t.end.hpp"
